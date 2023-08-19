cmake_minimum_required(VERSION 3.14)

project(qst-proto LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(qst_proto_path "${CMAKE_CURRENT_SOURCE_DIR}/src")

file(GLOB_RECURSE qst_proto_files "${qst_proto_path}/*.proto")

find_program(_PROTOBUF_PROTOC protoc)
find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)

set(qst_grpc_cpp_srcs "")
set(qst_grpc_cpp_hdrs "")

foreach(_proto_abs_path ${qst_proto_files})
  get_filename_component(_proto_name "${_proto_abs_path}" NAME_WE)

  # set(qst_grpc_cpp_files
  # ${qst_grpc_cpp_files}
  # "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.cc"
  # "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.h"
  # "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.cc"
  # "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.h")
  set(qst_grpc_cpp_srcs
    ${qst_grpc_cpp_srcs}
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.cc")
  set(qst_grpc_cpp_hdrs
    ${qst_grpc_cpp_hdrs}
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.h")
endforeach()

# message(STATUS "!!!${qst_grpc_cpp_files}")
set(qst_cpp_out_dir "${CMAKE_CURRENT_SOURCE_DIR}/cpp")

# message(STATUS "!!!${qst_cpp_out_dir}")
add_custom_command(
  OUTPUT ${qst_grpc_cpp_srcs} ${qst_grpc_cpp_hdrs}
  COMMAND ${CMAKE_COMMAND} -E make_directory "${qst_cpp_out_dir}"
  COMMAND ${_PROTOBUF_PROTOC}
  ARGS --grpc_out "${qst_cpp_out_dir}"
  --cpp_out "${qst_cpp_out_dir}"
  -I "${qst_proto_path}"
  --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
  "${qst_proto_files}"
  VERBATIM
)

add_library(qst-grpc-cpp "")

target_sources(qst-grpc-cpp
  PRIVATE
  ${qst_grpc_cpp_srcs}
  PUBLIC
  ${qst_grpc_cpp_hdrs}
)

find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)

target_link_libraries(qst-grpc-cpp PUBLIC
  gRPC::grpc++_reflection
  grpc++
  protobuf::libprotobuf
)

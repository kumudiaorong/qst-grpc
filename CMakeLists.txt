cmake_minimum_required(VERSION 3.14)

project(qst-core LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(GRPC_LANGUAGE "cpp")

set(qst_proto_path "${CMAKE_CURRENT_SOURCE_DIR}/src")

file(GLOB_RECURSE qst_proto_files "${qst_proto_path}/*.proto")

# message(STATUS "!!!${qst_proto}")
# foreach(_proto ${qst_proto})
# message(STATUS "!!!${_proto}")
# endforeach()
set(_PROTOBUF_PROTOC protoc)

find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)

set(qst_grpc_cpp_files)

foreach(_proto_abs_path ${qst_proto_files})
  # get_filename_component(ABS_FIL "${FIL}" ABSOLUTE)
  # get_filename_component(FIL_WE "${FIL}" NAME_WE)

  # list(APPEND ${SRC_FILES} "${_prefix}${FIL_WE}.grpc.pb.cc")
  # list(APPEND ${HDR_FILES} "${_prefix}${FIL_WE}.grpc.pb.h")
  get_filename_component(_proto_name "${_proto_abs_path}" NAME_WE)

  set(qst_grpc_cpp_files
    ${qst_grpc_cpp_files}
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.pb.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.cc"
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/${_proto_name}.grpc.pb.h")
endforeach()

message(STATUS "!!!${qst_grpc_cpp_files}")

set(qst_cpp_out_dir "${CMAKE_CURRENT_SOURCE_DIR}/cpp")

message(STATUS "!!!${qst_cpp_out_dir}")

add_custom_command(
  OUTPUT ${qst_grpc_cpp_files}
  COMMAND ${CMAKE_COMMAND} -E make_directory "${qst_cpp_out_dir}"
  COMMAND ${_PROTOBUF_PROTOC}
  ARGS --grpc_out "${qst_cpp_out_dir}"
  --cpp_out "${qst_cpp_out_dir}"
  -I "${qst_proto_path}"
  --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
  "${qst_proto_files}"
)

add_library(qst-grpc-cpp ${qst_grpc_cpp_files})

target_link_libraries(qst-grpc-cpp
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# set(_GRPC_GRPCPP grpc++)
# set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
# set(_REFLECTION gRPC::grpc++_reflection)
# find_program(_GRPC_CPP_PLUGIN_EXECUTABLE grpc_cpp_plugin)

# # Generated sources
# set(qst_proto_srcs "${CMAKE_CURRENT_SOURCE_DIR}/cpp/qst.pb.cc")
# set(qst_proto_hdrs "${CMAKE_CURRENT_SOURCE_DIR}/cpp/qst.pb.h")
# set(qst_grpc_srcs "${CMAKE_CURRENT_SOURCE_DIR}/cpp/qst.grpc.pb.cc")
# set(qst_grpc_hdrs "${CMAKE_CURRENT_SOURCE_DIR}/cpp/qst.grpc.pb.h")

# add_custom_command(
# OUTPUT "${qst_proto_srcs}" "${qst_proto_hdrs}" "${qst_grpc_srcs}" "${qst_grpc_hdrs}"
# COMMAND ${_PROTOBUF_PROTOC}
# ARGS --grpc_out "${CMAKE_CURRENT_SOURCE_DIR}/comm"
# --cpp_out "${CMAKE_CURRENT_SOURCE_DIR}/comm"
# -I "${qst_proto_path}"
# --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
# "${qst_proto}"
# DEPENDS "${qst_proto}")

# # add_custom_target(qst-core-protos DEPENDS ${qst_proto_srcs} ${qst_proto_hdrs} ${qst_grpc_srcs} ${qst_grpc_hdrs})

# # find_package(protobuf REQUIRED)

# # SET(PROTOBUF_INCLUDE_DIR, "/usr/local/include")
# find_package(Protobuf CONFIG REQUIRED)
# find_package(gRPC CONFIG REQUIRED)

# add_library(libcpp
# ${qst_grpc_srcs}
# ${qst_grpc_hdrs}
# ${qst_proto_srcs}
# ${qst_proto_hdrs}
# )

# # message(STATUS "!!!${ICU_LINK_LIBRARIES}")
# target_link_libraries(libcpp
# ${_REFLECTION}
# ${_GRPC_GRPCPP}
# ${_PROTOBUF_LIBPROTOBUF}
# )

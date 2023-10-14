# qst-proto
protobuf file for qst

## for cpp
### How to use
1. Install protobuf compiler
2. Build target qst-grpc-cpp-gen or qst-grpc-cpp

## for go
see https://grpc.io/docs/languages/go/quickstart/
eg protoc --go_out $PWD/../.. --go-grpc_out $PWD/../.. -I $PWD/src daemon.proto
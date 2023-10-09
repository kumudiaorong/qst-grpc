// Code generated by protoc-gen-go-grpc. DO NOT EDIT.
// versions:
// - protoc-gen-go-grpc v1.2.0
// - protoc             v4.23.4
// source: qst.proto

package qst_comm

import (
	context "context"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
)

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
// Requires gRPC-Go v1.32.0 or later.
const _ = grpc.SupportPackageIsVersion7

// InteractClient is the client API for Interact service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://pkg.go.dev/google.golang.org/grpc/?tab=doc#ClientConn.NewStream.
type InteractClient interface {
	// sample rpc
	ListApp(ctx context.Context, in *Input, opts ...grpc.CallOption) (*DisplayList, error)
	RunApp(ctx context.Context, in *ExecHint, opts ...grpc.CallOption) (*Empty, error)
}

type interactClient struct {
	cc grpc.ClientConnInterface
}

func NewInteractClient(cc grpc.ClientConnInterface) InteractClient {
	return &interactClient{cc}
}

func (c *interactClient) ListApp(ctx context.Context, in *Input, opts ...grpc.CallOption) (*DisplayList, error) {
	out := new(DisplayList)
	err := c.cc.Invoke(ctx, "/qst_comm.Interact/ListApp", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *interactClient) RunApp(ctx context.Context, in *ExecHint, opts ...grpc.CallOption) (*Empty, error) {
	out := new(Empty)
	err := c.cc.Invoke(ctx, "/qst_comm.Interact/RunApp", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// InteractServer is the server API for Interact service.
// All implementations must embed UnimplementedInteractServer
// for forward compatibility
type InteractServer interface {
	// sample rpc
	ListApp(context.Context, *Input) (*DisplayList, error)
	RunApp(context.Context, *ExecHint) (*Empty, error)
	mustEmbedUnimplementedInteractServer()
}

// UnimplementedInteractServer must be embedded to have forward compatible implementations.
type UnimplementedInteractServer struct {
}

func (UnimplementedInteractServer) ListApp(context.Context, *Input) (*DisplayList, error) {
	return nil, status.Errorf(codes.Unimplemented, "method ListApp not implemented")
}
func (UnimplementedInteractServer) RunApp(context.Context, *ExecHint) (*Empty, error) {
	return nil, status.Errorf(codes.Unimplemented, "method RunApp not implemented")
}
func (UnimplementedInteractServer) mustEmbedUnimplementedInteractServer() {}

// UnsafeInteractServer may be embedded to opt out of forward compatibility for this service.
// Use of this interface is not recommended, as added methods to InteractServer will
// result in compilation errors.
type UnsafeInteractServer interface {
	mustEmbedUnimplementedInteractServer()
}

func RegisterInteractServer(s grpc.ServiceRegistrar, srv InteractServer) {
	s.RegisterService(&Interact_ServiceDesc, srv)
}

func _Interact_ListApp_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Input)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(InteractServer).ListApp(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/qst_comm.Interact/ListApp",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(InteractServer).ListApp(ctx, req.(*Input))
	}
	return interceptor(ctx, in, info, handler)
}

func _Interact_RunApp_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ExecHint)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(InteractServer).RunApp(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/qst_comm.Interact/RunApp",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(InteractServer).RunApp(ctx, req.(*ExecHint))
	}
	return interceptor(ctx, in, info, handler)
}

// Interact_ServiceDesc is the grpc.ServiceDesc for Interact service.
// It's only intended for direct use with grpc.RegisterService,
// and not to be introspected or modified (even as a copy)
var Interact_ServiceDesc = grpc.ServiceDesc{
	ServiceName: "qst_comm.Interact",
	HandlerType: (*InteractServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "ListApp",
			Handler:    _Interact_ListApp_Handler,
		},
		{
			MethodName: "RunApp",
			Handler:    _Interact_RunApp_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "qst.proto",
}
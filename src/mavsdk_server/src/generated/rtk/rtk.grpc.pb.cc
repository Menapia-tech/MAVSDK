// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: rtk/rtk.proto

#include "rtk/rtk.pb.h"
#include "rtk/rtk.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace rtk {

static const char* RtkService_method_names[] = {
  "/mavsdk.rpc.rtk.RtkService/SendRtcmData",
};

std::unique_ptr< RtkService::Stub> RtkService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RtkService::Stub> stub(new RtkService::Stub(channel, options));
  return stub;
}

RtkService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SendRtcmData_(RtkService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RtkService::Stub::SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SendRtcmData_, context, request, response);
}

void RtkService::Stub::async::SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendRtcmData_, context, request, response, std::move(f));
}

void RtkService::Stub::async::SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SendRtcmData_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* RtkService::Stub::PrepareAsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::rtk::SendRtcmDataResponse, ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SendRtcmData_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* RtkService::Stub::AsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSendRtcmDataRaw(context, request, cq);
  result->StartCall();
  return result;
}

RtkService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RtkService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RtkService::Service, ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RtkService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::rtk::SendRtcmDataRequest* req,
             ::mavsdk::rpc::rtk::SendRtcmDataResponse* resp) {
               return service->SendRtcmData(ctx, req, resp);
             }, this)));
}

RtkService::Service::~Service() {
}

::grpc::Status RtkService::Service::SendRtcmData(::grpc::ServerContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace rtk

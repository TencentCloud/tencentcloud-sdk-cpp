/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_IOTVIDEOCLIENT_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_IOTVIDEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotvideo/v20191126/model/ClearDeviceActiveCodeRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ClearDeviceActiveCodeResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateAnonymousAccessTokenRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateAnonymousAccessTokenResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateAppUsrRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateAppUsrResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateBindingRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateBindingResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateDevTokenRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateDevTokenResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateDevicesRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateDevicesResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateGencodeRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateGencodeResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateIotDataTypeRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateIotDataTypeResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateIotModelRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateIotModelResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateProductRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateProductResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateStorageRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateStorageResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateStorageServiceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateStorageServiceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateTraceIdsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateTraceIdsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUploadPathRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUploadPathResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUploadTestRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUploadTestResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUsrTokenRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/CreateUsrTokenResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteAppUsrRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteAppUsrResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteBindingRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteBindingResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteIotDataTypeRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteIotDataTypeResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteMessageQueueRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteMessageQueueResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteOtaVersionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteOtaVersionResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteProductRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteProductResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteTraceIdsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeleteTraceIdsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DeliverStorageServiceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DeliverStorageServiceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeBindDevRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeBindDevResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeBindUsrRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeBindUsrResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDeviceModelRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDeviceModelResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotDataTypeRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotDataTypeResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotModelRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotModelResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotModelsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeIotModelsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeLogsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeLogsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeMessageQueueRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeMessageQueueResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeModelDataRetRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeModelDataRetResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeOsListRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeOsListResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeOtaVersionsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeOtaVersionsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeProductRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeProductResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeProductsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeProductsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribePubVersionsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribePubVersionsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRechargeRecordsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRechargeRecordsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRegistrationStatusRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRegistrationStatusResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRunLogRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeRunLogResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeStorageServiceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeStorageServiceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeStreamRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeStreamResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeTraceIdsRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeTraceIdsResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeTraceStatusRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DescribeTraceStatusResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableDeviceStreamRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableDeviceStreamResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableOtaVersionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/DisableOtaVersionResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDeviceActionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDeviceActionResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDevicePropertyRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyDevicePropertyResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyProductRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyProductResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyVerContentRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/ModifyVerContentResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RefundStorageServiceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RefundStorageServiceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RenewUploadTestRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RenewUploadTestResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RunDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RunDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RunDeviceStreamRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RunDeviceStreamResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RunIotModelRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RunIotModelResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RunOtaVersionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RunOtaVersionResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/RunTestOtaVersionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/RunTestOtaVersionResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/SendOnlineMsgRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/SendOnlineMsgResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/SetMessageQueueRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/SetMessageQueueResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/UpgradeDeviceRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/UpgradeDeviceResponse.h>
#include <tencentcloud/iotvideo/v20191126/model/UploadOtaVersionRequest.h>
#include <tencentcloud/iotvideo/v20191126/model/UploadOtaVersionResponse.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            class IotvideoClient : public AbstractClient
            {
            public:
                IotvideoClient(const Credential &credential, const std::string &region);
                IotvideoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ClearDeviceActiveCodeResponse> ClearDeviceActiveCodeOutcome;
                typedef std::future<ClearDeviceActiveCodeOutcome> ClearDeviceActiveCodeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ClearDeviceActiveCodeRequest&, ClearDeviceActiveCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearDeviceActiveCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnonymousAccessTokenResponse> CreateAnonymousAccessTokenOutcome;
                typedef std::future<CreateAnonymousAccessTokenOutcome> CreateAnonymousAccessTokenOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateAnonymousAccessTokenRequest&, CreateAnonymousAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnonymousAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAppUsrResponse> CreateAppUsrOutcome;
                typedef std::future<CreateAppUsrOutcome> CreateAppUsrOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateAppUsrRequest&, CreateAppUsrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppUsrAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBindingResponse> CreateBindingOutcome;
                typedef std::future<CreateBindingOutcome> CreateBindingOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateBindingRequest&, CreateBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDevTokenResponse> CreateDevTokenOutcome;
                typedef std::future<CreateDevTokenOutcome> CreateDevTokenOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateDevTokenRequest&, CreateDevTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDevicesResponse> CreateDevicesOutcome;
                typedef std::future<CreateDevicesOutcome> CreateDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateDevicesRequest&, CreateDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGencodeResponse> CreateGencodeOutcome;
                typedef std::future<CreateGencodeOutcome> CreateGencodeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateGencodeRequest&, CreateGencodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGencodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIotDataTypeResponse> CreateIotDataTypeOutcome;
                typedef std::future<CreateIotDataTypeOutcome> CreateIotDataTypeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateIotDataTypeRequest&, CreateIotDataTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIotDataTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIotModelResponse> CreateIotModelOutcome;
                typedef std::future<CreateIotModelOutcome> CreateIotModelOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateIotModelRequest&, CreateIotModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIotModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageResponse> CreateStorageOutcome;
                typedef std::future<CreateStorageOutcome> CreateStorageOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateStorageRequest&, CreateStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageServiceResponse> CreateStorageServiceOutcome;
                typedef std::future<CreateStorageServiceOutcome> CreateStorageServiceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateStorageServiceRequest&, CreateStorageServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTraceIdsResponse> CreateTraceIdsOutcome;
                typedef std::future<CreateTraceIdsOutcome> CreateTraceIdsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateTraceIdsRequest&, CreateTraceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTraceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUploadPathResponse> CreateUploadPathOutcome;
                typedef std::future<CreateUploadPathOutcome> CreateUploadPathOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateUploadPathRequest&, CreateUploadPathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadPathAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUploadTestResponse> CreateUploadTestOutcome;
                typedef std::future<CreateUploadTestOutcome> CreateUploadTestOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateUploadTestRequest&, CreateUploadTestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadTestAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUsrTokenResponse> CreateUsrTokenOutcome;
                typedef std::future<CreateUsrTokenOutcome> CreateUsrTokenOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateUsrTokenRequest&, CreateUsrTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsrTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppUsrResponse> DeleteAppUsrOutcome;
                typedef std::future<DeleteAppUsrOutcome> DeleteAppUsrOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteAppUsrRequest&, DeleteAppUsrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppUsrAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBindingResponse> DeleteBindingOutcome;
                typedef std::future<DeleteBindingOutcome> DeleteBindingOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteBindingRequest&, DeleteBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIotDataTypeResponse> DeleteIotDataTypeOutcome;
                typedef std::future<DeleteIotDataTypeOutcome> DeleteIotDataTypeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteIotDataTypeRequest&, DeleteIotDataTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIotDataTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMessageQueueResponse> DeleteMessageQueueOutcome;
                typedef std::future<DeleteMessageQueueOutcome> DeleteMessageQueueOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteMessageQueueRequest&, DeleteMessageQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOtaVersionResponse> DeleteOtaVersionOutcome;
                typedef std::future<DeleteOtaVersionOutcome> DeleteOtaVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteOtaVersionRequest&, DeleteOtaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOtaVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTraceIdsResponse> DeleteTraceIdsOutcome;
                typedef std::future<DeleteTraceIdsOutcome> DeleteTraceIdsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteTraceIdsRequest&, DeleteTraceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTraceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeliverStorageServiceResponse> DeliverStorageServiceOutcome;
                typedef std::future<DeliverStorageServiceOutcome> DeliverStorageServiceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeliverStorageServiceRequest&, DeliverStorageServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeliverStorageServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountBalanceResponse> DescribeAccountBalanceOutcome;
                typedef std::future<DescribeAccountBalanceOutcome> DescribeAccountBalanceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeAccountBalanceRequest&, DescribeAccountBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindDevResponse> DescribeBindDevOutcome;
                typedef std::future<DescribeBindDevOutcome> DescribeBindDevOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBindDevRequest&, DescribeBindDevOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindDevAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindUsrResponse> DescribeBindUsrOutcome;
                typedef std::future<DescribeBindUsrOutcome> DescribeBindUsrOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBindUsrRequest&, DescribeBindUsrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindUsrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceModelResponse> DescribeDeviceModelOutcome;
                typedef std::future<DescribeDeviceModelOutcome> DescribeDeviceModelOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceModelRequest&, DescribeDeviceModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIotDataTypeResponse> DescribeIotDataTypeOutcome;
                typedef std::future<DescribeIotDataTypeOutcome> DescribeIotDataTypeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeIotDataTypeRequest&, DescribeIotDataTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIotDataTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIotModelResponse> DescribeIotModelOutcome;
                typedef std::future<DescribeIotModelOutcome> DescribeIotModelOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeIotModelRequest&, DescribeIotModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIotModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIotModelsResponse> DescribeIotModelsOutcome;
                typedef std::future<DescribeIotModelsOutcome> DescribeIotModelsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeIotModelsRequest&, DescribeIotModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIotModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsResponse> DescribeLogsOutcome;
                typedef std::future<DescribeLogsOutcome> DescribeLogsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeLogsRequest&, DescribeLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageQueueResponse> DescribeMessageQueueOutcome;
                typedef std::future<DescribeMessageQueueOutcome> DescribeMessageQueueOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeMessageQueueRequest&, DescribeMessageQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelDataRetResponse> DescribeModelDataRetOutcome;
                typedef std::future<DescribeModelDataRetOutcome> DescribeModelDataRetOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeModelDataRetRequest&, DescribeModelDataRetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDataRetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOsListResponse> DescribeOsListOutcome;
                typedef std::future<DescribeOsListOutcome> DescribeOsListOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeOsListRequest&, DescribeOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtaVersionsResponse> DescribeOtaVersionsOutcome;
                typedef std::future<DescribeOtaVersionsOutcome> DescribeOtaVersionsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeOtaVersionsRequest&, DescribeOtaVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtaVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePubVersionsResponse> DescribePubVersionsOutcome;
                typedef std::future<DescribePubVersionsOutcome> DescribePubVersionsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribePubVersionsRequest&, DescribePubVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePubVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRechargeRecordsResponse> DescribeRechargeRecordsOutcome;
                typedef std::future<DescribeRechargeRecordsOutcome> DescribeRechargeRecordsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeRechargeRecordsRequest&, DescribeRechargeRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRechargeRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistrationStatusResponse> DescribeRegistrationStatusOutcome;
                typedef std::future<DescribeRegistrationStatusOutcome> DescribeRegistrationStatusOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeRegistrationStatusRequest&, DescribeRegistrationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistrationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRunLogResponse> DescribeRunLogOutcome;
                typedef std::future<DescribeRunLogOutcome> DescribeRunLogOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeRunLogRequest&, DescribeRunLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRunLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageServiceResponse> DescribeStorageServiceOutcome;
                typedef std::future<DescribeStorageServiceOutcome> DescribeStorageServiceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeStorageServiceRequest&, DescribeStorageServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamResponse> DescribeStreamOutcome;
                typedef std::future<DescribeStreamOutcome> DescribeStreamOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeStreamRequest&, DescribeStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTraceIdsResponse> DescribeTraceIdsOutcome;
                typedef std::future<DescribeTraceIdsOutcome> DescribeTraceIdsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeTraceIdsRequest&, DescribeTraceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTraceStatusResponse> DescribeTraceStatusOutcome;
                typedef std::future<DescribeTraceStatusOutcome> DescribeTraceStatusOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeTraceStatusRequest&, DescribeTraceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableDeviceResponse> DisableDeviceOutcome;
                typedef std::future<DisableDeviceOutcome> DisableDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DisableDeviceRequest&, DisableDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableDeviceStreamResponse> DisableDeviceStreamOutcome;
                typedef std::future<DisableDeviceStreamOutcome> DisableDeviceStreamOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DisableDeviceStreamRequest&, DisableDeviceStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableDeviceStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableOtaVersionResponse> DisableOtaVersionOutcome;
                typedef std::future<DisableOtaVersionOutcome> DisableOtaVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DisableOtaVersionRequest&, DisableOtaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableOtaVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceResponse> ModifyDeviceOutcome;
                typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyDeviceRequest&, ModifyDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceActionResponse> ModifyDeviceActionOutcome;
                typedef std::future<ModifyDeviceActionOutcome> ModifyDeviceActionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyDeviceActionRequest&, ModifyDeviceActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDevicePropertyResponse> ModifyDevicePropertyOutcome;
                typedef std::future<ModifyDevicePropertyOutcome> ModifyDevicePropertyOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyDevicePropertyRequest&, ModifyDevicePropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDevicePropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProductResponse> ModifyProductOutcome;
                typedef std::future<ModifyProductOutcome> ModifyProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyProductRequest&, ModifyProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProductAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVerContentResponse> ModifyVerContentOutcome;
                typedef std::future<ModifyVerContentOutcome> ModifyVerContentOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyVerContentRequest&, ModifyVerContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVerContentAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundStorageServiceResponse> RefundStorageServiceOutcome;
                typedef std::future<RefundStorageServiceOutcome> RefundStorageServiceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RefundStorageServiceRequest&, RefundStorageServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundStorageServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewUploadTestResponse> RenewUploadTestOutcome;
                typedef std::future<RenewUploadTestOutcome> RenewUploadTestOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RenewUploadTestRequest&, RenewUploadTestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewUploadTestAsyncHandler;
                typedef Outcome<Core::Error, Model::RunDeviceResponse> RunDeviceOutcome;
                typedef std::future<RunDeviceOutcome> RunDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RunDeviceRequest&, RunDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunDeviceStreamResponse> RunDeviceStreamOutcome;
                typedef std::future<RunDeviceStreamOutcome> RunDeviceStreamOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RunDeviceStreamRequest&, RunDeviceStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunDeviceStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::RunIotModelResponse> RunIotModelOutcome;
                typedef std::future<RunIotModelOutcome> RunIotModelOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RunIotModelRequest&, RunIotModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunIotModelAsyncHandler;
                typedef Outcome<Core::Error, Model::RunOtaVersionResponse> RunOtaVersionOutcome;
                typedef std::future<RunOtaVersionOutcome> RunOtaVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RunOtaVersionRequest&, RunOtaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunOtaVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTestOtaVersionResponse> RunTestOtaVersionOutcome;
                typedef std::future<RunTestOtaVersionOutcome> RunTestOtaVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RunTestOtaVersionRequest&, RunTestOtaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTestOtaVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::SendOnlineMsgResponse> SendOnlineMsgOutcome;
                typedef std::future<SendOnlineMsgOutcome> SendOnlineMsgOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::SendOnlineMsgRequest&, SendOnlineMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendOnlineMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::SetMessageQueueResponse> SetMessageQueueOutcome;
                typedef std::future<SetMessageQueueOutcome> SetMessageQueueOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::SetMessageQueueRequest&, SetMessageQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetMessageQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDeviceResponse> UpgradeDeviceOutcome;
                typedef std::future<UpgradeDeviceOutcome> UpgradeDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::UpgradeDeviceRequest&, UpgradeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadOtaVersionResponse> UploadOtaVersionOutcome;
                typedef std::future<UploadOtaVersionOutcome> UploadOtaVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::UploadOtaVersionRequest&, UploadOtaVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadOtaVersionAsyncHandler;



                /**
                 *清除设备激活码
                 * @param req ClearDeviceActiveCodeRequest
                 * @return ClearDeviceActiveCodeOutcome
                 */
                ClearDeviceActiveCodeOutcome ClearDeviceActiveCode(const Model::ClearDeviceActiveCodeRequest &request);
                void ClearDeviceActiveCodeAsync(const Model::ClearDeviceActiveCodeRequest& request, const ClearDeviceActiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearDeviceActiveCodeOutcomeCallable ClearDeviceActiveCodeCallable(const Model::ClearDeviceActiveCodeRequest& request);

                /**
                 *创建匿名访问Token
                 * @param req CreateAnonymousAccessTokenRequest
                 * @return CreateAnonymousAccessTokenOutcome
                 */
                CreateAnonymousAccessTokenOutcome CreateAnonymousAccessToken(const Model::CreateAnonymousAccessTokenRequest &request);
                void CreateAnonymousAccessTokenAsync(const Model::CreateAnonymousAccessTokenRequest& request, const CreateAnonymousAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnonymousAccessTokenOutcomeCallable CreateAnonymousAccessTokenCallable(const Model::CreateAnonymousAccessTokenRequest& request);

                /**
                 *本接口（CreateAppUsr）用于接收由厂商云发送过来的注册请求,建立厂商云终端用户与IoT Video终端用户的映射关系。
                 * @param req CreateAppUsrRequest
                 * @return CreateAppUsrOutcome
                 */
                CreateAppUsrOutcome CreateAppUsr(const Model::CreateAppUsrRequest &request);
                void CreateAppUsrAsync(const Model::CreateAppUsrRequest& request, const CreateAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppUsrOutcomeCallable CreateAppUsrCallable(const Model::CreateAppUsrRequest& request);

                /**
                 *本接口（CreateBinding）用于终端用户和设备进行绑定，具体的应用场景如下：
    终端用户与设备具有“强关联”关系。用户与设备绑定之后，用户终端即具备了该设备的访问权限,访问或操作设备时，无需获取设备访问Token。
                 * @param req CreateBindingRequest
                 * @return CreateBindingOutcome
                 */
                CreateBindingOutcome CreateBinding(const Model::CreateBindingRequest &request);
                void CreateBindingAsync(const Model::CreateBindingRequest& request, const CreateBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBindingOutcomeCallable CreateBindingCallable(const Model::CreateBindingRequest& request);

                /**
                 *本接口（CreateDevToken）用于以下场景：
终端用户与设备没有强绑定关联关系;
允许终端用户短时或一次性临时访问设备;
当终端用户与设备有强绑定关系时，可以不用调用此接口
                 * @param req CreateDevTokenRequest
                 * @return CreateDevTokenOutcome
                 */
                CreateDevTokenOutcome CreateDevToken(const Model::CreateDevTokenRequest &request);
                void CreateDevTokenAsync(const Model::CreateDevTokenRequest& request, const CreateDevTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDevTokenOutcomeCallable CreateDevTokenCallable(const Model::CreateDevTokenRequest& request);

                /**
                 *本接口（CreateDevices）用于批量创建新的物联网视频通信设备。
注意：腾讯云不会对设备私钥进行保存，请自行保管好您的设备私钥。
                 * @param req CreateDevicesRequest
                 * @return CreateDevicesOutcome
                 */
                CreateDevicesOutcome CreateDevices(const Model::CreateDevicesRequest &request);
                void CreateDevicesAsync(const Model::CreateDevicesRequest& request, const CreateDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDevicesOutcomeCallable CreateDevicesCallable(const Model::CreateDevicesRequest& request);

                /**
                 *本接口（CreateGencode）用于生成设备物模型源代码
                 * @param req CreateGencodeRequest
                 * @return CreateGencodeOutcome
                 */
                CreateGencodeOutcome CreateGencode(const Model::CreateGencodeRequest &request);
                void CreateGencodeAsync(const Model::CreateGencodeRequest& request, const CreateGencodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGencodeOutcomeCallable CreateGencodeCallable(const Model::CreateGencodeRequest& request);

                /**
                 *本接口（CreateIotDataType）用于创建自定义物模型数据类型。
                 * @param req CreateIotDataTypeRequest
                 * @return CreateIotDataTypeOutcome
                 */
                CreateIotDataTypeOutcome CreateIotDataType(const Model::CreateIotDataTypeRequest &request);
                void CreateIotDataTypeAsync(const Model::CreateIotDataTypeRequest& request, const CreateIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIotDataTypeOutcomeCallable CreateIotDataTypeCallable(const Model::CreateIotDataTypeRequest& request);

                /**
                 *本接口（CreateIotModel）用于定义的物模型提交。
该接口实现了物模型草稿箱的功能，保存用户最后一次编辑的物模型数据。
                 * @param req CreateIotModelRequest
                 * @return CreateIotModelOutcome
                 */
                CreateIotModelOutcome CreateIotModel(const Model::CreateIotModelRequest &request);
                void CreateIotModelAsync(const Model::CreateIotModelRequest& request, const CreateIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIotModelOutcomeCallable CreateIotModelCallable(const Model::CreateIotModelRequest& request);

                /**
                 *本接口（CreateProduct）用于创建一个新的物联网智能视频产品。
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *该接口已经停止维护，请勿使用
                 * @param req CreateStorageRequest
                 * @return CreateStorageOutcome
                 */
                CreateStorageOutcome CreateStorage(const Model::CreateStorageRequest &request);
                void CreateStorageAsync(const Model::CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageOutcomeCallable CreateStorageCallable(const Model::CreateStorageRequest& request);

                /**
                 *购买云存服务
                 * @param req CreateStorageServiceRequest
                 * @return CreateStorageServiceOutcome
                 */
                CreateStorageServiceOutcome CreateStorageService(const Model::CreateStorageServiceRequest &request);
                void CreateStorageServiceAsync(const Model::CreateStorageServiceRequest& request, const CreateStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageServiceOutcomeCallable CreateStorageServiceCallable(const Model::CreateStorageServiceRequest& request);

                /**
                 *本接口（CreateTraceIds）用于将设备加到日志跟踪白名单。
                 * @param req CreateTraceIdsRequest
                 * @return CreateTraceIdsOutcome
                 */
                CreateTraceIdsOutcome CreateTraceIds(const Model::CreateTraceIdsRequest &request);
                void CreateTraceIdsAsync(const Model::CreateTraceIdsRequest& request, const CreateTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTraceIdsOutcomeCallable CreateTraceIdsCallable(const Model::CreateTraceIdsRequest& request);

                /**
                 *本接口（CreateUploadPath）用于获取固件上传路径。
                 * @param req CreateUploadPathRequest
                 * @return CreateUploadPathOutcome
                 */
                CreateUploadPathOutcome CreateUploadPath(const Model::CreateUploadPathRequest &request);
                void CreateUploadPathAsync(const Model::CreateUploadPathRequest& request, const CreateUploadPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUploadPathOutcomeCallable CreateUploadPathCallable(const Model::CreateUploadPathRequest& request);

                /**
                 *设备申请cos上传证书
                 * @param req CreateUploadTestRequest
                 * @return CreateUploadTestOutcome
                 */
                CreateUploadTestOutcome CreateUploadTest(const Model::CreateUploadTestRequest &request);
                void CreateUploadTestAsync(const Model::CreateUploadTestRequest& request, const CreateUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUploadTestOutcomeCallable CreateUploadTestCallable(const Model::CreateUploadTestRequest& request);

                /**
                 *本接口（CreateUsrToken）用于终端用户获取IoT Video平台的accessToken，初始化SDK,连接到IoT Video接入服务器。
                 * @param req CreateUsrTokenRequest
                 * @return CreateUsrTokenOutcome
                 */
                CreateUsrTokenOutcome CreateUsrToken(const Model::CreateUsrTokenRequest &request);
                void CreateUsrTokenAsync(const Model::CreateUsrTokenRequest& request, const CreateUsrTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsrTokenOutcomeCallable CreateUsrTokenCallable(const Model::CreateUsrTokenRequest& request);

                /**
                 *本接口（DeleteAppUsr）用于删除终端用户。
                 * @param req DeleteAppUsrRequest
                 * @return DeleteAppUsrOutcome
                 */
                DeleteAppUsrOutcome DeleteAppUsr(const Model::DeleteAppUsrRequest &request);
                void DeleteAppUsrAsync(const Model::DeleteAppUsrRequest& request, const DeleteAppUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppUsrOutcomeCallable DeleteAppUsrCallable(const Model::DeleteAppUsrRequest& request);

                /**
                 *本接口（DeleteBinding）用于终端用户和设备进行解绑定。
                 * @param req DeleteBindingRequest
                 * @return DeleteBindingOutcome
                 */
                DeleteBindingOutcome DeleteBinding(const Model::DeleteBindingRequest &request);
                void DeleteBindingAsync(const Model::DeleteBindingRequest& request, const DeleteBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBindingOutcomeCallable DeleteBindingCallable(const Model::DeleteBindingRequest& request);

                /**
                 *本接口（DeleteDevice）用于删除设备，可进行批量操作，每次操作最多100台设备。
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *本接口（DeleteIotDataType）用于删除自定义物模型数据类型。
                 * @param req DeleteIotDataTypeRequest
                 * @return DeleteIotDataTypeOutcome
                 */
                DeleteIotDataTypeOutcome DeleteIotDataType(const Model::DeleteIotDataTypeRequest &request);
                void DeleteIotDataTypeAsync(const Model::DeleteIotDataTypeRequest& request, const DeleteIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIotDataTypeOutcomeCallable DeleteIotDataTypeCallable(const Model::DeleteIotDataTypeRequest& request);

                /**
                 *本接口（DeleteMessageQueue）用于删除物联网智能视频产品的转发消息配置信息。
                 * @param req DeleteMessageQueueRequest
                 * @return DeleteMessageQueueOutcome
                 */
                DeleteMessageQueueOutcome DeleteMessageQueue(const Model::DeleteMessageQueueRequest &request);
                void DeleteMessageQueueAsync(const Model::DeleteMessageQueueRequest& request, const DeleteMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMessageQueueOutcomeCallable DeleteMessageQueueCallable(const Model::DeleteMessageQueueRequest& request);

                /**
                 *本接口（DeleteOtaVersion）用于删除固件版本信息。
                 * @param req DeleteOtaVersionRequest
                 * @return DeleteOtaVersionOutcome
                 */
                DeleteOtaVersionOutcome DeleteOtaVersion(const Model::DeleteOtaVersionRequest &request);
                void DeleteOtaVersionAsync(const Model::DeleteOtaVersionRequest& request, const DeleteOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOtaVersionOutcomeCallable DeleteOtaVersionCallable(const Model::DeleteOtaVersionRequest& request);

                /**
                 *本接口（DeleteProduct）用于删除一个物联网智能视频产品。
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *本接口（DeleteTraceIds）用于将设备从日志跟踪白名单中删除，该接口可批量操作，最多支持同时操作100台设备。
                 * @param req DeleteTraceIdsRequest
                 * @return DeleteTraceIdsOutcome
                 */
                DeleteTraceIdsOutcome DeleteTraceIds(const Model::DeleteTraceIdsRequest &request);
                void DeleteTraceIdsAsync(const Model::DeleteTraceIdsRequest& request, const DeleteTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTraceIdsOutcomeCallable DeleteTraceIdsCallable(const Model::DeleteTraceIdsRequest& request);

                /**
                 *将已购买的云存服务转移到另一设备
                 * @param req DeliverStorageServiceRequest
                 * @return DeliverStorageServiceOutcome
                 */
                DeliverStorageServiceOutcome DeliverStorageService(const Model::DeliverStorageServiceRequest &request);
                void DeliverStorageServiceAsync(const Model::DeliverStorageServiceRequest& request, const DeliverStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeliverStorageServiceOutcomeCallable DeliverStorageServiceCallable(const Model::DeliverStorageServiceRequest& request);

                /**
                 *客户可通过本接口获取账户余额信息, 默认接口请求频率限制：1次/秒
                 * @param req DescribeAccountBalanceRequest
                 * @return DescribeAccountBalanceOutcome
                 */
                DescribeAccountBalanceOutcome DescribeAccountBalance(const Model::DescribeAccountBalanceRequest &request);
                void DescribeAccountBalanceAsync(const Model::DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountBalanceOutcomeCallable DescribeAccountBalanceCallable(const Model::DescribeAccountBalanceRequest& request);

                /**
                 *本接口（DescribeBindDev）用于查询终端用户绑定的设备列表。
                 * @param req DescribeBindDevRequest
                 * @return DescribeBindDevOutcome
                 */
                DescribeBindDevOutcome DescribeBindDev(const Model::DescribeBindDevRequest &request);
                void DescribeBindDevAsync(const Model::DescribeBindDevRequest& request, const DescribeBindDevAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindDevOutcomeCallable DescribeBindDevCallable(const Model::DescribeBindDevRequest& request);

                /**
                 *本接口（DescribeBindUsr）用于查询设备被分享的所有用户列表。
                 * @param req DescribeBindUsrRequest
                 * @return DescribeBindUsrOutcome
                 */
                DescribeBindUsrOutcome DescribeBindUsr(const Model::DescribeBindUsrRequest &request);
                void DescribeBindUsrAsync(const Model::DescribeBindUsrRequest& request, const DescribeBindUsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindUsrOutcomeCallable DescribeBindUsrCallable(const Model::DescribeBindUsrRequest& request);

                /**
                 *本接口（DescribeDevice）获取设备信息。
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *本接口（DescribeDeviceModel）用于获取设备物模型。
                 * @param req DescribeDeviceModelRequest
                 * @return DescribeDeviceModelOutcome
                 */
                DescribeDeviceModelOutcome DescribeDeviceModel(const Model::DescribeDeviceModelRequest &request);
                void DescribeDeviceModelAsync(const Model::DescribeDeviceModelRequest& request, const DescribeDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceModelOutcomeCallable DescribeDeviceModelCallable(const Model::DescribeDeviceModelRequest& request);

                /**
                 *本接口（DescribeDevices）用于获取设备信息列表。
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *本接口（DescribeIotDataType）用于查询自定义的物模型数据类型。
                 * @param req DescribeIotDataTypeRequest
                 * @return DescribeIotDataTypeOutcome
                 */
                DescribeIotDataTypeOutcome DescribeIotDataType(const Model::DescribeIotDataTypeRequest &request);
                void DescribeIotDataTypeAsync(const Model::DescribeIotDataTypeRequest& request, const DescribeIotDataTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIotDataTypeOutcomeCallable DescribeIotDataTypeCallable(const Model::DescribeIotDataTypeRequest& request);

                /**
                 *本接口（DescribeIotModel）用于获取物模型定义详情。
                 * @param req DescribeIotModelRequest
                 * @return DescribeIotModelOutcome
                 */
                DescribeIotModelOutcome DescribeIotModel(const Model::DescribeIotModelRequest &request);
                void DescribeIotModelAsync(const Model::DescribeIotModelRequest& request, const DescribeIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIotModelOutcomeCallable DescribeIotModelCallable(const Model::DescribeIotModelRequest& request);

                /**
                 *本接口（DescribeIotModels）用于列出物模型历史版本列表。
                 * @param req DescribeIotModelsRequest
                 * @return DescribeIotModelsOutcome
                 */
                DescribeIotModelsOutcome DescribeIotModels(const Model::DescribeIotModelsRequest &request);
                void DescribeIotModelsAsync(const Model::DescribeIotModelsRequest& request, const DescribeIotModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIotModelsOutcomeCallable DescribeIotModelsCallable(const Model::DescribeIotModelsRequest& request);

                /**
                 *本接口（DescribeLogs）用于查询设备日志列表。
设备日志最长保留时长为15天,超期自动清除。
                 * @param req DescribeLogsRequest
                 * @return DescribeLogsOutcome
                 */
                DescribeLogsOutcome DescribeLogs(const Model::DescribeLogsRequest &request);
                void DescribeLogsAsync(const Model::DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsOutcomeCallable DescribeLogsCallable(const Model::DescribeLogsRequest& request);

                /**
                 *本接口（DescribeMessageQueue）用于查询物联网智能视频产品转发消息配置。
                 * @param req DescribeMessageQueueRequest
                 * @return DescribeMessageQueueOutcome
                 */
                DescribeMessageQueueOutcome DescribeMessageQueue(const Model::DescribeMessageQueueRequest &request);
                void DescribeMessageQueueAsync(const Model::DescribeMessageQueueRequest& request, const DescribeMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageQueueOutcomeCallable DescribeMessageQueueCallable(const Model::DescribeMessageQueueRequest& request);

                /**
                 *本接口（DescribeModelDataRet）用于根据TaskId获取对设备物模型操作最终响应的结果。
                 * @param req DescribeModelDataRetRequest
                 * @return DescribeModelDataRetOutcome
                 */
                DescribeModelDataRetOutcome DescribeModelDataRet(const Model::DescribeModelDataRetRequest &request);
                void DescribeModelDataRetAsync(const Model::DescribeModelDataRetRequest& request, const DescribeModelDataRetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelDataRetOutcomeCallable DescribeModelDataRetCallable(const Model::DescribeModelDataRetRequest& request);

                /**
                 *查看操作系统支持的芯片列表
                 * @param req DescribeOsListRequest
                 * @return DescribeOsListOutcome
                 */
                DescribeOsListOutcome DescribeOsList(const Model::DescribeOsListRequest &request);
                void DescribeOsListAsync(const Model::DescribeOsListRequest& request, const DescribeOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOsListOutcomeCallable DescribeOsListCallable(const Model::DescribeOsListRequest& request);

                /**
                 *本接口（DescribeOtaVersions）用于查询固件版本信息列表。
                 * @param req DescribeOtaVersionsRequest
                 * @return DescribeOtaVersionsOutcome
                 */
                DescribeOtaVersionsOutcome DescribeOtaVersions(const Model::DescribeOtaVersionsRequest &request);
                void DescribeOtaVersionsAsync(const Model::DescribeOtaVersionsRequest& request, const DescribeOtaVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtaVersionsOutcomeCallable DescribeOtaVersionsCallable(const Model::DescribeOtaVersionsRequest& request);

                /**
                 *本接口（DescribeProduct）用于获取单个产品的详细信息。
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *本接口（DescribeProducts）用于列出用户账号下的物联网智能视频产品列表。
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *本接口（DescribePubVersions）用于获取某一产品发布过的全部固件版本。
                 * @param req DescribePubVersionsRequest
                 * @return DescribePubVersionsOutcome
                 */
                DescribePubVersionsOutcome DescribePubVersions(const Model::DescribePubVersionsRequest &request);
                void DescribePubVersionsAsync(const Model::DescribePubVersionsRequest& request, const DescribePubVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePubVersionsOutcomeCallable DescribePubVersionsCallable(const Model::DescribePubVersionsRequest& request);

                /**
                 *客户可通过本接口获取充值记录信息, 一次最多返回50条记录。
                 * @param req DescribeRechargeRecordsRequest
                 * @return DescribeRechargeRecordsOutcome
                 */
                DescribeRechargeRecordsOutcome DescribeRechargeRecords(const Model::DescribeRechargeRecordsRequest &request);
                void DescribeRechargeRecordsAsync(const Model::DescribeRechargeRecordsRequest& request, const DescribeRechargeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRechargeRecordsOutcomeCallable DescribeRechargeRecordsCallable(const Model::DescribeRechargeRecordsRequest& request);

                /**
                 *本接口（DescribeRegistrationStatus）用于查询终端用户的注册状态。
                 * @param req DescribeRegistrationStatusRequest
                 * @return DescribeRegistrationStatusOutcome
                 */
                DescribeRegistrationStatusOutcome DescribeRegistrationStatus(const Model::DescribeRegistrationStatusRequest &request);
                void DescribeRegistrationStatusAsync(const Model::DescribeRegistrationStatusRequest& request, const DescribeRegistrationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistrationStatusOutcomeCallable DescribeRegistrationStatusCallable(const Model::DescribeRegistrationStatusRequest& request);

                /**
                 *本接口（DescribeRunLog）用于获取设备运行日志。
                 * @param req DescribeRunLogRequest
                 * @return DescribeRunLogOutcome
                 */
                DescribeRunLogOutcome DescribeRunLog(const Model::DescribeRunLogRequest &request);
                void DescribeRunLogAsync(const Model::DescribeRunLogRequest& request, const DescribeRunLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRunLogOutcomeCallable DescribeRunLogCallable(const Model::DescribeRunLogRequest& request);

                /**
                 *查询云存服务
                 * @param req DescribeStorageServiceRequest
                 * @return DescribeStorageServiceOutcome
                 */
                DescribeStorageServiceOutcome DescribeStorageService(const Model::DescribeStorageServiceRequest &request);
                void DescribeStorageServiceAsync(const Model::DescribeStorageServiceRequest& request, const DescribeStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageServiceOutcomeCallable DescribeStorageServiceCallable(const Model::DescribeStorageServiceRequest& request);

                /**
                 *请求设备直播流地址
                 * @param req DescribeStreamRequest
                 * @return DescribeStreamOutcome
                 */
                DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest &request);
                void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request);

                /**
                 *本接口（DescribeTraceIds）用于查询设备日志跟踪白名单。
                 * @param req DescribeTraceIdsRequest
                 * @return DescribeTraceIdsOutcome
                 */
                DescribeTraceIdsOutcome DescribeTraceIds(const Model::DescribeTraceIdsRequest &request);
                void DescribeTraceIdsAsync(const Model::DescribeTraceIdsRequest& request, const DescribeTraceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTraceIdsOutcomeCallable DescribeTraceIdsCallable(const Model::DescribeTraceIdsRequest& request);

                /**
                 *本接口（DescribeTraceStatus）用于查询指定设备是否在白名单中。
                 * @param req DescribeTraceStatusRequest
                 * @return DescribeTraceStatusOutcome
                 */
                DescribeTraceStatusOutcome DescribeTraceStatus(const Model::DescribeTraceStatusRequest &request);
                void DescribeTraceStatusAsync(const Model::DescribeTraceStatusRequest& request, const DescribeTraceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTraceStatusOutcomeCallable DescribeTraceStatusCallable(const Model::DescribeTraceStatusRequest& request);

                /**
                 *本接口（DisableDevice）用于禁用设备，可进行批量操作，每次操作最多100台设备。
                 * @param req DisableDeviceRequest
                 * @return DisableDeviceOutcome
                 */
                DisableDeviceOutcome DisableDevice(const Model::DisableDeviceRequest &request);
                void DisableDeviceAsync(const Model::DisableDeviceRequest& request, const DisableDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableDeviceOutcomeCallable DisableDeviceCallable(const Model::DisableDeviceRequest& request);

                /**
                 *本接口（DisableDeviceStream）用于停止设备推流，可进行批量操作，每次操作最多100台设备。
                 * @param req DisableDeviceStreamRequest
                 * @return DisableDeviceStreamOutcome
                 */
                DisableDeviceStreamOutcome DisableDeviceStream(const Model::DisableDeviceStreamRequest &request);
                void DisableDeviceStreamAsync(const Model::DisableDeviceStreamRequest& request, const DisableDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableDeviceStreamOutcomeCallable DisableDeviceStreamCallable(const Model::DisableDeviceStreamRequest& request);

                /**
                 *本接口（DisableOtaVersion）用于禁用固件版本。
                 * @param req DisableOtaVersionRequest
                 * @return DisableOtaVersionOutcome
                 */
                DisableOtaVersionOutcome DisableOtaVersion(const Model::DisableOtaVersionRequest &request);
                void DisableOtaVersionAsync(const Model::DisableOtaVersionRequest& request, const DisableOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableOtaVersionOutcomeCallable DisableOtaVersionCallable(const Model::DisableOtaVersionRequest& request);

                /**
                 *修改设备信息
                 * @param req ModifyDeviceRequest
                 * @return ModifyDeviceOutcome
                 */
                ModifyDeviceOutcome ModifyDevice(const Model::ModifyDeviceRequest &request);
                void ModifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceOutcomeCallable ModifyDeviceCallable(const Model::ModifyDeviceRequest& request);

                /**
                 *本接口（ModifyDeviceAction）用于修改设备物模型的行为（Action）。

可对ctlVal数据属性进行写入,如:Action.takePhoto.ctlVal,设备在线且成功发送到设备才返回,物模型写入数据时,不需要传入时标信息,平台以当前时标作为数据的时标更新物模型中的时标信息。
注意:
  1.若设备当前不在线,会直接返回错误
  2.若设备网络出现异常时,消息发送可能超时,超时等待最长时间为3秒
  3.value的内容必须与实际物模型的定义一致
                 * @param req ModifyDeviceActionRequest
                 * @return ModifyDeviceActionOutcome
                 */
                ModifyDeviceActionOutcome ModifyDeviceAction(const Model::ModifyDeviceActionRequest &request);
                void ModifyDeviceActionAsync(const Model::ModifyDeviceActionRequest& request, const ModifyDeviceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceActionOutcomeCallable ModifyDeviceActionCallable(const Model::ModifyDeviceActionRequest& request);

                /**
                 *本接口（ModifyDeviceProperty）用于修改设备物模型的属性（ProWritable）。
可对setVal数据属性进行写入,如:
ProWritable.Pos.setVal
对于嵌套类型的可写属性，可以仅对其部分数据内容进行写入，如:
ProWritable.Pos.setVal.x;
可写属性云端写入成功即返回;云端向设备端发布属性变更参数;若当前设备不在线,在设备下次上线时会自动更新这些属性参数;
物模型写入数据时,不需要传入时标信息,平台以当前时标作为数据的时标更新物模型中的时标信息。
                 * @param req ModifyDevicePropertyRequest
                 * @return ModifyDevicePropertyOutcome
                 */
                ModifyDevicePropertyOutcome ModifyDeviceProperty(const Model::ModifyDevicePropertyRequest &request);
                void ModifyDevicePropertyAsync(const Model::ModifyDevicePropertyRequest& request, const ModifyDevicePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDevicePropertyOutcomeCallable ModifyDevicePropertyCallable(const Model::ModifyDevicePropertyRequest& request);

                /**
                 *本接口（ModifyProduct）用于编辑物联网智能视频产品的相关信息。
                 * @param req ModifyProductRequest
                 * @return ModifyProductOutcome
                 */
                ModifyProductOutcome ModifyProduct(const Model::ModifyProductRequest &request);
                void ModifyProductAsync(const Model::ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProductOutcomeCallable ModifyProductCallable(const Model::ModifyProductRequest& request);

                /**
                 *编辑版本描述信息
                 * @param req ModifyVerContentRequest
                 * @return ModifyVerContentOutcome
                 */
                ModifyVerContentOutcome ModifyVerContent(const Model::ModifyVerContentRequest &request);
                void ModifyVerContentAsync(const Model::ModifyVerContentRequest& request, const ModifyVerContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVerContentOutcomeCallable ModifyVerContentCallable(const Model::ModifyVerContentRequest& request);

                /**
                 *本接口（RefundStorageService）用于退订已购买的云存服务。
退订时，云存服务对应订单的处理方式 : 
1. 未开始的订单自动回到已付费订单池
2. 已开始的订单自动失效
3. 购买云存接口,优先从已付费订单池中分配订单
                 * @param req RefundStorageServiceRequest
                 * @return RefundStorageServiceOutcome
                 */
                RefundStorageServiceOutcome RefundStorageService(const Model::RefundStorageServiceRequest &request);
                void RefundStorageServiceAsync(const Model::RefundStorageServiceRequest& request, const RefundStorageServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundStorageServiceOutcomeCallable RefundStorageServiceCallable(const Model::RefundStorageServiceRequest& request);

                /**
                 *设备刷新cos上传证书
                 * @param req RenewUploadTestRequest
                 * @return RenewUploadTestOutcome
                 */
                RenewUploadTestOutcome RenewUploadTest(const Model::RenewUploadTestRequest &request);
                void RenewUploadTestAsync(const Model::RenewUploadTestRequest& request, const RenewUploadTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewUploadTestOutcomeCallable RenewUploadTestCallable(const Model::RenewUploadTestRequest& request);

                /**
                 *本接口（RunDevice）用于启用设备，可进行批量操作，每次操作最多100台设备。
                 * @param req RunDeviceRequest
                 * @return RunDeviceOutcome
                 */
                RunDeviceOutcome RunDevice(const Model::RunDeviceRequest &request);
                void RunDeviceAsync(const Model::RunDeviceRequest& request, const RunDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunDeviceOutcomeCallable RunDeviceCallable(const Model::RunDeviceRequest& request);

                /**
                 *本接口（RunDeviceStream）用于开启设备推流，可进行批量操作，每次操作最多100台设备。
                 * @param req RunDeviceStreamRequest
                 * @return RunDeviceStreamOutcome
                 */
                RunDeviceStreamOutcome RunDeviceStream(const Model::RunDeviceStreamRequest &request);
                void RunDeviceStreamAsync(const Model::RunDeviceStreamRequest& request, const RunDeviceStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunDeviceStreamOutcomeCallable RunDeviceStreamCallable(const Model::RunDeviceStreamRequest& request);

                /**
                 *本接口（RunIotModel）用于对定义的物模型进行发布。
                 * @param req RunIotModelRequest
                 * @return RunIotModelOutcome
                 */
                RunIotModelOutcome RunIotModel(const Model::RunIotModelRequest &request);
                void RunIotModelAsync(const Model::RunIotModelRequest& request, const RunIotModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunIotModelOutcomeCallable RunIotModelCallable(const Model::RunIotModelRequest& request);

                /**
                 *本接口（RunOtaVersion）用于固件版本正式发布。
                 * @param req RunOtaVersionRequest
                 * @return RunOtaVersionOutcome
                 */
                RunOtaVersionOutcome RunOtaVersion(const Model::RunOtaVersionRequest &request);
                void RunOtaVersionAsync(const Model::RunOtaVersionRequest& request, const RunOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunOtaVersionOutcomeCallable RunOtaVersionCallable(const Model::RunOtaVersionRequest& request);

                /**
                 *本接口（RunTestOtaVersion）用于固件版本测试发布。
                 * @param req RunTestOtaVersionRequest
                 * @return RunTestOtaVersionOutcome
                 */
                RunTestOtaVersionOutcome RunTestOtaVersion(const Model::RunTestOtaVersionRequest &request);
                void RunTestOtaVersionAsync(const Model::RunTestOtaVersionRequest& request, const RunTestOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTestOtaVersionOutcomeCallable RunTestOtaVersionCallable(const Model::RunTestOtaVersionRequest& request);

                /**
                 *本接口（SendOnlineMsg）用于向设备发送在线消息。
注意：
若设备当前不在线,会直接返回错误;
若设备网络出现异常时,消息发送可能超时,超时等待最长时间为3秒.waitresp非0情况下,会导致本接口阻塞3秒。
                 * @param req SendOnlineMsgRequest
                 * @return SendOnlineMsgOutcome
                 */
                SendOnlineMsgOutcome SendOnlineMsg(const Model::SendOnlineMsgRequest &request);
                void SendOnlineMsgAsync(const Model::SendOnlineMsgRequest& request, const SendOnlineMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendOnlineMsgOutcomeCallable SendOnlineMsgCallable(const Model::SendOnlineMsgRequest& request);

                /**
                 *本接口（SetMessageQueue）用于配置物联网智能视频产品的转发消息队列。
                 * @param req SetMessageQueueRequest
                 * @return SetMessageQueueOutcome
                 */
                SetMessageQueueOutcome SetMessageQueue(const Model::SetMessageQueueRequest &request);
                void SetMessageQueueAsync(const Model::SetMessageQueueRequest& request, const SetMessageQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetMessageQueueOutcomeCallable SetMessageQueueCallable(const Model::SetMessageQueueRequest& request);

                /**
                 *本接口（UpgradeDevice）用于对设备进行固件升级。
该接口向指定的设备下发固件更新指令,可将固件升级到任意版本(可实现固件降级)。
警告:使能UpgradeNow参数存在一定的风险性！建议仅在debug场景下使用!
                 * @param req UpgradeDeviceRequest
                 * @return UpgradeDeviceOutcome
                 */
                UpgradeDeviceOutcome UpgradeDevice(const Model::UpgradeDeviceRequest &request);
                void UpgradeDeviceAsync(const Model::UpgradeDeviceRequest& request, const UpgradeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDeviceOutcomeCallable UpgradeDeviceCallable(const Model::UpgradeDeviceRequest& request);

                /**
                 *本接口（UploadOtaVersion）接收上传到控制台的固件版本信息。
                 * @param req UploadOtaVersionRequest
                 * @return UploadOtaVersionOutcome
                 */
                UploadOtaVersionOutcome UploadOtaVersion(const Model::UploadOtaVersionRequest &request);
                void UploadOtaVersionAsync(const Model::UploadOtaVersionRequest& request, const UploadOtaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadOtaVersionOutcomeCallable UploadOtaVersionCallable(const Model::UploadOtaVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_IOTVIDEOCLIENT_H_

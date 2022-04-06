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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_IOTCLOUDCLIENT_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_IOTCLOUDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotcloud/v20180614/model/BatchUpdateFirmwareRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/BatchUpdateFirmwareResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/BindDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/BindDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CancelDeviceFirmwareTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CancelDeviceFirmwareTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CancelTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CancelTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateLoraDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateMultiDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateMultiDevicesTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateMultiDevicesTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateProductRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateProductResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTaskFileUrlRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTaskFileUrlResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTopicPolicyResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTopicRuleRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/CreateTopicRuleResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteDeviceResourceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteDeviceResourceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteLoraDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteProductRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteProductResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DeleteTopicRuleResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeAllDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeAllDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceClientKeyResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourcesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceResourcesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDeviceShadowResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDistributionRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskDistributionResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskStatisticsRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTaskStatisticsResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTasksRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeFirmwareTasksResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeLoraDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductResourceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductResourceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductResourcesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductResourcesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductTasksRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductTasksResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductsRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeProductsResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribePushResourceTaskStatisticsRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribePushResourceTaskStatisticsResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeResourceTasksRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeResourceTasksResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeTasksRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DescribeTasksResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DisableTopicRuleRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DisableTopicRuleResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/DownloadDeviceResourceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/DownloadDeviceResourceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/EditFirmwareRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/EditFirmwareResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/EnableTopicRuleRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/EnableTopicRuleResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/GetCOSURLRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/GetCOSURLResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/GetUserResourceInfoRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/GetUserResourceInfoResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/ListLogRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/ListLogResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/ListLogPayloadRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/ListLogPayloadResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/ListSDKLogRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/ListSDKLogResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishAsDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishAsDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishBroadcastMessageRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishBroadcastMessageResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishMessageRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishMessageResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishRRPCMessageRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishRRPCMessageResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishToDeviceRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/PublishToDeviceResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/ReplaceTopicRuleResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/ResetDeviceStateRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/ResetDeviceStateResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/RetryDeviceFirmwareTaskRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/RetryDeviceFirmwareTaskResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/SetProductsForbiddenStatusRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/SetProductsForbiddenStatusResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UnbindDevicesRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UnbindDevicesResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDeviceAvailableStateRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDeviceAvailableStateResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateProductDynamicRegisterRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateProductDynamicRegisterResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UpdateTopicPolicyResponse.h>
#include <tencentcloud/iotcloud/v20180614/model/UploadFirmwareRequest.h>
#include <tencentcloud/iotcloud/v20180614/model/UploadFirmwareResponse.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            class IotcloudClient : public AbstractClient
            {
            public:
                IotcloudClient(const Credential &credential, const std::string &region);
                IotcloudClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchUpdateFirmwareResponse> BatchUpdateFirmwareOutcome;
                typedef std::future<BatchUpdateFirmwareOutcome> BatchUpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::BatchUpdateFirmwareRequest&, BatchUpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDevicesResponse> BindDevicesOutcome;
                typedef std::future<BindDevicesOutcome> BindDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::BindDevicesRequest&, BindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDeviceFirmwareTaskResponse> CancelDeviceFirmwareTaskOutcome;
                typedef std::future<CancelDeviceFirmwareTaskOutcome> CancelDeviceFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CancelDeviceFirmwareTaskRequest&, CancelDeviceFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDeviceFirmwareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoraDeviceResponse> CreateLoraDeviceOutcome;
                typedef std::future<CreateLoraDeviceOutcome> CreateLoraDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateLoraDeviceRequest&, CreateLoraDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoraDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiDeviceResponse> CreateMultiDeviceOutcome;
                typedef std::future<CreateMultiDeviceOutcome> CreateMultiDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateMultiDeviceRequest&, CreateMultiDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiDevicesTaskResponse> CreateMultiDevicesTaskOutcome;
                typedef std::future<CreateMultiDevicesTaskOutcome> CreateMultiDevicesTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateMultiDevicesTaskRequest&, CreateMultiDevicesTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiDevicesTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFileUrlResponse> CreateTaskFileUrlOutcome;
                typedef std::future<CreateTaskFileUrlOutcome> CreateTaskFileUrlOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateTaskFileUrlRequest&, CreateTaskFileUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFileUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicPolicyResponse> CreateTopicPolicyOutcome;
                typedef std::future<CreateTopicPolicyOutcome> CreateTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateTopicPolicyRequest&, CreateTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicRuleResponse> CreateTopicRuleOutcome;
                typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateTopicRuleRequest&, CreateTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResourceResponse> DeleteDeviceResourceOutcome;
                typedef std::future<DeleteDeviceResourceOutcome> DeleteDeviceResourceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteDeviceResourceRequest&, DeleteDeviceResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoraDeviceResponse> DeleteLoraDeviceOutcome;
                typedef std::future<DeleteLoraDeviceOutcome> DeleteLoraDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteLoraDeviceRequest&, DeleteLoraDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoraDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicRuleResponse> DeleteTopicRuleOutcome;
                typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteTopicRuleRequest&, DeleteTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllDevicesResponse> DescribeAllDevicesOutcome;
                typedef std::future<DescribeAllDevicesOutcome> DescribeAllDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeAllDevicesRequest&, DescribeAllDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceClientKeyResponse> DescribeDeviceClientKeyOutcome;
                typedef std::future<DescribeDeviceClientKeyOutcome> DescribeDeviceClientKeyOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceClientKeyRequest&, DescribeDeviceClientKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceClientKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResourceResponse> DescribeDeviceResourceOutcome;
                typedef std::future<DescribeDeviceResourceOutcome> DescribeDeviceResourceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceResourceRequest&, DescribeDeviceResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResourcesResponse> DescribeDeviceResourcesOutcome;
                typedef std::future<DescribeDeviceResourcesOutcome> DescribeDeviceResourcesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceResourcesRequest&, DescribeDeviceResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceShadowResponse> DescribeDeviceShadowOutcome;
                typedef std::future<DescribeDeviceShadowOutcome> DescribeDeviceShadowOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceShadowRequest&, DescribeDeviceShadowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceShadowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareResponse> DescribeFirmwareOutcome;
                typedef std::future<DescribeFirmwareOutcome> DescribeFirmwareOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareRequest&, DescribeFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskResponse> DescribeFirmwareTaskOutcome;
                typedef std::future<DescribeFirmwareTaskOutcome> DescribeFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareTaskRequest&, DescribeFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskDevicesResponse> DescribeFirmwareTaskDevicesOutcome;
                typedef std::future<DescribeFirmwareTaskDevicesOutcome> DescribeFirmwareTaskDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareTaskDevicesRequest&, DescribeFirmwareTaskDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskDistributionResponse> DescribeFirmwareTaskDistributionOutcome;
                typedef std::future<DescribeFirmwareTaskDistributionOutcome> DescribeFirmwareTaskDistributionOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareTaskDistributionRequest&, DescribeFirmwareTaskDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskDistributionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskStatisticsResponse> DescribeFirmwareTaskStatisticsOutcome;
                typedef std::future<DescribeFirmwareTaskStatisticsOutcome> DescribeFirmwareTaskStatisticsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareTaskStatisticsRequest&, DescribeFirmwareTaskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTasksResponse> DescribeFirmwareTasksOutcome;
                typedef std::future<DescribeFirmwareTasksOutcome> DescribeFirmwareTasksOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeFirmwareTasksRequest&, DescribeFirmwareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoraDeviceResponse> DescribeLoraDeviceOutcome;
                typedef std::future<DescribeLoraDeviceOutcome> DescribeLoraDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeLoraDeviceRequest&, DescribeLoraDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoraDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMultiDevTaskResponse> DescribeMultiDevTaskOutcome;
                typedef std::future<DescribeMultiDevTaskOutcome> DescribeMultiDevTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeMultiDevTaskRequest&, DescribeMultiDevTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiDevTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMultiDevicesResponse> DescribeMultiDevicesOutcome;
                typedef std::future<DescribeMultiDevicesOutcome> DescribeMultiDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeMultiDevicesRequest&, DescribeMultiDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResourceResponse> DescribeProductResourceOutcome;
                typedef std::future<DescribeProductResourceOutcome> DescribeProductResourceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductResourceRequest&, DescribeProductResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResourcesResponse> DescribeProductResourcesOutcome;
                typedef std::future<DescribeProductResourcesOutcome> DescribeProductResourcesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductResourcesRequest&, DescribeProductResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductTaskResponse> DescribeProductTaskOutcome;
                typedef std::future<DescribeProductTaskOutcome> DescribeProductTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductTaskRequest&, DescribeProductTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductTasksResponse> DescribeProductTasksOutcome;
                typedef std::future<DescribeProductTasksOutcome> DescribeProductTasksOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductTasksRequest&, DescribeProductTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushResourceTaskStatisticsResponse> DescribePushResourceTaskStatisticsOutcome;
                typedef std::future<DescribePushResourceTaskStatisticsOutcome> DescribePushResourceTaskStatisticsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePushResourceTaskStatisticsRequest&, DescribePushResourceTaskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushResourceTaskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTasksResponse> DescribeResourceTasksOutcome;
                typedef std::future<DescribeResourceTasksOutcome> DescribeResourceTasksOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeResourceTasksRequest&, DescribeResourceTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTopicRuleResponse> DisableTopicRuleOutcome;
                typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DisableTopicRuleRequest&, DisableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadDeviceResourceResponse> DownloadDeviceResourceOutcome;
                typedef std::future<DownloadDeviceResourceOutcome> DownloadDeviceResourceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DownloadDeviceResourceRequest&, DownloadDeviceResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDeviceResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::EditFirmwareResponse> EditFirmwareOutcome;
                typedef std::future<EditFirmwareOutcome> EditFirmwareOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::EditFirmwareRequest&, EditFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTopicRuleResponse> EnableTopicRuleOutcome;
                typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::EnableTopicRuleRequest&, EnableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCOSURLResponse> GetCOSURLOutcome;
                typedef std::future<GetCOSURLOutcome> GetCOSURLOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::GetCOSURLRequest&, GetCOSURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCOSURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUserResourceInfoResponse> GetUserResourceInfoOutcome;
                typedef std::future<GetUserResourceInfoOutcome> GetUserResourceInfoOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::GetUserResourceInfoRequest&, GetUserResourceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUserResourceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLogResponse> ListLogOutcome;
                typedef std::future<ListLogOutcome> ListLogOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListLogRequest&, ListLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLogPayloadResponse> ListLogPayloadOutcome;
                typedef std::future<ListLogPayloadOutcome> ListLogPayloadOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListLogPayloadRequest&, ListLogPayloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLogPayloadAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSDKLogResponse> ListSDKLogOutcome;
                typedef std::future<ListSDKLogOutcome> ListSDKLogOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListSDKLogRequest&, ListSDKLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSDKLogAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishAsDeviceResponse> PublishAsDeviceOutcome;
                typedef std::future<PublishAsDeviceOutcome> PublishAsDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishAsDeviceRequest&, PublishAsDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishAsDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishBroadcastMessageResponse> PublishBroadcastMessageOutcome;
                typedef std::future<PublishBroadcastMessageOutcome> PublishBroadcastMessageOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishBroadcastMessageRequest&, PublishBroadcastMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishBroadcastMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishMessageResponse> PublishMessageOutcome;
                typedef std::future<PublishMessageOutcome> PublishMessageOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishMessageRequest&, PublishMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishRRPCMessageResponse> PublishRRPCMessageOutcome;
                typedef std::future<PublishRRPCMessageOutcome> PublishRRPCMessageOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishRRPCMessageRequest&, PublishRRPCMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishRRPCMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishToDeviceResponse> PublishToDeviceOutcome;
                typedef std::future<PublishToDeviceOutcome> PublishToDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishToDeviceRequest&, PublishToDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishToDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceTopicRuleResponse> ReplaceTopicRuleOutcome;
                typedef std::future<ReplaceTopicRuleOutcome> ReplaceTopicRuleOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ReplaceTopicRuleRequest&, ReplaceTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDeviceStateResponse> ResetDeviceStateOutcome;
                typedef std::future<ResetDeviceStateOutcome> ResetDeviceStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ResetDeviceStateRequest&, ResetDeviceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDeviceFirmwareTaskResponse> RetryDeviceFirmwareTaskOutcome;
                typedef std::future<RetryDeviceFirmwareTaskOutcome> RetryDeviceFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::RetryDeviceFirmwareTaskRequest&, RetryDeviceFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDeviceFirmwareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SetProductsForbiddenStatusResponse> SetProductsForbiddenStatusOutcome;
                typedef std::future<SetProductsForbiddenStatusOutcome> SetProductsForbiddenStatusOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::SetProductsForbiddenStatusRequest&, SetProductsForbiddenStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetProductsForbiddenStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDevicesResponse> UnbindDevicesOutcome;
                typedef std::future<UnbindDevicesOutcome> UnbindDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UnbindDevicesRequest&, UnbindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceAvailableStateResponse> UpdateDeviceAvailableStateOutcome;
                typedef std::future<UpdateDeviceAvailableStateOutcome> UpdateDeviceAvailableStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDeviceAvailableStateRequest&, UpdateDeviceAvailableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAvailableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceShadowResponse> UpdateDeviceShadowOutcome;
                typedef std::future<UpdateDeviceShadowOutcome> UpdateDeviceShadowOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDeviceShadowRequest&, UpdateDeviceShadowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceShadowAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProductDynamicRegisterResponse> UpdateProductDynamicRegisterOutcome;
                typedef std::future<UpdateProductDynamicRegisterOutcome> UpdateProductDynamicRegisterOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateProductDynamicRegisterRequest&, UpdateProductDynamicRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductDynamicRegisterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTopicPolicyResponse> UpdateTopicPolicyOutcome;
                typedef std::future<UpdateTopicPolicyOutcome> UpdateTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateTopicPolicyRequest&, UpdateTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFirmwareResponse> UploadFirmwareOutcome;
                typedef std::future<UploadFirmwareOutcome> UploadFirmwareOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UploadFirmwareRequest&, UploadFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFirmwareAsyncHandler;



                /**
                 *本接口（BatchUpdateFirmware）用于批量更新设备固件 
                 * @param req BatchUpdateFirmwareRequest
                 * @return BatchUpdateFirmwareOutcome
                 */
                BatchUpdateFirmwareOutcome BatchUpdateFirmware(const Model::BatchUpdateFirmwareRequest &request);
                void BatchUpdateFirmwareAsync(const Model::BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchUpdateFirmwareOutcomeCallable BatchUpdateFirmwareCallable(const Model::BatchUpdateFirmwareRequest& request);

                /**
                 *本接口（BindDevices）用于网关设备批量绑定子设备 
                 * @param req BindDevicesRequest
                 * @return BindDevicesOutcome
                 */
                BindDevicesOutcome BindDevices(const Model::BindDevicesRequest &request);
                void BindDevicesAsync(const Model::BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDevicesOutcomeCallable BindDevicesCallable(const Model::BindDevicesRequest& request);

                /**
                 *取消设备升级任务
                 * @param req CancelDeviceFirmwareTaskRequest
                 * @return CancelDeviceFirmwareTaskOutcome
                 */
                CancelDeviceFirmwareTaskOutcome CancelDeviceFirmwareTask(const Model::CancelDeviceFirmwareTaskRequest &request);
                void CancelDeviceFirmwareTaskAsync(const Model::CancelDeviceFirmwareTaskRequest& request, const CancelDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelDeviceFirmwareTaskOutcomeCallable CancelDeviceFirmwareTaskCallable(const Model::CancelDeviceFirmwareTaskRequest& request);

                /**
                 *本接口（CancelTask）用于取消一个未被调度的任务。 
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *本接口（CreateDevice）用于新建一个物联网通信设备。 
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *创建lora类型的设备
                 * @param req CreateLoraDeviceRequest
                 * @return CreateLoraDeviceOutcome
                 */
                CreateLoraDeviceOutcome CreateLoraDevice(const Model::CreateLoraDeviceRequest &request);
                void CreateLoraDeviceAsync(const Model::CreateLoraDeviceRequest& request, const CreateLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoraDeviceOutcomeCallable CreateLoraDeviceCallable(const Model::CreateLoraDeviceRequest& request);

                /**
                 *本接口（CreateMultiDevice）用于批量创建物联云设备。
                 * @param req CreateMultiDeviceRequest
                 * @return CreateMultiDeviceOutcome
                 */
                CreateMultiDeviceOutcome CreateMultiDevice(const Model::CreateMultiDeviceRequest &request);
                void CreateMultiDeviceAsync(const Model::CreateMultiDeviceRequest& request, const CreateMultiDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiDeviceOutcomeCallable CreateMultiDeviceCallable(const Model::CreateMultiDeviceRequest& request);

                /**
                 *本接口（CreateMultiDevicesTask）用于创建产品级别的批量创建设备任务
                 * @param req CreateMultiDevicesTaskRequest
                 * @return CreateMultiDevicesTaskOutcome
                 */
                CreateMultiDevicesTaskOutcome CreateMultiDevicesTask(const Model::CreateMultiDevicesTaskRequest &request);
                void CreateMultiDevicesTaskAsync(const Model::CreateMultiDevicesTaskRequest& request, const CreateMultiDevicesTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiDevicesTaskOutcomeCallable CreateMultiDevicesTaskCallable(const Model::CreateMultiDevicesTaskRequest& request);

                /**
                 *本接口（CreateProduct）用于创建一个新的物联网通信产品 
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *本接口（CreateTask）用于创建一个批量任务。目前此接口可以创建批量更新影子以及批量下发消息的任务 
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *本接口（CreateTaskFileUrl）用于获取产品级任务文件上传链接
                 * @param req CreateTaskFileUrlRequest
                 * @return CreateTaskFileUrlOutcome
                 */
                CreateTaskFileUrlOutcome CreateTaskFileUrl(const Model::CreateTaskFileUrlRequest &request);
                void CreateTaskFileUrlAsync(const Model::CreateTaskFileUrlRequest& request, const CreateTaskFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFileUrlOutcomeCallable CreateTaskFileUrlCallable(const Model::CreateTaskFileUrlRequest& request);

                /**
                 *本接口（CreateTopicPolicy）用于创建一个Topic 
                 * @param req CreateTopicPolicyRequest
                 * @return CreateTopicPolicyOutcome
                 */
                CreateTopicPolicyOutcome CreateTopicPolicy(const Model::CreateTopicPolicyRequest &request);
                void CreateTopicPolicyAsync(const Model::CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicPolicyOutcomeCallable CreateTopicPolicyCallable(const Model::CreateTopicPolicyRequest& request);

                /**
                 *本接口（CreateTopicRule）用于创建一个规则 
                 * @param req CreateTopicRuleRequest
                 * @return CreateTopicRuleOutcome
                 */
                CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest &request);
                void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request);

                /**
                 *本接口（DeleteDevice）用于删除物联网通信设备。 
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *本接口（DeleteDeviceResource）用于删除设备资源
                 * @param req DeleteDeviceResourceRequest
                 * @return DeleteDeviceResourceOutcome
                 */
                DeleteDeviceResourceOutcome DeleteDeviceResource(const Model::DeleteDeviceResourceRequest &request);
                void DeleteDeviceResourceAsync(const Model::DeleteDeviceResourceRequest& request, const DeleteDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceResourceOutcomeCallable DeleteDeviceResourceCallable(const Model::DeleteDeviceResourceRequest& request);

                /**
                 *删除lora类型的设备
                 * @param req DeleteLoraDeviceRequest
                 * @return DeleteLoraDeviceOutcome
                 */
                DeleteLoraDeviceOutcome DeleteLoraDevice(const Model::DeleteLoraDeviceRequest &request);
                void DeleteLoraDeviceAsync(const Model::DeleteLoraDeviceRequest& request, const DeleteLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoraDeviceOutcomeCallable DeleteLoraDeviceCallable(const Model::DeleteLoraDeviceRequest& request);

                /**
                 *本接口（DeleteProduct）用于删除一个物联网通信产品
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *本接口（DeleteTopicRule）用于删除规则
                 * @param req DeleteTopicRuleRequest
                 * @return DeleteTopicRuleOutcome
                 */
                DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest &request);
                void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request);

                /**
                 *查询所有设备列表
                 * @param req DescribeAllDevicesRequest
                 * @return DescribeAllDevicesOutcome
                 */
                DescribeAllDevicesOutcome DescribeAllDevices(const Model::DescribeAllDevicesRequest &request);
                void DescribeAllDevicesAsync(const Model::DescribeAllDevicesRequest& request, const DescribeAllDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllDevicesOutcomeCallable DescribeAllDevicesCallable(const Model::DescribeAllDevicesRequest& request);

                /**
                 *本接口（DescribeDevice）用于查看设备信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *获取证书认证类型设备的私钥，刚生成或者重置设备后仅可调用一次 
                 * @param req DescribeDeviceClientKeyRequest
                 * @return DescribeDeviceClientKeyOutcome
                 */
                DescribeDeviceClientKeyOutcome DescribeDeviceClientKey(const Model::DescribeDeviceClientKeyRequest &request);
                void DescribeDeviceClientKeyAsync(const Model::DescribeDeviceClientKeyRequest& request, const DescribeDeviceClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceClientKeyOutcomeCallable DescribeDeviceClientKeyCallable(const Model::DescribeDeviceClientKeyRequest& request);

                /**
                 *本接口（DescribeDeviceResource）用于查询设备资源详情。 
                 * @param req DescribeDeviceResourceRequest
                 * @return DescribeDeviceResourceOutcome
                 */
                DescribeDeviceResourceOutcome DescribeDeviceResource(const Model::DescribeDeviceResourceRequest &request);
                void DescribeDeviceResourceAsync(const Model::DescribeDeviceResourceRequest& request, const DescribeDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceResourceOutcomeCallable DescribeDeviceResourceCallable(const Model::DescribeDeviceResourceRequest& request);

                /**
                 *本接口（DescribeDeviceResources）用于查询设备资源列表。 
                 * @param req DescribeDeviceResourcesRequest
                 * @return DescribeDeviceResourcesOutcome
                 */
                DescribeDeviceResourcesOutcome DescribeDeviceResources(const Model::DescribeDeviceResourcesRequest &request);
                void DescribeDeviceResourcesAsync(const Model::DescribeDeviceResourcesRequest& request, const DescribeDeviceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceResourcesOutcomeCallable DescribeDeviceResourcesCallable(const Model::DescribeDeviceResourcesRequest& request);

                /**
                 *本接口（DescribeDeviceShadow）用于查询虚拟设备信息。 
                 * @param req DescribeDeviceShadowRequest
                 * @return DescribeDeviceShadowOutcome
                 */
                DescribeDeviceShadowOutcome DescribeDeviceShadow(const Model::DescribeDeviceShadowRequest &request);
                void DescribeDeviceShadowAsync(const Model::DescribeDeviceShadowRequest& request, const DescribeDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceShadowOutcomeCallable DescribeDeviceShadowCallable(const Model::DescribeDeviceShadowRequest& request);

                /**
                 *本接口（DescribeDevices）用于查询物联网通信设备的设备列表。 
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询固件信息
                 * @param req DescribeFirmwareRequest
                 * @return DescribeFirmwareOutcome
                 */
                DescribeFirmwareOutcome DescribeFirmware(const Model::DescribeFirmwareRequest &request);
                void DescribeFirmwareAsync(const Model::DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareOutcomeCallable DescribeFirmwareCallable(const Model::DescribeFirmwareRequest& request);

                /**
                 *查询固件升级任务详情
                 * @param req DescribeFirmwareTaskRequest
                 * @return DescribeFirmwareTaskOutcome
                 */
                DescribeFirmwareTaskOutcome DescribeFirmwareTask(const Model::DescribeFirmwareTaskRequest &request);
                void DescribeFirmwareTaskAsync(const Model::DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskOutcomeCallable DescribeFirmwareTaskCallable(const Model::DescribeFirmwareTaskRequest& request);

                /**
                 *查询固件升级任务的设备列表
                 * @param req DescribeFirmwareTaskDevicesRequest
                 * @return DescribeFirmwareTaskDevicesOutcome
                 */
                DescribeFirmwareTaskDevicesOutcome DescribeFirmwareTaskDevices(const Model::DescribeFirmwareTaskDevicesRequest &request);
                void DescribeFirmwareTaskDevicesAsync(const Model::DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskDevicesOutcomeCallable DescribeFirmwareTaskDevicesCallable(const Model::DescribeFirmwareTaskDevicesRequest& request);

                /**
                 *查询固件升级任务状态分布
                 * @param req DescribeFirmwareTaskDistributionRequest
                 * @return DescribeFirmwareTaskDistributionOutcome
                 */
                DescribeFirmwareTaskDistributionOutcome DescribeFirmwareTaskDistribution(const Model::DescribeFirmwareTaskDistributionRequest &request);
                void DescribeFirmwareTaskDistributionAsync(const Model::DescribeFirmwareTaskDistributionRequest& request, const DescribeFirmwareTaskDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskDistributionOutcomeCallable DescribeFirmwareTaskDistributionCallable(const Model::DescribeFirmwareTaskDistributionRequest& request);

                /**
                 *查询固件升级任务统计信息
                 * @param req DescribeFirmwareTaskStatisticsRequest
                 * @return DescribeFirmwareTaskStatisticsOutcome
                 */
                DescribeFirmwareTaskStatisticsOutcome DescribeFirmwareTaskStatistics(const Model::DescribeFirmwareTaskStatisticsRequest &request);
                void DescribeFirmwareTaskStatisticsAsync(const Model::DescribeFirmwareTaskStatisticsRequest& request, const DescribeFirmwareTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskStatisticsOutcomeCallable DescribeFirmwareTaskStatisticsCallable(const Model::DescribeFirmwareTaskStatisticsRequest& request);

                /**
                 *查询固件升级任务列表
                 * @param req DescribeFirmwareTasksRequest
                 * @return DescribeFirmwareTasksOutcome
                 */
                DescribeFirmwareTasksOutcome DescribeFirmwareTasks(const Model::DescribeFirmwareTasksRequest &request);
                void DescribeFirmwareTasksAsync(const Model::DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTasksOutcomeCallable DescribeFirmwareTasksCallable(const Model::DescribeFirmwareTasksRequest& request);

                /**
                 *获取lora类型设备的详细信息 
                 * @param req DescribeLoraDeviceRequest
                 * @return DescribeLoraDeviceOutcome
                 */
                DescribeLoraDeviceOutcome DescribeLoraDevice(const Model::DescribeLoraDeviceRequest &request);
                void DescribeLoraDeviceAsync(const Model::DescribeLoraDeviceRequest& request, const DescribeLoraDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoraDeviceOutcomeCallable DescribeLoraDeviceCallable(const Model::DescribeLoraDeviceRequest& request);

                /**
                 *本接口（DescribeMultiDevTask）用于查询批量创建设备任务的执行状态。
                 * @param req DescribeMultiDevTaskRequest
                 * @return DescribeMultiDevTaskOutcome
                 */
                DescribeMultiDevTaskOutcome DescribeMultiDevTask(const Model::DescribeMultiDevTaskRequest &request);
                void DescribeMultiDevTaskAsync(const Model::DescribeMultiDevTaskRequest& request, const DescribeMultiDevTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMultiDevTaskOutcomeCallable DescribeMultiDevTaskCallable(const Model::DescribeMultiDevTaskRequest& request);

                /**
                 *本接口（DescribeMultiDevices）用于查询批量创建设备的执行结果。
                 * @param req DescribeMultiDevicesRequest
                 * @return DescribeMultiDevicesOutcome
                 */
                DescribeMultiDevicesOutcome DescribeMultiDevices(const Model::DescribeMultiDevicesRequest &request);
                void DescribeMultiDevicesAsync(const Model::DescribeMultiDevicesRequest& request, const DescribeMultiDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMultiDevicesOutcomeCallable DescribeMultiDevicesCallable(const Model::DescribeMultiDevicesRequest& request);

                /**
                 *本接口（DescribeProduct）用于查看产品详情
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *本接口（DescribeProductResource）用于查询产品资源详情。 
                 * @param req DescribeProductResourceRequest
                 * @return DescribeProductResourceOutcome
                 */
                DescribeProductResourceOutcome DescribeProductResource(const Model::DescribeProductResourceRequest &request);
                void DescribeProductResourceAsync(const Model::DescribeProductResourceRequest& request, const DescribeProductResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductResourceOutcomeCallable DescribeProductResourceCallable(const Model::DescribeProductResourceRequest& request);

                /**
                 *本接口（DescribeProductResources）用于查询产品资源列表。 
                 * @param req DescribeProductResourcesRequest
                 * @return DescribeProductResourcesOutcome
                 */
                DescribeProductResourcesOutcome DescribeProductResources(const Model::DescribeProductResourcesRequest &request);
                void DescribeProductResourcesAsync(const Model::DescribeProductResourcesRequest& request, const DescribeProductResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductResourcesOutcomeCallable DescribeProductResourcesCallable(const Model::DescribeProductResourcesRequest& request);

                /**
                 *本接口（DescribeProductTask）用于查看产品级别的任务信息
                 * @param req DescribeProductTaskRequest
                 * @return DescribeProductTaskOutcome
                 */
                DescribeProductTaskOutcome DescribeProductTask(const Model::DescribeProductTaskRequest &request);
                void DescribeProductTaskAsync(const Model::DescribeProductTaskRequest& request, const DescribeProductTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductTaskOutcomeCallable DescribeProductTaskCallable(const Model::DescribeProductTaskRequest& request);

                /**
                 *本接口（DescribeProductTasks）用于查看产品级别的任务列表
                 * @param req DescribeProductTasksRequest
                 * @return DescribeProductTasksOutcome
                 */
                DescribeProductTasksOutcome DescribeProductTasks(const Model::DescribeProductTasksRequest &request);
                void DescribeProductTasksAsync(const Model::DescribeProductTasksRequest& request, const DescribeProductTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductTasksOutcomeCallable DescribeProductTasksCallable(const Model::DescribeProductTasksRequest& request);

                /**
                 *本接口（DescribeProducts）用于列出产品列表。 
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *查询推送资源任务统计信息
                 * @param req DescribePushResourceTaskStatisticsRequest
                 * @return DescribePushResourceTaskStatisticsOutcome
                 */
                DescribePushResourceTaskStatisticsOutcome DescribePushResourceTaskStatistics(const Model::DescribePushResourceTaskStatisticsRequest &request);
                void DescribePushResourceTaskStatisticsAsync(const Model::DescribePushResourceTaskStatisticsRequest& request, const DescribePushResourceTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushResourceTaskStatisticsOutcomeCallable DescribePushResourceTaskStatisticsCallable(const Model::DescribePushResourceTaskStatisticsRequest& request);

                /**
                 *查询资源推送任务列表
                 * @param req DescribeResourceTasksRequest
                 * @return DescribeResourceTasksOutcome
                 */
                DescribeResourceTasksOutcome DescribeResourceTasks(const Model::DescribeResourceTasksRequest &request);
                void DescribeResourceTasksAsync(const Model::DescribeResourceTasksRequest& request, const DescribeResourceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTasksOutcomeCallable DescribeResourceTasksCallable(const Model::DescribeResourceTasksRequest& request);

                /**
                 *本接口（DescribeTask）用于查询一个已创建任务的详情，任务保留一个月 
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *本接口（DescribeTasks）用于查询已创建的任务列表，任务保留一个月 
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *本接口（DisableTopicRule）用于禁用规则
                 * @param req DisableTopicRuleRequest
                 * @return DisableTopicRuleOutcome
                 */
                DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest &request);
                void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request);

                /**
                 *本接口（DownloadDeviceResource）用于下载设备资源
                 * @param req DownloadDeviceResourceRequest
                 * @return DownloadDeviceResourceOutcome
                 */
                DownloadDeviceResourceOutcome DownloadDeviceResource(const Model::DownloadDeviceResourceRequest &request);
                void DownloadDeviceResourceAsync(const Model::DownloadDeviceResourceRequest& request, const DownloadDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadDeviceResourceOutcomeCallable DownloadDeviceResourceCallable(const Model::DownloadDeviceResourceRequest& request);

                /**
                 *编辑固件信息
                 * @param req EditFirmwareRequest
                 * @return EditFirmwareOutcome
                 */
                EditFirmwareOutcome EditFirmware(const Model::EditFirmwareRequest &request);
                void EditFirmwareAsync(const Model::EditFirmwareRequest& request, const EditFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditFirmwareOutcomeCallable EditFirmwareCallable(const Model::EditFirmwareRequest& request);

                /**
                 *本接口（EnableTopicRule）用于启用规则 
                 * @param req EnableTopicRuleRequest
                 * @return EnableTopicRuleOutcome
                 */
                EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest &request);
                void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request);

                /**
                 *本接口（GetCOSURL）用于获取固件存储在COS的URL 
                 * @param req GetCOSURLRequest
                 * @return GetCOSURLOutcome
                 */
                GetCOSURLOutcome GetCOSURL(const Model::GetCOSURLRequest &request);
                void GetCOSURLAsync(const Model::GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCOSURLOutcomeCallable GetCOSURLCallable(const Model::GetCOSURLRequest& request);

                /**
                 *本接口（GetUserResourceInfo）用于查询用户资源使用信息。
                 * @param req GetUserResourceInfoRequest
                 * @return GetUserResourceInfoOutcome
                 */
                GetUserResourceInfoOutcome GetUserResourceInfo(const Model::GetUserResourceInfoRequest &request);
                void GetUserResourceInfoAsync(const Model::GetUserResourceInfoRequest& request, const GetUserResourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUserResourceInfoOutcomeCallable GetUserResourceInfoCallable(const Model::GetUserResourceInfoRequest& request);

                /**
                 *本接口（ListLog）用于查看日志信息 
                 * @param req ListLogRequest
                 * @return ListLogOutcome
                 */
                ListLogOutcome ListLog(const Model::ListLogRequest &request);
                void ListLogAsync(const Model::ListLogRequest& request, const ListLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLogOutcomeCallable ListLogCallable(const Model::ListLogRequest& request);

                /**
                 *获取日志内容列表
                 * @param req ListLogPayloadRequest
                 * @return ListLogPayloadOutcome
                 */
                ListLogPayloadOutcome ListLogPayload(const Model::ListLogPayloadRequest &request);
                void ListLogPayloadAsync(const Model::ListLogPayloadRequest& request, const ListLogPayloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLogPayloadOutcomeCallable ListLogPayloadCallable(const Model::ListLogPayloadRequest& request);

                /**
                 *获取设备上报的日志
                 * @param req ListSDKLogRequest
                 * @return ListSDKLogOutcome
                 */
                ListSDKLogOutcome ListSDKLog(const Model::ListSDKLogRequest &request);
                void ListSDKLogAsync(const Model::ListSDKLogRequest& request, const ListSDKLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSDKLogOutcomeCallable ListSDKLogCallable(const Model::ListSDKLogRequest& request);

                /**
                 *模拟lora类型的设备端向服务器端发送消息
                 * @param req PublishAsDeviceRequest
                 * @return PublishAsDeviceOutcome
                 */
                PublishAsDeviceOutcome PublishAsDevice(const Model::PublishAsDeviceRequest &request);
                void PublishAsDeviceAsync(const Model::PublishAsDeviceRequest& request, const PublishAsDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishAsDeviceOutcomeCallable PublishAsDeviceCallable(const Model::PublishAsDeviceRequest& request);

                /**
                 *发布广播消息
                 * @param req PublishBroadcastMessageRequest
                 * @return PublishBroadcastMessageOutcome
                 */
                PublishBroadcastMessageOutcome PublishBroadcastMessage(const Model::PublishBroadcastMessageRequest &request);
                void PublishBroadcastMessageAsync(const Model::PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishBroadcastMessageOutcomeCallable PublishBroadcastMessageCallable(const Model::PublishBroadcastMessageRequest& request);

                /**
                 *本接口（PublishMessage）用于向某个主题发消息。 
                 * @param req PublishMessageRequest
                 * @return PublishMessageOutcome
                 */
                PublishMessageOutcome PublishMessage(const Model::PublishMessageRequest &request);
                void PublishMessageAsync(const Model::PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMessageOutcomeCallable PublishMessageCallable(const Model::PublishMessageRequest& request);

                /**
                 *发布RRPC消息
                 * @param req PublishRRPCMessageRequest
                 * @return PublishRRPCMessageOutcome
                 */
                PublishRRPCMessageOutcome PublishRRPCMessage(const Model::PublishRRPCMessageRequest &request);
                void PublishRRPCMessageAsync(const Model::PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishRRPCMessageOutcomeCallable PublishRRPCMessageCallable(const Model::PublishRRPCMessageRequest& request);

                /**
                 *服务器端下发消息给lora类型的设备
                 * @param req PublishToDeviceRequest
                 * @return PublishToDeviceOutcome
                 */
                PublishToDeviceOutcome PublishToDevice(const Model::PublishToDeviceRequest &request);
                void PublishToDeviceAsync(const Model::PublishToDeviceRequest& request, const PublishToDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishToDeviceOutcomeCallable PublishToDeviceCallable(const Model::PublishToDeviceRequest& request);

                /**
                 *本接口（ReplaceTopicRule）用于修改替换规则 
                 * @param req ReplaceTopicRuleRequest
                 * @return ReplaceTopicRuleOutcome
                 */
                ReplaceTopicRuleOutcome ReplaceTopicRule(const Model::ReplaceTopicRuleRequest &request);
                void ReplaceTopicRuleAsync(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceTopicRuleOutcomeCallable ReplaceTopicRuleCallable(const Model::ReplaceTopicRuleRequest& request);

                /**
                 *重置设备的连接状态 
                 * @param req ResetDeviceStateRequest
                 * @return ResetDeviceStateOutcome
                 */
                ResetDeviceStateOutcome ResetDeviceState(const Model::ResetDeviceStateRequest &request);
                void ResetDeviceStateAsync(const Model::ResetDeviceStateRequest& request, const ResetDeviceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDeviceStateOutcomeCallable ResetDeviceStateCallable(const Model::ResetDeviceStateRequest& request);

                /**
                 *重试设备升级任务
                 * @param req RetryDeviceFirmwareTaskRequest
                 * @return RetryDeviceFirmwareTaskOutcome
                 */
                RetryDeviceFirmwareTaskOutcome RetryDeviceFirmwareTask(const Model::RetryDeviceFirmwareTaskRequest &request);
                void RetryDeviceFirmwareTaskAsync(const Model::RetryDeviceFirmwareTaskRequest& request, const RetryDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDeviceFirmwareTaskOutcomeCallable RetryDeviceFirmwareTaskCallable(const Model::RetryDeviceFirmwareTaskRequest& request);

                /**
                 *批量设置产品禁用状态
                 * @param req SetProductsForbiddenStatusRequest
                 * @return SetProductsForbiddenStatusOutcome
                 */
                SetProductsForbiddenStatusOutcome SetProductsForbiddenStatus(const Model::SetProductsForbiddenStatusRequest &request);
                void SetProductsForbiddenStatusAsync(const Model::SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetProductsForbiddenStatusOutcomeCallable SetProductsForbiddenStatusCallable(const Model::SetProductsForbiddenStatusRequest& request);

                /**
                 *本接口（UnbindDevices）用于网关设备批量解绑子设备 
                 * @param req UnbindDevicesRequest
                 * @return UnbindDevicesOutcome
                 */
                UnbindDevicesOutcome UnbindDevices(const Model::UnbindDevicesRequest &request);
                void UnbindDevicesAsync(const Model::UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDevicesOutcomeCallable UnbindDevicesCallable(const Model::UnbindDevicesRequest& request);

                /**
                 *启用或者禁用设备 
                 * @param req UpdateDeviceAvailableStateRequest
                 * @return UpdateDeviceAvailableStateOutcome
                 */
                UpdateDeviceAvailableStateOutcome UpdateDeviceAvailableState(const Model::UpdateDeviceAvailableStateRequest &request);
                void UpdateDeviceAvailableStateAsync(const Model::UpdateDeviceAvailableStateRequest& request, const UpdateDeviceAvailableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceAvailableStateOutcomeCallable UpdateDeviceAvailableStateCallable(const Model::UpdateDeviceAvailableStateRequest& request);

                /**
                 *本接口（UpdateDeviceShadow）用于更新虚拟设备信息。
                 * @param req UpdateDeviceShadowRequest
                 * @return UpdateDeviceShadowOutcome
                 */
                UpdateDeviceShadowOutcome UpdateDeviceShadow(const Model::UpdateDeviceShadowRequest &request);
                void UpdateDeviceShadowAsync(const Model::UpdateDeviceShadowRequest& request, const UpdateDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceShadowOutcomeCallable UpdateDeviceShadowCallable(const Model::UpdateDeviceShadowRequest& request);

                /**
                 *批量启用或者禁用设备 
                 * @param req UpdateDevicesEnableStateRequest
                 * @return UpdateDevicesEnableStateOutcome
                 */
                UpdateDevicesEnableStateOutcome UpdateDevicesEnableState(const Model::UpdateDevicesEnableStateRequest &request);
                void UpdateDevicesEnableStateAsync(const Model::UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicesEnableStateOutcomeCallable UpdateDevicesEnableStateCallable(const Model::UpdateDevicesEnableStateRequest& request);

                /**
                 *更新产品动态注册的配置 
                 * @param req UpdateProductDynamicRegisterRequest
                 * @return UpdateProductDynamicRegisterOutcome
                 */
                UpdateProductDynamicRegisterOutcome UpdateProductDynamicRegister(const Model::UpdateProductDynamicRegisterRequest &request);
                void UpdateProductDynamicRegisterAsync(const Model::UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProductDynamicRegisterOutcomeCallable UpdateProductDynamicRegisterCallable(const Model::UpdateProductDynamicRegisterRequest& request);

                /**
                 *本接口（UpdateTopicPolicy）用于更新Topic信息
                 * @param req UpdateTopicPolicyRequest
                 * @return UpdateTopicPolicyOutcome
                 */
                UpdateTopicPolicyOutcome UpdateTopicPolicy(const Model::UpdateTopicPolicyRequest &request);
                void UpdateTopicPolicyAsync(const Model::UpdateTopicPolicyRequest& request, const UpdateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTopicPolicyOutcomeCallable UpdateTopicPolicyCallable(const Model::UpdateTopicPolicyRequest& request);

                /**
                 *本接口（UploadFirmware）用于上传设备固件信息 
                 * @param req UploadFirmwareRequest
                 * @return UploadFirmwareOutcome
                 */
                UploadFirmwareOutcome UploadFirmware(const Model::UploadFirmwareRequest &request);
                void UploadFirmwareAsync(const Model::UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFirmwareOutcomeCallable UploadFirmwareCallable(const Model::UploadFirmwareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_IOTCLOUDCLIENT_H_

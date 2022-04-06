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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/CreatePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/CreatePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeletePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeletePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductPrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductPrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/ListLogRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/ListLogResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/ListLogPayloadRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/ListLogPayloadResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/ListSDKLogRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/ListSDKLogResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/PublishBroadcastMessageRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/PublishBroadcastMessageResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicePSKRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicePSKResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductPrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductPrivateCAResponse.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            class IotcloudClient : public AbstractClient
            {
            public:
                IotcloudClient(const Credential &credential, const std::string &region);
                IotcloudClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateCAResponse> CreatePrivateCAOutcome;
                typedef std::future<CreatePrivateCAOutcome> CreatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreatePrivateCARequest&, CreatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateCAResponse> DeletePrivateCAOutcome;
                typedef std::future<DeletePrivateCAOutcome> DeletePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeletePrivateCARequest&, DeletePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductPrivateCAResponse> DeleteProductPrivateCAOutcome;
                typedef std::future<DeleteProductPrivateCAOutcome> DeleteProductPrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteProductPrivateCARequest&, DeleteProductPrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductPrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCAResponse> DescribePrivateCAOutcome;
                typedef std::future<DescribePrivateCAOutcome> DescribePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCARequest&, DescribePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCABindedProductsResponse> DescribePrivateCABindedProductsOutcome;
                typedef std::future<DescribePrivateCABindedProductsOutcome> DescribePrivateCABindedProductsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCABindedProductsRequest&, DescribePrivateCABindedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCABindedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCAsResponse> DescribePrivateCAsOutcome;
                typedef std::future<DescribePrivateCAsOutcome> DescribePrivateCAsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCAsRequest&, DescribePrivateCAsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductCAResponse> DescribeProductCAOutcome;
                typedef std::future<DescribeProductCAOutcome> DescribeProductCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductCARequest&, DescribeProductCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductCAAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLogResponse> ListLogOutcome;
                typedef std::future<ListLogOutcome> ListLogOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListLogRequest&, ListLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLogAsyncHandler;
                typedef Outcome<Core::Error, Model::ListLogPayloadResponse> ListLogPayloadOutcome;
                typedef std::future<ListLogPayloadOutcome> ListLogPayloadOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListLogPayloadRequest&, ListLogPayloadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLogPayloadAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSDKLogResponse> ListSDKLogOutcome;
                typedef std::future<ListSDKLogOutcome> ListSDKLogOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::ListSDKLogRequest&, ListSDKLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSDKLogAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishBroadcastMessageResponse> PublishBroadcastMessageOutcome;
                typedef std::future<PublishBroadcastMessageOutcome> PublishBroadcastMessageOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::PublishBroadcastMessageRequest&, PublishBroadcastMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishBroadcastMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::SetProductsForbiddenStatusResponse> SetProductsForbiddenStatusOutcome;
                typedef std::future<SetProductsForbiddenStatusOutcome> SetProductsForbiddenStatusOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::SetProductsForbiddenStatusRequest&, SetProductsForbiddenStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetProductsForbiddenStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceLogLevelResponse> UpdateDeviceLogLevelOutcome;
                typedef std::future<UpdateDeviceLogLevelOutcome> UpdateDeviceLogLevelOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDeviceLogLevelRequest&, UpdateDeviceLogLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceLogLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicePSKResponse> UpdateDevicePSKOutcome;
                typedef std::future<UpdateDevicePSKOutcome> UpdateDevicePSKOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDevicePSKRequest&, UpdateDevicePSKOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicePSKAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrivateCAResponse> UpdatePrivateCAOutcome;
                typedef std::future<UpdatePrivateCAOutcome> UpdatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdatePrivateCARequest&, UpdatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProductDynamicRegisterResponse> UpdateProductDynamicRegisterOutcome;
                typedef std::future<UpdateProductDynamicRegisterOutcome> UpdateProductDynamicRegisterOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateProductDynamicRegisterRequest&, UpdateProductDynamicRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductDynamicRegisterAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProductPrivateCAResponse> UpdateProductPrivateCAOutcome;
                typedef std::future<UpdateProductPrivateCAOutcome> UpdateProductPrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateProductPrivateCARequest&, UpdateProductPrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductPrivateCAAsyncHandler;



                /**
                 *本接口（CreateDevice）用于新建一个物联网通信设备。 
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *创建私有CA证书
                 * @param req CreatePrivateCARequest
                 * @return CreatePrivateCAOutcome
                 */
                CreatePrivateCAOutcome CreatePrivateCA(const Model::CreatePrivateCARequest &request);
                void CreatePrivateCAAsync(const Model::CreatePrivateCARequest& request, const CreatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateCAOutcomeCallable CreatePrivateCACallable(const Model::CreatePrivateCARequest& request);

                /**
                 *本接口（DeleteDevice）用于删除物联网通信设备。 
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *删除私有CA证书
                 * @param req DeletePrivateCARequest
                 * @return DeletePrivateCAOutcome
                 */
                DeletePrivateCAOutcome DeletePrivateCA(const Model::DeletePrivateCARequest &request);
                void DeletePrivateCAAsync(const Model::DeletePrivateCARequest& request, const DeletePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateCAOutcomeCallable DeletePrivateCACallable(const Model::DeletePrivateCARequest& request);

                /**
                 *本接口（DeleteProduct）用于删除一个物联网通信产品
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *删除产品的私有CA证书
                 * @param req DeleteProductPrivateCARequest
                 * @return DeleteProductPrivateCAOutcome
                 */
                DeleteProductPrivateCAOutcome DeleteProductPrivateCA(const Model::DeleteProductPrivateCARequest &request);
                void DeleteProductPrivateCAAsync(const Model::DeleteProductPrivateCARequest& request, const DeleteProductPrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductPrivateCAOutcomeCallable DeleteProductPrivateCACallable(const Model::DeleteProductPrivateCARequest& request);

                /**
                 *本接口（DescribeDevice）用于查看设备信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *本接口（DescribeDevices）用于查询物联网通信设备的设备列表。 
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *查询私有化CA信息
                 * @param req DescribePrivateCARequest
                 * @return DescribePrivateCAOutcome
                 */
                DescribePrivateCAOutcome DescribePrivateCA(const Model::DescribePrivateCARequest &request);
                void DescribePrivateCAAsync(const Model::DescribePrivateCARequest& request, const DescribePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCAOutcomeCallable DescribePrivateCACallable(const Model::DescribePrivateCARequest& request);

                /**
                 *查询私有CA绑定的产品列表
                 * @param req DescribePrivateCABindedProductsRequest
                 * @return DescribePrivateCABindedProductsOutcome
                 */
                DescribePrivateCABindedProductsOutcome DescribePrivateCABindedProducts(const Model::DescribePrivateCABindedProductsRequest &request);
                void DescribePrivateCABindedProductsAsync(const Model::DescribePrivateCABindedProductsRequest& request, const DescribePrivateCABindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCABindedProductsOutcomeCallable DescribePrivateCABindedProductsCallable(const Model::DescribePrivateCABindedProductsRequest& request);

                /**
                 *查询私有CA证书列表
                 * @param req DescribePrivateCAsRequest
                 * @return DescribePrivateCAsOutcome
                 */
                DescribePrivateCAsOutcome DescribePrivateCAs(const Model::DescribePrivateCAsRequest &request);
                void DescribePrivateCAsAsync(const Model::DescribePrivateCAsRequest& request, const DescribePrivateCAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCAsOutcomeCallable DescribePrivateCAsCallable(const Model::DescribePrivateCAsRequest& request);

                /**
                 *本接口（DescribeProduct）用于查看产品详情
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *查询产品绑定的CA证书
                 * @param req DescribeProductCARequest
                 * @return DescribeProductCAOutcome
                 */
                DescribeProductCAOutcome DescribeProductCA(const Model::DescribeProductCARequest &request);
                void DescribeProductCAAsync(const Model::DescribeProductCARequest& request, const DescribeProductCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductCAOutcomeCallable DescribeProductCACallable(const Model::DescribeProductCARequest& request);

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
                 *发布广播消息
                 * @param req PublishBroadcastMessageRequest
                 * @return PublishBroadcastMessageOutcome
                 */
                PublishBroadcastMessageOutcome PublishBroadcastMessage(const Model::PublishBroadcastMessageRequest &request);
                void PublishBroadcastMessageAsync(const Model::PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishBroadcastMessageOutcomeCallable PublishBroadcastMessageCallable(const Model::PublishBroadcastMessageRequest& request);

                /**
                 *批量设置产品禁用状态
                 * @param req SetProductsForbiddenStatusRequest
                 * @return SetProductsForbiddenStatusOutcome
                 */
                SetProductsForbiddenStatusOutcome SetProductsForbiddenStatus(const Model::SetProductsForbiddenStatusRequest &request);
                void SetProductsForbiddenStatusAsync(const Model::SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetProductsForbiddenStatusOutcomeCallable SetProductsForbiddenStatusCallable(const Model::SetProductsForbiddenStatusRequest& request);

                /**
                 *设置设备上报的日志级别  
                 * @param req UpdateDeviceLogLevelRequest
                 * @return UpdateDeviceLogLevelOutcome
                 */
                UpdateDeviceLogLevelOutcome UpdateDeviceLogLevel(const Model::UpdateDeviceLogLevelRequest &request);
                void UpdateDeviceLogLevelAsync(const Model::UpdateDeviceLogLevelRequest& request, const UpdateDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceLogLevelOutcomeCallable UpdateDeviceLogLevelCallable(const Model::UpdateDeviceLogLevelRequest& request);

                /**
                 *本接口（UpdateDevicePSK）用于更新设备的PSK 
                 * @param req UpdateDevicePSKRequest
                 * @return UpdateDevicePSKOutcome
                 */
                UpdateDevicePSKOutcome UpdateDevicePSK(const Model::UpdateDevicePSKRequest &request);
                void UpdateDevicePSKAsync(const Model::UpdateDevicePSKRequest& request, const UpdateDevicePSKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicePSKOutcomeCallable UpdateDevicePSKCallable(const Model::UpdateDevicePSKRequest& request);

                /**
                 *批量启用或者禁用设备 
                 * @param req UpdateDevicesEnableStateRequest
                 * @return UpdateDevicesEnableStateOutcome
                 */
                UpdateDevicesEnableStateOutcome UpdateDevicesEnableState(const Model::UpdateDevicesEnableStateRequest &request);
                void UpdateDevicesEnableStateAsync(const Model::UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicesEnableStateOutcomeCallable UpdateDevicesEnableStateCallable(const Model::UpdateDevicesEnableStateRequest& request);

                /**
                 *更新私有CA证书
                 * @param req UpdatePrivateCARequest
                 * @return UpdatePrivateCAOutcome
                 */
                UpdatePrivateCAOutcome UpdatePrivateCA(const Model::UpdatePrivateCARequest &request);
                void UpdatePrivateCAAsync(const Model::UpdatePrivateCARequest& request, const UpdatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrivateCAOutcomeCallable UpdatePrivateCACallable(const Model::UpdatePrivateCARequest& request);

                /**
                 *更新产品动态注册的配置 
                 * @param req UpdateProductDynamicRegisterRequest
                 * @return UpdateProductDynamicRegisterOutcome
                 */
                UpdateProductDynamicRegisterOutcome UpdateProductDynamicRegister(const Model::UpdateProductDynamicRegisterRequest &request);
                void UpdateProductDynamicRegisterAsync(const Model::UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProductDynamicRegisterOutcomeCallable UpdateProductDynamicRegisterCallable(const Model::UpdateProductDynamicRegisterRequest& request);

                /**
                 *更新产品的私有CA
                 * @param req UpdateProductPrivateCARequest
                 * @return UpdateProductPrivateCAOutcome
                 */
                UpdateProductPrivateCAOutcome UpdateProductPrivateCA(const Model::UpdateProductPrivateCARequest &request);
                void UpdateProductPrivateCAAsync(const Model::UpdateProductPrivateCARequest& request, const UpdateProductPrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProductPrivateCAOutcomeCallable UpdateProductPrivateCACallable(const Model::UpdateProductPrivateCARequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_

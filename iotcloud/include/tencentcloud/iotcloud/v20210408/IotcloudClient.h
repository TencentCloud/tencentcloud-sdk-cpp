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
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCAResponse.h>


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

                typedef Outcome<Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Error, Model::CreatePrivateCAResponse> CreatePrivateCAOutcome;
                typedef std::future<CreatePrivateCAOutcome> CreatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreatePrivateCARequest&, CreatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateCAAsyncHandler;
                typedef Outcome<Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Error, Model::DeletePrivateCAResponse> DeletePrivateCAOutcome;
                typedef std::future<DeletePrivateCAOutcome> DeletePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeletePrivateCARequest&, DeletePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateCAAsyncHandler;
                typedef Outcome<Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Error, Model::DescribePrivateCAResponse> DescribePrivateCAOutcome;
                typedef std::future<DescribePrivateCAOutcome> DescribePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCARequest&, DescribePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAAsyncHandler;
                typedef Outcome<Error, Model::DescribePrivateCABindedProductsResponse> DescribePrivateCABindedProductsOutcome;
                typedef std::future<DescribePrivateCABindedProductsOutcome> DescribePrivateCABindedProductsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCABindedProductsRequest&, DescribePrivateCABindedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCABindedProductsAsyncHandler;
                typedef Outcome<Error, Model::DescribePrivateCAsResponse> DescribePrivateCAsOutcome;
                typedef std::future<DescribePrivateCAsOutcome> DescribePrivateCAsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCAsRequest&, DescribePrivateCAsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAsAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductCAResponse> DescribeProductCAOutcome;
                typedef std::future<DescribeProductCAOutcome> DescribeProductCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductCARequest&, DescribeProductCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductCAAsyncHandler;
                typedef Outcome<Error, Model::UpdateDeviceLogLevelResponse> UpdateDeviceLogLevelOutcome;
                typedef std::future<UpdateDeviceLogLevelOutcome> UpdateDeviceLogLevelOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDeviceLogLevelRequest&, UpdateDeviceLogLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceLogLevelAsyncHandler;
                typedef Outcome<Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Error, Model::UpdatePrivateCAResponse> UpdatePrivateCAOutcome;
                typedef std::future<UpdatePrivateCAOutcome> UpdatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdatePrivateCARequest&, UpdatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateCAAsyncHandler;



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
                 *设置设备上报的日志级别  
                 * @param req UpdateDeviceLogLevelRequest
                 * @return UpdateDeviceLogLevelOutcome
                 */
                UpdateDeviceLogLevelOutcome UpdateDeviceLogLevel(const Model::UpdateDeviceLogLevelRequest &request);
                void UpdateDeviceLogLevelAsync(const Model::UpdateDeviceLogLevelRequest& request, const UpdateDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceLogLevelOutcomeCallable UpdateDeviceLogLevelCallable(const Model::UpdateDeviceLogLevelRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_

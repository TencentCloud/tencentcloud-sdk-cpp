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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotvideo/v20201215/model/CheckForwardAuthRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CheckForwardAuthResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateBatchRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateBatchResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCategoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCategoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceCommLogRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceCommLogResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceEventHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceEventHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ImportModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ImportModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/SetForwardAuthRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/SetForwardAuthResponse.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            class IotvideoClient : public AbstractClient
            {
            public:
                IotvideoClient(const Credential &credential, const std::string &region);
                IotvideoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CheckForwardAuthResponse> CheckForwardAuthOutcome;
                typedef std::future<CheckForwardAuthOutcome> CheckForwardAuthOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CheckForwardAuthRequest&, CheckForwardAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckForwardAuthAsyncHandler;
                typedef Outcome<Error, Model::CreateBatchResponse> CreateBatchOutcome;
                typedef std::future<CreateBatchOutcome> CreateBatchOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateBatchRequest&, CreateBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchAsyncHandler;
                typedef Outcome<Error, Model::CreateForwardRuleResponse> CreateForwardRuleOutcome;
                typedef std::future<CreateForwardRuleOutcome> CreateForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateForwardRuleRequest&, CreateForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Error, Model::DeleteForwardRuleResponse> DeleteForwardRuleOutcome;
                typedef std::future<DeleteForwardRuleOutcome> DeleteForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteForwardRuleRequest&, DeleteForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeBatchResponse> DescribeBatchOutcome;
                typedef std::future<DescribeBatchOutcome> DescribeBatchOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBatchRequest&, DescribeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchAsyncHandler;
                typedef Outcome<Error, Model::DescribeBatchsResponse> DescribeBatchsOutcome;
                typedef std::future<DescribeBatchsOutcome> DescribeBatchsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBatchsRequest&, DescribeBatchsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCategoryResponse> DescribeCategoryOutcome;
                typedef std::future<DescribeCategoryOutcome> DescribeCategoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCategoryRequest&, DescribeCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceActionHistoryResponse> DescribeDeviceActionHistoryOutcome;
                typedef std::future<DescribeDeviceActionHistoryOutcome> DescribeDeviceActionHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceActionHistoryRequest&, DescribeDeviceActionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceActionHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceCommLogResponse> DescribeDeviceCommLogOutcome;
                typedef std::future<DescribeDeviceCommLogOutcome> DescribeDeviceCommLogOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceCommLogRequest&, DescribeDeviceCommLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceCommLogAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataResponse> DescribeDeviceDataOutcome;
                typedef std::future<DescribeDeviceDataOutcome> DescribeDeviceDataOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceDataRequest&, DescribeDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataHistoryResponse> DescribeDeviceDataHistoryOutcome;
                typedef std::future<DescribeDeviceDataHistoryOutcome> DescribeDeviceDataHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceDataHistoryRequest&, DescribeDeviceDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceEventHistoryResponse> DescribeDeviceEventHistoryOutcome;
                typedef std::future<DescribeDeviceEventHistoryOutcome> DescribeDeviceEventHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceEventHistoryRequest&, DescribeDeviceEventHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceEventHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Error, Model::DescribeForwardRuleResponse> DescribeForwardRuleOutcome;
                typedef std::future<DescribeForwardRuleOutcome> DescribeForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeForwardRuleRequest&, DescribeForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeModelDefinitionResponse> DescribeModelDefinitionOutcome;
                typedef std::future<DescribeModelDefinitionOutcome> DescribeModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeModelDefinitionRequest&, DescribeModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Error, Model::ImportModelDefinitionResponse> ImportModelDefinitionOutcome;
                typedef std::future<ImportModelDefinitionOutcome> ImportModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ImportModelDefinitionRequest&, ImportModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::ModifyDeviceResponse> ModifyDeviceOutcome;
                typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyDeviceRequest&, ModifyDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
                typedef Outcome<Error, Model::ModifyForwardRuleResponse> ModifyForwardRuleOutcome;
                typedef std::future<ModifyForwardRuleOutcome> ModifyForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyForwardRuleRequest&, ModifyForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyModelDefinitionResponse> ModifyModelDefinitionOutcome;
                typedef std::future<ModifyModelDefinitionOutcome> ModifyModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyModelDefinitionRequest&, ModifyModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::ModifyProductResponse> ModifyProductOutcome;
                typedef std::future<ModifyProductOutcome> ModifyProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyProductRequest&, ModifyProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProductAsyncHandler;
                typedef Outcome<Error, Model::SetForwardAuthResponse> SetForwardAuthOutcome;
                typedef std::future<SetForwardAuthOutcome> SetForwardAuthOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::SetForwardAuthRequest&, SetForwardAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetForwardAuthAsyncHandler;



                /**
                 *判断是否开启的转发的权限
                 * @param req CheckForwardAuthRequest
                 * @return CheckForwardAuthOutcome
                 */
                CheckForwardAuthOutcome CheckForwardAuth(const Model::CheckForwardAuthRequest &request);
                void CheckForwardAuthAsync(const Model::CheckForwardAuthRequest& request, const CheckForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckForwardAuthOutcomeCallable CheckForwardAuthCallable(const Model::CheckForwardAuthRequest& request);

                /**
                 *创建批次
                 * @param req CreateBatchRequest
                 * @return CreateBatchOutcome
                 */
                CreateBatchOutcome CreateBatch(const Model::CreateBatchRequest &request);
                void CreateBatchAsync(const Model::CreateBatchRequest& request, const CreateBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchOutcomeCallable CreateBatchCallable(const Model::CreateBatchRequest& request);

                /**
                 *创建转发规则
                 * @param req CreateForwardRuleRequest
                 * @return CreateForwardRuleOutcome
                 */
                CreateForwardRuleOutcome CreateForwardRule(const Model::CreateForwardRuleRequest &request);
                void CreateForwardRuleAsync(const Model::CreateForwardRuleRequest& request, const CreateForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateForwardRuleOutcomeCallable CreateForwardRuleCallable(const Model::CreateForwardRuleRequest& request);

                /**
                 *创建产品
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *删除设备
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *删除转发规则
                 * @param req DeleteForwardRuleRequest
                 * @return DeleteForwardRuleOutcome
                 */
                DeleteForwardRuleOutcome DeleteForwardRule(const Model::DeleteForwardRuleRequest &request);
                void DeleteForwardRuleAsync(const Model::DeleteForwardRuleRequest& request, const DeleteForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteForwardRuleOutcomeCallable DeleteForwardRuleCallable(const Model::DeleteForwardRuleRequest& request);

                /**
                 *删除产品
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *获取批次详情
                 * @param req DescribeBatchRequest
                 * @return DescribeBatchOutcome
                 */
                DescribeBatchOutcome DescribeBatch(const Model::DescribeBatchRequest &request);
                void DescribeBatchAsync(const Model::DescribeBatchRequest& request, const DescribeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOutcomeCallable DescribeBatchCallable(const Model::DescribeBatchRequest& request);

                /**
                 *获取批次列表
                 * @param req DescribeBatchsRequest
                 * @return DescribeBatchsOutcome
                 */
                DescribeBatchsOutcome DescribeBatchs(const Model::DescribeBatchsRequest &request);
                void DescribeBatchsAsync(const Model::DescribeBatchsRequest& request, const DescribeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchsOutcomeCallable DescribeBatchsCallable(const Model::DescribeBatchsRequest& request);

                /**
                 *获取Category详情
                 * @param req DescribeCategoryRequest
                 * @return DescribeCategoryOutcome
                 */
                DescribeCategoryOutcome DescribeCategory(const Model::DescribeCategoryRequest &request);
                void DescribeCategoryAsync(const Model::DescribeCategoryRequest& request, const DescribeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCategoryOutcomeCallable DescribeCategoryCallable(const Model::DescribeCategoryRequest& request);

                /**
                 *查看设备详情
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *为用户提供获取动作历史的能力。
                 * @param req DescribeDeviceActionHistoryRequest
                 * @return DescribeDeviceActionHistoryOutcome
                 */
                DescribeDeviceActionHistoryOutcome DescribeDeviceActionHistory(const Model::DescribeDeviceActionHistoryRequest &request);
                void DescribeDeviceActionHistoryAsync(const Model::DescribeDeviceActionHistoryRequest& request, const DescribeDeviceActionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceActionHistoryOutcomeCallable DescribeDeviceActionHistoryCallable(const Model::DescribeDeviceActionHistoryRequest& request);

                /**
                 *获取设备在指定时间范围内的通讯日志
                 * @param req DescribeDeviceCommLogRequest
                 * @return DescribeDeviceCommLogOutcome
                 */
                DescribeDeviceCommLogOutcome DescribeDeviceCommLog(const Model::DescribeDeviceCommLogRequest &request);
                void DescribeDeviceCommLogAsync(const Model::DescribeDeviceCommLogRequest& request, const DescribeDeviceCommLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceCommLogOutcomeCallable DescribeDeviceCommLogCallable(const Model::DescribeDeviceCommLogRequest& request);

                /**
                 *获取设备属性数据
                 * @param req DescribeDeviceDataRequest
                 * @return DescribeDeviceDataOutcome
                 */
                DescribeDeviceDataOutcome DescribeDeviceData(const Model::DescribeDeviceDataRequest &request);
                void DescribeDeviceDataAsync(const Model::DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataOutcomeCallable DescribeDeviceDataCallable(const Model::DescribeDeviceDataRequest& request);

                /**
                 *获取设备在指定时间范围内上报的历史数据。
                 * @param req DescribeDeviceDataHistoryRequest
                 * @return DescribeDeviceDataHistoryOutcome
                 */
                DescribeDeviceDataHistoryOutcome DescribeDeviceDataHistory(const Model::DescribeDeviceDataHistoryRequest &request);
                void DescribeDeviceDataHistoryAsync(const Model::DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataHistoryOutcomeCallable DescribeDeviceDataHistoryCallable(const Model::DescribeDeviceDataHistoryRequest& request);

                /**
                 *获取设备的历史事件
                 * @param req DescribeDeviceEventHistoryRequest
                 * @return DescribeDeviceEventHistoryOutcome
                 */
                DescribeDeviceEventHistoryOutcome DescribeDeviceEventHistory(const Model::DescribeDeviceEventHistoryRequest &request);
                void DescribeDeviceEventHistoryAsync(const Model::DescribeDeviceEventHistoryRequest& request, const DescribeDeviceEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceEventHistoryOutcomeCallable DescribeDeviceEventHistoryCallable(const Model::DescribeDeviceEventHistoryRequest& request);

                /**
                 *获取设备列表
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *获取产品转发规则
                 * @param req DescribeForwardRuleRequest
                 * @return DescribeForwardRuleOutcome
                 */
                DescribeForwardRuleOutcome DescribeForwardRule(const Model::DescribeForwardRuleRequest &request);
                void DescribeForwardRuleAsync(const Model::DescribeForwardRuleRequest& request, const DescribeForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForwardRuleOutcomeCallable DescribeForwardRuleCallable(const Model::DescribeForwardRuleRequest& request);

                /**
                 *查询产品配置的数据模板信息
                 * @param req DescribeModelDefinitionRequest
                 * @return DescribeModelDefinitionOutcome
                 */
                DescribeModelDefinitionOutcome DescribeModelDefinition(const Model::DescribeModelDefinitionRequest &request);
                void DescribeModelDefinitionAsync(const Model::DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelDefinitionOutcomeCallable DescribeModelDefinitionCallable(const Model::DescribeModelDefinitionRequest& request);

                /**
                 *获取产品详情
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *获取产品列表
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *导入其它产品的数据模板，覆盖现有数据模板的物模型和产品分类信息
                 * @param req ImportModelDefinitionRequest
                 * @return ImportModelDefinitionOutcome
                 */
                ImportModelDefinitionOutcome ImportModelDefinition(const Model::ImportModelDefinitionRequest &request);
                void ImportModelDefinitionAsync(const Model::ImportModelDefinitionRequest& request, const ImportModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportModelDefinitionOutcomeCallable ImportModelDefinitionCallable(const Model::ImportModelDefinitionRequest& request);

                /**
                 *修改设备信息
                 * @param req ModifyDeviceRequest
                 * @return ModifyDeviceOutcome
                 */
                ModifyDeviceOutcome ModifyDevice(const Model::ModifyDeviceRequest &request);
                void ModifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceOutcomeCallable ModifyDeviceCallable(const Model::ModifyDeviceRequest& request);

                /**
                 *修改转发规则
                 * @param req ModifyForwardRuleRequest
                 * @return ModifyForwardRuleOutcome
                 */
                ModifyForwardRuleOutcome ModifyForwardRule(const Model::ModifyForwardRuleRequest &request);
                void ModifyForwardRuleAsync(const Model::ModifyForwardRuleRequest& request, const ModifyForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyForwardRuleOutcomeCallable ModifyForwardRuleCallable(const Model::ModifyForwardRuleRequest& request);

                /**
                 *提供修改产品的数据模板的能力
                 * @param req ModifyModelDefinitionRequest
                 * @return ModifyModelDefinitionOutcome
                 */
                ModifyModelDefinitionOutcome ModifyModelDefinition(const Model::ModifyModelDefinitionRequest &request);
                void ModifyModelDefinitionAsync(const Model::ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelDefinitionOutcomeCallable ModifyModelDefinitionCallable(const Model::ModifyModelDefinitionRequest& request);

                /**
                 *修改产品信息
                 * @param req ModifyProductRequest
                 * @return ModifyProductOutcome
                 */
                ModifyProductOutcome ModifyProduct(const Model::ModifyProductRequest &request);
                void ModifyProductAsync(const Model::ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProductOutcomeCallable ModifyProductCallable(const Model::ModifyProductRequest& request);

                /**
                 *设置转发权限
                 * @param req SetForwardAuthRequest
                 * @return SetForwardAuthOutcome
                 */
                SetForwardAuthOutcome SetForwardAuth(const Model::SetForwardAuthRequest &request);
                void SetForwardAuthAsync(const Model::SetForwardAuthRequest& request, const SetForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetForwardAuthOutcomeCallable SetForwardAuthCallable(const Model::SetForwardAuthRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_

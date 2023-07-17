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

#ifndef TENCENTCLOUD_IOT_V20180123_IOTCLIENT_H_
#define TENCENTCLOUD_IOT_V20180123_IOTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iot/v20180123/model/ActivateRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/ActivateRuleResponse.h>
#include <tencentcloud/iot/v20180123/model/AddDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/AddDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/AddProductRequest.h>
#include <tencentcloud/iot/v20180123/model/AddProductResponse.h>
#include <tencentcloud/iot/v20180123/model/AddRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/AddRuleResponse.h>
#include <tencentcloud/iot/v20180123/model/AddTopicRequest.h>
#include <tencentcloud/iot/v20180123/model/AddTopicResponse.h>
#include <tencentcloud/iot/v20180123/model/AppAddUserRequest.h>
#include <tencentcloud/iot/v20180123/model/AppAddUserResponse.h>
#include <tencentcloud/iot/v20180123/model/AppDeleteDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/AppDeleteDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceDataRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceDataResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceStatusesRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetDeviceStatusesResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetDevicesRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetDevicesResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetTokenRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetTokenResponse.h>
#include <tencentcloud/iot/v20180123/model/AppGetUserRequest.h>
#include <tencentcloud/iot/v20180123/model/AppGetUserResponse.h>
#include <tencentcloud/iot/v20180123/model/AppIssueDeviceControlRequest.h>
#include <tencentcloud/iot/v20180123/model/AppIssueDeviceControlResponse.h>
#include <tencentcloud/iot/v20180123/model/AppResetPasswordRequest.h>
#include <tencentcloud/iot/v20180123/model/AppResetPasswordResponse.h>
#include <tencentcloud/iot/v20180123/model/AppSecureAddDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/AppSecureAddDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/AppUpdateDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/AppUpdateDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/AppUpdateUserRequest.h>
#include <tencentcloud/iot/v20180123/model/AppUpdateUserResponse.h>
#include <tencentcloud/iot/v20180123/model/AssociateSubDeviceToGatewayProductRequest.h>
#include <tencentcloud/iot/v20180123/model/AssociateSubDeviceToGatewayProductResponse.h>
#include <tencentcloud/iot/v20180123/model/DeactivateRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/DeactivateRuleResponse.h>
#include <tencentcloud/iot/v20180123/model/DeleteDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/DeleteDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/DeleteProductRequest.h>
#include <tencentcloud/iot/v20180123/model/DeleteProductResponse.h>
#include <tencentcloud/iot/v20180123/model/DeleteRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/DeleteRuleResponse.h>
#include <tencentcloud/iot/v20180123/model/DeleteTopicRequest.h>
#include <tencentcloud/iot/v20180123/model/DeleteTopicResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDataHistoryRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDataHistoryResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDebugLogRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDebugLogResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceDataRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceDataResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceLogRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceLogResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceSignaturesRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceSignaturesResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceStatisticsRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceStatisticsResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceStatusesRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDeviceStatusesResponse.h>
#include <tencentcloud/iot/v20180123/model/GetDevicesRequest.h>
#include <tencentcloud/iot/v20180123/model/GetDevicesResponse.h>
#include <tencentcloud/iot/v20180123/model/GetProductRequest.h>
#include <tencentcloud/iot/v20180123/model/GetProductResponse.h>
#include <tencentcloud/iot/v20180123/model/GetProductsRequest.h>
#include <tencentcloud/iot/v20180123/model/GetProductsResponse.h>
#include <tencentcloud/iot/v20180123/model/GetRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/GetRuleResponse.h>
#include <tencentcloud/iot/v20180123/model/GetRulesRequest.h>
#include <tencentcloud/iot/v20180123/model/GetRulesResponse.h>
#include <tencentcloud/iot/v20180123/model/GetTopicRequest.h>
#include <tencentcloud/iot/v20180123/model/GetTopicResponse.h>
#include <tencentcloud/iot/v20180123/model/GetTopicsRequest.h>
#include <tencentcloud/iot/v20180123/model/GetTopicsResponse.h>
#include <tencentcloud/iot/v20180123/model/IssueDeviceControlRequest.h>
#include <tencentcloud/iot/v20180123/model/IssueDeviceControlResponse.h>
#include <tencentcloud/iot/v20180123/model/PublishMsgRequest.h>
#include <tencentcloud/iot/v20180123/model/PublishMsgResponse.h>
#include <tencentcloud/iot/v20180123/model/ResetDeviceRequest.h>
#include <tencentcloud/iot/v20180123/model/ResetDeviceResponse.h>
#include <tencentcloud/iot/v20180123/model/UnassociateSubDeviceFromGatewayProductRequest.h>
#include <tencentcloud/iot/v20180123/model/UnassociateSubDeviceFromGatewayProductResponse.h>
#include <tencentcloud/iot/v20180123/model/UpdateProductRequest.h>
#include <tencentcloud/iot/v20180123/model/UpdateProductResponse.h>
#include <tencentcloud/iot/v20180123/model/UpdateRuleRequest.h>
#include <tencentcloud/iot/v20180123/model/UpdateRuleResponse.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            class IotClient : public AbstractClient
            {
            public:
                IotClient(const Credential &credential, const std::string &region);
                IotClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateRuleResponse> ActivateRuleOutcome;
                typedef std::future<ActivateRuleOutcome> ActivateRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::ActivateRuleRequest&, ActivateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDeviceResponse> AddDeviceOutcome;
                typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AddDeviceRequest&, AddDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AddProductResponse> AddProductOutcome;
                typedef std::future<AddProductOutcome> AddProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AddProductRequest&, AddProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddProductAsyncHandler;
                typedef Outcome<Core::Error, Model::AddRuleResponse> AddRuleOutcome;
                typedef std::future<AddRuleOutcome> AddRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AddRuleRequest&, AddRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddTopicResponse> AddTopicOutcome;
                typedef std::future<AddTopicOutcome> AddTopicOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AddTopicRequest&, AddTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::AppAddUserResponse> AppAddUserOutcome;
                typedef std::future<AppAddUserOutcome> AppAddUserOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppAddUserRequest&, AppAddUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppAddUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AppDeleteDeviceResponse> AppDeleteDeviceOutcome;
                typedef std::future<AppDeleteDeviceOutcome> AppDeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppDeleteDeviceRequest&, AppDeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppDeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetDeviceResponse> AppGetDeviceOutcome;
                typedef std::future<AppGetDeviceOutcome> AppGetDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetDeviceRequest&, AppGetDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetDeviceDataResponse> AppGetDeviceDataOutcome;
                typedef std::future<AppGetDeviceDataOutcome> AppGetDeviceDataOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetDeviceDataRequest&, AppGetDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetDeviceStatusesResponse> AppGetDeviceStatusesOutcome;
                typedef std::future<AppGetDeviceStatusesOutcome> AppGetDeviceStatusesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetDeviceStatusesRequest&, AppGetDeviceStatusesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetDeviceStatusesAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetDevicesResponse> AppGetDevicesOutcome;
                typedef std::future<AppGetDevicesOutcome> AppGetDevicesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetDevicesRequest&, AppGetDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetTokenResponse> AppGetTokenOutcome;
                typedef std::future<AppGetTokenOutcome> AppGetTokenOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetTokenRequest&, AppGetTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::AppGetUserResponse> AppGetUserOutcome;
                typedef std::future<AppGetUserOutcome> AppGetUserOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppGetUserRequest&, AppGetUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppGetUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AppIssueDeviceControlResponse> AppIssueDeviceControlOutcome;
                typedef std::future<AppIssueDeviceControlOutcome> AppIssueDeviceControlOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppIssueDeviceControlRequest&, AppIssueDeviceControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppIssueDeviceControlAsyncHandler;
                typedef Outcome<Core::Error, Model::AppResetPasswordResponse> AppResetPasswordOutcome;
                typedef std::future<AppResetPasswordOutcome> AppResetPasswordOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppResetPasswordRequest&, AppResetPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppResetPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::AppSecureAddDeviceResponse> AppSecureAddDeviceOutcome;
                typedef std::future<AppSecureAddDeviceOutcome> AppSecureAddDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppSecureAddDeviceRequest&, AppSecureAddDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppSecureAddDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AppUpdateDeviceResponse> AppUpdateDeviceOutcome;
                typedef std::future<AppUpdateDeviceOutcome> AppUpdateDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppUpdateDeviceRequest&, AppUpdateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppUpdateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::AppUpdateUserResponse> AppUpdateUserOutcome;
                typedef std::future<AppUpdateUserOutcome> AppUpdateUserOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AppUpdateUserRequest&, AppUpdateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AppUpdateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSubDeviceToGatewayProductResponse> AssociateSubDeviceToGatewayProductOutcome;
                typedef std::future<AssociateSubDeviceToGatewayProductOutcome> AssociateSubDeviceToGatewayProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::AssociateSubDeviceToGatewayProductRequest&, AssociateSubDeviceToGatewayProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSubDeviceToGatewayProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeactivateRuleResponse> DeactivateRuleOutcome;
                typedef std::future<DeactivateRuleOutcome> DeactivateRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::DeactivateRuleRequest&, DeactivateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeactivateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDataHistoryResponse> GetDataHistoryOutcome;
                typedef std::future<GetDataHistoryOutcome> GetDataHistoryOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDataHistoryRequest&, GetDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDataHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDebugLogResponse> GetDebugLogOutcome;
                typedef std::future<GetDebugLogOutcome> GetDebugLogOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDebugLogRequest&, GetDebugLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDebugLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceResponse> GetDeviceOutcome;
                typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceRequest&, GetDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceDataResponse> GetDeviceDataOutcome;
                typedef std::future<GetDeviceDataOutcome> GetDeviceDataOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceDataRequest&, GetDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceLogResponse> GetDeviceLogOutcome;
                typedef std::future<GetDeviceLogOutcome> GetDeviceLogOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceLogRequest&, GetDeviceLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLogAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceSignaturesResponse> GetDeviceSignaturesOutcome;
                typedef std::future<GetDeviceSignaturesOutcome> GetDeviceSignaturesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceSignaturesRequest&, GetDeviceSignaturesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceSignaturesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceStatisticsResponse> GetDeviceStatisticsOutcome;
                typedef std::future<GetDeviceStatisticsOutcome> GetDeviceStatisticsOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceStatisticsRequest&, GetDeviceStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceStatusesResponse> GetDeviceStatusesOutcome;
                typedef std::future<GetDeviceStatusesOutcome> GetDeviceStatusesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDeviceStatusesRequest&, GetDeviceStatusesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceStatusesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDevicesResponse> GetDevicesOutcome;
                typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetDevicesRequest&, GetDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProductResponse> GetProductOutcome;
                typedef std::future<GetProductOutcome> GetProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetProductRequest&, GetProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProductAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProductsResponse> GetProductsOutcome;
                typedef std::future<GetProductsOutcome> GetProductsOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetProductsRequest&, GetProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRuleResponse> GetRuleOutcome;
                typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetRuleRequest&, GetRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRulesResponse> GetRulesOutcome;
                typedef std::future<GetRulesOutcome> GetRulesOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetRulesRequest&, GetRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopicResponse> GetTopicOutcome;
                typedef std::future<GetTopicOutcome> GetTopicOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetTopicRequest&, GetTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopicsResponse> GetTopicsOutcome;
                typedef std::future<GetTopicsOutcome> GetTopicsOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::GetTopicsRequest&, GetTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::IssueDeviceControlResponse> IssueDeviceControlOutcome;
                typedef std::future<IssueDeviceControlOutcome> IssueDeviceControlOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::IssueDeviceControlRequest&, IssueDeviceControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IssueDeviceControlAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishMsgResponse> PublishMsgOutcome;
                typedef std::future<PublishMsgOutcome> PublishMsgOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::PublishMsgRequest&, PublishMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDeviceResponse> ResetDeviceOutcome;
                typedef std::future<ResetDeviceOutcome> ResetDeviceOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::ResetDeviceRequest&, ResetDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassociateSubDeviceFromGatewayProductResponse> UnassociateSubDeviceFromGatewayProductOutcome;
                typedef std::future<UnassociateSubDeviceFromGatewayProductOutcome> UnassociateSubDeviceFromGatewayProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::UnassociateSubDeviceFromGatewayProductRequest&, UnassociateSubDeviceFromGatewayProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassociateSubDeviceFromGatewayProductAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProductResponse> UpdateProductOutcome;
                typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::UpdateProductRequest&, UpdateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRuleResponse> UpdateRuleOutcome;
                typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
                typedef std::function<void(const IotClient*, const Model::UpdateRuleRequest&, UpdateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;



                /**
                 *启用规则
                 * @param req ActivateRuleRequest
                 * @return ActivateRuleOutcome
                 */
                ActivateRuleOutcome ActivateRule(const Model::ActivateRuleRequest &request);
                void ActivateRuleAsync(const Model::ActivateRuleRequest& request, const ActivateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateRuleOutcomeCallable ActivateRuleCallable(const Model::ActivateRuleRequest& request);

                /**
                 *提供在指定的产品Id下创建一个设备的能力，生成设备名称与设备秘钥。
                 * @param req AddDeviceRequest
                 * @return AddDeviceOutcome
                 */
                AddDeviceOutcome AddDevice(const Model::AddDeviceRequest &request);
                void AddDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDeviceOutcomeCallable AddDeviceCallable(const Model::AddDeviceRequest& request);

                /**
                 *本接口(AddProduct)用于创建、定义某款硬件产品。
                 * @param req AddProductRequest
                 * @return AddProductOutcome
                 */
                AddProductOutcome AddProduct(const Model::AddProductRequest &request);
                void AddProductAsync(const Model::AddProductRequest& request, const AddProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddProductOutcomeCallable AddProductCallable(const Model::AddProductRequest& request);

                /**
                 *新增规则
                 * @param req AddRuleRequest
                 * @return AddRuleOutcome
                 */
                AddRuleOutcome AddRule(const Model::AddRuleRequest &request);
                void AddRuleAsync(const Model::AddRuleRequest& request, const AddRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRuleOutcomeCallable AddRuleCallable(const Model::AddRuleRequest& request);

                /**
                 *新增Topic，用于设备或应用发布消息至该Topic或订阅该Topic的消息。
                 * @param req AddTopicRequest
                 * @return AddTopicOutcome
                 */
                AddTopicOutcome AddTopic(const Model::AddTopicRequest &request);
                void AddTopicAsync(const Model::AddTopicRequest& request, const AddTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTopicOutcomeCallable AddTopicCallable(const Model::AddTopicRequest& request);

                /**
                 *为APP提供用户注册功能
                 * @param req AppAddUserRequest
                 * @return AppAddUserOutcome
                 */
                AppAddUserOutcome AppAddUser(const Model::AppAddUserRequest &request);
                void AppAddUserAsync(const Model::AppAddUserRequest& request, const AppAddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppAddUserOutcomeCallable AppAddUserCallable(const Model::AppAddUserRequest& request);

                /**
                 *用户解除与设备的关联关系，解除后APP用户无法控制设备，获取设备数据
                 * @param req AppDeleteDeviceRequest
                 * @return AppDeleteDeviceOutcome
                 */
                AppDeleteDeviceOutcome AppDeleteDevice(const Model::AppDeleteDeviceRequest &request);
                void AppDeleteDeviceAsync(const Model::AppDeleteDeviceRequest& request, const AppDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppDeleteDeviceOutcomeCallable AppDeleteDeviceCallable(const Model::AppDeleteDeviceRequest& request);

                /**
                 *获取绑定设备的基本信息与数据模板定义
                 * @param req AppGetDeviceRequest
                 * @return AppGetDeviceOutcome
                 */
                AppGetDeviceOutcome AppGetDevice(const Model::AppGetDeviceRequest &request);
                void AppGetDeviceAsync(const Model::AppGetDeviceRequest& request, const AppGetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetDeviceOutcomeCallable AppGetDeviceCallable(const Model::AppGetDeviceRequest& request);

                /**
                 *获取绑定设备数据，用于实时展示设备的最新数据
                 * @param req AppGetDeviceDataRequest
                 * @return AppGetDeviceDataOutcome
                 */
                AppGetDeviceDataOutcome AppGetDeviceData(const Model::AppGetDeviceDataRequest &request);
                void AppGetDeviceDataAsync(const Model::AppGetDeviceDataRequest& request, const AppGetDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetDeviceDataOutcomeCallable AppGetDeviceDataCallable(const Model::AppGetDeviceDataRequest& request);

                /**
                 *获取绑定设备的上下线状态
                 * @param req AppGetDeviceStatusesRequest
                 * @return AppGetDeviceStatusesOutcome
                 */
                AppGetDeviceStatusesOutcome AppGetDeviceStatuses(const Model::AppGetDeviceStatusesRequest &request);
                void AppGetDeviceStatusesAsync(const Model::AppGetDeviceStatusesRequest& request, const AppGetDeviceStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetDeviceStatusesOutcomeCallable AppGetDeviceStatusesCallable(const Model::AppGetDeviceStatusesRequest& request);

                /**
                 *获取用户的绑定设备列表
                 * @param req AppGetDevicesRequest
                 * @return AppGetDevicesOutcome
                 */
                AppGetDevicesOutcome AppGetDevices(const Model::AppGetDevicesRequest &request);
                void AppGetDevicesAsync(const Model::AppGetDevicesRequest& request, const AppGetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetDevicesOutcomeCallable AppGetDevicesCallable(const Model::AppGetDevicesRequest& request);

                /**
                 *获取用户token
                 * @param req AppGetTokenRequest
                 * @return AppGetTokenOutcome
                 */
                AppGetTokenOutcome AppGetToken(const Model::AppGetTokenRequest &request);
                void AppGetTokenAsync(const Model::AppGetTokenRequest& request, const AppGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetTokenOutcomeCallable AppGetTokenCallable(const Model::AppGetTokenRequest& request);

                /**
                 *获取用户信息
                 * @param req AppGetUserRequest
                 * @return AppGetUserOutcome
                 */
                AppGetUserOutcome AppGetUser(const Model::AppGetUserRequest &request);
                void AppGetUserAsync(const Model::AppGetUserRequest& request, const AppGetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppGetUserOutcomeCallable AppGetUserCallable(const Model::AppGetUserRequest& request);

                /**
                 *用户通过APP控制设备
                 * @param req AppIssueDeviceControlRequest
                 * @return AppIssueDeviceControlOutcome
                 */
                AppIssueDeviceControlOutcome AppIssueDeviceControl(const Model::AppIssueDeviceControlRequest &request);
                void AppIssueDeviceControlAsync(const Model::AppIssueDeviceControlRequest& request, const AppIssueDeviceControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppIssueDeviceControlOutcomeCallable AppIssueDeviceControlCallable(const Model::AppIssueDeviceControlRequest& request);

                /**
                 *重置APP用户密码
                 * @param req AppResetPasswordRequest
                 * @return AppResetPasswordOutcome
                 */
                AppResetPasswordOutcome AppResetPassword(const Model::AppResetPasswordRequest &request);
                void AppResetPasswordAsync(const Model::AppResetPasswordRequest& request, const AppResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppResetPasswordOutcomeCallable AppResetPasswordCallable(const Model::AppResetPasswordRequest& request);

                /**
                 *用户绑定设备，绑定后可以在APP端进行控制。绑定设备前需调用“获取设备绑定签名”接口
                 * @param req AppSecureAddDeviceRequest
                 * @return AppSecureAddDeviceOutcome
                 */
                AppSecureAddDeviceOutcome AppSecureAddDevice(const Model::AppSecureAddDeviceRequest &request);
                void AppSecureAddDeviceAsync(const Model::AppSecureAddDeviceRequest& request, const AppSecureAddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppSecureAddDeviceOutcomeCallable AppSecureAddDeviceCallable(const Model::AppSecureAddDeviceRequest& request);

                /**
                 *修改设备别名，便于用户个性化定义设备的名称
                 * @param req AppUpdateDeviceRequest
                 * @return AppUpdateDeviceOutcome
                 */
                AppUpdateDeviceOutcome AppUpdateDevice(const Model::AppUpdateDeviceRequest &request);
                void AppUpdateDeviceAsync(const Model::AppUpdateDeviceRequest& request, const AppUpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppUpdateDeviceOutcomeCallable AppUpdateDeviceCallable(const Model::AppUpdateDeviceRequest& request);

                /**
                 *修改用户信息
                 * @param req AppUpdateUserRequest
                 * @return AppUpdateUserOutcome
                 */
                AppUpdateUserOutcome AppUpdateUser(const Model::AppUpdateUserRequest &request);
                void AppUpdateUserAsync(const Model::AppUpdateUserRequest& request, const AppUpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AppUpdateUserOutcomeCallable AppUpdateUserCallable(const Model::AppUpdateUserRequest& request);

                /**
                 *关联子设备产品和网关产品
                 * @param req AssociateSubDeviceToGatewayProductRequest
                 * @return AssociateSubDeviceToGatewayProductOutcome
                 */
                AssociateSubDeviceToGatewayProductOutcome AssociateSubDeviceToGatewayProduct(const Model::AssociateSubDeviceToGatewayProductRequest &request);
                void AssociateSubDeviceToGatewayProductAsync(const Model::AssociateSubDeviceToGatewayProductRequest& request, const AssociateSubDeviceToGatewayProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSubDeviceToGatewayProductOutcomeCallable AssociateSubDeviceToGatewayProductCallable(const Model::AssociateSubDeviceToGatewayProductRequest& request);

                /**
                 *禁用规则
                 * @param req DeactivateRuleRequest
                 * @return DeactivateRuleOutcome
                 */
                DeactivateRuleOutcome DeactivateRule(const Model::DeactivateRuleRequest &request);
                void DeactivateRuleAsync(const Model::DeactivateRuleRequest& request, const DeactivateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeactivateRuleOutcomeCallable DeactivateRuleCallable(const Model::DeactivateRuleRequest& request);

                /**
                 *提供在指定的产品Id下删除一个设备的能力。
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *删除用户指定的产品Id对应的信息。
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *删除规则
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除Topic
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *批量获取设备某一段时间范围的设备上报数据。该接口适用于使用高级版类型的产品
                 * @param req GetDataHistoryRequest
                 * @return GetDataHistoryOutcome
                 */
                GetDataHistoryOutcome GetDataHistory(const Model::GetDataHistoryRequest &request);
                void GetDataHistoryAsync(const Model::GetDataHistoryRequest& request, const GetDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDataHistoryOutcomeCallable GetDataHistoryCallable(const Model::GetDataHistoryRequest& request);

                /**
                 *获取设备的调试日志，用于定位问题
                 * @param req GetDebugLogRequest
                 * @return GetDebugLogOutcome
                 */
                GetDebugLogOutcome GetDebugLog(const Model::GetDebugLogRequest &request);
                void GetDebugLogAsync(const Model::GetDebugLogRequest& request, const GetDebugLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDebugLogOutcomeCallable GetDebugLogCallable(const Model::GetDebugLogRequest& request);

                /**
                 *提供查询某个设备详细信息的能力。
                 * @param req GetDeviceRequest
                 * @return GetDeviceOutcome
                 */
                GetDeviceOutcome GetDevice(const Model::GetDeviceRequest &request);
                void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request);

                /**
                 *获取某个设备当前上报到云端的数据，该接口适用于使用数据模板协议的产品。
                 * @param req GetDeviceDataRequest
                 * @return GetDeviceDataOutcome
                 */
                GetDeviceDataOutcome GetDeviceData(const Model::GetDeviceDataRequest &request);
                void GetDeviceDataAsync(const Model::GetDeviceDataRequest& request, const GetDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceDataOutcomeCallable GetDeviceDataCallable(const Model::GetDeviceDataRequest& request);

                /**
                 *批量获取设备与云端的详细通信日志，该接口适用于使用高级版类型的产品。
                 * @param req GetDeviceLogRequest
                 * @return GetDeviceLogOutcome
                 */
                GetDeviceLogOutcome GetDeviceLog(const Model::GetDeviceLogRequest &request);
                void GetDeviceLogAsync(const Model::GetDeviceLogRequest& request, const GetDeviceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceLogOutcomeCallable GetDeviceLogCallable(const Model::GetDeviceLogRequest& request);

                /**
                 *获取设备绑定签名，用于用户绑定某个设备的应用场景
                 * @param req GetDeviceSignaturesRequest
                 * @return GetDeviceSignaturesOutcome
                 */
                GetDeviceSignaturesOutcome GetDeviceSignatures(const Model::GetDeviceSignaturesRequest &request);
                void GetDeviceSignaturesAsync(const Model::GetDeviceSignaturesRequest& request, const GetDeviceSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceSignaturesOutcomeCallable GetDeviceSignaturesCallable(const Model::GetDeviceSignaturesRequest& request);

                /**
                 *查询某段时间范围内产品的在线、激活设备数
                 * @param req GetDeviceStatisticsRequest
                 * @return GetDeviceStatisticsOutcome
                 */
                GetDeviceStatisticsOutcome GetDeviceStatistics(const Model::GetDeviceStatisticsRequest &request);
                void GetDeviceStatisticsAsync(const Model::GetDeviceStatisticsRequest& request, const GetDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceStatisticsOutcomeCallable GetDeviceStatisticsCallable(const Model::GetDeviceStatisticsRequest& request);

                /**
                 *批量获取设备的当前状态，状态包括在线、离线或未激活状态。
                 * @param req GetDeviceStatusesRequest
                 * @return GetDeviceStatusesOutcome
                 */
                GetDeviceStatusesOutcome GetDeviceStatuses(const Model::GetDeviceStatusesRequest &request);
                void GetDeviceStatusesAsync(const Model::GetDeviceStatusesRequest& request, const GetDeviceStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceStatusesOutcomeCallable GetDeviceStatusesCallable(const Model::GetDeviceStatusesRequest& request);

                /**
                 *提供分页查询某个产品Id下设备信息的能力。
                 * @param req GetDevicesRequest
                 * @return GetDevicesOutcome
                 */
                GetDevicesOutcome GetDevices(const Model::GetDevicesRequest &request);
                void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request);

                /**
                 *获取产品定义的详细信息，包括产品名称、产品描述，鉴权模式等信息。
                 * @param req GetProductRequest
                 * @return GetProductOutcome
                 */
                GetProductOutcome GetProduct(const Model::GetProductRequest &request);
                void GetProductAsync(const Model::GetProductRequest& request, const GetProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProductOutcomeCallable GetProductCallable(const Model::GetProductRequest& request);

                /**
                 *获取用户在物联网套件所创建的所有产品信息。
                 * @param req GetProductsRequest
                 * @return GetProductsOutcome
                 */
                GetProductsOutcome GetProducts(const Model::GetProductsRequest &request);
                void GetProductsAsync(const Model::GetProductsRequest& request, const GetProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProductsOutcomeCallable GetProductsCallable(const Model::GetProductsRequest& request);

                /**
                 *获取转发规则信息
                 * @param req GetRuleRequest
                 * @return GetRuleOutcome
                 */
                GetRuleOutcome GetRule(const Model::GetRuleRequest &request);
                void GetRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRuleOutcomeCallable GetRuleCallable(const Model::GetRuleRequest& request);

                /**
                 *获取转发规则列表
                 * @param req GetRulesRequest
                 * @return GetRulesOutcome
                 */
                GetRulesOutcome GetRules(const Model::GetRulesRequest &request);
                void GetRulesAsync(const Model::GetRulesRequest& request, const GetRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRulesOutcomeCallable GetRulesCallable(const Model::GetRulesRequest& request);

                /**
                 *获取Topic信息
                 * @param req GetTopicRequest
                 * @return GetTopicOutcome
                 */
                GetTopicOutcome GetTopic(const Model::GetTopicRequest &request);
                void GetTopicAsync(const Model::GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopicOutcomeCallable GetTopicCallable(const Model::GetTopicRequest& request);

                /**
                 *获取Topic列表
                 * @param req GetTopicsRequest
                 * @return GetTopicsOutcome
                 */
                GetTopicsOutcome GetTopics(const Model::GetTopicsRequest &request);
                void GetTopicsAsync(const Model::GetTopicsRequest& request, const GetTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopicsOutcomeCallable GetTopicsCallable(const Model::GetTopicsRequest& request);

                /**
                 *提供下发控制指令到指定设备的能力，该接口适用于使用高级版类型的产品。
                 * @param req IssueDeviceControlRequest
                 * @return IssueDeviceControlOutcome
                 */
                IssueDeviceControlOutcome IssueDeviceControl(const Model::IssueDeviceControlRequest &request);
                void IssueDeviceControlAsync(const Model::IssueDeviceControlRequest& request, const IssueDeviceControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IssueDeviceControlOutcomeCallable IssueDeviceControlCallable(const Model::IssueDeviceControlRequest& request);

                /**
                 *提供向指定的Topic发布消息的能力，常用于向设备下发控制指令。该接口只适用于产品版本为“基础版”类型的产品，使用高级版的产品需使用“下发设备控制指令”接口
                 * @param req PublishMsgRequest
                 * @return PublishMsgOutcome
                 */
                PublishMsgOutcome PublishMsg(const Model::PublishMsgRequest &request);
                void PublishMsgAsync(const Model::PublishMsgRequest& request, const PublishMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMsgOutcomeCallable PublishMsgCallable(const Model::PublishMsgRequest& request);

                /**
                 *重置设备操作，将会为设备生成新的证书及清空最新数据，需谨慎操作。
                 * @param req ResetDeviceRequest
                 * @return ResetDeviceOutcome
                 */
                ResetDeviceOutcome ResetDevice(const Model::ResetDeviceRequest &request);
                void ResetDeviceAsync(const Model::ResetDeviceRequest& request, const ResetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDeviceOutcomeCallable ResetDeviceCallable(const Model::ResetDeviceRequest& request);

                /**
                 *业务无客户使用，下线接口。

取消子设备产品与网关设备产品的关联
                 * @param req UnassociateSubDeviceFromGatewayProductRequest
                 * @return UnassociateSubDeviceFromGatewayProductOutcome
                 */
                UnassociateSubDeviceFromGatewayProductOutcome UnassociateSubDeviceFromGatewayProduct(const Model::UnassociateSubDeviceFromGatewayProductRequest &request);
                void UnassociateSubDeviceFromGatewayProductAsync(const Model::UnassociateSubDeviceFromGatewayProductRequest& request, const UnassociateSubDeviceFromGatewayProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassociateSubDeviceFromGatewayProductOutcomeCallable UnassociateSubDeviceFromGatewayProductCallable(const Model::UnassociateSubDeviceFromGatewayProductRequest& request);

                /**
                 *提供修改产品信息及数据模板的能力。
                 * @param req UpdateProductRequest
                 * @return UpdateProductOutcome
                 */
                UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest &request);
                void UpdateProductAsync(const Model::UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProductOutcomeCallable UpdateProductCallable(const Model::UpdateProductRequest& request);

                /**
                 *更新规则
                 * @param req UpdateRuleRequest
                 * @return UpdateRuleOutcome
                 */
                UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest &request);
                void UpdateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRuleOutcomeCallable UpdateRuleCallable(const Model::UpdateRuleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_IOTCLIENT_H_

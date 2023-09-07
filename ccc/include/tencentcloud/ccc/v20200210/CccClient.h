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

#ifndef TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_
#define TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateUserSigRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateUserSigResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCallInMetricsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeChatMessagesRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeChatMessagesResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffInfoListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffInfoListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            class CccClient : public AbstractClient
            {
            public:
                CccClient(const Credential &credential, const std::string &region);
                CccClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindNumberCallOutSkillGroupResponse> BindNumberCallOutSkillGroupOutcome;
                typedef std::future<BindNumberCallOutSkillGroupOutcome> BindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindNumberCallOutSkillGroupRequest&, BindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindStaffSkillGroupListResponse> BindStaffSkillGroupListOutcome;
                typedef std::future<BindStaffSkillGroupListOutcome> BindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindStaffSkillGroupListRequest&, BindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdminURLResponse> CreateAdminURLOutcome;
                typedef std::future<CreateAdminURLOutcome> CreateAdminURLOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAdminURLRequest&, CreateAdminURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdminURLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoCalloutTaskResponse> CreateAutoCalloutTaskOutcome;
                typedef std::future<CreateAutoCalloutTaskOutcome> CreateAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAutoCalloutTaskRequest&, CreateAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCCSkillGroupResponse> CreateCCCSkillGroupOutcome;
                typedef std::future<CreateCCCSkillGroupOutcome> CreateCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCCCSkillGroupRequest&, CreateCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCallOutSessionResponse> CreateCallOutSessionOutcome;
                typedef std::future<CreateCallOutSessionOutcome> CreateCallOutSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCallOutSessionRequest&, CreateCallOutSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCallOutSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCarrierPrivilegeNumberApplicantResponse> CreateCarrierPrivilegeNumberApplicantOutcome;
                typedef std::future<CreateCarrierPrivilegeNumberApplicantOutcome> CreateCarrierPrivilegeNumberApplicantOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCarrierPrivilegeNumberApplicantRequest&, CreateCarrierPrivilegeNumberApplicantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCarrierPrivilegeNumberApplicantAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExtensionResponse> CreateExtensionOutcome;
                typedef std::future<CreateExtensionOutcome> CreateExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateExtensionRequest&, CreateExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSDKLoginTokenResponse> CreateSDKLoginTokenOutcome;
                typedef std::future<CreateSDKLoginTokenOutcome> CreateSDKLoginTokenOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateSDKLoginTokenRequest&, CreateSDKLoginTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDKLoginTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaffResponse> CreateStaffOutcome;
                typedef std::future<CreateStaffOutcome> CreateStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateStaffRequest&, CreateStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserSigResponse> CreateUserSigOutcome;
                typedef std::future<CreateUserSigOutcome> CreateUserSigOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateUserSigRequest&, CreateUserSigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExtensionResponse> DeleteExtensionOutcome;
                typedef std::future<DeleteExtensionOutcome> DeleteExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteExtensionRequest&, DeleteExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStaffResponse> DeleteStaffOutcome;
                typedef std::future<DeleteStaffOutcome> DeleteStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteStaffRequest&, DeleteStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActiveCarrierPrivilegeNumberResponse> DescribeActiveCarrierPrivilegeNumberOutcome;
                typedef std::future<DescribeActiveCarrierPrivilegeNumberOutcome> DescribeActiveCarrierPrivilegeNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeActiveCarrierPrivilegeNumberRequest&, DescribeActiveCarrierPrivilegeNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveCarrierPrivilegeNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoCalloutTaskResponse> DescribeAutoCalloutTaskOutcome;
                typedef std::future<DescribeAutoCalloutTaskOutcome> DescribeAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAutoCalloutTaskRequest&, DescribeAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoCalloutTasksResponse> DescribeAutoCalloutTasksOutcome;
                typedef std::future<DescribeAutoCalloutTasksOutcome> DescribeAutoCalloutTasksOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAutoCalloutTasksRequest&, DescribeAutoCalloutTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCalloutTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCCBuyInfoListResponse> DescribeCCCBuyInfoListOutcome;
                typedef std::future<DescribeCCCBuyInfoListOutcome> DescribeCCCBuyInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCCCBuyInfoListRequest&, DescribeCCCBuyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCCBuyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallInMetricsResponse> DescribeCallInMetricsOutcome;
                typedef std::future<DescribeCallInMetricsOutcome> DescribeCallInMetricsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCallInMetricsRequest&, DescribeCallInMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallInMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCarrierPrivilegeNumberApplicantsResponse> DescribeCarrierPrivilegeNumberApplicantsOutcome;
                typedef std::future<DescribeCarrierPrivilegeNumberApplicantsOutcome> DescribeCarrierPrivilegeNumberApplicantsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCarrierPrivilegeNumberApplicantsRequest&, DescribeCarrierPrivilegeNumberApplicantsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCarrierPrivilegeNumberApplicantsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChatMessagesResponse> DescribeChatMessagesOutcome;
                typedef std::future<DescribeChatMessagesOutcome> DescribeChatMessagesOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeChatMessagesRequest&, DescribeChatMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChatMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionResponse> DescribeExtensionOutcome;
                typedef std::future<DescribeExtensionOutcome> DescribeExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionRequest&, DescribeExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionsResponse> DescribeExtensionsOutcome;
                typedef std::future<DescribeExtensionsOutcome> DescribeExtensionsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionsRequest&, DescribeExtensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIMCdrsResponse> DescribeIMCdrsOutcome;
                typedef std::future<DescribeIMCdrsOutcome> DescribeIMCdrsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIMCdrsRequest&, DescribeIMCdrsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMCdrsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNumbersResponse> DescribeNumbersOutcome;
                typedef std::future<DescribeNumbersOutcome> DescribeNumbersOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeNumbersRequest&, DescribeNumbersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNumbersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePSTNActiveSessionListResponse> DescribePSTNActiveSessionListOutcome;
                typedef std::future<DescribePSTNActiveSessionListOutcome> DescribePSTNActiveSessionListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePSTNActiveSessionListRequest&, DescribePSTNActiveSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePSTNActiveSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProtectedTelCdrResponse> DescribeProtectedTelCdrOutcome;
                typedef std::future<DescribeProtectedTelCdrOutcome> DescribeProtectedTelCdrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeProtectedTelCdrRequest&, DescribeProtectedTelCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectedTelCdrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillGroupInfoListResponse> DescribeSkillGroupInfoListOutcome;
                typedef std::future<DescribeSkillGroupInfoListOutcome> DescribeSkillGroupInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeSkillGroupInfoListRequest&, DescribeSkillGroupInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillGroupInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStaffInfoListResponse> DescribeStaffInfoListOutcome;
                typedef std::future<DescribeStaffInfoListOutcome> DescribeStaffInfoListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeStaffInfoListRequest&, DescribeStaffInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaffInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStaffStatusMetricsResponse> DescribeStaffStatusMetricsOutcome;
                typedef std::future<DescribeStaffStatusMetricsOutcome> DescribeStaffStatusMetricsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeStaffStatusMetricsRequest&, DescribeStaffStatusMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaffStatusMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelCallInfoResponse> DescribeTelCallInfoOutcome;
                typedef std::future<DescribeTelCallInfoOutcome> DescribeTelCallInfoOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelCallInfoRequest&, DescribeTelCallInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelCallInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelCdrResponse> DescribeTelCdrOutcome;
                typedef std::future<DescribeTelCdrOutcome> DescribeTelCdrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelCdrRequest&, DescribeTelCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelCdrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelSessionResponse> DescribeTelSessionOutcome;
                typedef std::future<DescribeTelSessionOutcome> DescribeTelSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelSessionRequest&, DescribeTelSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCCCPhoneNumberResponse> DisableCCCPhoneNumberOutcome;
                typedef std::future<DisableCCCPhoneNumberOutcome> DisableCCCPhoneNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DisableCCCPhoneNumberRequest&, DisableCCCPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCCCPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::HangUpCallResponse> HangUpCallOutcome;
                typedef std::future<HangUpCallOutcome> HangUpCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::HangUpCallRequest&, HangUpCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HangUpCallAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtensionResponse> ModifyExtensionOutcome;
                typedef std::future<ModifyExtensionOutcome> ModifyExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyExtensionRequest&, ModifyExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffResponse> ModifyStaffOutcome;
                typedef std::future<ModifyStaffOutcome> ModifyStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffRequest&, ModifyStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetExtensionPasswordResponse> ResetExtensionPasswordOutcome;
                typedef std::future<ResetExtensionPasswordOutcome> ResetExtensionPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResetExtensionPasswordRequest&, ResetExtensionPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetExtensionPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoCalloutTaskResponse> StopAutoCalloutTaskOutcome;
                typedef std::future<StopAutoCalloutTaskOutcome> StopAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::StopAutoCalloutTaskRequest&, StopAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindNumberCallOutSkillGroupResponse> UnbindNumberCallOutSkillGroupOutcome;
                typedef std::future<UnbindNumberCallOutSkillGroupOutcome> UnbindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindNumberCallOutSkillGroupRequest&, UnbindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindStaffSkillGroupListResponse> UnbindStaffSkillGroupListOutcome;
                typedef std::future<UnbindStaffSkillGroupListOutcome> UnbindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindStaffSkillGroupListRequest&, UnbindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindStaffSkillGroupListAsyncHandler;



                /**
                 *绑定号码外呼技能组
                 * @param req BindNumberCallOutSkillGroupRequest
                 * @return BindNumberCallOutSkillGroupOutcome
                 */
                BindNumberCallOutSkillGroupOutcome BindNumberCallOutSkillGroup(const Model::BindNumberCallOutSkillGroupRequest &request);
                void BindNumberCallOutSkillGroupAsync(const Model::BindNumberCallOutSkillGroupRequest& request, const BindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindNumberCallOutSkillGroupOutcomeCallable BindNumberCallOutSkillGroupCallable(const Model::BindNumberCallOutSkillGroupRequest& request);

                /**
                 *绑定座席所属技能组
                 * @param req BindStaffSkillGroupListRequest
                 * @return BindStaffSkillGroupListOutcome
                 */
                BindStaffSkillGroupListOutcome BindStaffSkillGroupList(const Model::BindStaffSkillGroupListRequest &request);
                void BindStaffSkillGroupListAsync(const Model::BindStaffSkillGroupListRequest& request, const BindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindStaffSkillGroupListOutcomeCallable BindStaffSkillGroupListCallable(const Model::BindStaffSkillGroupListRequest& request);

                /**
                 *创建管理端访问链接
                 * @param req CreateAdminURLRequest
                 * @return CreateAdminURLOutcome
                 */
                CreateAdminURLOutcome CreateAdminURL(const Model::CreateAdminURLRequest &request);
                void CreateAdminURLAsync(const Model::CreateAdminURLRequest& request, const CreateAdminURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdminURLOutcomeCallable CreateAdminURLCallable(const Model::CreateAdminURLRequest& request);

                /**
                 *创建自动外呼任务
                 * @param req CreateAutoCalloutTaskRequest
                 * @return CreateAutoCalloutTaskOutcome
                 */
                CreateAutoCalloutTaskOutcome CreateAutoCalloutTask(const Model::CreateAutoCalloutTaskRequest &request);
                void CreateAutoCalloutTaskAsync(const Model::CreateAutoCalloutTaskRequest& request, const CreateAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoCalloutTaskOutcomeCallable CreateAutoCalloutTaskCallable(const Model::CreateAutoCalloutTaskRequest& request);

                /**
                 *创建技能组
                 * @param req CreateCCCSkillGroupRequest
                 * @return CreateCCCSkillGroupOutcome
                 */
                CreateCCCSkillGroupOutcome CreateCCCSkillGroup(const Model::CreateCCCSkillGroupRequest &request);
                void CreateCCCSkillGroupAsync(const Model::CreateCCCSkillGroupRequest& request, const CreateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCCSkillGroupOutcomeCallable CreateCCCSkillGroupCallable(const Model::CreateCCCSkillGroupRequest& request);

                /**
                 *创建外呼会话，当前仅支持双呼，即先使用平台号码呼出到坐席手机上，坐席接听后，然后再外呼用户，而且由于运营商频率限制，坐席手机号必须先加白名单，避免频控导致外呼失败。
                 * @param req CreateCallOutSessionRequest
                 * @return CreateCallOutSessionOutcome
                 */
                CreateCallOutSessionOutcome CreateCallOutSession(const Model::CreateCallOutSessionRequest &request);
                void CreateCallOutSessionAsync(const Model::CreateCallOutSessionRequest& request, const CreateCallOutSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCallOutSessionOutcomeCallable CreateCallOutSessionCallable(const Model::CreateCallOutSessionRequest& request);

                /**
                 *用于无限频率地呼叫坐席手机
                 * @param req CreateCarrierPrivilegeNumberApplicantRequest
                 * @return CreateCarrierPrivilegeNumberApplicantOutcome
                 */
                CreateCarrierPrivilegeNumberApplicantOutcome CreateCarrierPrivilegeNumberApplicant(const Model::CreateCarrierPrivilegeNumberApplicantRequest &request);
                void CreateCarrierPrivilegeNumberApplicantAsync(const Model::CreateCarrierPrivilegeNumberApplicantRequest& request, const CreateCarrierPrivilegeNumberApplicantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCarrierPrivilegeNumberApplicantOutcomeCallable CreateCarrierPrivilegeNumberApplicantCallable(const Model::CreateCarrierPrivilegeNumberApplicantRequest& request);

                /**
                 *创建话机账号
                 * @param req CreateExtensionRequest
                 * @return CreateExtensionOutcome
                 */
                CreateExtensionOutcome CreateExtension(const Model::CreateExtensionRequest &request);
                void CreateExtensionAsync(const Model::CreateExtensionRequest& request, const CreateExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExtensionOutcomeCallable CreateExtensionCallable(const Model::CreateExtensionRequest& request);

                /**
                 *创建 SDK 登录 Token。
                 * @param req CreateSDKLoginTokenRequest
                 * @return CreateSDKLoginTokenOutcome
                 */
                CreateSDKLoginTokenOutcome CreateSDKLoginToken(const Model::CreateSDKLoginTokenRequest &request);
                void CreateSDKLoginTokenAsync(const Model::CreateSDKLoginTokenRequest& request, const CreateSDKLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSDKLoginTokenOutcomeCallable CreateSDKLoginTokenCallable(const Model::CreateSDKLoginTokenRequest& request);

                /**
                 *创建客服账号。
                 * @param req CreateStaffRequest
                 * @return CreateStaffOutcome
                 */
                CreateStaffOutcome CreateStaff(const Model::CreateStaffRequest &request);
                void CreateStaffAsync(const Model::CreateStaffRequest& request, const CreateStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaffOutcomeCallable CreateStaffCallable(const Model::CreateStaffRequest& request);

                /**
                 *创建用户数据签名
                 * @param req CreateUserSigRequest
                 * @return CreateUserSigOutcome
                 */
                CreateUserSigOutcome CreateUserSig(const Model::CreateUserSigRequest &request);
                void CreateUserSigAsync(const Model::CreateUserSigRequest& request, const CreateUserSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserSigOutcomeCallable CreateUserSigCallable(const Model::CreateUserSigRequest& request);

                /**
                 *删除话机账号
                 * @param req DeleteExtensionRequest
                 * @return DeleteExtensionOutcome
                 */
                DeleteExtensionOutcome DeleteExtension(const Model::DeleteExtensionRequest &request);
                void DeleteExtensionAsync(const Model::DeleteExtensionRequest& request, const DeleteExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExtensionOutcomeCallable DeleteExtensionCallable(const Model::DeleteExtensionRequest& request);

                /**
                 *删除坐席信息
                 * @param req DeleteStaffRequest
                 * @return DeleteStaffOutcome
                 */
                DeleteStaffOutcome DeleteStaff(const Model::DeleteStaffRequest &request);
                void DeleteStaffAsync(const Model::DeleteStaffRequest& request, const DeleteStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStaffOutcomeCallable DeleteStaffCallable(const Model::DeleteStaffRequest& request);

                /**
                 *查询生效运营商白名单规则
                 * @param req DescribeActiveCarrierPrivilegeNumberRequest
                 * @return DescribeActiveCarrierPrivilegeNumberOutcome
                 */
                DescribeActiveCarrierPrivilegeNumberOutcome DescribeActiveCarrierPrivilegeNumber(const Model::DescribeActiveCarrierPrivilegeNumberRequest &request);
                void DescribeActiveCarrierPrivilegeNumberAsync(const Model::DescribeActiveCarrierPrivilegeNumberRequest& request, const DescribeActiveCarrierPrivilegeNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActiveCarrierPrivilegeNumberOutcomeCallable DescribeActiveCarrierPrivilegeNumberCallable(const Model::DescribeActiveCarrierPrivilegeNumberRequest& request);

                /**
                 *查询自动外呼任务详情
                 * @param req DescribeAutoCalloutTaskRequest
                 * @return DescribeAutoCalloutTaskOutcome
                 */
                DescribeAutoCalloutTaskOutcome DescribeAutoCalloutTask(const Model::DescribeAutoCalloutTaskRequest &request);
                void DescribeAutoCalloutTaskAsync(const Model::DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTaskOutcomeCallable DescribeAutoCalloutTaskCallable(const Model::DescribeAutoCalloutTaskRequest& request);

                /**
                 *批量查询自动任务外呼
                 * @param req DescribeAutoCalloutTasksRequest
                 * @return DescribeAutoCalloutTasksOutcome
                 */
                DescribeAutoCalloutTasksOutcome DescribeAutoCalloutTasks(const Model::DescribeAutoCalloutTasksRequest &request);
                void DescribeAutoCalloutTasksAsync(const Model::DescribeAutoCalloutTasksRequest& request, const DescribeAutoCalloutTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTasksOutcomeCallable DescribeAutoCalloutTasksCallable(const Model::DescribeAutoCalloutTasksRequest& request);

                /**
                 *获取用户购买信息列表
                 * @param req DescribeCCCBuyInfoListRequest
                 * @return DescribeCCCBuyInfoListOutcome
                 */
                DescribeCCCBuyInfoListOutcome DescribeCCCBuyInfoList(const Model::DescribeCCCBuyInfoListRequest &request);
                void DescribeCCCBuyInfoListAsync(const Model::DescribeCCCBuyInfoListRequest& request, const DescribeCCCBuyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCCBuyInfoListOutcomeCallable DescribeCCCBuyInfoListCallable(const Model::DescribeCCCBuyInfoListRequest& request);

                /**
                 *获取呼入实时数据统计指标
                 * @param req DescribeCallInMetricsRequest
                 * @return DescribeCallInMetricsOutcome
                 */
                DescribeCallInMetricsOutcome DescribeCallInMetrics(const Model::DescribeCallInMetricsRequest &request);
                void DescribeCallInMetricsAsync(const Model::DescribeCallInMetricsRequest& request, const DescribeCallInMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallInMetricsOutcomeCallable DescribeCallInMetricsCallable(const Model::DescribeCallInMetricsRequest& request);

                /**
                 *查询单状态
                 * @param req DescribeCarrierPrivilegeNumberApplicantsRequest
                 * @return DescribeCarrierPrivilegeNumberApplicantsOutcome
                 */
                DescribeCarrierPrivilegeNumberApplicantsOutcome DescribeCarrierPrivilegeNumberApplicants(const Model::DescribeCarrierPrivilegeNumberApplicantsRequest &request);
                void DescribeCarrierPrivilegeNumberApplicantsAsync(const Model::DescribeCarrierPrivilegeNumberApplicantsRequest& request, const DescribeCarrierPrivilegeNumberApplicantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCarrierPrivilegeNumberApplicantsOutcomeCallable DescribeCarrierPrivilegeNumberApplicantsCallable(const Model::DescribeCarrierPrivilegeNumberApplicantsRequest& request);

                /**
                 *获取指定服务记录文本聊天内容，需要先使用查询在线客服记录（DescribeIMCdrs） API 获取服务记录 SessionId。

文本聊天记录只保存了 1 年内的，1 年之前会自动清理。
                 * @param req DescribeChatMessagesRequest
                 * @return DescribeChatMessagesOutcome
                 */
                DescribeChatMessagesOutcome DescribeChatMessages(const Model::DescribeChatMessagesRequest &request);
                void DescribeChatMessagesAsync(const Model::DescribeChatMessagesRequest& request, const DescribeChatMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChatMessagesOutcomeCallable DescribeChatMessagesCallable(const Model::DescribeChatMessagesRequest& request);

                /**
                 *获取话机信息
                 * @param req DescribeExtensionRequest
                 * @return DescribeExtensionOutcome
                 */
                DescribeExtensionOutcome DescribeExtension(const Model::DescribeExtensionRequest &request);
                void DescribeExtensionAsync(const Model::DescribeExtensionRequest& request, const DescribeExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtensionOutcomeCallable DescribeExtensionCallable(const Model::DescribeExtensionRequest& request);

                /**
                 *查询话机列表信息
                 * @param req DescribeExtensionsRequest
                 * @return DescribeExtensionsOutcome
                 */
                DescribeExtensionsOutcome DescribeExtensions(const Model::DescribeExtensionsRequest &request);
                void DescribeExtensionsAsync(const Model::DescribeExtensionsRequest& request, const DescribeExtensionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtensionsOutcomeCallable DescribeExtensionsCallable(const Model::DescribeExtensionsRequest& request);

                /**
                 *获取包括全媒体和文本会话两种类型的服务记录。
                 * @param req DescribeIMCdrsRequest
                 * @return DescribeIMCdrsOutcome
                 */
                DescribeIMCdrsOutcome DescribeIMCdrs(const Model::DescribeIMCdrsRequest &request);
                void DescribeIMCdrsAsync(const Model::DescribeIMCdrsRequest& request, const DescribeIMCdrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMCdrsOutcomeCallable DescribeIMCdrsCallable(const Model::DescribeIMCdrsRequest& request);

                /**
                 *查询号码列表
                 * @param req DescribeNumbersRequest
                 * @return DescribeNumbersOutcome
                 */
                DescribeNumbersOutcome DescribeNumbers(const Model::DescribeNumbersRequest &request);
                void DescribeNumbersAsync(const Model::DescribeNumbersRequest& request, const DescribeNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNumbersOutcomeCallable DescribeNumbersCallable(const Model::DescribeNumbersRequest& request);

                /**
                 *获取当前正在通话的会话列表
                 * @param req DescribePSTNActiveSessionListRequest
                 * @return DescribePSTNActiveSessionListOutcome
                 */
                DescribePSTNActiveSessionListOutcome DescribePSTNActiveSessionList(const Model::DescribePSTNActiveSessionListRequest &request);
                void DescribePSTNActiveSessionListAsync(const Model::DescribePSTNActiveSessionListRequest& request, const DescribePSTNActiveSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePSTNActiveSessionListOutcomeCallable DescribePSTNActiveSessionListCallable(const Model::DescribePSTNActiveSessionListRequest& request);

                /**
                 *获取主被叫受保护的电话服务记录与录音
                 * @param req DescribeProtectedTelCdrRequest
                 * @return DescribeProtectedTelCdrOutcome
                 */
                DescribeProtectedTelCdrOutcome DescribeProtectedTelCdr(const Model::DescribeProtectedTelCdrRequest &request);
                void DescribeProtectedTelCdrAsync(const Model::DescribeProtectedTelCdrRequest& request, const DescribeProtectedTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProtectedTelCdrOutcomeCallable DescribeProtectedTelCdrCallable(const Model::DescribeProtectedTelCdrRequest& request);

                /**
                 *获取技能组信息列表
                 * @param req DescribeSkillGroupInfoListRequest
                 * @return DescribeSkillGroupInfoListOutcome
                 */
                DescribeSkillGroupInfoListOutcome DescribeSkillGroupInfoList(const Model::DescribeSkillGroupInfoListRequest &request);
                void DescribeSkillGroupInfoListAsync(const Model::DescribeSkillGroupInfoListRequest& request, const DescribeSkillGroupInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillGroupInfoListOutcomeCallable DescribeSkillGroupInfoListCallable(const Model::DescribeSkillGroupInfoListRequest& request);

                /**
                 *获取坐席信息列表
                 * @param req DescribeStaffInfoListRequest
                 * @return DescribeStaffInfoListOutcome
                 */
                DescribeStaffInfoListOutcome DescribeStaffInfoList(const Model::DescribeStaffInfoListRequest &request);
                void DescribeStaffInfoListAsync(const Model::DescribeStaffInfoListRequest& request, const DescribeStaffInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStaffInfoListOutcomeCallable DescribeStaffInfoListCallable(const Model::DescribeStaffInfoListRequest& request);

                /**
                 *获取坐席实时状态统计指标
                 * @param req DescribeStaffStatusMetricsRequest
                 * @return DescribeStaffStatusMetricsOutcome
                 */
                DescribeStaffStatusMetricsOutcome DescribeStaffStatusMetrics(const Model::DescribeStaffStatusMetricsRequest &request);
                void DescribeStaffStatusMetricsAsync(const Model::DescribeStaffStatusMetricsRequest& request, const DescribeStaffStatusMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStaffStatusMetricsOutcomeCallable DescribeStaffStatusMetricsCallable(const Model::DescribeStaffStatusMetricsRequest& request);

                /**
                 *按实例获取电话消耗统计
                 * @param req DescribeTelCallInfoRequest
                 * @return DescribeTelCallInfoOutcome
                 */
                DescribeTelCallInfoOutcome DescribeTelCallInfo(const Model::DescribeTelCallInfoRequest &request);
                void DescribeTelCallInfoAsync(const Model::DescribeTelCallInfoRequest& request, const DescribeTelCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelCallInfoOutcomeCallable DescribeTelCallInfoCallable(const Model::DescribeTelCallInfoRequest& request);

                /**
                 *获取电话服务记录与录音
                 * @param req DescribeTelCdrRequest
                 * @return DescribeTelCdrOutcome
                 */
                DescribeTelCdrOutcome DescribeTelCdr(const Model::DescribeTelCdrRequest &request);
                void DescribeTelCdrAsync(const Model::DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelCdrOutcomeCallable DescribeTelCdrCallable(const Model::DescribeTelCdrRequest& request);

                /**
                 *获取 PSTN 会话信息
                 * @param req DescribeTelSessionRequest
                 * @return DescribeTelSessionOutcome
                 */
                DescribeTelSessionOutcome DescribeTelSession(const Model::DescribeTelSessionRequest &request);
                void DescribeTelSessionAsync(const Model::DescribeTelSessionRequest& request, const DescribeTelSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelSessionOutcomeCallable DescribeTelSessionCallable(const Model::DescribeTelSessionRequest& request);

                /**
                 *停用号码
                 * @param req DisableCCCPhoneNumberRequest
                 * @return DisableCCCPhoneNumberOutcome
                 */
                DisableCCCPhoneNumberOutcome DisableCCCPhoneNumber(const Model::DisableCCCPhoneNumberRequest &request);
                void DisableCCCPhoneNumberAsync(const Model::DisableCCCPhoneNumberRequest& request, const DisableCCCPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCCCPhoneNumberOutcomeCallable DisableCCCPhoneNumberCallable(const Model::DisableCCCPhoneNumberRequest& request);

                /**
                 *挂断电话
                 * @param req HangUpCallRequest
                 * @return HangUpCallOutcome
                 */
                HangUpCallOutcome HangUpCall(const Model::HangUpCallRequest &request);
                void HangUpCallAsync(const Model::HangUpCallRequest& request, const HangUpCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HangUpCallOutcomeCallable HangUpCallCallable(const Model::HangUpCallRequest& request);

                /**
                 *修改话机账号(绑定技能组、绑定坐席账号)
                 * @param req ModifyExtensionRequest
                 * @return ModifyExtensionOutcome
                 */
                ModifyExtensionOutcome ModifyExtension(const Model::ModifyExtensionRequest &request);
                void ModifyExtensionAsync(const Model::ModifyExtensionRequest& request, const ModifyExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtensionOutcomeCallable ModifyExtensionCallable(const Model::ModifyExtensionRequest& request);

                /**
                 *修改客服账号
                 * @param req ModifyStaffRequest
                 * @return ModifyStaffOutcome
                 */
                ModifyStaffOutcome ModifyStaff(const Model::ModifyStaffRequest &request);
                void ModifyStaffAsync(const Model::ModifyStaffRequest& request, const ModifyStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffOutcomeCallable ModifyStaffCallable(const Model::ModifyStaffRequest& request);

                /**
                 *重置话机注册密码
                 * @param req ResetExtensionPasswordRequest
                 * @return ResetExtensionPasswordOutcome
                 */
                ResetExtensionPasswordOutcome ResetExtensionPassword(const Model::ResetExtensionPasswordRequest &request);
                void ResetExtensionPasswordAsync(const Model::ResetExtensionPasswordRequest& request, const ResetExtensionPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetExtensionPasswordOutcomeCallable ResetExtensionPasswordCallable(const Model::ResetExtensionPasswordRequest& request);

                /**
                 *停止自动外呼任务
                 * @param req StopAutoCalloutTaskRequest
                 * @return StopAutoCalloutTaskOutcome
                 */
                StopAutoCalloutTaskOutcome StopAutoCalloutTask(const Model::StopAutoCalloutTaskRequest &request);
                void StopAutoCalloutTaskAsync(const Model::StopAutoCalloutTaskRequest& request, const StopAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoCalloutTaskOutcomeCallable StopAutoCalloutTaskCallable(const Model::StopAutoCalloutTaskRequest& request);

                /**
                 *解绑号码外呼技能组
                 * @param req UnbindNumberCallOutSkillGroupRequest
                 * @return UnbindNumberCallOutSkillGroupOutcome
                 */
                UnbindNumberCallOutSkillGroupOutcome UnbindNumberCallOutSkillGroup(const Model::UnbindNumberCallOutSkillGroupRequest &request);
                void UnbindNumberCallOutSkillGroupAsync(const Model::UnbindNumberCallOutSkillGroupRequest& request, const UnbindNumberCallOutSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindNumberCallOutSkillGroupOutcomeCallable UnbindNumberCallOutSkillGroupCallable(const Model::UnbindNumberCallOutSkillGroupRequest& request);

                /**
                 *解绑坐席所属技能组
                 * @param req UnbindStaffSkillGroupListRequest
                 * @return UnbindStaffSkillGroupListOutcome
                 */
                UnbindStaffSkillGroupListOutcome UnbindStaffSkillGroupList(const Model::UnbindStaffSkillGroupListRequest &request);
                void UnbindStaffSkillGroupListAsync(const Model::UnbindStaffSkillGroupListRequest& request, const UnbindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindStaffSkillGroupListOutcomeCallable UnbindStaffSkillGroupListCallable(const Model::UnbindStaffSkillGroupListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_

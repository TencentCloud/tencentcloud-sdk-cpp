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
#include <tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallInInterfaceRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallInInterfaceResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAIAgentCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAIAgentCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAICallRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAICallResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateCompanyApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateCompanyApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateIVRSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateIVRSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/CreateUserSigRequest.h>
#include <tencentcloud/ccc/v20200210/model/CreateUserSigResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAILatencyRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAILatencyResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignResponse.h>
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
#include <tencentcloud/ccc/v20200210/model/DescribeCompanyListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeCompanyListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeExtensionsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIMCdrsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIvrAudioListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeIvrAudioListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeNumbersResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsResponse.h>
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
#include <tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrResponse.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h>
#include <tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h>
#include <tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h>
#include <tencentcloud/ccc/v20200210/model/ForceMemberOfflineRequest.h>
#include <tencentcloud/ccc/v20200210/model/ForceMemberOfflineResponse.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallRequest.h>
#include <tencentcloud/ccc/v20200210/model/HangUpCallResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyCompanyApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyCompanyApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ModifyStaffPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h>
#include <tencentcloud/ccc/v20200210/model/RestoreMemberOnlineRequest.h>
#include <tencentcloud/ccc/v20200210/model/RestoreMemberOnlineResponse.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h>
#include <tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h>
#include <tencentcloud/ccc/v20200210/model/TransferToManualRequest.h>
#include <tencentcloud/ccc/v20200210/model/TransferToManualResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h>
#include <tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupResponse.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignRequest.h>
#include <tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignResponse.h>
#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioRequest.h>
#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioResponse.h>


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

                typedef Outcome<Core::Error, Model::AbortAgentCruiseDialingCampaignResponse> AbortAgentCruiseDialingCampaignOutcome;
                typedef std::future<AbortAgentCruiseDialingCampaignOutcome> AbortAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::AbortAgentCruiseDialingCampaignRequest&, AbortAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortAgentCruiseDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::AbortPredictiveDialingCampaignResponse> AbortPredictiveDialingCampaignOutcome;
                typedef std::future<AbortPredictiveDialingCampaignOutcome> AbortPredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::AbortPredictiveDialingCampaignRequest&, AbortPredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AbortPredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::BindNumberCallInInterfaceResponse> BindNumberCallInInterfaceOutcome;
                typedef std::future<BindNumberCallInInterfaceOutcome> BindNumberCallInInterfaceOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindNumberCallInInterfaceRequest&, BindNumberCallInInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberCallInInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::BindNumberCallOutSkillGroupResponse> BindNumberCallOutSkillGroupOutcome;
                typedef std::future<BindNumberCallOutSkillGroupOutcome> BindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindNumberCallOutSkillGroupRequest&, BindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindStaffSkillGroupListResponse> BindStaffSkillGroupListOutcome;
                typedef std::future<BindStaffSkillGroupListOutcome> BindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::BindStaffSkillGroupListRequest&, BindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIAgentCallResponse> CreateAIAgentCallOutcome;
                typedef std::future<CreateAIAgentCallOutcome> CreateAIAgentCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAIAgentCallRequest&, CreateAIAgentCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIAgentCallAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAICallResponse> CreateAICallOutcome;
                typedef std::future<CreateAICallOutcome> CreateAICallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAICallRequest&, CreateAICallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAICallAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAdminURLResponse> CreateAdminURLOutcome;
                typedef std::future<CreateAdminURLOutcome> CreateAdminURLOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAdminURLRequest&, CreateAdminURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAdminURLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentCruiseDialingCampaignResponse> CreateAgentCruiseDialingCampaignOutcome;
                typedef std::future<CreateAgentCruiseDialingCampaignOutcome> CreateAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateAgentCruiseDialingCampaignRequest&, CreateAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentCruiseDialingCampaignAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateCompanyApplyResponse> CreateCompanyApplyOutcome;
                typedef std::future<CreateCompanyApplyOutcome> CreateCompanyApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateCompanyApplyRequest&, CreateCompanyApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCompanyApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExtensionResponse> CreateExtensionOutcome;
                typedef std::future<CreateExtensionOutcome> CreateExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateExtensionRequest&, CreateExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIVRSessionResponse> CreateIVRSessionOutcome;
                typedef std::future<CreateIVRSessionOutcome> CreateIVRSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateIVRSessionRequest&, CreateIVRSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIVRSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOwnNumberApplyResponse> CreateOwnNumberApplyOutcome;
                typedef std::future<CreateOwnNumberApplyOutcome> CreateOwnNumberApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateOwnNumberApplyRequest&, CreateOwnNumberApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOwnNumberApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePredictiveDialingCampaignResponse> CreatePredictiveDialingCampaignOutcome;
                typedef std::future<CreatePredictiveDialingCampaignOutcome> CreatePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreatePredictiveDialingCampaignRequest&, CreatePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSDKLoginTokenResponse> CreateSDKLoginTokenOutcome;
                typedef std::future<CreateSDKLoginTokenOutcome> CreateSDKLoginTokenOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateSDKLoginTokenRequest&, CreateSDKLoginTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSDKLoginTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaffResponse> CreateStaffOutcome;
                typedef std::future<CreateStaffOutcome> CreateStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateStaffRequest&, CreateStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserSigResponse> CreateUserSigOutcome;
                typedef std::future<CreateUserSigOutcome> CreateUserSigOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::CreateUserSigRequest&, CreateUserSigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserSigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCCSkillGroupResponse> DeleteCCCSkillGroupOutcome;
                typedef std::future<DeleteCCCSkillGroupOutcome> DeleteCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteCCCSkillGroupRequest&, DeleteCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExtensionResponse> DeleteExtensionOutcome;
                typedef std::future<DeleteExtensionOutcome> DeleteExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteExtensionRequest&, DeleteExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePredictiveDialingCampaignResponse> DeletePredictiveDialingCampaignOutcome;
                typedef std::future<DeletePredictiveDialingCampaignOutcome> DeletePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeletePredictiveDialingCampaignRequest&, DeletePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStaffResponse> DeleteStaffOutcome;
                typedef std::future<DeleteStaffOutcome> DeleteStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DeleteStaffRequest&, DeleteStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAICallExtractResultResponse> DescribeAICallExtractResultOutcome;
                typedef std::future<DescribeAICallExtractResultOutcome> DescribeAICallExtractResultOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAICallExtractResultRequest&, DescribeAICallExtractResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAICallExtractResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAILatencyResponse> DescribeAILatencyOutcome;
                typedef std::future<DescribeAILatencyOutcome> DescribeAILatencyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAILatencyRequest&, DescribeAILatencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAILatencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActiveCarrierPrivilegeNumberResponse> DescribeActiveCarrierPrivilegeNumberOutcome;
                typedef std::future<DescribeActiveCarrierPrivilegeNumberOutcome> DescribeActiveCarrierPrivilegeNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeActiveCarrierPrivilegeNumberRequest&, DescribeActiveCarrierPrivilegeNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActiveCarrierPrivilegeNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentCruiseDialingCampaignResponse> DescribeAgentCruiseDialingCampaignOutcome;
                typedef std::future<DescribeAgentCruiseDialingCampaignOutcome> DescribeAgentCruiseDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeAgentCruiseDialingCampaignRequest&, DescribeAgentCruiseDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentCruiseDialingCampaignAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeCompanyListResponse> DescribeCompanyListOutcome;
                typedef std::future<DescribeCompanyListOutcome> DescribeCompanyListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeCompanyListRequest&, DescribeCompanyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompanyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionResponse> DescribeExtensionOutcome;
                typedef std::future<DescribeExtensionOutcome> DescribeExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionRequest&, DescribeExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionsResponse> DescribeExtensionsOutcome;
                typedef std::future<DescribeExtensionsOutcome> DescribeExtensionsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeExtensionsRequest&, DescribeExtensionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIMCdrListResponse> DescribeIMCdrListOutcome;
                typedef std::future<DescribeIMCdrListOutcome> DescribeIMCdrListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIMCdrListRequest&, DescribeIMCdrListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMCdrListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIMCdrsResponse> DescribeIMCdrsOutcome;
                typedef std::future<DescribeIMCdrsOutcome> DescribeIMCdrsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIMCdrsRequest&, DescribeIMCdrsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMCdrsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIvrAudioListResponse> DescribeIvrAudioListOutcome;
                typedef std::future<DescribeIvrAudioListOutcome> DescribeIvrAudioListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeIvrAudioListRequest&, DescribeIvrAudioListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIvrAudioListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNumbersResponse> DescribeNumbersOutcome;
                typedef std::future<DescribeNumbersOutcome> DescribeNumbersOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeNumbersRequest&, DescribeNumbersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNumbersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePSTNActiveSessionListResponse> DescribePSTNActiveSessionListOutcome;
                typedef std::future<DescribePSTNActiveSessionListOutcome> DescribePSTNActiveSessionListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePSTNActiveSessionListRequest&, DescribePSTNActiveSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePSTNActiveSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingCampaignResponse> DescribePredictiveDialingCampaignOutcome;
                typedef std::future<DescribePredictiveDialingCampaignOutcome> DescribePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingCampaignRequest&, DescribePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingCampaignsResponse> DescribePredictiveDialingCampaignsOutcome;
                typedef std::future<DescribePredictiveDialingCampaignsOutcome> DescribePredictiveDialingCampaignsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingCampaignsRequest&, DescribePredictiveDialingCampaignsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingCampaignsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePredictiveDialingSessionsResponse> DescribePredictiveDialingSessionsOutcome;
                typedef std::future<DescribePredictiveDialingSessionsOutcome> DescribePredictiveDialingSessionsOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribePredictiveDialingSessionsRequest&, DescribePredictiveDialingSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePredictiveDialingSessionsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeTelRecordAsrResponse> DescribeTelRecordAsrOutcome;
                typedef std::future<DescribeTelRecordAsrOutcome> DescribeTelRecordAsrOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelRecordAsrRequest&, DescribeTelRecordAsrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelRecordAsrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTelSessionResponse> DescribeTelSessionOutcome;
                typedef std::future<DescribeTelSessionOutcome> DescribeTelSessionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DescribeTelSessionRequest&, DescribeTelSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTelSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCCCPhoneNumberResponse> DisableCCCPhoneNumberOutcome;
                typedef std::future<DisableCCCPhoneNumberOutcome> DisableCCCPhoneNumberOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::DisableCCCPhoneNumberRequest&, DisableCCCPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCCCPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::ForceMemberOfflineResponse> ForceMemberOfflineOutcome;
                typedef std::future<ForceMemberOfflineOutcome> ForceMemberOfflineOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ForceMemberOfflineRequest&, ForceMemberOfflineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ForceMemberOfflineAsyncHandler;
                typedef Outcome<Core::Error, Model::HangUpCallResponse> HangUpCallOutcome;
                typedef std::future<HangUpCallOutcome> HangUpCallOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::HangUpCallRequest&, HangUpCallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HangUpCallAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCompanyApplyResponse> ModifyCompanyApplyOutcome;
                typedef std::future<ModifyCompanyApplyOutcome> ModifyCompanyApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyCompanyApplyRequest&, ModifyCompanyApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCompanyApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtensionResponse> ModifyExtensionOutcome;
                typedef std::future<ModifyExtensionOutcome> ModifyExtensionOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyExtensionRequest&, ModifyExtensionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtensionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOwnNumberApplyResponse> ModifyOwnNumberApplyOutcome;
                typedef std::future<ModifyOwnNumberApplyOutcome> ModifyOwnNumberApplyOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyOwnNumberApplyRequest&, ModifyOwnNumberApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOwnNumberApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffResponse> ModifyStaffOutcome;
                typedef std::future<ModifyStaffOutcome> ModifyStaffOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffRequest&, ModifyStaffOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStaffPasswordResponse> ModifyStaffPasswordOutcome;
                typedef std::future<ModifyStaffPasswordOutcome> ModifyStaffPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ModifyStaffPasswordRequest&, ModifyStaffPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStaffPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::PausePredictiveDialingCampaignResponse> PausePredictiveDialingCampaignOutcome;
                typedef std::future<PausePredictiveDialingCampaignOutcome> PausePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::PausePredictiveDialingCampaignRequest&, PausePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PausePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetExtensionPasswordResponse> ResetExtensionPasswordOutcome;
                typedef std::future<ResetExtensionPasswordOutcome> ResetExtensionPasswordOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResetExtensionPasswordRequest&, ResetExtensionPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetExtensionPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreMemberOnlineResponse> RestoreMemberOnlineOutcome;
                typedef std::future<RestoreMemberOnlineOutcome> RestoreMemberOnlineOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::RestoreMemberOnlineRequest&, RestoreMemberOnlineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreMemberOnlineAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumePredictiveDialingCampaignResponse> ResumePredictiveDialingCampaignOutcome;
                typedef std::future<ResumePredictiveDialingCampaignOutcome> ResumePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::ResumePredictiveDialingCampaignRequest&, ResumePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAutoCalloutTaskResponse> StopAutoCalloutTaskOutcome;
                typedef std::future<StopAutoCalloutTaskOutcome> StopAutoCalloutTaskOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::StopAutoCalloutTaskRequest&, StopAutoCalloutTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAutoCalloutTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferToManualResponse> TransferToManualOutcome;
                typedef std::future<TransferToManualOutcome> TransferToManualOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::TransferToManualRequest&, TransferToManualOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferToManualAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindNumberCallOutSkillGroupResponse> UnbindNumberCallOutSkillGroupOutcome;
                typedef std::future<UnbindNumberCallOutSkillGroupOutcome> UnbindNumberCallOutSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindNumberCallOutSkillGroupRequest&, UnbindNumberCallOutSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindNumberCallOutSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindStaffSkillGroupListResponse> UnbindStaffSkillGroupListOutcome;
                typedef std::future<UnbindStaffSkillGroupListOutcome> UnbindStaffSkillGroupListOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UnbindStaffSkillGroupListRequest&, UnbindStaffSkillGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindStaffSkillGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCCCSkillGroupResponse> UpdateCCCSkillGroupOutcome;
                typedef std::future<UpdateCCCSkillGroupOutcome> UpdateCCCSkillGroupOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UpdateCCCSkillGroupRequest&, UpdateCCCSkillGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCCCSkillGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePredictiveDialingCampaignResponse> UpdatePredictiveDialingCampaignOutcome;
                typedef std::future<UpdatePredictiveDialingCampaignOutcome> UpdatePredictiveDialingCampaignOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UpdatePredictiveDialingCampaignRequest&, UpdatePredictiveDialingCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePredictiveDialingCampaignAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadIvrAudioResponse> UploadIvrAudioOutcome;
                typedef std::future<UploadIvrAudioOutcome> UploadIvrAudioOutcomeCallable;
                typedef std::function<void(const CccClient*, const Model::UploadIvrAudioRequest&, UploadIvrAudioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadIvrAudioAsyncHandler;



                /**
                 *停止座席巡航式外呼任务
                 * @param req AbortAgentCruiseDialingCampaignRequest
                 * @return AbortAgentCruiseDialingCampaignOutcome
                 */
                AbortAgentCruiseDialingCampaignOutcome AbortAgentCruiseDialingCampaign(const Model::AbortAgentCruiseDialingCampaignRequest &request);
                void AbortAgentCruiseDialingCampaignAsync(const Model::AbortAgentCruiseDialingCampaignRequest& request, const AbortAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortAgentCruiseDialingCampaignOutcomeCallable AbortAgentCruiseDialingCampaignCallable(const Model::AbortAgentCruiseDialingCampaignRequest& request);

                /**
                 *停止预测式外呼任务
                 * @param req AbortPredictiveDialingCampaignRequest
                 * @return AbortPredictiveDialingCampaignOutcome
                 */
                AbortPredictiveDialingCampaignOutcome AbortPredictiveDialingCampaign(const Model::AbortPredictiveDialingCampaignRequest &request);
                void AbortPredictiveDialingCampaignAsync(const Model::AbortPredictiveDialingCampaignRequest& request, const AbortPredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AbortPredictiveDialingCampaignOutcomeCallable AbortPredictiveDialingCampaignCallable(const Model::AbortPredictiveDialingCampaignRequest& request);

                /**
                 *绑定号码呼入回调接口
                 * @param req BindNumberCallInInterfaceRequest
                 * @return BindNumberCallInInterfaceOutcome
                 */
                BindNumberCallInInterfaceOutcome BindNumberCallInInterface(const Model::BindNumberCallInInterfaceRequest &request);
                void BindNumberCallInInterfaceAsync(const Model::BindNumberCallInInterfaceRequest& request, const BindNumberCallInInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindNumberCallInInterfaceOutcomeCallable BindNumberCallInInterfaceCallable(const Model::BindNumberCallInInterfaceRequest& request);

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
                 *用于调用AI模型发起外呼通话，仅限自有电话号码使用，目前开通高级版座席**限时**免费体验。

发起通话前，请先确认您的AI模型是否兼容 OpenAI、Azure 或 Minimax 协议，并前往模型服务商网站获取相关鉴权信息。 具体功能说明请参考文档 [腾讯云联络中心AI通话平台](https://cloud.tencent.com/document/product/679/112100)。
                 * @param req CreateAIAgentCallRequest
                 * @return CreateAIAgentCallOutcome
                 */
                CreateAIAgentCallOutcome CreateAIAgentCall(const Model::CreateAIAgentCallRequest &request);
                void CreateAIAgentCallAsync(const Model::CreateAIAgentCallRequest& request, const CreateAIAgentCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIAgentCallOutcomeCallable CreateAIAgentCallCallable(const Model::CreateAIAgentCallRequest& request);

                /**
                 *用于调用AI模型发起外呼通话，仅限自有电话号码使用，目前开通高级版座席**限时**免费体验。

发起通话前，请先确认您的AI模型是否兼容 OpenAI、Azure 或 Minimax 协议，并前往模型服务商网站获取相关鉴权信息。 具体功能说明请参考文档 [腾讯云联络中心AI通话平台](https://cloud.tencent.com/document/product/679/112100)。
                 * @param req CreateAICallRequest
                 * @return CreateAICallOutcome
                 */
                CreateAICallOutcome CreateAICall(const Model::CreateAICallRequest &request);
                void CreateAICallAsync(const Model::CreateAICallRequest& request, const CreateAICallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAICallOutcomeCallable CreateAICallCallable(const Model::CreateAICallRequest& request);

                /**
                 *创建管理端访问链接
                 * @param req CreateAdminURLRequest
                 * @return CreateAdminURLOutcome
                 */
                CreateAdminURLOutcome CreateAdminURL(const Model::CreateAdminURLRequest &request);
                void CreateAdminURLAsync(const Model::CreateAdminURLRequest& request, const CreateAdminURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAdminURLOutcomeCallable CreateAdminURLCallable(const Model::CreateAdminURLRequest& request);

                /**
                 *座席巡航式外呼。
                 * @param req CreateAgentCruiseDialingCampaignRequest
                 * @return CreateAgentCruiseDialingCampaignOutcome
                 */
                CreateAgentCruiseDialingCampaignOutcome CreateAgentCruiseDialingCampaign(const Model::CreateAgentCruiseDialingCampaignRequest &request);
                void CreateAgentCruiseDialingCampaignAsync(const Model::CreateAgentCruiseDialingCampaignRequest& request, const CreateAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentCruiseDialingCampaignOutcomeCallable CreateAgentCruiseDialingCampaignCallable(const Model::CreateAgentCruiseDialingCampaignRequest& request);

                /**
                 *创建自动外呼任务
                 * @param req CreateAutoCalloutTaskRequest
                 * @return CreateAutoCalloutTaskOutcome
                 */
                CreateAutoCalloutTaskOutcome CreateAutoCalloutTask(const Model::CreateAutoCalloutTaskRequest &request);
                void CreateAutoCalloutTaskAsync(const Model::CreateAutoCalloutTaskRequest& request, const CreateAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoCalloutTaskOutcomeCallable CreateAutoCalloutTaskCallable(const Model::CreateAutoCalloutTaskRequest& request);

                /**
                 *新建技能组
                 * @param req CreateCCCSkillGroupRequest
                 * @return CreateCCCSkillGroupOutcome
                 */
                CreateCCCSkillGroupOutcome CreateCCCSkillGroup(const Model::CreateCCCSkillGroupRequest &request);
                void CreateCCCSkillGroupAsync(const Model::CreateCCCSkillGroupRequest& request, const CreateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCCSkillGroupOutcomeCallable CreateCCCSkillGroupCallable(const Model::CreateCCCSkillGroupRequest& request);

                /**
                 *创建外呼会话，当前仅支持双呼，即先使用平台号码呼出到座席手机上，座席接听后，然后再外呼用户，而且由于运营商频率限制，座席手机号必须先加白名单，避免频控导致外呼失败。所以调用此接口前，下述操作均已完成
1. UserId 指定的座席已经[绑定手机号](https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF)
2. 座席绑定的手机号已经[申请并通过了外呼白名单](https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4)
3. 当前座席侧只能呼叫其手机，所以 IsForceMobile 字段当前必须为 true
4. 被叫不要填当前 UserId 所绑定的手机号，否则会造成占线呼叫失败
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
                 *创建公司资质申请（1、首次使用接口，建议先在云联络中心控制台查看各个资料模板:https://console.cloud.tencent.com/ccc/enterprise/update。2、参数中图片Url建议使用腾讯云Cos存储的临时链接）
                 * @param req CreateCompanyApplyRequest
                 * @return CreateCompanyApplyOutcome
                 */
                CreateCompanyApplyOutcome CreateCompanyApply(const Model::CreateCompanyApplyRequest &request);
                void CreateCompanyApplyAsync(const Model::CreateCompanyApplyRequest& request, const CreateCompanyApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCompanyApplyOutcomeCallable CreateCompanyApplyCallable(const Model::CreateCompanyApplyRequest& request);

                /**
                 *创建话机账号
                 * @param req CreateExtensionRequest
                 * @return CreateExtensionOutcome
                 */
                CreateExtensionOutcome CreateExtension(const Model::CreateExtensionRequest &request);
                void CreateExtensionAsync(const Model::CreateExtensionRequest& request, const CreateExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExtensionOutcomeCallable CreateExtensionCallable(const Model::CreateExtensionRequest& request);

                /**
                 *创建关联 IVR 的会话，仅高级版支持，目前支持呼入和自动外呼两种 IVR 类型。收到请求后 TCCC 会先尝试呼通被叫，然后进入 IVR 流程。
                 * @param req CreateIVRSessionRequest
                 * @return CreateIVRSessionOutcome
                 */
                CreateIVRSessionOutcome CreateIVRSession(const Model::CreateIVRSessionRequest &request);
                void CreateIVRSessionAsync(const Model::CreateIVRSessionRequest& request, const CreateIVRSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIVRSessionOutcomeCallable CreateIVRSessionCallable(const Model::CreateIVRSessionRequest& request);

                /**
                 *创建客户自携号码接入审核
                 * @param req CreateOwnNumberApplyRequest
                 * @return CreateOwnNumberApplyOutcome
                 */
                CreateOwnNumberApplyOutcome CreateOwnNumberApply(const Model::CreateOwnNumberApplyRequest &request);
                void CreateOwnNumberApplyAsync(const Model::CreateOwnNumberApplyRequest& request, const CreateOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOwnNumberApplyOutcomeCallable CreateOwnNumberApplyCallable(const Model::CreateOwnNumberApplyRequest& request);

                /**
                 *创建预测式外呼任务
                 * @param req CreatePredictiveDialingCampaignRequest
                 * @return CreatePredictiveDialingCampaignOutcome
                 */
                CreatePredictiveDialingCampaignOutcome CreatePredictiveDialingCampaign(const Model::CreatePredictiveDialingCampaignRequest &request);
                void CreatePredictiveDialingCampaignAsync(const Model::CreatePredictiveDialingCampaignRequest& request, const CreatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePredictiveDialingCampaignOutcomeCallable CreatePredictiveDialingCampaignCallable(const Model::CreatePredictiveDialingCampaignRequest& request);

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
                 *删除技能组
                 * @param req DeleteCCCSkillGroupRequest
                 * @return DeleteCCCSkillGroupOutcome
                 */
                DeleteCCCSkillGroupOutcome DeleteCCCSkillGroup(const Model::DeleteCCCSkillGroupRequest &request);
                void DeleteCCCSkillGroupAsync(const Model::DeleteCCCSkillGroupRequest& request, const DeleteCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCCSkillGroupOutcomeCallable DeleteCCCSkillGroupCallable(const Model::DeleteCCCSkillGroupRequest& request);

                /**
                 *删除话机账号
                 * @param req DeleteExtensionRequest
                 * @return DeleteExtensionOutcome
                 */
                DeleteExtensionOutcome DeleteExtension(const Model::DeleteExtensionRequest &request);
                void DeleteExtensionAsync(const Model::DeleteExtensionRequest& request, const DeleteExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExtensionOutcomeCallable DeleteExtensionCallable(const Model::DeleteExtensionRequest& request);

                /**
                 *删除预测式外呼任务
                 * @param req DeletePredictiveDialingCampaignRequest
                 * @return DeletePredictiveDialingCampaignOutcome
                 */
                DeletePredictiveDialingCampaignOutcome DeletePredictiveDialingCampaign(const Model::DeletePredictiveDialingCampaignRequest &request);
                void DeletePredictiveDialingCampaignAsync(const Model::DeletePredictiveDialingCampaignRequest& request, const DeletePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePredictiveDialingCampaignOutcomeCallable DeletePredictiveDialingCampaignCallable(const Model::DeletePredictiveDialingCampaignRequest& request);

                /**
                 *删除坐席信息
                 * @param req DeleteStaffRequest
                 * @return DeleteStaffOutcome
                 */
                DeleteStaffOutcome DeleteStaff(const Model::DeleteStaffRequest &request);
                void DeleteStaffAsync(const Model::DeleteStaffRequest& request, const DeleteStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStaffOutcomeCallable DeleteStaffCallable(const Model::DeleteStaffRequest& request);

                /**
                 *获取 AI 通话内容提取结果。
                 * @param req DescribeAICallExtractResultRequest
                 * @return DescribeAICallExtractResultOutcome
                 */
                DescribeAICallExtractResultOutcome DescribeAICallExtractResult(const Model::DescribeAICallExtractResultRequest &request);
                void DescribeAICallExtractResultAsync(const Model::DescribeAICallExtractResultRequest& request, const DescribeAICallExtractResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAICallExtractResultOutcomeCallable DescribeAICallExtractResultCallable(const Model::DescribeAICallExtractResultRequest& request);

                /**
                 *获取 AI 时延信息
                 * @param req DescribeAILatencyRequest
                 * @return DescribeAILatencyOutcome
                 */
                DescribeAILatencyOutcome DescribeAILatency(const Model::DescribeAILatencyRequest &request);
                void DescribeAILatencyAsync(const Model::DescribeAILatencyRequest& request, const DescribeAILatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAILatencyOutcomeCallable DescribeAILatencyCallable(const Model::DescribeAILatencyRequest& request);

                /**
                 *查询生效运营商白名单规则
                 * @param req DescribeActiveCarrierPrivilegeNumberRequest
                 * @return DescribeActiveCarrierPrivilegeNumberOutcome
                 */
                DescribeActiveCarrierPrivilegeNumberOutcome DescribeActiveCarrierPrivilegeNumber(const Model::DescribeActiveCarrierPrivilegeNumberRequest &request);
                void DescribeActiveCarrierPrivilegeNumberAsync(const Model::DescribeActiveCarrierPrivilegeNumberRequest& request, const DescribeActiveCarrierPrivilegeNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActiveCarrierPrivilegeNumberOutcomeCallable DescribeActiveCarrierPrivilegeNumberCallable(const Model::DescribeActiveCarrierPrivilegeNumberRequest& request);

                /**
                 *查询 座席巡航式外呼任务
                 * @param req DescribeAgentCruiseDialingCampaignRequest
                 * @return DescribeAgentCruiseDialingCampaignOutcome
                 */
                DescribeAgentCruiseDialingCampaignOutcome DescribeAgentCruiseDialingCampaign(const Model::DescribeAgentCruiseDialingCampaignRequest &request);
                void DescribeAgentCruiseDialingCampaignAsync(const Model::DescribeAgentCruiseDialingCampaignRequest& request, const DescribeAgentCruiseDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentCruiseDialingCampaignOutcomeCallable DescribeAgentCruiseDialingCampaignCallable(const Model::DescribeAgentCruiseDialingCampaignRequest& request);

                /**
                 *查询自动外呼任务详情
                 * @param req DescribeAutoCalloutTaskRequest
                 * @return DescribeAutoCalloutTaskOutcome
                 */
                DescribeAutoCalloutTaskOutcome DescribeAutoCalloutTask(const Model::DescribeAutoCalloutTaskRequest &request);
                void DescribeAutoCalloutTaskAsync(const Model::DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoCalloutTaskOutcomeCallable DescribeAutoCalloutTaskCallable(const Model::DescribeAutoCalloutTaskRequest& request);

                /**
                 *批量查询自动外呼任务
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
                 *查询公司资质申请列表
                 * @param req DescribeCompanyListRequest
                 * @return DescribeCompanyListOutcome
                 */
                DescribeCompanyListOutcome DescribeCompanyList(const Model::DescribeCompanyListRequest &request);
                void DescribeCompanyListAsync(const Model::DescribeCompanyListRequest& request, const DescribeCompanyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompanyListOutcomeCallable DescribeCompanyListCallable(const Model::DescribeCompanyListRequest& request);

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
                 * @param req DescribeIMCdrListRequest
                 * @return DescribeIMCdrListOutcome
                 */
                DescribeIMCdrListOutcome DescribeIMCdrList(const Model::DescribeIMCdrListRequest &request);
                void DescribeIMCdrListAsync(const Model::DescribeIMCdrListRequest& request, const DescribeIMCdrListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMCdrListOutcomeCallable DescribeIMCdrListCallable(const Model::DescribeIMCdrListRequest& request);

                /**
                 *获取包括全媒体和文本会话两种类型的服务记录。
                 * @param req DescribeIMCdrsRequest
                 * @return DescribeIMCdrsOutcome
                 */
                DescribeIMCdrsOutcome DescribeIMCdrs(const Model::DescribeIMCdrsRequest &request);
                void DescribeIMCdrsAsync(const Model::DescribeIMCdrsRequest& request, const DescribeIMCdrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIMCdrsOutcomeCallable DescribeIMCdrsCallable(const Model::DescribeIMCdrsRequest& request);

                /**
                 *查询IVR音频文件列表信息
                 * @param req DescribeIvrAudioListRequest
                 * @return DescribeIvrAudioListOutcome
                 */
                DescribeIvrAudioListOutcome DescribeIvrAudioList(const Model::DescribeIvrAudioListRequest &request);
                void DescribeIvrAudioListAsync(const Model::DescribeIvrAudioListRequest& request, const DescribeIvrAudioListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIvrAudioListOutcomeCallable DescribeIvrAudioListCallable(const Model::DescribeIvrAudioListRequest& request);

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
                 *查询预测式外呼任务
                 * @param req DescribePredictiveDialingCampaignRequest
                 * @return DescribePredictiveDialingCampaignOutcome
                 */
                DescribePredictiveDialingCampaignOutcome DescribePredictiveDialingCampaign(const Model::DescribePredictiveDialingCampaignRequest &request);
                void DescribePredictiveDialingCampaignAsync(const Model::DescribePredictiveDialingCampaignRequest& request, const DescribePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingCampaignOutcomeCallable DescribePredictiveDialingCampaignCallable(const Model::DescribePredictiveDialingCampaignRequest& request);

                /**
                 *查询预测式外呼任务列表
                 * @param req DescribePredictiveDialingCampaignsRequest
                 * @return DescribePredictiveDialingCampaignsOutcome
                 */
                DescribePredictiveDialingCampaignsOutcome DescribePredictiveDialingCampaigns(const Model::DescribePredictiveDialingCampaignsRequest &request);
                void DescribePredictiveDialingCampaignsAsync(const Model::DescribePredictiveDialingCampaignsRequest& request, const DescribePredictiveDialingCampaignsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingCampaignsOutcomeCallable DescribePredictiveDialingCampaignsCallable(const Model::DescribePredictiveDialingCampaignsRequest& request);

                /**
                 *查询预测式外呼呼叫列表
                 * @param req DescribePredictiveDialingSessionsRequest
                 * @return DescribePredictiveDialingSessionsOutcome
                 */
                DescribePredictiveDialingSessionsOutcome DescribePredictiveDialingSessions(const Model::DescribePredictiveDialingSessionsRequest &request);
                void DescribePredictiveDialingSessionsAsync(const Model::DescribePredictiveDialingSessionsRequest& request, const DescribePredictiveDialingSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePredictiveDialingSessionsOutcomeCallable DescribePredictiveDialingSessionsCallable(const Model::DescribePredictiveDialingSessionsRequest& request);

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
                 *拉取会话录音转文本信息
                 * @param req DescribeTelRecordAsrRequest
                 * @return DescribeTelRecordAsrOutcome
                 */
                DescribeTelRecordAsrOutcome DescribeTelRecordAsr(const Model::DescribeTelRecordAsrRequest &request);
                void DescribeTelRecordAsrAsync(const Model::DescribeTelRecordAsrRequest& request, const DescribeTelRecordAsrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTelRecordAsrOutcomeCallable DescribeTelRecordAsrCallable(const Model::DescribeTelRecordAsrRequest& request);

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
                 *强制客服下线
                 * @param req ForceMemberOfflineRequest
                 * @return ForceMemberOfflineOutcome
                 */
                ForceMemberOfflineOutcome ForceMemberOffline(const Model::ForceMemberOfflineRequest &request);
                void ForceMemberOfflineAsync(const Model::ForceMemberOfflineRequest& request, const ForceMemberOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForceMemberOfflineOutcomeCallable ForceMemberOfflineCallable(const Model::ForceMemberOfflineRequest& request);

                /**
                 *挂断电话
                 * @param req HangUpCallRequest
                 * @return HangUpCallOutcome
                 */
                HangUpCallOutcome HangUpCall(const Model::HangUpCallRequest &request);
                void HangUpCallAsync(const Model::HangUpCallRequest& request, const HangUpCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HangUpCallOutcomeCallable HangUpCallCallable(const Model::HangUpCallRequest& request);

                /**
                 *修改公司资质申请，只能修改状态为驳回或待审核的申请单。（1、首次使用接口，建议先在云联络中心控制台查看各个资料模板:https://console.cloud.tencent.com/ccc/enterprise/update。2、参数中图片Url建议使用腾讯云Cos存储的临时链接）
                 * @param req ModifyCompanyApplyRequest
                 * @return ModifyCompanyApplyOutcome
                 */
                ModifyCompanyApplyOutcome ModifyCompanyApply(const Model::ModifyCompanyApplyRequest &request);
                void ModifyCompanyApplyAsync(const Model::ModifyCompanyApplyRequest& request, const ModifyCompanyApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCompanyApplyOutcomeCallable ModifyCompanyApplyCallable(const Model::ModifyCompanyApplyRequest& request);

                /**
                 *修改话机账号(绑定技能组、绑定坐席账号)
                 * @param req ModifyExtensionRequest
                 * @return ModifyExtensionOutcome
                 */
                ModifyExtensionOutcome ModifyExtension(const Model::ModifyExtensionRequest &request);
                void ModifyExtensionAsync(const Model::ModifyExtensionRequest& request, const ModifyExtensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtensionOutcomeCallable ModifyExtensionCallable(const Model::ModifyExtensionRequest& request);

                /**
                 *修改客户自携号码审批单
                 * @param req ModifyOwnNumberApplyRequest
                 * @return ModifyOwnNumberApplyOutcome
                 */
                ModifyOwnNumberApplyOutcome ModifyOwnNumberApply(const Model::ModifyOwnNumberApplyRequest &request);
                void ModifyOwnNumberApplyAsync(const Model::ModifyOwnNumberApplyRequest& request, const ModifyOwnNumberApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOwnNumberApplyOutcomeCallable ModifyOwnNumberApplyCallable(const Model::ModifyOwnNumberApplyRequest& request);

                /**
                 *修改客服账号
                 * @param req ModifyStaffRequest
                 * @return ModifyStaffOutcome
                 */
                ModifyStaffOutcome ModifyStaff(const Model::ModifyStaffRequest &request);
                void ModifyStaffAsync(const Model::ModifyStaffRequest& request, const ModifyStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffOutcomeCallable ModifyStaffCallable(const Model::ModifyStaffRequest& request);

                /**
                 *修改座席的密码
                 * @param req ModifyStaffPasswordRequest
                 * @return ModifyStaffPasswordOutcome
                 */
                ModifyStaffPasswordOutcome ModifyStaffPassword(const Model::ModifyStaffPasswordRequest &request);
                void ModifyStaffPasswordAsync(const Model::ModifyStaffPasswordRequest& request, const ModifyStaffPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStaffPasswordOutcomeCallable ModifyStaffPasswordCallable(const Model::ModifyStaffPasswordRequest& request);

                /**
                 *暂停预测式外呼任务
                 * @param req PausePredictiveDialingCampaignRequest
                 * @return PausePredictiveDialingCampaignOutcome
                 */
                PausePredictiveDialingCampaignOutcome PausePredictiveDialingCampaign(const Model::PausePredictiveDialingCampaignRequest &request);
                void PausePredictiveDialingCampaignAsync(const Model::PausePredictiveDialingCampaignRequest& request, const PausePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PausePredictiveDialingCampaignOutcomeCallable PausePredictiveDialingCampaignCallable(const Model::PausePredictiveDialingCampaignRequest& request);

                /**
                 *重置话机注册密码
                 * @param req ResetExtensionPasswordRequest
                 * @return ResetExtensionPasswordOutcome
                 */
                ResetExtensionPasswordOutcome ResetExtensionPassword(const Model::ResetExtensionPasswordRequest &request);
                void ResetExtensionPasswordAsync(const Model::ResetExtensionPasswordRequest& request, const ResetExtensionPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetExtensionPasswordOutcomeCallable ResetExtensionPasswordCallable(const Model::ResetExtensionPasswordRequest& request);

                /**
                 *恢复客服上线
                 * @param req RestoreMemberOnlineRequest
                 * @return RestoreMemberOnlineOutcome
                 */
                RestoreMemberOnlineOutcome RestoreMemberOnline(const Model::RestoreMemberOnlineRequest &request);
                void RestoreMemberOnlineAsync(const Model::RestoreMemberOnlineRequest& request, const RestoreMemberOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreMemberOnlineOutcomeCallable RestoreMemberOnlineCallable(const Model::RestoreMemberOnlineRequest& request);

                /**
                 *恢复预测式外呼任务
                 * @param req ResumePredictiveDialingCampaignRequest
                 * @return ResumePredictiveDialingCampaignOutcome
                 */
                ResumePredictiveDialingCampaignOutcome ResumePredictiveDialingCampaign(const Model::ResumePredictiveDialingCampaignRequest &request);
                void ResumePredictiveDialingCampaignAsync(const Model::ResumePredictiveDialingCampaignRequest& request, const ResumePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumePredictiveDialingCampaignOutcomeCallable ResumePredictiveDialingCampaignCallable(const Model::ResumePredictiveDialingCampaignRequest& request);

                /**
                 *停止自动外呼任务
                 * @param req StopAutoCalloutTaskRequest
                 * @return StopAutoCalloutTaskOutcome
                 */
                StopAutoCalloutTaskOutcome StopAutoCalloutTask(const Model::StopAutoCalloutTaskRequest &request);
                void StopAutoCalloutTaskAsync(const Model::StopAutoCalloutTaskRequest& request, const StopAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAutoCalloutTaskOutcomeCallable StopAutoCalloutTaskCallable(const Model::StopAutoCalloutTaskRequest& request);

                /**
                 *特定场景下讲会话转接到人工坐席
                 * @param req TransferToManualRequest
                 * @return TransferToManualOutcome
                 */
                TransferToManualOutcome TransferToManual(const Model::TransferToManualRequest &request);
                void TransferToManualAsync(const Model::TransferToManualRequest& request, const TransferToManualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferToManualOutcomeCallable TransferToManualCallable(const Model::TransferToManualRequest& request);

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

                /**
                 *更新技能组
                 * @param req UpdateCCCSkillGroupRequest
                 * @return UpdateCCCSkillGroupOutcome
                 */
                UpdateCCCSkillGroupOutcome UpdateCCCSkillGroup(const Model::UpdateCCCSkillGroupRequest &request);
                void UpdateCCCSkillGroupAsync(const Model::UpdateCCCSkillGroupRequest& request, const UpdateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCCCSkillGroupOutcomeCallable UpdateCCCSkillGroupCallable(const Model::UpdateCCCSkillGroupRequest& request);

                /**
                 *任务未启动前，更新预测式外呼任务。
                 * @param req UpdatePredictiveDialingCampaignRequest
                 * @return UpdatePredictiveDialingCampaignOutcome
                 */
                UpdatePredictiveDialingCampaignOutcome UpdatePredictiveDialingCampaign(const Model::UpdatePredictiveDialingCampaignRequest &request);
                void UpdatePredictiveDialingCampaignAsync(const Model::UpdatePredictiveDialingCampaignRequest& request, const UpdatePredictiveDialingCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePredictiveDialingCampaignOutcomeCallable UpdatePredictiveDialingCampaignCallable(const Model::UpdatePredictiveDialingCampaignRequest& request);

                /**
                 *上传IVR中使用的音频文件，每日上传文件限制50个。（参数中音频文件Url建议使用腾讯云Cos存储的临时链接）
                 * @param req UploadIvrAudioRequest
                 * @return UploadIvrAudioOutcome
                 */
                UploadIvrAudioOutcome UploadIvrAudio(const Model::UploadIvrAudioRequest &request);
                void UploadIvrAudioAsync(const Model::UploadIvrAudioRequest& request, const UploadIvrAudioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadIvrAudioOutcomeCallable UploadIvrAudioCallable(const Model::UploadIvrAudioRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_CCCCLIENT_H_

#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ccc_public_header
  include/tencentcloud/ccc/v20200210/CccClient.h
  )

set(ccc_public_header_model
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffPasswordRequest.h
  include/tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateIVRSessionRequest.h
  include/tencentcloud/ccc/v20200210/model/CompanyApplyInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeIvrAudioListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsElement.h
  include/tencentcloud/ccc/v20200210/model/ServerPushText.h
  include/tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h
  include/tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateUserSigResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAICallRequest.h
  include/tencentcloud/ccc/v20200210/model/StaffInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h
  include/tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAILatencyRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsRequest.h
  include/tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffPasswordResponse.h
  include/tencentcloud/ccc/v20200210/model/ControlAIConversationResponse.h
  include/tencentcloud/ccc/v20200210/model/TransferToManualRequest.h
  include/tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/RestoreMemberOnlineResponse.h
  include/tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeChatMessagesResponse.h
  include/tencentcloud/ccc/v20200210/model/ServeParticipant.h
  include/tencentcloud/ccc/v20200210/model/AICallExtractResultElement.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCallInfoResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionsResponse.h
  include/tencentcloud/ccc/v20200210/model/StaffStatusMetrics.h
  include/tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAIAgentCallResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAILatencyResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksResponse.h
  include/tencentcloud/ccc/v20200210/model/PackageBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/AICallExtractConfigElement.h
  include/tencentcloud/ccc/v20200210/model/AICallExtractResultInfo.h
  include/tencentcloud/ccc/v20200210/model/IMCdrInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeNumbersResponse.h
  include/tencentcloud/ccc/v20200210/model/ZHToneWordsInfo.h
  include/tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/UploadIvrAudioRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/AILatencyStatisticsInfo.h
  include/tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.h
  include/tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/CallInSkillGroupMetrics.h
  include/tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateUserSigRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsResponse.h
  include/tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCompanyApplyRequest.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallInInterfaceRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.h
  include/tencentcloud/ccc/v20200210/model/Interface.h
  include/tencentcloud/ccc/v20200210/model/AutoCalloutTaskCalleeInfo.h
  include/tencentcloud/ccc/v20200210/model/SeatUserInfo.h
  include/tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/AsrData.h
  include/tencentcloud/ccc/v20200210/model/CarrierPrivilegeNumberApplicant.h
  include/tencentcloud/ccc/v20200210/model/ErrStaffItem.h
  include/tencentcloud/ccc/v20200210/model/PausePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/ResumePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/PSTNSession.h
  include/tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/AutoCalloutTaskInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeIvrAudioListRequest.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallInInterfaceResponse.h
  include/tencentcloud/ccc/v20200210/model/ForceMemberOfflineRequest.h
  include/tencentcloud/ccc/v20200210/model/SkillGroupInfoItem.h
  include/tencentcloud/ccc/v20200210/model/CreateAIAgentCallRequest.h
  include/tencentcloud/ccc/v20200210/model/UpdateCCCSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/RestoreMemberOnlineRequest.h
  include/tencentcloud/ccc/v20200210/model/TimeRange.h
  include/tencentcloud/ccc/v20200210/model/ForwardingConfig.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/CreatePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/UpdatePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyRequest.h
  include/tencentcloud/ccc/v20200210/model/PSTNSessionInfo.h
  include/tencentcloud/ccc/v20200210/model/Message.h
  include/tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrsResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeNumbersRequest.h
  include/tencentcloud/ccc/v20200210/model/ExtensionInfo.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/DeletePredictiveDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h
  include/tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAICallExtractResultResponse.h
  include/tencentcloud/ccc/v20200210/model/DeleteCCCSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/UploadIvrAudioFailedInfo.h
  include/tencentcloud/ccc/v20200210/model/UploadIvrAudioResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCompanyListResponse.h
  include/tencentcloud/ccc/v20200210/model/NumberInfo.h
  include/tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/CallInMetrics.h
  include/tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/OwnNumberApplyDetailItem.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingCampaignsResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCallInfoRequest.h
  include/tencentcloud/ccc/v20200210/model/Variable.h
  include/tencentcloud/ccc/v20200210/model/CallInNumberMetrics.h
  include/tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/StaffSkillGroupList.h
  include/tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h
  include/tencentcloud/ccc/v20200210/model/ForwardingTarget.h
  include/tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/AILatencyDetail.h
  include/tencentcloud/ccc/v20200210/model/AITransferItem.h
  include/tencentcloud/ccc/v20200210/model/Filter.h
  include/tencentcloud/ccc/v20200210/model/AbortAgentCruiseDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/ForceMemberOfflineResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyResponse.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/HangUpCallResponse.h
  include/tencentcloud/ccc/v20200210/model/TransferToManualResponse.h
  include/tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/AbortPredictiveDialingCampaignRequest.h
  include/tencentcloud/ccc/v20200210/model/ToneWordInfo.h
  include/tencentcloud/ccc/v20200210/model/TelCdrInfo.h
  include/tencentcloud/ccc/v20200210/model/SkillGroupItem.h
  include/tencentcloud/ccc/v20200210/model/MessageBody.h
  include/tencentcloud/ccc/v20200210/model/PhoneNumBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/ModifyCompanyApplyResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/ActiveCarrierPrivilegeNumber.h
  include/tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h
  include/tencentcloud/ccc/v20200210/model/ControlAIConversationRequest.h
  include/tencentcloud/ccc/v20200210/model/UploadAudioInfo.h
  include/tencentcloud/ccc/v20200210/model/CompanyStateInfo.h
  include/tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateAgentCruiseDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyOwnNumberApplyResponse.h
  include/tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeCallInMetricsResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyCompanyApplyRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAgentCruiseDialingCampaignResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAICallResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCompanyListRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateIVRSessionResponse.h
  include/tencentcloud/ccc/v20200210/model/IMSatisfaction.h
  include/tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.h
  include/tencentcloud/ccc/v20200210/model/HangUpCallRequest.h
  include/tencentcloud/ccc/v20200210/model/ClientInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsRequest.h
  include/tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/CalleeAttribute.h
  include/tencentcloud/ccc/v20200210/model/StaffStatusExtra.h
  include/tencentcloud/ccc/v20200210/model/CreateStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCompanyApplyResponse.h
  include/tencentcloud/ccc/v20200210/model/SdkAppIdBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListResponse.h
  include/tencentcloud/ccc/v20200210/model/AILatencyStatistics.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrListRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeChatMessagesRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsResponse.h
  include/tencentcloud/ccc/v20200210/model/AudioFileInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h
  include/tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePredictiveDialingSessionsRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.h
  include/tencentcloud/ccc/v20200210/model/StaffBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateOwnNumberApplyRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeCallInMetricsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelRecordAsrRequest.h
  )

set(ccc_src
  src/v20200210/CccClient.cpp
  src/v20200210/model/DescribeExtensionRequest.cpp
  src/v20200210/model/CreateCCCSkillGroupResponse.cpp
  src/v20200210/model/ModifyStaffPasswordRequest.cpp
  src/v20200210/model/StopAutoCalloutTaskRequest.cpp
  src/v20200210/model/CreateIVRSessionRequest.cpp
  src/v20200210/model/CompanyApplyInfo.cpp
  src/v20200210/model/CreateSDKLoginTokenResponse.cpp
  src/v20200210/model/ModifyStaffRequest.cpp
  src/v20200210/model/DescribeIvrAudioListResponse.cpp
  src/v20200210/model/DescribePredictiveDialingCampaignsElement.cpp
  src/v20200210/model/ServerPushText.cpp
  src/v20200210/model/ResetExtensionPasswordRequest.cpp
  src/v20200210/model/DisableCCCPhoneNumberResponse.cpp
  src/v20200210/model/DescribeProtectedTelCdrResponse.cpp
  src/v20200210/model/DescribeAutoCalloutTaskRequest.cpp
  src/v20200210/model/CreateUserSigResponse.cpp
  src/v20200210/model/CreateAICallRequest.cpp
  src/v20200210/model/StaffInfo.cpp
  src/v20200210/model/CreateAdminURLResponse.cpp
  src/v20200210/model/PausePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/DescribeAILatencyRequest.cpp
  src/v20200210/model/CreateCallOutSessionResponse.cpp
  src/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsRequest.cpp
  src/v20200210/model/DisableCCCPhoneNumberRequest.cpp
  src/v20200210/model/ModifyStaffPasswordResponse.cpp
  src/v20200210/model/ControlAIConversationResponse.cpp
  src/v20200210/model/TransferToManualRequest.cpp
  src/v20200210/model/CreatePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/RestoreMemberOnlineResponse.cpp
  src/v20200210/model/AbortAgentCruiseDialingCampaignResponse.cpp
  src/v20200210/model/DescribeChatMessagesResponse.cpp
  src/v20200210/model/ServeParticipant.cpp
  src/v20200210/model/AICallExtractResultElement.cpp
  src/v20200210/model/DescribeTelCallInfoResponse.cpp
  src/v20200210/model/DescribeExtensionsResponse.cpp
  src/v20200210/model/StaffStatusMetrics.cpp
  src/v20200210/model/DeleteExtensionRequest.cpp
  src/v20200210/model/DescribePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/DescribePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/CreateAIAgentCallResponse.cpp
  src/v20200210/model/DescribeAILatencyResponse.cpp
  src/v20200210/model/DescribeAutoCalloutTasksResponse.cpp
  src/v20200210/model/PackageBuyInfo.cpp
  src/v20200210/model/AICallExtractConfigElement.cpp
  src/v20200210/model/AICallExtractResultInfo.cpp
  src/v20200210/model/IMCdrInfo.cpp
  src/v20200210/model/CreateAgentCruiseDialingCampaignRequest.cpp
  src/v20200210/model/DescribeAICallExtractResultRequest.cpp
  src/v20200210/model/CreateStaffResponse.cpp
  src/v20200210/model/DescribePredictiveDialingCampaignsRequest.cpp
  src/v20200210/model/DescribeSkillGroupInfoListResponse.cpp
  src/v20200210/model/DescribeNumbersResponse.cpp
  src/v20200210/model/ZHToneWordsInfo.cpp
  src/v20200210/model/DeletePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/UploadIvrAudioRequest.cpp
  src/v20200210/model/DescribeStaffInfoListResponse.cpp
  src/v20200210/model/AILatencyStatisticsInfo.cpp
  src/v20200210/model/UnbindNumberCallOutSkillGroupRequest.cpp
  src/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.cpp
  src/v20200210/model/ResumePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/CallInSkillGroupMetrics.cpp
  src/v20200210/model/CreateExtensionResponse.cpp
  src/v20200210/model/CreateUserSigRequest.cpp
  src/v20200210/model/CreateCCCSkillGroupRequest.cpp
  src/v20200210/model/DescribePredictiveDialingSessionsResponse.cpp
  src/v20200210/model/DeleteCCCSkillGroupRequest.cpp
  src/v20200210/model/CreateCompanyApplyRequest.cpp
  src/v20200210/model/BindNumberCallInInterfaceRequest.cpp
  src/v20200210/model/DescribeTelSessionRequest.cpp
  src/v20200210/model/DescribeIMCdrsRequest.cpp
  src/v20200210/model/DescribeSkillGroupInfoListRequest.cpp
  src/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.cpp
  src/v20200210/model/Interface.cpp
  src/v20200210/model/AutoCalloutTaskCalleeInfo.cpp
  src/v20200210/model/SeatUserInfo.cpp
  src/v20200210/model/UpdateCCCSkillGroupResponse.cpp
  src/v20200210/model/AsrData.cpp
  src/v20200210/model/CarrierPrivilegeNumberApplicant.cpp
  src/v20200210/model/ErrStaffItem.cpp
  src/v20200210/model/PausePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/ResumePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/PSTNSession.cpp
  src/v20200210/model/UpdatePredictiveDialingCampaignRequest.cpp
  src/v20200210/model/DescribeStaffInfoListRequest.cpp
  src/v20200210/model/AutoCalloutTaskInfo.cpp
  src/v20200210/model/DescribeIvrAudioListRequest.cpp
  src/v20200210/model/BindNumberCallInInterfaceResponse.cpp
  src/v20200210/model/ForceMemberOfflineRequest.cpp
  src/v20200210/model/SkillGroupInfoItem.cpp
  src/v20200210/model/CreateAIAgentCallRequest.cpp
  src/v20200210/model/UpdateCCCSkillGroupRequest.cpp
  src/v20200210/model/RestoreMemberOnlineRequest.cpp
  src/v20200210/model/TimeRange.cpp
  src/v20200210/model/ForwardingConfig.cpp
  src/v20200210/model/DescribeTelCdrRequest.cpp
  src/v20200210/model/ModifyStaffResponse.cpp
  src/v20200210/model/ModifyExtensionRequest.cpp
  src/v20200210/model/CreatePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/UpdatePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/ModifyOwnNumberApplyRequest.cpp
  src/v20200210/model/PSTNSessionInfo.cpp
  src/v20200210/model/Message.cpp
  src/v20200210/model/AbortPredictiveDialingCampaignResponse.cpp
  src/v20200210/model/DescribeIMCdrsResponse.cpp
  src/v20200210/model/DescribeNumbersRequest.cpp
  src/v20200210/model/ExtensionInfo.cpp
  src/v20200210/model/BindNumberCallOutSkillGroupRequest.cpp
  src/v20200210/model/DeletePredictiveDialingCampaignResponse.cpp
  src/v20200210/model/IVRKeyPressedElement.cpp
  src/v20200210/model/UnbindNumberCallOutSkillGroupResponse.cpp
  src/v20200210/model/DescribeAgentCruiseDialingCampaignRequest.cpp
  src/v20200210/model/DescribePSTNActiveSessionListRequest.cpp
  src/v20200210/model/CreateAutoCalloutTaskResponse.cpp
  src/v20200210/model/DescribeAICallExtractResultResponse.cpp
  src/v20200210/model/DeleteCCCSkillGroupResponse.cpp
  src/v20200210/model/UploadIvrAudioFailedInfo.cpp
  src/v20200210/model/UploadIvrAudioResponse.cpp
  src/v20200210/model/ModifyExtensionResponse.cpp
  src/v20200210/model/DescribeCompanyListResponse.cpp
  src/v20200210/model/NumberInfo.cpp
  src/v20200210/model/DeleteStaffRequest.cpp
  src/v20200210/model/CallInMetrics.cpp
  src/v20200210/model/DescribeCCCBuyInfoListRequest.cpp
  src/v20200210/model/OwnNumberApplyDetailItem.cpp
  src/v20200210/model/DescribeIMCdrListResponse.cpp
  src/v20200210/model/DescribePredictiveDialingCampaignsResponse.cpp
  src/v20200210/model/DescribeTelCallInfoRequest.cpp
  src/v20200210/model/Variable.cpp
  src/v20200210/model/CallInNumberMetrics.cpp
  src/v20200210/model/CreateExtensionRequest.cpp
  src/v20200210/model/StaffSkillGroupList.cpp
  src/v20200210/model/ResetExtensionPasswordResponse.cpp
  src/v20200210/model/ForwardingTarget.cpp
  src/v20200210/model/CreateAutoCalloutTaskRequest.cpp
  src/v20200210/model/AILatencyDetail.cpp
  src/v20200210/model/AITransferItem.cpp
  src/v20200210/model/Filter.cpp
  src/v20200210/model/AbortAgentCruiseDialingCampaignRequest.cpp
  src/v20200210/model/ForceMemberOfflineResponse.cpp
  src/v20200210/model/CreateOwnNumberApplyResponse.cpp
  src/v20200210/model/BindNumberCallOutSkillGroupResponse.cpp
  src/v20200210/model/HangUpCallResponse.cpp
  src/v20200210/model/TransferToManualResponse.cpp
  src/v20200210/model/StopAutoCalloutTaskResponse.cpp
  src/v20200210/model/AbortPredictiveDialingCampaignRequest.cpp
  src/v20200210/model/ToneWordInfo.cpp
  src/v20200210/model/TelCdrInfo.cpp
  src/v20200210/model/SkillGroupItem.cpp
  src/v20200210/model/MessageBody.cpp
  src/v20200210/model/PhoneNumBuyInfo.cpp
  src/v20200210/model/ModifyCompanyApplyResponse.cpp
  src/v20200210/model/DescribeCCCBuyInfoListResponse.cpp
  src/v20200210/model/ActiveCarrierPrivilegeNumber.cpp
  src/v20200210/model/UnbindStaffSkillGroupListResponse.cpp
  src/v20200210/model/ControlAIConversationRequest.cpp
  src/v20200210/model/UploadAudioInfo.cpp
  src/v20200210/model/CompanyStateInfo.cpp
  src/v20200210/model/DeleteExtensionResponse.cpp
  src/v20200210/model/BindStaffSkillGroupListRequest.cpp
  src/v20200210/model/CreateAgentCruiseDialingCampaignResponse.cpp
  src/v20200210/model/ModifyOwnNumberApplyResponse.cpp
  src/v20200210/model/UnbindStaffSkillGroupListRequest.cpp
  src/v20200210/model/DescribeCallInMetricsResponse.cpp
  src/v20200210/model/ModifyCompanyApplyRequest.cpp
  src/v20200210/model/DescribeAgentCruiseDialingCampaignResponse.cpp
  src/v20200210/model/CreateAICallResponse.cpp
  src/v20200210/model/DescribeCompanyListRequest.cpp
  src/v20200210/model/CreateIVRSessionResponse.cpp
  src/v20200210/model/IMSatisfaction.cpp
  src/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.cpp
  src/v20200210/model/HangUpCallRequest.cpp
  src/v20200210/model/ClientInfo.cpp
  src/v20200210/model/DescribeTelCdrResponse.cpp
  src/v20200210/model/DescribeStaffStatusMetricsRequest.cpp
  src/v20200210/model/DeleteStaffResponse.cpp
  src/v20200210/model/CalleeAttribute.cpp
  src/v20200210/model/StaffStatusExtra.cpp
  src/v20200210/model/CreateStaffRequest.cpp
  src/v20200210/model/CreateCompanyApplyResponse.cpp
  src/v20200210/model/SdkAppIdBuyInfo.cpp
  src/v20200210/model/DescribePSTNActiveSessionListResponse.cpp
  src/v20200210/model/AILatencyStatistics.cpp
  src/v20200210/model/DescribeIMCdrListRequest.cpp
  src/v20200210/model/DescribeAutoCalloutTasksRequest.cpp
  src/v20200210/model/DescribeChatMessagesRequest.cpp
  src/v20200210/model/DescribeTelSessionResponse.cpp
  src/v20200210/model/CreateAdminURLRequest.cpp
  src/v20200210/model/DescribeAutoCalloutTaskResponse.cpp
  src/v20200210/model/DescribeStaffStatusMetricsResponse.cpp
  src/v20200210/model/AudioFileInfo.cpp
  src/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsResponse.cpp
  src/v20200210/model/CreateCallOutSessionRequest.cpp
  src/v20200210/model/BindStaffSkillGroupListResponse.cpp
  src/v20200210/model/DescribeTelRecordAsrResponse.cpp
  src/v20200210/model/DescribeExtensionsRequest.cpp
  src/v20200210/model/DescribeProtectedTelCdrRequest.cpp
  src/v20200210/model/DescribePredictiveDialingSessionsRequest.cpp
  src/v20200210/model/CreateSDKLoginTokenRequest.cpp
  src/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.cpp
  src/v20200210/model/StaffBuyInfo.cpp
  src/v20200210/model/CreateOwnNumberApplyRequest.cpp
  src/v20200210/model/DescribeCallInMetricsRequest.cpp
  src/v20200210/model/DescribeExtensionResponse.cpp
  src/v20200210/model/DescribeTelRecordAsrRequest.cpp
  )

set(ccc_include
    include/tencentcloud/ccc
  )

add_library(ccc ${LIB_TYPE}
  ${ccc_public_header}
  ${ccc_public_header_model}
  ${ccc_src})

set_target_properties(ccc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ccc
  )

target_include_directories(ccc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ccc
  core)

#install(FILES ${ccc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ccc/v20200210)
#install(FILES ${ccc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ccc/v20200210/model)
install(DIRECTORY ${ccc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ccc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

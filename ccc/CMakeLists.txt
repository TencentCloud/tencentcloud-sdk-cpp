#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
  include/tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/HangUpCallRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/ResetExtensionPasswordRequest.h
  include/tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateUserSigResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrsResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAdminURLResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateCallOutSessionResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsRequest.h
  include/tencentcloud/ccc/v20200210/model/DisableCCCPhoneNumberRequest.h
  include/tencentcloud/ccc/v20200210/model/ServeParticipant.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionsResponse.h
  include/tencentcloud/ccc/v20200210/model/DeleteExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCallInfoResponse.h
  include/tencentcloud/ccc/v20200210/model/StaffStatusMetrics.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksResponse.h
  include/tencentcloud/ccc/v20200210/model/PackageBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/ModifyExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/SeatUserInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeNumbersResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.h
  include/tencentcloud/ccc/v20200210/model/CallInSkillGroupMetrics.h
  include/tencentcloud/ccc/v20200210/model/CreateExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateUserSigRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateCCCSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelSessionRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeIMCdrsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeSkillGroupInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.h
  include/tencentcloud/ccc/v20200210/model/AutoCalloutTaskCalleeInfo.h
  include/tencentcloud/ccc/v20200210/model/CarrierPrivilegeNumberApplicant.h
  include/tencentcloud/ccc/v20200210/model/ErrStaffItem.h
  include/tencentcloud/ccc/v20200210/model/PSTNSession.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/AutoCalloutTaskInfo.h
  include/tencentcloud/ccc/v20200210/model/SkillGroupInfoItem.h
  include/tencentcloud/ccc/v20200210/model/ResetExtensionPasswordResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/ModifyExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/PSTNSessionInfo.h
  include/tencentcloud/ccc/v20200210/model/Message.h
  include/tencentcloud/ccc/v20200210/model/DescribeNumbersRequest.h
  include/tencentcloud/ccc/v20200210/model/ExtensionInfo.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupRequest.h
  include/tencentcloud/ccc/v20200210/model/IVRKeyPressedElement.h
  include/tencentcloud/ccc/v20200210/model/UnbindNumberCallOutSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/StaffInfo.h
  include/tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/TelCdrInfo.h
  include/tencentcloud/ccc/v20200210/model/NumberInfo.h
  include/tencentcloud/ccc/v20200210/model/DeleteStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/CallInMetrics.h
  include/tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCallInfoRequest.h
  include/tencentcloud/ccc/v20200210/model/Variable.h
  include/tencentcloud/ccc/v20200210/model/CallInNumberMetrics.h
  include/tencentcloud/ccc/v20200210/model/CreateExtensionRequest.h
  include/tencentcloud/ccc/v20200210/model/StaffSkillGroupList.h
  include/tencentcloud/ccc/v20200210/model/CreateAutoCalloutTaskRequest.h
  include/tencentcloud/ccc/v20200210/model/Filter.h
  include/tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListRequest.h
  include/tencentcloud/ccc/v20200210/model/BindNumberCallOutSkillGroupResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateCallOutSessionRequest.h
  include/tencentcloud/ccc/v20200210/model/StopAutoCalloutTaskResponse.h
  include/tencentcloud/ccc/v20200210/model/SkillGroupItem.h
  include/tencentcloud/ccc/v20200210/model/MessageBody.h
  include/tencentcloud/ccc/v20200210/model/PhoneNumBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeCCCBuyInfoListResponse.h
  include/tencentcloud/ccc/v20200210/model/ActiveCarrierPrivilegeNumber.h
  include/tencentcloud/ccc/v20200210/model/UnbindStaffSkillGroupListResponse.h
  include/tencentcloud/ccc/v20200210/model/DeleteExtensionResponse.h
  include/tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeCallInMetricsResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.h
  include/tencentcloud/ccc/v20200210/model/IMSatisfaction.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelCdrResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsRequest.h
  include/tencentcloud/ccc/v20200210/model/DeleteStaffResponse.h
  include/tencentcloud/ccc/v20200210/model/CalleeAttribute.h
  include/tencentcloud/ccc/v20200210/model/StaffStatusExtra.h
  include/tencentcloud/ccc/v20200210/model/CreateStaffRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeChatMessagesResponse.h
  include/tencentcloud/ccc/v20200210/model/SdkAppIdBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribePSTNActiveSessionListResponse.h
  include/tencentcloud/ccc/v20200210/model/IMCdrInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeAutoCalloutTasksRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeChatMessagesRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeTelSessionResponse.h
  include/tencentcloud/ccc/v20200210/model/CreateAdminURLRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeStaffStatusMetricsResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsResponse.h
  include/tencentcloud/ccc/v20200210/model/HangUpCallResponse.h
  include/tencentcloud/ccc/v20200210/model/BindStaffSkillGroupListResponse.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrRequest.h
  include/tencentcloud/ccc/v20200210/model/CreateSDKLoginTokenRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.h
  include/tencentcloud/ccc/v20200210/model/StaffBuyInfo.h
  include/tencentcloud/ccc/v20200210/model/DescribeCallInMetricsRequest.h
  include/tencentcloud/ccc/v20200210/model/DescribeExtensionResponse.h
  )

set(ccc_src
  src/v20200210/CccClient.cpp
  src/v20200210/model/DescribeExtensionRequest.cpp
  src/v20200210/model/StopAutoCalloutTaskRequest.cpp
  src/v20200210/model/HangUpCallRequest.cpp
  src/v20200210/model/CreateSDKLoginTokenResponse.cpp
  src/v20200210/model/ModifyStaffRequest.cpp
  src/v20200210/model/ResetExtensionPasswordRequest.cpp
  src/v20200210/model/DisableCCCPhoneNumberResponse.cpp
  src/v20200210/model/DescribeProtectedTelCdrResponse.cpp
  src/v20200210/model/DescribeAutoCalloutTaskRequest.cpp
  src/v20200210/model/CreateUserSigResponse.cpp
  src/v20200210/model/DescribeIMCdrsResponse.cpp
  src/v20200210/model/CreateAdminURLResponse.cpp
  src/v20200210/model/CreateCallOutSessionResponse.cpp
  src/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsRequest.cpp
  src/v20200210/model/DisableCCCPhoneNumberRequest.cpp
  src/v20200210/model/ServeParticipant.cpp
  src/v20200210/model/DescribeExtensionsResponse.cpp
  src/v20200210/model/DeleteExtensionRequest.cpp
  src/v20200210/model/DescribeTelCallInfoResponse.cpp
  src/v20200210/model/StaffStatusMetrics.cpp
  src/v20200210/model/DescribeTelCdrRequest.cpp
  src/v20200210/model/DescribeAutoCalloutTasksResponse.cpp
  src/v20200210/model/PackageBuyInfo.cpp
  src/v20200210/model/ModifyExtensionResponse.cpp
  src/v20200210/model/SeatUserInfo.cpp
  src/v20200210/model/CreateStaffResponse.cpp
  src/v20200210/model/DescribeSkillGroupInfoListResponse.cpp
  src/v20200210/model/DescribeNumbersResponse.cpp
  src/v20200210/model/DescribeStaffInfoListResponse.cpp
  src/v20200210/model/UnbindNumberCallOutSkillGroupRequest.cpp
  src/v20200210/model/CreateCarrierPrivilegeNumberApplicantRequest.cpp
  src/v20200210/model/CallInSkillGroupMetrics.cpp
  src/v20200210/model/CreateExtensionResponse.cpp
  src/v20200210/model/CreateUserSigRequest.cpp
  src/v20200210/model/CreateCCCSkillGroupRequest.cpp
  src/v20200210/model/DescribeAutoCalloutTaskResponse.cpp
  src/v20200210/model/CreateCCCSkillGroupResponse.cpp
  src/v20200210/model/DescribeTelSessionRequest.cpp
  src/v20200210/model/DescribeIMCdrsRequest.cpp
  src/v20200210/model/DescribeSkillGroupInfoListRequest.cpp
  src/v20200210/model/CreateCarrierPrivilegeNumberApplicantResponse.cpp
  src/v20200210/model/AutoCalloutTaskCalleeInfo.cpp
  src/v20200210/model/CarrierPrivilegeNumberApplicant.cpp
  src/v20200210/model/ErrStaffItem.cpp
  src/v20200210/model/PSTNSession.cpp
  src/v20200210/model/DescribeStaffInfoListRequest.cpp
  src/v20200210/model/AutoCalloutTaskInfo.cpp
  src/v20200210/model/SkillGroupInfoItem.cpp
  src/v20200210/model/ResetExtensionPasswordResponse.cpp
  src/v20200210/model/ModifyStaffResponse.cpp
  src/v20200210/model/ModifyExtensionRequest.cpp
  src/v20200210/model/PSTNSessionInfo.cpp
  src/v20200210/model/Message.cpp
  src/v20200210/model/DescribeNumbersRequest.cpp
  src/v20200210/model/ExtensionInfo.cpp
  src/v20200210/model/BindNumberCallOutSkillGroupRequest.cpp
  src/v20200210/model/IVRKeyPressedElement.cpp
  src/v20200210/model/UnbindNumberCallOutSkillGroupResponse.cpp
  src/v20200210/model/StaffInfo.cpp
  src/v20200210/model/CreateAutoCalloutTaskResponse.cpp
  src/v20200210/model/TelCdrInfo.cpp
  src/v20200210/model/NumberInfo.cpp
  src/v20200210/model/DeleteStaffRequest.cpp
  src/v20200210/model/CallInMetrics.cpp
  src/v20200210/model/DescribeCCCBuyInfoListRequest.cpp
  src/v20200210/model/DescribeTelCallInfoRequest.cpp
  src/v20200210/model/Variable.cpp
  src/v20200210/model/CallInNumberMetrics.cpp
  src/v20200210/model/CreateExtensionRequest.cpp
  src/v20200210/model/StaffSkillGroupList.cpp
  src/v20200210/model/CreateAutoCalloutTaskRequest.cpp
  src/v20200210/model/Filter.cpp
  src/v20200210/model/UnbindStaffSkillGroupListRequest.cpp
  src/v20200210/model/BindNumberCallOutSkillGroupResponse.cpp
  src/v20200210/model/CreateCallOutSessionRequest.cpp
  src/v20200210/model/StopAutoCalloutTaskResponse.cpp
  src/v20200210/model/SkillGroupItem.cpp
  src/v20200210/model/MessageBody.cpp
  src/v20200210/model/PhoneNumBuyInfo.cpp
  src/v20200210/model/DescribeCCCBuyInfoListResponse.cpp
  src/v20200210/model/ActiveCarrierPrivilegeNumber.cpp
  src/v20200210/model/UnbindStaffSkillGroupListResponse.cpp
  src/v20200210/model/DeleteExtensionResponse.cpp
  src/v20200210/model/BindStaffSkillGroupListRequest.cpp
  src/v20200210/model/DescribePSTNActiveSessionListRequest.cpp
  src/v20200210/model/DescribeCallInMetricsResponse.cpp
  src/v20200210/model/DescribeActiveCarrierPrivilegeNumberResponse.cpp
  src/v20200210/model/IMSatisfaction.cpp
  src/v20200210/model/DescribeTelCdrResponse.cpp
  src/v20200210/model/DescribeStaffStatusMetricsRequest.cpp
  src/v20200210/model/DeleteStaffResponse.cpp
  src/v20200210/model/CalleeAttribute.cpp
  src/v20200210/model/StaffStatusExtra.cpp
  src/v20200210/model/CreateStaffRequest.cpp
  src/v20200210/model/DescribeChatMessagesResponse.cpp
  src/v20200210/model/SdkAppIdBuyInfo.cpp
  src/v20200210/model/DescribePSTNActiveSessionListResponse.cpp
  src/v20200210/model/IMCdrInfo.cpp
  src/v20200210/model/DescribeAutoCalloutTasksRequest.cpp
  src/v20200210/model/DescribeChatMessagesRequest.cpp
  src/v20200210/model/DescribeTelSessionResponse.cpp
  src/v20200210/model/CreateAdminURLRequest.cpp
  src/v20200210/model/DescribeStaffStatusMetricsResponse.cpp
  src/v20200210/model/DescribeCarrierPrivilegeNumberApplicantsResponse.cpp
  src/v20200210/model/HangUpCallResponse.cpp
  src/v20200210/model/BindStaffSkillGroupListResponse.cpp
  src/v20200210/model/DescribeExtensionsRequest.cpp
  src/v20200210/model/DescribeProtectedTelCdrRequest.cpp
  src/v20200210/model/CreateSDKLoginTokenRequest.cpp
  src/v20200210/model/DescribeActiveCarrierPrivilegeNumberRequest.cpp
  src/v20200210/model/StaffBuyInfo.cpp
  src/v20200210/model/DescribeCallInMetricsRequest.cpp
  src/v20200210/model/DescribeExtensionResponse.cpp
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

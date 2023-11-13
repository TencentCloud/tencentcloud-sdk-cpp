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

set(weilingwith_public_header
  include/tencentcloud/weilingwith/v20230427/WeilingwithClient.h
  )

set(weilingwith_public_header_model
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaRequest.h
  include/tencentcloud/weilingwith/v20230427/model/ApplicationList.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceRelationListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmTypeListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusStatRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoLiveStreamResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantBuildingCountAndAreaRequest.h
  include/tencentcloud/weilingwith/v20230427/model/AddAlarmProcessRecordRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ModifyDeviceNameResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenResponse.h
  include/tencentcloud/weilingwith/v20230427/model/SsoUserResult.h
  include/tencentcloud/weilingwith/v20230427/model/SsoTeamUser.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeModelListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeRuleDetailRequest.h
  include/tencentcloud/weilingwith/v20230427/model/BatchCreateDeviceResponse.h
  include/tencentcloud/weilingwith/v20230427/model/CreateApplicationTokenResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantUserListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/StopVideoStreamingResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ModifyDeviceNameRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeFileUploadURLResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeFileDownloadURLResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeRuleDetailResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceInfoByDeviceIdResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeApplicationListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSceneListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceRelationByDeviceIdRequest.h
  include/tencentcloud/weilingwith/v20230427/model/ChangeAlarmStatusResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingModelResponse.h
  include/tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeElementProfilePageRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribePropertyListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeApplicationListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeFileDownloadURLRequest.h
  include/tencentcloud/weilingwith/v20230427/model/StopVideoStreamingRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceTypeListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeModelListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/SsoDepartmentsResult.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/SsoTeamUserResult.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribePropertyListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeProductListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/ApplicationLogo.h
  include/tencentcloud/weilingwith/v20230427/model/ControlCameraPTZResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceTypeListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoRecordStreamResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmLevelListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/BatchReportAppMessageRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusStatResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DeviceShadowRes.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingModelRequest.h
  include/tencentcloud/weilingwith/v20230427/model/AddAlarmProcessRecordResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceIdListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeElementProfileTreeResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantDepartmentListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingProfileRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceShadowListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoCloudRecordResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceRelationListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/UpdateWorkspaceParkAttributesRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeLinkRuleListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceTypeListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ControlDeviceRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmLevelListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeCityWorkspaceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceTagListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeActionListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/BatchCreateDeviceRequest.h
  include/tencentcloud/weilingwith/v20230427/model/BatchKillAlarmRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeElementProfileTreeRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeLinkRuleListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEventListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceTagListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeBuildingProfileResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ReportAppMessageRequest.h
  include/tencentcloud/weilingwith/v20230427/model/ApplicationInfo.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeFileUploadURLRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoCloudRecordRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAdministrationByTagRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeCityWorkspaceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ControlDeviceResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceRelationByDeviceIdResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ControlCameraPTZRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceInfoByDeviceIdRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeProductListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoRecordStreamRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmStatusListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/CreateApplicationTokenRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmStatusListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/UpdateWorkspaceParkAttributesResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantDepartmentListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaResponse.h
  include/tencentcloud/weilingwith/v20230427/model/ReportAppMessageResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAdministrationByTagResponse.h
  include/tencentcloud/weilingwith/v20230427/model/SsoDepartment.h
  include/tencentcloud/weilingwith/v20230427/model/BatchKillAlarmResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DeviceShadowInfo.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceTypeListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceShadowListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSceneListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeDeviceListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantBuildingCountAndAreaResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeVideoLiveStreamRequest.h
  include/tencentcloud/weilingwith/v20230427/model/SsoUser.h
  include/tencentcloud/weilingwith/v20230427/model/ChangeAlarmStatusRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeAlarmTypeListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeCameraExtendInfoResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeCameraExtendInfoRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeTenantUserListResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEventListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeElementProfilePageResponse.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeSpaceDeviceIdListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeActionListRequest.h
  include/tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenRequest.h
  )

set(weilingwith_src
  src/v20230427/WeilingwithClient.cpp
  src/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaRequest.cpp
  src/v20230427/model/ApplicationList.cpp
  src/v20230427/model/DescribeSpaceDeviceRelationListRequest.cpp
  src/v20230427/model/DescribeAlarmTypeListResponse.cpp
  src/v20230427/model/DescribeDeviceStatusStatRequest.cpp
  src/v20230427/model/DescribeVideoLiveStreamResponse.cpp
  src/v20230427/model/DescribeTenantBuildingCountAndAreaRequest.cpp
  src/v20230427/model/AddAlarmProcessRecordRequest.cpp
  src/v20230427/model/DescribeInterfaceListResponse.cpp
  src/v20230427/model/ModifyDeviceNameResponse.cpp
  src/v20230427/model/DescribeEdgeApplicationTokenResponse.cpp
  src/v20230427/model/SsoUserResult.cpp
  src/v20230427/model/SsoTeamUser.cpp
  src/v20230427/model/DescribeWorkspaceListResponse.cpp
  src/v20230427/model/DescribeModelListResponse.cpp
  src/v20230427/model/DescribeRuleDetailRequest.cpp
  src/v20230427/model/BatchCreateDeviceResponse.cpp
  src/v20230427/model/CreateApplicationTokenResponse.cpp
  src/v20230427/model/DescribeTenantUserListRequest.cpp
  src/v20230427/model/StopVideoStreamingResponse.cpp
  src/v20230427/model/DescribeDeviceStatusListResponse.cpp
  src/v20230427/model/ModifyDeviceNameRequest.cpp
  src/v20230427/model/DescribeFileUploadURLResponse.cpp
  src/v20230427/model/DescribeFileDownloadURLResponse.cpp
  src/v20230427/model/DescribeRuleDetailResponse.cpp
  src/v20230427/model/DescribeSpaceInfoByDeviceIdResponse.cpp
  src/v20230427/model/DescribeApplicationListRequest.cpp
  src/v20230427/model/DescribeSceneListRequest.cpp
  src/v20230427/model/DescribeDeviceListRequest.cpp
  src/v20230427/model/DescribeSpaceRelationByDeviceIdRequest.cpp
  src/v20230427/model/ChangeAlarmStatusResponse.cpp
  src/v20230427/model/DescribeBuildingModelResponse.cpp
  src/v20230427/model/BatchReportAppMessageResponse.cpp
  src/v20230427/model/DescribeElementProfilePageRequest.cpp
  src/v20230427/model/DescribePropertyListResponse.cpp
  src/v20230427/model/DescribeApplicationListResponse.cpp
  src/v20230427/model/DescribeFileDownloadURLRequest.cpp
  src/v20230427/model/StopVideoStreamingRequest.cpp
  src/v20230427/model/DescribeSpaceTypeListRequest.cpp
  src/v20230427/model/DescribeModelListRequest.cpp
  src/v20230427/model/SsoDepartmentsResult.cpp
  src/v20230427/model/DescribeBuildingListResponse.cpp
  src/v20230427/model/SsoTeamUserResult.cpp
  src/v20230427/model/DescribeWorkspaceUserListResponse.cpp
  src/v20230427/model/DescribePropertyListRequest.cpp
  src/v20230427/model/DescribeProductListRequest.cpp
  src/v20230427/model/ApplicationLogo.cpp
  src/v20230427/model/ControlCameraPTZResponse.cpp
  src/v20230427/model/DescribeWorkspaceListRequest.cpp
  src/v20230427/model/DescribeDeviceTypeListResponse.cpp
  src/v20230427/model/DescribeVideoRecordStreamResponse.cpp
  src/v20230427/model/DescribeAlarmLevelListRequest.cpp
  src/v20230427/model/BatchReportAppMessageRequest.cpp
  src/v20230427/model/DescribeDeviceStatusStatResponse.cpp
  src/v20230427/model/DeviceShadowRes.cpp
  src/v20230427/model/DescribeBuildingModelRequest.cpp
  src/v20230427/model/AddAlarmProcessRecordResponse.cpp
  src/v20230427/model/DescribeSpaceDeviceIdListResponse.cpp
  src/v20230427/model/DescribeElementProfileTreeResponse.cpp
  src/v20230427/model/DescribeTenantDepartmentListRequest.cpp
  src/v20230427/model/DescribeBuildingProfileRequest.cpp
  src/v20230427/model/DescribeDeviceShadowListResponse.cpp
  src/v20230427/model/DescribeBuildingListRequest.cpp
  src/v20230427/model/DescribeWorkspaceUserListRequest.cpp
  src/v20230427/model/DescribeVideoCloudRecordResponse.cpp
  src/v20230427/model/DescribeSpaceDeviceRelationListResponse.cpp
  src/v20230427/model/UpdateWorkspaceParkAttributesRequest.cpp
  src/v20230427/model/DescribeLinkRuleListResponse.cpp
  src/v20230427/model/DescribeSpaceTypeListResponse.cpp
  src/v20230427/model/ControlDeviceRequest.cpp
  src/v20230427/model/DescribeAlarmLevelListResponse.cpp
  src/v20230427/model/DescribeCityWorkspaceListRequest.cpp
  src/v20230427/model/DescribeDeviceTagListResponse.cpp
  src/v20230427/model/DescribeActionListResponse.cpp
  src/v20230427/model/BatchCreateDeviceRequest.cpp
  src/v20230427/model/BatchKillAlarmRequest.cpp
  src/v20230427/model/DescribeElementProfileTreeRequest.cpp
  src/v20230427/model/DescribeLinkRuleListRequest.cpp
  src/v20230427/model/DescribeEventListResponse.cpp
  src/v20230427/model/DescribeDeviceTagListRequest.cpp
  src/v20230427/model/DescribeBuildingProfileResponse.cpp
  src/v20230427/model/ReportAppMessageRequest.cpp
  src/v20230427/model/ApplicationInfo.cpp
  src/v20230427/model/DescribeFileUploadURLRequest.cpp
  src/v20230427/model/DescribeDeviceStatusListRequest.cpp
  src/v20230427/model/DescribeVideoCloudRecordRequest.cpp
  src/v20230427/model/DescribeAdministrationByTagRequest.cpp
  src/v20230427/model/DescribeCityWorkspaceListResponse.cpp
  src/v20230427/model/ControlDeviceResponse.cpp
  src/v20230427/model/DescribeAlarmListResponse.cpp
  src/v20230427/model/DescribeSpaceRelationByDeviceIdResponse.cpp
  src/v20230427/model/ControlCameraPTZRequest.cpp
  src/v20230427/model/DescribeSpaceInfoByDeviceIdRequest.cpp
  src/v20230427/model/DescribeInterfaceListRequest.cpp
  src/v20230427/model/DescribeProductListResponse.cpp
  src/v20230427/model/DescribeVideoRecordStreamRequest.cpp
  src/v20230427/model/DescribeAlarmStatusListResponse.cpp
  src/v20230427/model/CreateApplicationTokenRequest.cpp
  src/v20230427/model/DescribeAlarmStatusListRequest.cpp
  src/v20230427/model/UpdateWorkspaceParkAttributesResponse.cpp
  src/v20230427/model/DescribeTenantDepartmentListResponse.cpp
  src/v20230427/model/DescribeWorkSpaceBuildingCountAndAreaResponse.cpp
  src/v20230427/model/ReportAppMessageResponse.cpp
  src/v20230427/model/DescribeAlarmListRequest.cpp
  src/v20230427/model/DescribeAdministrationByTagResponse.cpp
  src/v20230427/model/SsoDepartment.cpp
  src/v20230427/model/BatchKillAlarmResponse.cpp
  src/v20230427/model/DeviceShadowInfo.cpp
  src/v20230427/model/DescribeDeviceTypeListRequest.cpp
  src/v20230427/model/DescribeDeviceShadowListRequest.cpp
  src/v20230427/model/DescribeSceneListResponse.cpp
  src/v20230427/model/DescribeDeviceListResponse.cpp
  src/v20230427/model/DescribeTenantBuildingCountAndAreaResponse.cpp
  src/v20230427/model/DescribeVideoLiveStreamRequest.cpp
  src/v20230427/model/SsoUser.cpp
  src/v20230427/model/ChangeAlarmStatusRequest.cpp
  src/v20230427/model/DescribeAlarmTypeListRequest.cpp
  src/v20230427/model/DescribeCameraExtendInfoResponse.cpp
  src/v20230427/model/DescribeCameraExtendInfoRequest.cpp
  src/v20230427/model/DescribeTenantUserListResponse.cpp
  src/v20230427/model/DescribeEventListRequest.cpp
  src/v20230427/model/DescribeElementProfilePageResponse.cpp
  src/v20230427/model/DescribeSpaceDeviceIdListRequest.cpp
  src/v20230427/model/DescribeActionListRequest.cpp
  src/v20230427/model/DescribeEdgeApplicationTokenRequest.cpp
  )

set(weilingwith_include
    include/tencentcloud/weilingwith
  )

add_library(weilingwith ${LIB_TYPE}
  ${weilingwith_public_header}
  ${weilingwith_public_header_model}
  ${weilingwith_src})

set_target_properties(weilingwith
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}weilingwith
  )

target_include_directories(weilingwith
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(weilingwith
  core)

#install(FILES ${weilingwith_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/weilingwith/v20230427)
#install(FILES ${weilingwith_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/weilingwith/v20230427/model)
install(DIRECTORY ${weilingwith_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS weilingwith
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

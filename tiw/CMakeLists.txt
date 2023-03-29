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

set(tiw_public_header
  include/tencentcloud/tiw/v20190919/TiwClient.h
  )

set(tiw_public_header_model
  include/tencentcloud/tiw/v20190919/model/DescribeOfflineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/Canvas.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchResponse.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/UsageDataItem.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigResponse.h
  include/tencentcloud/tiw/v20190919/model/WhiteboardPushResult.h
  include/tencentcloud/tiw/v20190919/model/CreateSnapshotTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeOfflineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/ModifyApplicationResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserResourcesResponse.h
  include/tencentcloud/tiw/v20190919/model/VideoInfo.h
  include/tencentcloud/tiw/v20190919/model/CustomLayout.h
  include/tencentcloud/tiw/v20190919/model/Interrupt.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/RoomListItem.h
  include/tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigRequest.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeRecordSearchResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeAPIServiceRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeQualityMetricsRequest.h
  include/tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchResponse.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeRoomListRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/ApplyTiwTrialResponse.h
  include/tencentcloud/tiw/v20190919/model/OmittedDuration.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeApplicationInfosResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeApplicationUsageResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeAPIServiceResponse.h
  include/tencentcloud/tiw/v20190919/model/TimeValue.h
  include/tencentcloud/tiw/v20190919/model/RecordTaskResult.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeUsageSummaryResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeApplicationInfosRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeApplicationUsageRequest.h
  include/tencentcloud/tiw/v20190919/model/SnapshotResult.h
  include/tencentcloud/tiw/v20190919/model/DescribeOfflineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateOfflineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/DataItem.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/ApplyTiwTrialRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserListResponse.h
  include/tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardBucketConfigResponse.h
  include/tencentcloud/tiw/v20190919/model/MixStream.h
  include/tencentcloud/tiw/v20190919/model/DescribeBoardSDKLogRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeSearchRequest.h
  include/tencentcloud/tiw/v20190919/model/AuthParam.h
  include/tencentcloud/tiw/v20190919/model/Detail.h
  include/tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/CreateOfflineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/UserListItem.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/WhiteboardPushTaskSearchResult.h
  include/tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigRequest.h
  include/tencentcloud/tiw/v20190919/model/WhiteboardPushBackupParam.h
  include/tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserStatusRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/RecordTaskSearchResult.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/SetOfflineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/ApplicationItem.h
  include/tencentcloud/tiw/v20190919/model/ModifyWhiteboardApplicationConfigResponse.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTIWDailyUsageResponse.h
  include/tencentcloud/tiw/v20190919/model/Concat.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigRequest.h
  include/tencentcloud/tiw/v20190919/model/RoomUsageDataItem.h
  include/tencentcloud/tiw/v20190919/model/SnapshotCOS.h
  include/tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/Whiteboard.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/ModifyWhiteboardBucketConfigResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/ModifyApplicationRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOfflineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/RecordControl.h
  include/tencentcloud/tiw/v20190919/model/DescribeQualityMetricsResponse.h
  include/tencentcloud/tiw/v20190919/model/TranscodeTaskResult.h
  include/tencentcloud/tiw/v20190919/model/DescribeIMApplicationsResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserListRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserResourcesRequest.h
  include/tencentcloud/tiw/v20190919/model/StopWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribePostpaidUsageRequest.h
  include/tencentcloud/tiw/v20190919/model/LayoutParams.h
  include/tencentcloud/tiw/v20190919/model/StreamControl.h
  include/tencentcloud/tiw/v20190919/model/DescribeRoomListResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeIMApplicationsRequest.h
  include/tencentcloud/tiw/v20190919/model/ModifyAutoRenewFlagRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeUserStatusResponse.h
  include/tencentcloud/tiw/v20190919/model/StreamLayout.h
  include/tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateApplicationRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushSearchRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/Tag.h
  include/tencentcloud/tiw/v20190919/model/DescribeUsageSummaryRequest.h
  include/tencentcloud/tiw/v20190919/model/SnapshotWhiteboard.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribePostpaidUsageResponse.h
  include/tencentcloud/tiw/v20190919/model/StartWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/WhiteboardApplicationConfig.h
  include/tencentcloud/tiw/v20190919/model/TranscodeTaskSearchResult.h
  include/tencentcloud/tiw/v20190919/model/CreateApplicationResponse.h
  include/tencentcloud/tiw/v20190919/model/StopWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOfflineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeRecordSearchRequest.h
  )

set(tiw_src
  src/v20190919/TiwClient.cpp
  src/v20190919/model/DescribeOfflineRecordCallbackRequest.cpp
  src/v20190919/model/Canvas.cpp
  src/v20190919/model/StopOnlineRecordResponse.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.cpp
  src/v20190919/model/DescribeTIWRoomDailyUsageRequest.cpp
  src/v20190919/model/DescribeWhiteboardPushRequest.cpp
  src/v20190919/model/DescribeWhiteboardPushSearchResponse.cpp
  src/v20190919/model/ResumeOnlineRecordResponse.cpp
  src/v20190919/model/UsageDataItem.cpp
  src/v20190919/model/DescribeWhiteboardApplicationConfigResponse.cpp
  src/v20190919/model/WhiteboardPushResult.cpp
  src/v20190919/model/CreateSnapshotTaskResponse.cpp
  src/v20190919/model/DescribeOfflineRecordResponse.cpp
  src/v20190919/model/ModifyApplicationResponse.cpp
  src/v20190919/model/CreateTranscodeResponse.cpp
  src/v20190919/model/DescribeUserResourcesResponse.cpp
  src/v20190919/model/VideoInfo.cpp
  src/v20190919/model/CustomLayout.cpp
  src/v20190919/model/Interrupt.cpp
  src/v20190919/model/DescribeOnlineRecordRequest.cpp
  src/v20190919/model/RoomListItem.cpp
  src/v20190919/model/ModifyWhiteboardBucketConfigRequest.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyResponse.cpp
  src/v20190919/model/DescribeRecordSearchResponse.cpp
  src/v20190919/model/DescribeAPIServiceRequest.cpp
  src/v20190919/model/DescribeQualityMetricsRequest.cpp
  src/v20190919/model/CreateVideoGenerationTaskRequest.cpp
  src/v20190919/model/DescribeTranscodeCallbackRequest.cpp
  src/v20190919/model/DescribeTranscodeSearchResponse.cpp
  src/v20190919/model/ResumeOnlineRecordRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackKeyResponse.cpp
  src/v20190919/model/DescribeRoomListRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackResponse.cpp
  src/v20190919/model/ApplyTiwTrialResponse.cpp
  src/v20190919/model/OmittedDuration.cpp
  src/v20190919/model/PauseOnlineRecordRequest.cpp
  src/v20190919/model/DescribeApplicationInfosResponse.cpp
  src/v20190919/model/DescribeApplicationUsageResponse.cpp
  src/v20190919/model/DescribeAPIServiceResponse.cpp
  src/v20190919/model/TimeValue.cpp
  src/v20190919/model/RecordTaskResult.cpp
  src/v20190919/model/DescribeWhiteboardBucketConfigRequest.cpp
  src/v20190919/model/DescribeUsageSummaryResponse.cpp
  src/v20190919/model/DescribeApplicationInfosRequest.cpp
  src/v20190919/model/DescribeApplicationUsageRequest.cpp
  src/v20190919/model/SnapshotResult.cpp
  src/v20190919/model/DescribeOfflineRecordCallbackResponse.cpp
  src/v20190919/model/CreateOfflineRecordResponse.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.cpp
  src/v20190919/model/DescribeVideoGenerationTaskResponse.cpp
  src/v20190919/model/DataItem.cpp
  src/v20190919/model/DescribeVideoGenerationTaskRequest.cpp
  src/v20190919/model/DescribeWhiteboardPushCallbackRequest.cpp
  src/v20190919/model/DescribeOnlineRecordResponse.cpp
  src/v20190919/model/DescribeTranscodeRequest.cpp
  src/v20190919/model/DescribeBoardSDKLogResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackResponse.cpp
  src/v20190919/model/ApplyTiwTrialRequest.cpp
  src/v20190919/model/DescribeTranscodeCallbackResponse.cpp
  src/v20190919/model/DescribeUserListResponse.cpp
  src/v20190919/model/ModifyAutoRenewFlagResponse.cpp
  src/v20190919/model/DescribeTIWDailyUsageRequest.cpp
  src/v20190919/model/DescribeWhiteboardBucketConfigResponse.cpp
  src/v20190919/model/MixStream.cpp
  src/v20190919/model/DescribeBoardSDKLogRequest.cpp
  src/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackKeyRequest.cpp
  src/v20190919/model/DescribeTranscodeSearchRequest.cpp
  src/v20190919/model/AuthParam.cpp
  src/v20190919/model/Detail.cpp
  src/v20190919/model/StartWhiteboardPushRequest.cpp
  src/v20190919/model/CreateOfflineRecordRequest.cpp
  src/v20190919/model/UserListItem.cpp
  src/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.cpp
  src/v20190919/model/WhiteboardPushTaskSearchResult.cpp
  src/v20190919/model/ModifyWhiteboardApplicationConfigRequest.cpp
  src/v20190919/model/WhiteboardPushBackupParam.cpp
  src/v20190919/model/DescribeSnapshotTaskRequest.cpp
  src/v20190919/model/StartOnlineRecordRequest.cpp
  src/v20190919/model/DescribeUserStatusRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackRequest.cpp
  src/v20190919/model/RecordTaskSearchResult.cpp
  src/v20190919/model/SetTranscodeCallbackResponse.cpp
  src/v20190919/model/StopOnlineRecordRequest.cpp
  src/v20190919/model/SetOfflineRecordCallbackRequest.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackResponse.cpp
  src/v20190919/model/ApplicationItem.cpp
  src/v20190919/model/ModifyWhiteboardApplicationConfigResponse.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackRequest.cpp
  src/v20190919/model/DescribeTIWDailyUsageResponse.cpp
  src/v20190919/model/Concat.cpp
  src/v20190919/model/DescribeWhiteboardApplicationConfigRequest.cpp
  src/v20190919/model/RoomUsageDataItem.cpp
  src/v20190919/model/SnapshotCOS.cpp
  src/v20190919/model/CreateVideoGenerationTaskResponse.cpp
  src/v20190919/model/Whiteboard.cpp
  src/v20190919/model/PauseOnlineRecordResponse.cpp
  src/v20190919/model/ModifyWhiteboardBucketConfigResponse.cpp
  src/v20190919/model/CreateSnapshotTaskRequest.cpp
  src/v20190919/model/DescribeTranscodeResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyRequest.cpp
  src/v20190919/model/ModifyApplicationRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackResponse.cpp
  src/v20190919/model/SetOfflineRecordCallbackResponse.cpp
  src/v20190919/model/RecordControl.cpp
  src/v20190919/model/DescribeQualityMetricsResponse.cpp
  src/v20190919/model/TranscodeTaskResult.cpp
  src/v20190919/model/DescribeIMApplicationsResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackRequest.cpp
  src/v20190919/model/DescribeUserListRequest.cpp
  src/v20190919/model/DescribeUserResourcesRequest.cpp
  src/v20190919/model/StopWhiteboardPushResponse.cpp
  src/v20190919/model/DescribePostpaidUsageRequest.cpp
  src/v20190919/model/LayoutParams.cpp
  src/v20190919/model/StreamControl.cpp
  src/v20190919/model/DescribeRoomListResponse.cpp
  src/v20190919/model/DescribeIMApplicationsRequest.cpp
  src/v20190919/model/ModifyAutoRenewFlagRequest.cpp
  src/v20190919/model/DescribeSnapshotTaskResponse.cpp
  src/v20190919/model/DescribeUserStatusResponse.cpp
  src/v20190919/model/StreamLayout.cpp
  src/v20190919/model/DescribeTIWRoomDailyUsageResponse.cpp
  src/v20190919/model/DescribeWhiteboardPushCallbackResponse.cpp
  src/v20190919/model/CreateApplicationRequest.cpp
  src/v20190919/model/DescribeWhiteboardPushSearchRequest.cpp
  src/v20190919/model/SetTranscodeCallbackKeyResponse.cpp
  src/v20190919/model/DescribeWhiteboardPushResponse.cpp
  src/v20190919/model/StartOnlineRecordResponse.cpp
  src/v20190919/model/Tag.cpp
  src/v20190919/model/DescribeUsageSummaryRequest.cpp
  src/v20190919/model/SnapshotWhiteboard.cpp
  src/v20190919/model/CreateTranscodeRequest.cpp
  src/v20190919/model/SetTranscodeCallbackKeyRequest.cpp
  src/v20190919/model/SetTranscodeCallbackRequest.cpp
  src/v20190919/model/DescribePostpaidUsageResponse.cpp
  src/v20190919/model/StartWhiteboardPushResponse.cpp
  src/v20190919/model/WhiteboardApplicationConfig.cpp
  src/v20190919/model/TranscodeTaskSearchResult.cpp
  src/v20190919/model/CreateApplicationResponse.cpp
  src/v20190919/model/StopWhiteboardPushRequest.cpp
  src/v20190919/model/DescribeOfflineRecordRequest.cpp
  src/v20190919/model/DescribeRecordSearchRequest.cpp
  )

set(tiw_include
    include/tencentcloud/tiw
  )

add_library(tiw ${LIB_TYPE}
  ${tiw_public_header}
  ${tiw_public_header_model}
  ${tiw_src})

set_target_properties(tiw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tiw
  )

target_include_directories(tiw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tiw
  core)

#install(FILES ${tiw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiw/v20190919)
#install(FILES ${tiw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tiw/v20190919/model)
install(DIRECTORY ${tiw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tiw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

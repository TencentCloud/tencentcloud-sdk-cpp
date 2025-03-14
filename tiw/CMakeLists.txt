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
  include/tencentcloud/tiw/v20190919/model/Canvas.h
  include/tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/VideoInfo.h
  include/tencentcloud/tiw/v20190919/model/DescribePPTCheckResponse.h
  include/tencentcloud/tiw/v20190919/model/CustomLayout.h
  include/tencentcloud/tiw/v20190919/model/Interrupt.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/ResumeOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/OmittedDuration.h
  include/tencentcloud/tiw/v20190919/model/PPTErrSlide.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeRunningTasksResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWarningCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeRunningTasksRequest.h
  include/tencentcloud/tiw/v20190919/model/SnapshotResult.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/SetWarningCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/MixStream.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/AuthParam.h
  include/tencentcloud/tiw/v20190919/model/StartWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/WhiteboardPushBackupParam.h
  include/tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeWarningCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/StopOnlineRecordRequest.h
  include/tencentcloud/tiw/v20190919/model/SetVideoGenerationTaskCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeByUrlResponse.h
  include/tencentcloud/tiw/v20190919/model/StopWhiteboardPushRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWhiteboardPushCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/Concat.h
  include/tencentcloud/tiw/v20190919/model/SnapshotCOS.h
  include/tencentcloud/tiw/v20190919/model/CreateVideoGenerationTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribePPTCheckCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/PauseOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateSnapshotTaskRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeResponse.h
  include/tencentcloud/tiw/v20190919/model/SetOnlineRecordCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/DescribeOnlineRecordCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/RecordControl.h
  include/tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/StopWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeTranscodeByUrlRequest.h
  include/tencentcloud/tiw/v20190919/model/ExcelParam.h
  include/tencentcloud/tiw/v20190919/model/LayoutParams.h
  include/tencentcloud/tiw/v20190919/model/StreamControl.h
  include/tencentcloud/tiw/v20190919/model/PPTErr.h
  include/tencentcloud/tiw/v20190919/model/DescribeSnapshotTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/StreamLayout.h
  include/tencentcloud/tiw/v20190919/model/CreateSnapshotTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribeWhiteboardPushCallbackResponse.h
  include/tencentcloud/tiw/v20190919/model/RunningTaskItem.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyResponse.h
  include/tencentcloud/tiw/v20190919/model/SetPPTCheckCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/SetWarningCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/StartOnlineRecordResponse.h
  include/tencentcloud/tiw/v20190919/model/Whiteboard.h
  include/tencentcloud/tiw/v20190919/model/SnapshotWhiteboard.h
  include/tencentcloud/tiw/v20190919/model/CreatePPTCheckTaskResponse.h
  include/tencentcloud/tiw/v20190919/model/CreateTranscodeRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackKeyRequest.h
  include/tencentcloud/tiw/v20190919/model/SetTranscodeCallbackRequest.h
  include/tencentcloud/tiw/v20190919/model/StartWhiteboardPushResponse.h
  include/tencentcloud/tiw/v20190919/model/DescribePPTCheckRequest.h
  )

set(tiw_src
  src/v20190919/TiwClient.cpp
  src/v20190919/model/Canvas.cpp
  src/v20190919/model/CreateVideoGenerationTaskRequest.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackKeyRequest.cpp
  src/v20190919/model/DescribeWhiteboardPushRequest.cpp
  src/v20190919/model/ResumeOnlineRecordResponse.cpp
  src/v20190919/model/SetPPTCheckCallbackKeyResponse.cpp
  src/v20190919/model/CreateTranscodeResponse.cpp
  src/v20190919/model/VideoInfo.cpp
  src/v20190919/model/DescribePPTCheckResponse.cpp
  src/v20190919/model/CustomLayout.cpp
  src/v20190919/model/Interrupt.cpp
  src/v20190919/model/DescribeOnlineRecordRequest.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyResponse.cpp
  src/v20190919/model/StopOnlineRecordResponse.cpp
  src/v20190919/model/DescribeTranscodeCallbackRequest.cpp
  src/v20190919/model/ResumeOnlineRecordRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackKeyResponse.cpp
  src/v20190919/model/SetWhiteboardPushCallbackResponse.cpp
  src/v20190919/model/OmittedDuration.cpp
  src/v20190919/model/PPTErrSlide.cpp
  src/v20190919/model/PauseOnlineRecordRequest.cpp
  src/v20190919/model/DescribeRunningTasksResponse.cpp
  src/v20190919/model/DescribeWhiteboardPushResponse.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackRequest.cpp
  src/v20190919/model/DescribeWarningCallbackResponse.cpp
  src/v20190919/model/DescribeRunningTasksRequest.cpp
  src/v20190919/model/SnapshotResult.cpp
  src/v20190919/model/DescribeVideoGenerationTaskRequest.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackKeyResponse.cpp
  src/v20190919/model/DescribeVideoGenerationTaskResponse.cpp
  src/v20190919/model/SetWarningCallbackResponse.cpp
  src/v20190919/model/DescribeWhiteboardPushCallbackRequest.cpp
  src/v20190919/model/DescribeOnlineRecordResponse.cpp
  src/v20190919/model/DescribeTranscodeRequest.cpp
  src/v20190919/model/SetOnlineRecordCallbackResponse.cpp
  src/v20190919/model/DescribePPTCheckCallbackResponse.cpp
  src/v20190919/model/DescribeTranscodeCallbackResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackRequest.cpp
  src/v20190919/model/MixStream.cpp
  src/v20190919/model/DescribeVideoGenerationTaskCallbackRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackKeyRequest.cpp
  src/v20190919/model/AuthParam.cpp
  src/v20190919/model/StartWhiteboardPushRequest.cpp
  src/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.cpp
  src/v20190919/model/WhiteboardPushBackupParam.cpp
  src/v20190919/model/DescribeSnapshotTaskRequest.cpp
  src/v20190919/model/StartOnlineRecordRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackRequest.cpp
  src/v20190919/model/DescribeWarningCallbackRequest.cpp
  src/v20190919/model/SetTranscodeCallbackResponse.cpp
  src/v20190919/model/StopOnlineRecordRequest.cpp
  src/v20190919/model/SetVideoGenerationTaskCallbackResponse.cpp
  src/v20190919/model/DescribeTranscodeByUrlResponse.cpp
  src/v20190919/model/StopWhiteboardPushRequest.cpp
  src/v20190919/model/SetWhiteboardPushCallbackRequest.cpp
  src/v20190919/model/Concat.cpp
  src/v20190919/model/SnapshotCOS.cpp
  src/v20190919/model/CreateVideoGenerationTaskResponse.cpp
  src/v20190919/model/DescribePPTCheckCallbackRequest.cpp
  src/v20190919/model/CreatePPTCheckTaskRequest.cpp
  src/v20190919/model/PauseOnlineRecordResponse.cpp
  src/v20190919/model/CreateSnapshotTaskRequest.cpp
  src/v20190919/model/DescribeTranscodeResponse.cpp
  src/v20190919/model/SetOnlineRecordCallbackKeyRequest.cpp
  src/v20190919/model/DescribeOnlineRecordCallbackResponse.cpp
  src/v20190919/model/RecordControl.cpp
  src/v20190919/model/SetPPTCheckCallbackKeyRequest.cpp
  src/v20190919/model/SetPPTCheckCallbackResponse.cpp
  src/v20190919/model/StopWhiteboardPushResponse.cpp
  src/v20190919/model/DescribeTranscodeByUrlRequest.cpp
  src/v20190919/model/ExcelParam.cpp
  src/v20190919/model/LayoutParams.cpp
  src/v20190919/model/StreamControl.cpp
  src/v20190919/model/PPTErr.cpp
  src/v20190919/model/DescribeSnapshotTaskResponse.cpp
  src/v20190919/model/StreamLayout.cpp
  src/v20190919/model/CreateSnapshotTaskResponse.cpp
  src/v20190919/model/DescribeWhiteboardPushCallbackResponse.cpp
  src/v20190919/model/RunningTaskItem.cpp
  src/v20190919/model/SetTranscodeCallbackKeyResponse.cpp
  src/v20190919/model/SetPPTCheckCallbackRequest.cpp
  src/v20190919/model/SetWarningCallbackRequest.cpp
  src/v20190919/model/StartOnlineRecordResponse.cpp
  src/v20190919/model/Whiteboard.cpp
  src/v20190919/model/SnapshotWhiteboard.cpp
  src/v20190919/model/CreatePPTCheckTaskResponse.cpp
  src/v20190919/model/CreateTranscodeRequest.cpp
  src/v20190919/model/SetTranscodeCallbackKeyRequest.cpp
  src/v20190919/model/SetTranscodeCallbackRequest.cpp
  src/v20190919/model/StartWhiteboardPushResponse.cpp
  src/v20190919/model/DescribePPTCheckRequest.cpp
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

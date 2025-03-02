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

set(ams_public_header
  include/tencentcloud/ams/v20200608/AmsClient.h
  include/tencentcloud/ams/v20201229/AmsClient.h
  )

set(ams_public_header_model
  include/tencentcloud/ams/v20200608/model/ImageSegments.h
  include/tencentcloud/ams/v20200608/model/ImageResultResult.h
  include/tencentcloud/ams/v20200608/model/InputInfo.h
  include/tencentcloud/ams/v20200608/model/StorageInfo.h
  include/tencentcloud/ams/v20200608/model/BucketInfo.h
  include/tencentcloud/ams/v20200608/model/CreateAudioModerationTaskResponse.h
  include/tencentcloud/ams/v20200608/model/CreateBizConfigRequest.h
  include/tencentcloud/ams/v20200608/model/DescribeBizConfigRequest.h
  include/tencentcloud/ams/v20200608/model/TaskResult.h
  include/tencentcloud/ams/v20200608/model/CancelTaskRequest.h
  include/tencentcloud/ams/v20200608/model/DescribeTaskDetailResponse.h
  include/tencentcloud/ams/v20200608/model/CreateAudioModerationTaskRequest.h
  include/tencentcloud/ams/v20200608/model/CreateBizConfigResponse.h
  include/tencentcloud/ams/v20200608/model/TaskInput.h
  include/tencentcloud/ams/v20200608/model/DescribeTaskDetailRequest.h
  include/tencentcloud/ams/v20200608/model/CancelTaskResponse.h
  include/tencentcloud/ams/v20200608/model/TaskLabel.h
  include/tencentcloud/ams/v20200608/model/ImageResultsResultDetail.h
  include/tencentcloud/ams/v20200608/model/DescribeAmsListRequest.h
  include/tencentcloud/ams/v20200608/model/Filters.h
  include/tencentcloud/ams/v20200608/model/AmsDetailInfo.h
  include/tencentcloud/ams/v20200608/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/ams/v20200608/model/FileOutput.h
  include/tencentcloud/ams/v20200608/model/Filter.h
  include/tencentcloud/ams/v20200608/model/DescribeAudioStatResponse.h
  include/tencentcloud/ams/v20200608/model/DescribeAmsListResponse.h
  include/tencentcloud/ams/v20200608/model/TrendCount.h
  include/tencentcloud/ams/v20200608/model/AudioResultDetailTextResult.h
  include/tencentcloud/ams/v20200608/model/DescribeAudioStatRequest.h
  include/tencentcloud/ams/v20200608/model/Overview.h
  include/tencentcloud/ams/v20200608/model/AudioResult.h
  include/tencentcloud/ams/v20200608/model/AudioResultDetailMoanResult.h
  include/tencentcloud/ams/v20200608/model/DescribeBizConfigResponse.h
  include/tencentcloud/ams/v20200608/model/MediaInfo.h
  include/tencentcloud/ams/v20200608/model/MediaModerationConfig.h
  include/tencentcloud/ams/v20200608/model/AudioSegments.h
  include/tencentcloud/ams/v20200608/model/EvilCount.h
  include/tencentcloud/ams/v20200608/model/ImageResultsResultDetailLocation.h
  include/tencentcloud/ams/v20200608/model/ImageResult.h
  include/tencentcloud/ams/v20201229/model/TextResult.h
  include/tencentcloud/ams/v20201229/model/DescribeTasksRequest.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailSpeakerResult.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationSyncTaskRequest.h
  include/tencentcloud/ams/v20201229/model/HitInfo.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationTaskResponse.h
  include/tencentcloud/ams/v20201229/model/TaskResult.h
  include/tencentcloud/ams/v20201229/model/CancelTaskRequest.h
  include/tencentcloud/ams/v20201229/model/DescribeTaskDetailResponse.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationTaskRequest.h
  include/tencentcloud/ams/v20201229/model/TaskInput.h
  include/tencentcloud/ams/v20201229/model/LabelResults.h
  include/tencentcloud/ams/v20201229/model/DescribeTaskDetailRequest.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationSyncTaskResponse.h
  include/tencentcloud/ams/v20201229/model/User.h
  include/tencentcloud/ams/v20201229/model/TaskLabel.h
  include/tencentcloud/ams/v20201229/model/TaskFilter.h
  include/tencentcloud/ams/v20201229/model/InputInfo.h
  include/tencentcloud/ams/v20201229/model/StorageInfo.h
  include/tencentcloud/ams/v20201229/model/DescribeTasksResponse.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/ams/v20201229/model/RecognitionResult.h
  include/tencentcloud/ams/v20201229/model/MoanResult.h
  include/tencentcloud/ams/v20201229/model/Position.h
  include/tencentcloud/ams/v20201229/model/CancelTaskResponse.h
  include/tencentcloud/ams/v20201229/model/BucketInfo.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailTextResult.h
  include/tencentcloud/ams/v20201229/model/SpeakerResults.h
  include/tencentcloud/ams/v20201229/model/TravelResults.h
  include/tencentcloud/ams/v20201229/model/AudioResult.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailMoanResult.h
  include/tencentcloud/ams/v20201229/model/TaskData.h
  include/tencentcloud/ams/v20201229/model/MediaInfo.h
  include/tencentcloud/ams/v20201229/model/Tag.h
  include/tencentcloud/ams/v20201229/model/AudioSegments.h
  )

set(ams_src
  src/v20200608/AmsClient.cpp
  src/v20201229/AmsClient.cpp
  src/v20200608/model/ImageSegments.cpp
  src/v20200608/model/ImageResultResult.cpp
  src/v20200608/model/InputInfo.cpp
  src/v20200608/model/StorageInfo.cpp
  src/v20200608/model/BucketInfo.cpp
  src/v20200608/model/CreateAudioModerationTaskResponse.cpp
  src/v20200608/model/CreateBizConfigRequest.cpp
  src/v20200608/model/DescribeBizConfigRequest.cpp
  src/v20200608/model/TaskResult.cpp
  src/v20200608/model/CancelTaskRequest.cpp
  src/v20200608/model/DescribeTaskDetailResponse.cpp
  src/v20200608/model/CreateAudioModerationTaskRequest.cpp
  src/v20200608/model/CreateBizConfigResponse.cpp
  src/v20200608/model/TaskInput.cpp
  src/v20200608/model/DescribeTaskDetailRequest.cpp
  src/v20200608/model/CancelTaskResponse.cpp
  src/v20200608/model/TaskLabel.cpp
  src/v20200608/model/ImageResultsResultDetail.cpp
  src/v20200608/model/DescribeAmsListRequest.cpp
  src/v20200608/model/Filters.cpp
  src/v20200608/model/AmsDetailInfo.cpp
  src/v20200608/model/AudioResultDetailLanguageResult.cpp
  src/v20200608/model/FileOutput.cpp
  src/v20200608/model/Filter.cpp
  src/v20200608/model/DescribeAudioStatResponse.cpp
  src/v20200608/model/DescribeAmsListResponse.cpp
  src/v20200608/model/TrendCount.cpp
  src/v20200608/model/AudioResultDetailTextResult.cpp
  src/v20200608/model/DescribeAudioStatRequest.cpp
  src/v20200608/model/Overview.cpp
  src/v20200608/model/AudioResult.cpp
  src/v20200608/model/AudioResultDetailMoanResult.cpp
  src/v20200608/model/DescribeBizConfigResponse.cpp
  src/v20200608/model/MediaInfo.cpp
  src/v20200608/model/MediaModerationConfig.cpp
  src/v20200608/model/AudioSegments.cpp
  src/v20200608/model/EvilCount.cpp
  src/v20200608/model/ImageResultsResultDetailLocation.cpp
  src/v20200608/model/ImageResult.cpp
  src/v20201229/model/TextResult.cpp
  src/v20201229/model/DescribeTasksRequest.cpp
  src/v20201229/model/AudioResultDetailSpeakerResult.cpp
  src/v20201229/model/CreateAudioModerationSyncTaskRequest.cpp
  src/v20201229/model/HitInfo.cpp
  src/v20201229/model/CreateAudioModerationTaskResponse.cpp
  src/v20201229/model/TaskResult.cpp
  src/v20201229/model/CancelTaskRequest.cpp
  src/v20201229/model/DescribeTaskDetailResponse.cpp
  src/v20201229/model/CreateAudioModerationTaskRequest.cpp
  src/v20201229/model/TaskInput.cpp
  src/v20201229/model/LabelResults.cpp
  src/v20201229/model/DescribeTaskDetailRequest.cpp
  src/v20201229/model/CreateAudioModerationSyncTaskResponse.cpp
  src/v20201229/model/User.cpp
  src/v20201229/model/TaskLabel.cpp
  src/v20201229/model/TaskFilter.cpp
  src/v20201229/model/InputInfo.cpp
  src/v20201229/model/StorageInfo.cpp
  src/v20201229/model/DescribeTasksResponse.cpp
  src/v20201229/model/AudioResultDetailLanguageResult.cpp
  src/v20201229/model/RecognitionResult.cpp
  src/v20201229/model/MoanResult.cpp
  src/v20201229/model/Position.cpp
  src/v20201229/model/CancelTaskResponse.cpp
  src/v20201229/model/BucketInfo.cpp
  src/v20201229/model/AudioResultDetailTextResult.cpp
  src/v20201229/model/SpeakerResults.cpp
  src/v20201229/model/TravelResults.cpp
  src/v20201229/model/AudioResult.cpp
  src/v20201229/model/AudioResultDetailMoanResult.cpp
  src/v20201229/model/TaskData.cpp
  src/v20201229/model/MediaInfo.cpp
  src/v20201229/model/Tag.cpp
  src/v20201229/model/AudioSegments.cpp
  )

set(ams_include
    include/tencentcloud/ams
  )

add_library(ams ${LIB_TYPE}
  ${ams_public_header}
  ${ams_public_header_model}
  ${ams_src})

set_target_properties(ams
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ams
  )

target_include_directories(ams
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ams
  core)

#install(FILES ${ams_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ams/v20201229)
#install(FILES ${ams_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ams/v20201229/model)
install(DIRECTORY ${ams_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ams
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

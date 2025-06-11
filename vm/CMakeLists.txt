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

set(vm_public_header
  include/tencentcloud/vm/v20210922/VmClient.h
  include/tencentcloud/vm/v20201229/VmClient.h
  include/tencentcloud/vm/v20200709/VmClient.h
  )

set(vm_public_header_model
  include/tencentcloud/vm/v20210922/model/ImageSegments.h
  include/tencentcloud/vm/v20210922/model/TextPosition.h
  include/tencentcloud/vm/v20210922/model/SpeakerResult.h
  include/tencentcloud/vm/v20210922/model/ImageResultResult.h
  include/tencentcloud/vm/v20210922/model/StorageInfo.h
  include/tencentcloud/vm/v20210922/model/BucketInfo.h
  include/tencentcloud/vm/v20210922/model/CreateVideoModerationTaskResponse.h
  include/tencentcloud/vm/v20210922/model/TravelResult.h
  include/tencentcloud/vm/v20210922/model/TaskResult.h
  include/tencentcloud/vm/v20210922/model/TaskLabel.h
  include/tencentcloud/vm/v20210922/model/CancelTaskRequest.h
  include/tencentcloud/vm/v20210922/model/DescribeTaskDetailResponse.h
  include/tencentcloud/vm/v20210922/model/DescribeTasksRequest.h
  include/tencentcloud/vm/v20210922/model/TaskInput.h
  include/tencentcloud/vm/v20210922/model/DescribeTaskDetailRequest.h
  include/tencentcloud/vm/v20210922/model/User.h
  include/tencentcloud/vm/v20210922/model/LabelResult.h
  include/tencentcloud/vm/v20210922/model/ImageResultsResultDetail.h
  include/tencentcloud/vm/v20210922/model/InputInfo.h
  include/tencentcloud/vm/v20210922/model/OcrHitInfo.h
  include/tencentcloud/vm/v20210922/model/CreateVideoModerationTaskRequest.h
  include/tencentcloud/vm/v20210922/model/DescribeTasksResponse.h
  include/tencentcloud/vm/v20210922/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/vm/v20210922/model/TaskFilter.h
  include/tencentcloud/vm/v20210922/model/RecognitionResult.h
  include/tencentcloud/vm/v20210922/model/CancelTaskResponse.h
  include/tencentcloud/vm/v20210922/model/AudioResultDetailTextResult.h
  include/tencentcloud/vm/v20210922/model/SegmentCosUrlList.h
  include/tencentcloud/vm/v20210922/model/RcbAsr.h
  include/tencentcloud/vm/v20210922/model/AudioResult.h
  include/tencentcloud/vm/v20210922/model/AudioResultDetailMoanResult.h
  include/tencentcloud/vm/v20210922/model/TaskData.h
  include/tencentcloud/vm/v20210922/model/MediaInfo.h
  include/tencentcloud/vm/v20210922/model/Tag.h
  include/tencentcloud/vm/v20210922/model/AudioSegments.h
  include/tencentcloud/vm/v20210922/model/ImageResultsResultDetailLocation.h
  include/tencentcloud/vm/v20210922/model/ImageResult.h
  include/tencentcloud/vm/v20201229/model/ImageSegments.h
  include/tencentcloud/vm/v20201229/model/TextPosition.h
  include/tencentcloud/vm/v20201229/model/AudioLabelResult.h
  include/tencentcloud/vm/v20201229/model/SpeakerResult.h
  include/tencentcloud/vm/v20201229/model/ImageResultResult.h
  include/tencentcloud/vm/v20201229/model/StorageInfo.h
  include/tencentcloud/vm/v20201229/model/HitInfo.h
  include/tencentcloud/vm/v20201229/model/CreateVideoModerationTaskResponse.h
  include/tencentcloud/vm/v20201229/model/TravelResult.h
  include/tencentcloud/vm/v20201229/model/TaskResult.h
  include/tencentcloud/vm/v20201229/model/CancelTaskRequest.h
  include/tencentcloud/vm/v20201229/model/DescribeTaskDetailResponse.h
  include/tencentcloud/vm/v20201229/model/DescribeTasksRequest.h
  include/tencentcloud/vm/v20201229/model/TaskInput.h
  include/tencentcloud/vm/v20201229/model/DescribeTaskDetailRequest.h
  include/tencentcloud/vm/v20201229/model/TaskLabel.h
  include/tencentcloud/vm/v20201229/model/ImageResultsResultDetail.h
  include/tencentcloud/vm/v20201229/model/InputInfo.h
  include/tencentcloud/vm/v20201229/model/CreateVideoModerationTaskRequest.h
  include/tencentcloud/vm/v20201229/model/DescribeTasksResponse.h
  include/tencentcloud/vm/v20201229/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/vm/v20201229/model/TaskFilter.h
  include/tencentcloud/vm/v20201229/model/RecognitionResult.h
  include/tencentcloud/vm/v20201229/model/CancelTaskResponse.h
  include/tencentcloud/vm/v20201229/model/BucketInfo.h
  include/tencentcloud/vm/v20201229/model/AudioResultDetailTextResult.h
  include/tencentcloud/vm/v20201229/model/SegmentCosUrlList.h
  include/tencentcloud/vm/v20201229/model/RcbAsr.h
  include/tencentcloud/vm/v20201229/model/AudioResult.h
  include/tencentcloud/vm/v20201229/model/AudioResultDetailMoanResult.h
  include/tencentcloud/vm/v20201229/model/TaskData.h
  include/tencentcloud/vm/v20201229/model/MediaInfo.h
  include/tencentcloud/vm/v20201229/model/Tag.h
  include/tencentcloud/vm/v20201229/model/AudioSegments.h
  include/tencentcloud/vm/v20201229/model/ImageResultsResultDetailLocation.h
  include/tencentcloud/vm/v20201229/model/ImageResult.h
  include/tencentcloud/vm/v20200709/model/ImageSegments.h
  include/tencentcloud/vm/v20200709/model/ImageResultResult.h
  include/tencentcloud/vm/v20200709/model/StorageInfo.h
  include/tencentcloud/vm/v20200709/model/BucketInfo.h
  include/tencentcloud/vm/v20200709/model/CreateVideoModerationTaskResponse.h
  include/tencentcloud/vm/v20200709/model/TaskResult.h
  include/tencentcloud/vm/v20200709/model/CancelTaskRequest.h
  include/tencentcloud/vm/v20200709/model/DescribeTaskDetailResponse.h
  include/tencentcloud/vm/v20200709/model/DescribeVideoStatResponse.h
  include/tencentcloud/vm/v20200709/model/CreateBizConfigResponse.h
  include/tencentcloud/vm/v20200709/model/TaskInput.h
  include/tencentcloud/vm/v20200709/model/DescribeTaskDetailRequest.h
  include/tencentcloud/vm/v20200709/model/TaskLabel.h
  include/tencentcloud/vm/v20200709/model/ImageResultsResultDetail.h
  include/tencentcloud/vm/v20200709/model/DescribeVideoStatRequest.h
  include/tencentcloud/vm/v20200709/model/InputInfo.h
  include/tencentcloud/vm/v20200709/model/EvilCount.h
  include/tencentcloud/vm/v20200709/model/CreateVideoModerationTaskRequest.h
  include/tencentcloud/vm/v20200709/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/vm/v20200709/model/FileOutput.h
  include/tencentcloud/vm/v20200709/model/CancelTaskResponse.h
  include/tencentcloud/vm/v20200709/model/TrendCount.h
  include/tencentcloud/vm/v20200709/model/AudioResultDetailTextResult.h
  include/tencentcloud/vm/v20200709/model/Overview.h
  include/tencentcloud/vm/v20200709/model/AudioResult.h
  include/tencentcloud/vm/v20200709/model/AudioResultDetailMoanResult.h
  include/tencentcloud/vm/v20200709/model/CreateBizConfigRequest.h
  include/tencentcloud/vm/v20200709/model/MediaInfo.h
  include/tencentcloud/vm/v20200709/model/MediaModerationConfig.h
  include/tencentcloud/vm/v20200709/model/AudioSegments.h
  include/tencentcloud/vm/v20200709/model/Filters.h
  include/tencentcloud/vm/v20200709/model/ImageResultsResultDetailLocation.h
  include/tencentcloud/vm/v20200709/model/ImageResult.h
  )

set(vm_src
  src/v20210922/VmClient.cpp
  src/v20201229/VmClient.cpp
  src/v20200709/VmClient.cpp
  src/v20210922/model/ImageSegments.cpp
  src/v20210922/model/TextPosition.cpp
  src/v20210922/model/SpeakerResult.cpp
  src/v20210922/model/ImageResultResult.cpp
  src/v20210922/model/StorageInfo.cpp
  src/v20210922/model/BucketInfo.cpp
  src/v20210922/model/CreateVideoModerationTaskResponse.cpp
  src/v20210922/model/TravelResult.cpp
  src/v20210922/model/TaskResult.cpp
  src/v20210922/model/TaskLabel.cpp
  src/v20210922/model/CancelTaskRequest.cpp
  src/v20210922/model/DescribeTaskDetailResponse.cpp
  src/v20210922/model/DescribeTasksRequest.cpp
  src/v20210922/model/TaskInput.cpp
  src/v20210922/model/DescribeTaskDetailRequest.cpp
  src/v20210922/model/User.cpp
  src/v20210922/model/LabelResult.cpp
  src/v20210922/model/ImageResultsResultDetail.cpp
  src/v20210922/model/InputInfo.cpp
  src/v20210922/model/OcrHitInfo.cpp
  src/v20210922/model/CreateVideoModerationTaskRequest.cpp
  src/v20210922/model/DescribeTasksResponse.cpp
  src/v20210922/model/AudioResultDetailLanguageResult.cpp
  src/v20210922/model/TaskFilter.cpp
  src/v20210922/model/RecognitionResult.cpp
  src/v20210922/model/CancelTaskResponse.cpp
  src/v20210922/model/AudioResultDetailTextResult.cpp
  src/v20210922/model/SegmentCosUrlList.cpp
  src/v20210922/model/RcbAsr.cpp
  src/v20210922/model/AudioResult.cpp
  src/v20210922/model/AudioResultDetailMoanResult.cpp
  src/v20210922/model/TaskData.cpp
  src/v20210922/model/MediaInfo.cpp
  src/v20210922/model/Tag.cpp
  src/v20210922/model/AudioSegments.cpp
  src/v20210922/model/ImageResultsResultDetailLocation.cpp
  src/v20210922/model/ImageResult.cpp
  src/v20201229/model/ImageSegments.cpp
  src/v20201229/model/TextPosition.cpp
  src/v20201229/model/AudioLabelResult.cpp
  src/v20201229/model/SpeakerResult.cpp
  src/v20201229/model/ImageResultResult.cpp
  src/v20201229/model/StorageInfo.cpp
  src/v20201229/model/HitInfo.cpp
  src/v20201229/model/CreateVideoModerationTaskResponse.cpp
  src/v20201229/model/TravelResult.cpp
  src/v20201229/model/TaskResult.cpp
  src/v20201229/model/CancelTaskRequest.cpp
  src/v20201229/model/DescribeTaskDetailResponse.cpp
  src/v20201229/model/DescribeTasksRequest.cpp
  src/v20201229/model/TaskInput.cpp
  src/v20201229/model/DescribeTaskDetailRequest.cpp
  src/v20201229/model/TaskLabel.cpp
  src/v20201229/model/ImageResultsResultDetail.cpp
  src/v20201229/model/InputInfo.cpp
  src/v20201229/model/CreateVideoModerationTaskRequest.cpp
  src/v20201229/model/DescribeTasksResponse.cpp
  src/v20201229/model/AudioResultDetailLanguageResult.cpp
  src/v20201229/model/TaskFilter.cpp
  src/v20201229/model/RecognitionResult.cpp
  src/v20201229/model/CancelTaskResponse.cpp
  src/v20201229/model/BucketInfo.cpp
  src/v20201229/model/AudioResultDetailTextResult.cpp
  src/v20201229/model/SegmentCosUrlList.cpp
  src/v20201229/model/RcbAsr.cpp
  src/v20201229/model/AudioResult.cpp
  src/v20201229/model/AudioResultDetailMoanResult.cpp
  src/v20201229/model/TaskData.cpp
  src/v20201229/model/MediaInfo.cpp
  src/v20201229/model/Tag.cpp
  src/v20201229/model/AudioSegments.cpp
  src/v20201229/model/ImageResultsResultDetailLocation.cpp
  src/v20201229/model/ImageResult.cpp
  src/v20200709/model/ImageSegments.cpp
  src/v20200709/model/ImageResultResult.cpp
  src/v20200709/model/StorageInfo.cpp
  src/v20200709/model/BucketInfo.cpp
  src/v20200709/model/CreateVideoModerationTaskResponse.cpp
  src/v20200709/model/TaskResult.cpp
  src/v20200709/model/CancelTaskRequest.cpp
  src/v20200709/model/DescribeTaskDetailResponse.cpp
  src/v20200709/model/DescribeVideoStatResponse.cpp
  src/v20200709/model/CreateBizConfigResponse.cpp
  src/v20200709/model/TaskInput.cpp
  src/v20200709/model/DescribeTaskDetailRequest.cpp
  src/v20200709/model/TaskLabel.cpp
  src/v20200709/model/ImageResultsResultDetail.cpp
  src/v20200709/model/DescribeVideoStatRequest.cpp
  src/v20200709/model/InputInfo.cpp
  src/v20200709/model/EvilCount.cpp
  src/v20200709/model/CreateVideoModerationTaskRequest.cpp
  src/v20200709/model/AudioResultDetailLanguageResult.cpp
  src/v20200709/model/FileOutput.cpp
  src/v20200709/model/CancelTaskResponse.cpp
  src/v20200709/model/TrendCount.cpp
  src/v20200709/model/AudioResultDetailTextResult.cpp
  src/v20200709/model/Overview.cpp
  src/v20200709/model/AudioResult.cpp
  src/v20200709/model/AudioResultDetailMoanResult.cpp
  src/v20200709/model/CreateBizConfigRequest.cpp
  src/v20200709/model/MediaInfo.cpp
  src/v20200709/model/MediaModerationConfig.cpp
  src/v20200709/model/AudioSegments.cpp
  src/v20200709/model/Filters.cpp
  src/v20200709/model/ImageResultsResultDetailLocation.cpp
  src/v20200709/model/ImageResult.cpp
  )

set(vm_include
    include/tencentcloud/vm
  )

add_library(vm ${LIB_TYPE}
  ${vm_public_header}
  ${vm_public_header_model}
  ${vm_src})

set_target_properties(vm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vm
  )

target_include_directories(vm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vm
  core)

#install(FILES ${vm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vm/v20200709)
#install(FILES ${vm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vm/v20200709/model)
install(DIRECTORY ${vm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

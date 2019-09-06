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

set(mps_public_header
  include/tencentcloud/mps/v20190612/MpsClient.h
  )

set(mps_public_header_model
  include/tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/AnimatedGraphicTaskInput.h
  include/tencentcloud/mps/v20190612/model/DescribeTaskDetailResponse.h
  include/tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/SvgWatermarkInput.h
  include/tencentcloud/mps/v20190612/model/WorkflowInfo.h
  include/tencentcloud/mps/v20190612/model/CreateTranscodeTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteWorkflowResponse.h
  include/tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ResetWorkflowResponse.h
  include/tencentcloud/mps/v20190612/model/DescribeTasksResponse.h
  include/tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteWorkflowRequest.h
  include/tencentcloud/mps/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/ModifySampleSnapshotTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeUserInfoRequest.h
  include/tencentcloud/mps/v20190612/model/MediaInputInfo.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskImageSpriteResult.h
  include/tencentcloud/mps/v20190612/model/CreateWorkflowRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h
  include/tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTemplate.h
  include/tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/DescribeTasksRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/CreateTranscodeTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ResetWorkflowRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeWorkflowsRequest.h
  include/tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h
  include/tencentcloud/mps/v20190612/model/WorkflowTrigger.h
  include/tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/TaskSimpleInfo.h
  include/tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ImageWatermarkInputForUpdate.h
  include/tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h
  include/tencentcloud/mps/v20190612/model/SvgWatermarkInputForUpdate.h
  include/tencentcloud/mps/v20190612/model/VideoTemplateInfo.h
  include/tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h
  include/tencentcloud/mps/v20190612/model/ImageSpriteTemplate.h
  include/tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteSampleSnapshotTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/TaskOutputStorage.h
  include/tencentcloud/mps/v20190612/model/AudioTemplateInfoForUpdate.h
  include/tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTaskInput.h
  include/tencentcloud/mps/v20190612/model/MediaSampleSnapshotItem.h
  include/tencentcloud/mps/v20190612/model/DescribeUserInfoResponse.h
  include/tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h
  include/tencentcloud/mps/v20190612/model/DisableWorkflowRequest.h
  include/tencentcloud/mps/v20190612/model/MediaSnapshotByTimeOffsetItem.h
  include/tencentcloud/mps/v20190612/model/AudioTemplateInfo.h
  include/tencentcloud/mps/v20190612/model/TextWatermarkTemplateInput.h
  include/tencentcloud/mps/v20190612/model/MediaAnimatedGraphicsItem.h
  include/tencentcloud/mps/v20190612/model/DescribeWatermarkTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskAnimatedGraphicResult.h
  include/tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/MediaMetaData.h
  include/tencentcloud/mps/v20190612/model/TranscodeTemplate.h
  include/tencentcloud/mps/v20190612/model/DeleteTranscodeTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/MediaTranscodeItem.h
  include/tencentcloud/mps/v20190612/model/TextWatermarkTemplateInputForUpdate.h
  include/tencentcloud/mps/v20190612/model/ProcessMediaRequest.h
  include/tencentcloud/mps/v20190612/model/ProcessLiveMediaResponse.h
  include/tencentcloud/mps/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/CreateSampleSnapshotTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DescribeSampleSnapshotTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/WorkflowTask.h
  include/tencentcloud/mps/v20190612/model/DisableWorkflowResponse.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskSnapshotByTimeOffsetResult.h
  include/tencentcloud/mps/v20190612/model/SampleSnapshotTemplate.h
  include/tencentcloud/mps/v20190612/model/SampleSnapshotTaskInput.h
  include/tencentcloud/mps/v20190612/model/CosInputInfo.h
  include/tencentcloud/mps/v20190612/model/TranscodeTaskInput.h
  include/tencentcloud/mps/v20190612/model/CreateWatermarkTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/NumberFormat.h
  include/tencentcloud/mps/v20190612/model/EnableWorkflowRequest.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskTranscodeResult.h
  include/tencentcloud/mps/v20190612/model/DescribeTranscodeTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/ImageSpriteTaskInput.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskSampleSnapshotResult.h
  include/tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/ImageWatermarkTemplate.h
  include/tencentcloud/mps/v20190612/model/ImageWatermarkInput.h
  include/tencentcloud/mps/v20190612/model/CosFileUploadTrigger.h
  include/tencentcloud/mps/v20190612/model/TEHDConfigForUpdate.h
  include/tencentcloud/mps/v20190612/model/CreateAnimatedGraphicsTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/MediaSnapshotByTimePicInfoItem.h
  include/tencentcloud/mps/v20190612/model/WatermarkTemplate.h
  include/tencentcloud/mps/v20190612/model/MediaImageSpriteItem.h
  include/tencentcloud/mps/v20190612/model/DescribeWorkflowsResponse.h
  include/tencentcloud/mps/v20190612/model/DescribeTaskDetailRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteImageSpriteTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/CreateWorkflowResponse.h
  include/tencentcloud/mps/v20190612/model/TEHDConfig.h
  include/tencentcloud/mps/v20190612/model/AnimatedGraphicsTemplate.h
  include/tencentcloud/mps/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskResult.h
  include/tencentcloud/mps/v20190612/model/ProcessLiveMediaRequest.h
  include/tencentcloud/mps/v20190612/model/WatermarkInput.h
  include/tencentcloud/mps/v20190612/model/EnableWorkflowResponse.h
  include/tencentcloud/mps/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.h
  include/tencentcloud/mps/v20190612/model/ModifyImageSpriteTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/CreateWatermarkTemplateRequest.h
  include/tencentcloud/mps/v20190612/model/DeleteWatermarkTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ModifyTranscodeTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/ProcessMediaResponse.h
  include/tencentcloud/mps/v20190612/model/MediaProcessTaskInput.h
  include/tencentcloud/mps/v20190612/model/VideoTemplateInfoForUpdate.h
  include/tencentcloud/mps/v20190612/model/CreateImageSpriteTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/CosOutputStorage.h
  include/tencentcloud/mps/v20190612/model/DescribeImageSpriteTemplatesResponse.h
  include/tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateResponse.h
  include/tencentcloud/mps/v20190612/model/TaskNotifyConfig.h
  )

set(mps_src
  src/v20190612/MpsClient.cpp
  src/v20190612/model/ModifySnapshotByTimeOffsetTemplateResponse.cpp
  src/v20190612/model/ModifySampleSnapshotTemplateResponse.cpp
  src/v20190612/model/ModifyWatermarkTemplateRequest.cpp
  src/v20190612/model/AnimatedGraphicTaskInput.cpp
  src/v20190612/model/DescribeTaskDetailResponse.cpp
  src/v20190612/model/DeleteImageSpriteTemplateRequest.cpp
  src/v20190612/model/SvgWatermarkInput.cpp
  src/v20190612/model/WorkflowInfo.cpp
  src/v20190612/model/CreateTranscodeTemplateRequest.cpp
  src/v20190612/model/DescribeAnimatedGraphicsTemplatesRequest.cpp
  src/v20190612/model/DescribeImageSpriteTemplatesRequest.cpp
  src/v20190612/model/DeleteWorkflowResponse.cpp
  src/v20190612/model/DeleteAnimatedGraphicsTemplateResponse.cpp
  src/v20190612/model/ModifyAnimatedGraphicsTemplateResponse.cpp
  src/v20190612/model/ResetWorkflowResponse.cpp
  src/v20190612/model/DescribeTasksResponse.cpp
  src/v20190612/model/DeleteTranscodeTemplateRequest.cpp
  src/v20190612/model/DeleteWorkflowRequest.cpp
  src/v20190612/model/ModifySnapshotByTimeOffsetTemplateRequest.cpp
  src/v20190612/model/ModifySampleSnapshotTemplateRequest.cpp
  src/v20190612/model/DescribeUserInfoRequest.cpp
  src/v20190612/model/MediaInputInfo.cpp
  src/v20190612/model/MediaProcessTaskImageSpriteResult.cpp
  src/v20190612/model/CreateWorkflowRequest.cpp
  src/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesResponse.cpp
  src/v20190612/model/MediaVideoStreamItem.cpp
  src/v20190612/model/SnapshotByTimeOffsetTemplate.cpp
  src/v20190612/model/DeleteSnapshotByTimeOffsetTemplateResponse.cpp
  src/v20190612/model/DescribeTasksRequest.cpp
  src/v20190612/model/DeleteSampleSnapshotTemplateResponse.cpp
  src/v20190612/model/CreateTranscodeTemplateResponse.cpp
  src/v20190612/model/ResetWorkflowRequest.cpp
  src/v20190612/model/DescribeAnimatedGraphicsTemplatesResponse.cpp
  src/v20190612/model/CreateImageSpriteTemplateRequest.cpp
  src/v20190612/model/DescribeWorkflowsRequest.cpp
  src/v20190612/model/MediaAudioStreamItem.cpp
  src/v20190612/model/WorkflowTrigger.cpp
  src/v20190612/model/ModifyImageSpriteTemplateRequest.cpp
  src/v20190612/model/TaskSimpleInfo.cpp
  src/v20190612/model/DeleteWatermarkTemplateRequest.cpp
  src/v20190612/model/CreateSnapshotByTimeOffsetTemplateResponse.cpp
  src/v20190612/model/ImageWatermarkInputForUpdate.cpp
  src/v20190612/model/AiContentReviewTaskInput.cpp
  src/v20190612/model/SvgWatermarkInputForUpdate.cpp
  src/v20190612/model/VideoTemplateInfo.cpp
  src/v20190612/model/DescribeSampleSnapshotTemplatesResponse.cpp
  src/v20190612/model/AiAnalysisTaskInput.cpp
  src/v20190612/model/ImageSpriteTemplate.cpp
  src/v20190612/model/DescribeWatermarkTemplatesRequest.cpp
  src/v20190612/model/DeleteSampleSnapshotTemplateRequest.cpp
  src/v20190612/model/TaskOutputStorage.cpp
  src/v20190612/model/AudioTemplateInfoForUpdate.cpp
  src/v20190612/model/SnapshotByTimeOffsetTaskInput.cpp
  src/v20190612/model/MediaSampleSnapshotItem.cpp
  src/v20190612/model/DescribeUserInfoResponse.cpp
  src/v20190612/model/DescribeTranscodeTemplatesRequest.cpp
  src/v20190612/model/CreateSampleSnapshotTemplateResponse.cpp
  src/v20190612/model/AiRecognitionTaskInput.cpp
  src/v20190612/model/DisableWorkflowRequest.cpp
  src/v20190612/model/MediaSnapshotByTimeOffsetItem.cpp
  src/v20190612/model/AudioTemplateInfo.cpp
  src/v20190612/model/TextWatermarkTemplateInput.cpp
  src/v20190612/model/MediaAnimatedGraphicsItem.cpp
  src/v20190612/model/DescribeWatermarkTemplatesResponse.cpp
  src/v20190612/model/MediaProcessTaskAnimatedGraphicResult.cpp
  src/v20190612/model/CreateAnimatedGraphicsTemplateRequest.cpp
  src/v20190612/model/MediaMetaData.cpp
  src/v20190612/model/TranscodeTemplate.cpp
  src/v20190612/model/DeleteTranscodeTemplateResponse.cpp
  src/v20190612/model/MediaTranscodeItem.cpp
  src/v20190612/model/TextWatermarkTemplateInputForUpdate.cpp
  src/v20190612/model/ProcessMediaRequest.cpp
  src/v20190612/model/ProcessLiveMediaResponse.cpp
  src/v20190612/model/CreateSnapshotByTimeOffsetTemplateRequest.cpp
  src/v20190612/model/CreateSampleSnapshotTemplateRequest.cpp
  src/v20190612/model/DescribeSampleSnapshotTemplatesRequest.cpp
  src/v20190612/model/WorkflowTask.cpp
  src/v20190612/model/DisableWorkflowResponse.cpp
  src/v20190612/model/MediaProcessTaskSnapshotByTimeOffsetResult.cpp
  src/v20190612/model/SampleSnapshotTemplate.cpp
  src/v20190612/model/SampleSnapshotTaskInput.cpp
  src/v20190612/model/CosInputInfo.cpp
  src/v20190612/model/TranscodeTaskInput.cpp
  src/v20190612/model/CreateWatermarkTemplateResponse.cpp
  src/v20190612/model/NumberFormat.cpp
  src/v20190612/model/EnableWorkflowRequest.cpp
  src/v20190612/model/MediaProcessTaskTranscodeResult.cpp
  src/v20190612/model/DescribeTranscodeTemplatesResponse.cpp
  src/v20190612/model/DeleteAnimatedGraphicsTemplateRequest.cpp
  src/v20190612/model/DeleteSnapshotByTimeOffsetTemplateRequest.cpp
  src/v20190612/model/ImageSpriteTaskInput.cpp
  src/v20190612/model/MediaProcessTaskSampleSnapshotResult.cpp
  src/v20190612/model/ModifyTranscodeTemplateRequest.cpp
  src/v20190612/model/ImageWatermarkTemplate.cpp
  src/v20190612/model/ImageWatermarkInput.cpp
  src/v20190612/model/CosFileUploadTrigger.cpp
  src/v20190612/model/TEHDConfigForUpdate.cpp
  src/v20190612/model/CreateAnimatedGraphicsTemplateResponse.cpp
  src/v20190612/model/MediaSnapshotByTimePicInfoItem.cpp
  src/v20190612/model/WatermarkTemplate.cpp
  src/v20190612/model/MediaImageSpriteItem.cpp
  src/v20190612/model/DescribeWorkflowsResponse.cpp
  src/v20190612/model/DescribeTaskDetailRequest.cpp
  src/v20190612/model/DeleteImageSpriteTemplateResponse.cpp
  src/v20190612/model/CreateWorkflowResponse.cpp
  src/v20190612/model/TEHDConfig.cpp
  src/v20190612/model/AnimatedGraphicsTemplate.cpp
  src/v20190612/model/ModifyAnimatedGraphicsTemplateRequest.cpp
  src/v20190612/model/MediaProcessTaskResult.cpp
  src/v20190612/model/ProcessLiveMediaRequest.cpp
  src/v20190612/model/WatermarkInput.cpp
  src/v20190612/model/EnableWorkflowResponse.cpp
  src/v20190612/model/DescribeSnapshotByTimeOffsetTemplatesRequest.cpp
  src/v20190612/model/ModifyImageSpriteTemplateResponse.cpp
  src/v20190612/model/CreateWatermarkTemplateRequest.cpp
  src/v20190612/model/DeleteWatermarkTemplateResponse.cpp
  src/v20190612/model/ModifyTranscodeTemplateResponse.cpp
  src/v20190612/model/ProcessMediaResponse.cpp
  src/v20190612/model/MediaProcessTaskInput.cpp
  src/v20190612/model/VideoTemplateInfoForUpdate.cpp
  src/v20190612/model/CreateImageSpriteTemplateResponse.cpp
  src/v20190612/model/CosOutputStorage.cpp
  src/v20190612/model/DescribeImageSpriteTemplatesResponse.cpp
  src/v20190612/model/ModifyWatermarkTemplateResponse.cpp
  src/v20190612/model/TaskNotifyConfig.cpp
  )

set(mps_include
    include/tencentcloud/mps
  )

add_library(mps ${LIB_TYPE}
  ${mps_public_header}
  ${mps_public_header_model}
  ${mps_src})

set_target_properties(mps
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mps
  )

target_include_directories(mps
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mps
  core)

#install(FILES ${mps_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mps/v20190612)
#install(FILES ${mps_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mps/v20190612/model)
install(DIRECTORY ${mps_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mps
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

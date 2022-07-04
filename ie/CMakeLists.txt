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

set(ie_public_header
  include/tencentcloud/ie/v20200304/IeClient.h
  )

set(ie_public_header_model
  include/tencentcloud/ie/v20200304/model/VideoSuperResolution.h
  include/tencentcloud/ie/v20200304/model/DynamicImageInfo.h
  include/tencentcloud/ie/v20200304/model/MediaJoiningTaskResult.h
  include/tencentcloud/ie/v20200304/model/Denoise.h
  include/tencentcloud/ie/v20200304/model/StripTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/CosAuthMode.h
  include/tencentcloud/ie/v20200304/model/OpeningEndingTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingTaskResult.h
  include/tencentcloud/ie/v20200304/model/CoverTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingInfo.h
  include/tencentcloud/ie/v20200304/model/IntervalTime.h
  include/tencentcloud/ie/v20200304/model/LowLightEnhance.h
  include/tencentcloud/ie/v20200304/model/MuxInfo.h
  include/tencentcloud/ie/v20200304/model/TargetVideoInfo.h
  include/tencentcloud/ie/v20200304/model/VideoInfo.h
  include/tencentcloud/ie/v20200304/model/DescribeQualityControlTaskResultRequest.h
  include/tencentcloud/ie/v20200304/model/DescribeMediaQualityRestorationTaskRusultResponse.h
  include/tencentcloud/ie/v20200304/model/DarInfo.h
  include/tencentcloud/ie/v20200304/model/CreateQualityControlTaskResponse.h
  include/tencentcloud/ie/v20200304/model/LoudnessInfo.h
  include/tencentcloud/ie/v20200304/model/SubTaskTranscodeInfo.h
  include/tencentcloud/ie/v20200304/model/CreateQualityControlTaskRequest.h
  include/tencentcloud/ie/v20200304/model/FrameTagRec.h
  include/tencentcloud/ie/v20200304/model/HighlightsTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/CreateMediaQualityRestorationTaskResponse.h
  include/tencentcloud/ie/v20200304/model/Sharp.h
  include/tencentcloud/ie/v20200304/model/MediaRecognitionTaskResult.h
  include/tencentcloud/ie/v20200304/model/MediaRecognitionInfo.h
  include/tencentcloud/ie/v20200304/model/SaveInfo.h
  include/tencentcloud/ie/v20200304/model/ScratchRepair.h
  include/tencentcloud/ie/v20200304/model/ArtifactReduction.h
  include/tencentcloud/ie/v20200304/model/TagEditingInfo.h
  include/tencentcloud/ie/v20200304/model/StopMediaQualityRestorationTaskResponse.h
  include/tencentcloud/ie/v20200304/model/StripEditingInfo.h
  include/tencentcloud/ie/v20200304/model/EditingInfo.h
  include/tencentcloud/ie/v20200304/model/CreateMediaProcessTaskRequest.h
  include/tencentcloud/ie/v20200304/model/SubtitleResult.h
  include/tencentcloud/ie/v20200304/model/CreateMediaProcessTaskResponse.h
  include/tencentcloud/ie/v20200304/model/TaskResultFile.h
  include/tencentcloud/ie/v20200304/model/CreateEditingTaskResponse.h
  include/tencentcloud/ie/v20200304/model/UrlInfo.h
  include/tencentcloud/ie/v20200304/model/MediaSourceInfo.h
  include/tencentcloud/ie/v20200304/model/CallbackInfo.h
  include/tencentcloud/ie/v20200304/model/SectionTime.h
  include/tencentcloud/ie/v20200304/model/SubtitleRec.h
  include/tencentcloud/ie/v20200304/model/ResultVideoInfo.h
  include/tencentcloud/ie/v20200304/model/PicMarkInfoItem.h
  include/tencentcloud/ie/v20200304/model/MediaJoiningInfo.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingWatermarkText.h
  include/tencentcloud/ie/v20200304/model/DescribeMediaQualityRestorationTaskRusultRequest.h
  include/tencentcloud/ie/v20200304/model/ColorEnhance.h
  include/tencentcloud/ie/v20200304/model/SegmentInfo.h
  include/tencentcloud/ie/v20200304/model/OpeningEndingEditingInfo.h
  include/tencentcloud/ie/v20200304/model/MediaTargetInfo.h
  include/tencentcloud/ie/v20200304/model/TagTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/QualityControlInfo.h
  include/tencentcloud/ie/v20200304/model/DownInfo.h
  include/tencentcloud/ie/v20200304/model/ClassificationEditingInfo.h
  include/tencentcloud/ie/v20200304/model/HighlightsTaskResult.h
  include/tencentcloud/ie/v20200304/model/DescribeEditingTaskResultRequest.h
  include/tencentcloud/ie/v20200304/model/AudioInfoResultItem.h
  include/tencentcloud/ie/v20200304/model/EditInfo.h
  include/tencentcloud/ie/v20200304/model/RemoveReverb.h
  include/tencentcloud/ie/v20200304/model/StopMediaProcessTaskResponse.h
  include/tencentcloud/ie/v20200304/model/DescribeEditingTaskResultResponse.h
  include/tencentcloud/ie/v20200304/model/QualityControlInfoTaskResult.h
  include/tencentcloud/ie/v20200304/model/MediaQualityRestorationTaskResult.h
  include/tencentcloud/ie/v20200304/model/HiddenMarkInfo.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingOutForm.h
  include/tencentcloud/ie/v20200304/model/StopMediaQualityRestorationTaskRequest.h
  include/tencentcloud/ie/v20200304/model/DescribeQualityControlTaskResultResponse.h
  include/tencentcloud/ie/v20200304/model/ClassificationTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/AudioInfo.h
  include/tencentcloud/ie/v20200304/model/SubTaskResultItem.h
  include/tencentcloud/ie/v20200304/model/StripTaskResult.h
  include/tencentcloud/ie/v20200304/model/HighlightsEditingInfo.h
  include/tencentcloud/ie/v20200304/model/FileInfo.h
  include/tencentcloud/ie/v20200304/model/ResultAudioInfo.h
  include/tencentcloud/ie/v20200304/model/OpeningEndingTaskResult.h
  include/tencentcloud/ie/v20200304/model/VideoEnhance.h
  include/tencentcloud/ie/v20200304/model/VideoRepair.h
  include/tencentcloud/ie/v20200304/model/QualityControlResultItems.h
  include/tencentcloud/ie/v20200304/model/FrameTagItem.h
  include/tencentcloud/ie/v20200304/model/QualityControlItem.h
  include/tencentcloud/ie/v20200304/model/CoverTaskResult.h
  include/tencentcloud/ie/v20200304/model/TagTaskResult.h
  include/tencentcloud/ie/v20200304/model/AudioEnhance.h
  include/tencentcloud/ie/v20200304/model/CosInfo.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingWatermarkImage.h
  include/tencentcloud/ie/v20200304/model/MediaResultInfo.h
  include/tencentcloud/ie/v20200304/model/FrameTagResult.h
  include/tencentcloud/ie/v20200304/model/TextMarkInfoItem.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingTimeInfo.h
  include/tencentcloud/ie/v20200304/model/TargetInfo.h
  include/tencentcloud/ie/v20200304/model/CreateMediaQualityRestorationTaskRequest.h
  include/tencentcloud/ie/v20200304/model/CreateEditingTaskRequest.h
  include/tencentcloud/ie/v20200304/model/Denoising.h
  include/tencentcloud/ie/v20200304/model/FaceProtect.h
  include/tencentcloud/ie/v20200304/model/VideoInfoResultItem.h
  include/tencentcloud/ie/v20200304/model/StopMediaProcessTaskRequest.h
  include/tencentcloud/ie/v20200304/model/CoverEditingInfo.h
  include/tencentcloud/ie/v20200304/model/SubtitleItem.h
  include/tencentcloud/ie/v20200304/model/DescribeMediaProcessTaskResultRequest.h
  include/tencentcloud/ie/v20200304/model/SpriteImageInfo.h
  include/tencentcloud/ie/v20200304/model/MediaProcessTaskResult.h
  include/tencentcloud/ie/v20200304/model/EditingTaskResult.h
  include/tencentcloud/ie/v20200304/model/MediaProcessInfo.h
  include/tencentcloud/ie/v20200304/model/ClassificationTaskResult.h
  include/tencentcloud/ie/v20200304/model/TagItem.h
  include/tencentcloud/ie/v20200304/model/DescribeMediaProcessTaskResultResponse.h
  include/tencentcloud/ie/v20200304/model/HighlightsTaskResultItemSegment.h
  include/tencentcloud/ie/v20200304/model/MediaCuttingWatermark.h
  )

set(ie_src
  src/v20200304/IeClient.cpp
  src/v20200304/model/VideoSuperResolution.cpp
  src/v20200304/model/DynamicImageInfo.cpp
  src/v20200304/model/MediaJoiningTaskResult.cpp
  src/v20200304/model/Denoise.cpp
  src/v20200304/model/StripTaskResultItem.cpp
  src/v20200304/model/CosAuthMode.cpp
  src/v20200304/model/OpeningEndingTaskResultItem.cpp
  src/v20200304/model/MediaCuttingTaskResult.cpp
  src/v20200304/model/CoverTaskResultItem.cpp
  src/v20200304/model/MediaCuttingInfo.cpp
  src/v20200304/model/IntervalTime.cpp
  src/v20200304/model/LowLightEnhance.cpp
  src/v20200304/model/MuxInfo.cpp
  src/v20200304/model/TargetVideoInfo.cpp
  src/v20200304/model/VideoInfo.cpp
  src/v20200304/model/DescribeQualityControlTaskResultRequest.cpp
  src/v20200304/model/DescribeMediaQualityRestorationTaskRusultResponse.cpp
  src/v20200304/model/DarInfo.cpp
  src/v20200304/model/CreateQualityControlTaskResponse.cpp
  src/v20200304/model/LoudnessInfo.cpp
  src/v20200304/model/SubTaskTranscodeInfo.cpp
  src/v20200304/model/CreateQualityControlTaskRequest.cpp
  src/v20200304/model/FrameTagRec.cpp
  src/v20200304/model/HighlightsTaskResultItem.cpp
  src/v20200304/model/CreateMediaQualityRestorationTaskResponse.cpp
  src/v20200304/model/Sharp.cpp
  src/v20200304/model/MediaRecognitionTaskResult.cpp
  src/v20200304/model/MediaRecognitionInfo.cpp
  src/v20200304/model/SaveInfo.cpp
  src/v20200304/model/ScratchRepair.cpp
  src/v20200304/model/ArtifactReduction.cpp
  src/v20200304/model/TagEditingInfo.cpp
  src/v20200304/model/StopMediaQualityRestorationTaskResponse.cpp
  src/v20200304/model/StripEditingInfo.cpp
  src/v20200304/model/EditingInfo.cpp
  src/v20200304/model/CreateMediaProcessTaskRequest.cpp
  src/v20200304/model/SubtitleResult.cpp
  src/v20200304/model/CreateMediaProcessTaskResponse.cpp
  src/v20200304/model/TaskResultFile.cpp
  src/v20200304/model/CreateEditingTaskResponse.cpp
  src/v20200304/model/UrlInfo.cpp
  src/v20200304/model/MediaSourceInfo.cpp
  src/v20200304/model/CallbackInfo.cpp
  src/v20200304/model/SectionTime.cpp
  src/v20200304/model/SubtitleRec.cpp
  src/v20200304/model/ResultVideoInfo.cpp
  src/v20200304/model/PicMarkInfoItem.cpp
  src/v20200304/model/MediaJoiningInfo.cpp
  src/v20200304/model/MediaCuttingWatermarkText.cpp
  src/v20200304/model/DescribeMediaQualityRestorationTaskRusultRequest.cpp
  src/v20200304/model/ColorEnhance.cpp
  src/v20200304/model/SegmentInfo.cpp
  src/v20200304/model/OpeningEndingEditingInfo.cpp
  src/v20200304/model/MediaTargetInfo.cpp
  src/v20200304/model/TagTaskResultItem.cpp
  src/v20200304/model/QualityControlInfo.cpp
  src/v20200304/model/DownInfo.cpp
  src/v20200304/model/ClassificationEditingInfo.cpp
  src/v20200304/model/HighlightsTaskResult.cpp
  src/v20200304/model/DescribeEditingTaskResultRequest.cpp
  src/v20200304/model/AudioInfoResultItem.cpp
  src/v20200304/model/EditInfo.cpp
  src/v20200304/model/RemoveReverb.cpp
  src/v20200304/model/StopMediaProcessTaskResponse.cpp
  src/v20200304/model/DescribeEditingTaskResultResponse.cpp
  src/v20200304/model/QualityControlInfoTaskResult.cpp
  src/v20200304/model/MediaQualityRestorationTaskResult.cpp
  src/v20200304/model/HiddenMarkInfo.cpp
  src/v20200304/model/MediaCuttingOutForm.cpp
  src/v20200304/model/StopMediaQualityRestorationTaskRequest.cpp
  src/v20200304/model/DescribeQualityControlTaskResultResponse.cpp
  src/v20200304/model/ClassificationTaskResultItem.cpp
  src/v20200304/model/AudioInfo.cpp
  src/v20200304/model/SubTaskResultItem.cpp
  src/v20200304/model/StripTaskResult.cpp
  src/v20200304/model/HighlightsEditingInfo.cpp
  src/v20200304/model/FileInfo.cpp
  src/v20200304/model/ResultAudioInfo.cpp
  src/v20200304/model/OpeningEndingTaskResult.cpp
  src/v20200304/model/VideoEnhance.cpp
  src/v20200304/model/VideoRepair.cpp
  src/v20200304/model/QualityControlResultItems.cpp
  src/v20200304/model/FrameTagItem.cpp
  src/v20200304/model/QualityControlItem.cpp
  src/v20200304/model/CoverTaskResult.cpp
  src/v20200304/model/TagTaskResult.cpp
  src/v20200304/model/AudioEnhance.cpp
  src/v20200304/model/CosInfo.cpp
  src/v20200304/model/MediaCuttingWatermarkImage.cpp
  src/v20200304/model/MediaResultInfo.cpp
  src/v20200304/model/FrameTagResult.cpp
  src/v20200304/model/TextMarkInfoItem.cpp
  src/v20200304/model/MediaCuttingTimeInfo.cpp
  src/v20200304/model/TargetInfo.cpp
  src/v20200304/model/CreateMediaQualityRestorationTaskRequest.cpp
  src/v20200304/model/CreateEditingTaskRequest.cpp
  src/v20200304/model/Denoising.cpp
  src/v20200304/model/FaceProtect.cpp
  src/v20200304/model/VideoInfoResultItem.cpp
  src/v20200304/model/StopMediaProcessTaskRequest.cpp
  src/v20200304/model/CoverEditingInfo.cpp
  src/v20200304/model/SubtitleItem.cpp
  src/v20200304/model/DescribeMediaProcessTaskResultRequest.cpp
  src/v20200304/model/SpriteImageInfo.cpp
  src/v20200304/model/MediaProcessTaskResult.cpp
  src/v20200304/model/EditingTaskResult.cpp
  src/v20200304/model/MediaProcessInfo.cpp
  src/v20200304/model/ClassificationTaskResult.cpp
  src/v20200304/model/TagItem.cpp
  src/v20200304/model/DescribeMediaProcessTaskResultResponse.cpp
  src/v20200304/model/HighlightsTaskResultItemSegment.cpp
  src/v20200304/model/MediaCuttingWatermark.cpp
  )

set(ie_include
    include/tencentcloud/ie
  )

add_library(ie ${LIB_TYPE}
  ${ie_public_header}
  ${ie_public_header_model}
  ${ie_src})

set_target_properties(ie
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ie
  )

target_include_directories(ie
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ie
  core)

#install(FILES ${ie_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ie/v20200304)
#install(FILES ${ie_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ie/v20200304/model)
install(DIRECTORY ${ie_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ie
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

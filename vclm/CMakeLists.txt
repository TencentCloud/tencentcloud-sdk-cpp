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

set(vclm_public_header
  include/tencentcloud/vclm/v20240523/VclmClient.h
  )

set(vclm_public_header_model
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoGeneralJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoVoiceJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitHumanActorJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitTextToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoEditJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoExtendKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoEditKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/Voice.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoFaceFusionJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeTemplateToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeReferenceToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitMotionControlKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoExtendKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitTemplateToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitTemplateToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/LogoRect.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoEditKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoVoiceJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeTextToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/ExtraParam.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoEditJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoStylizationJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoFaceFusionJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitReferenceToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoGeneralJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeHumanActorJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoGeneralJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitAigcVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoVoiceJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribePortraitSingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeHunyuanToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeMotionControlKlingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/CheckAnimateImageJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoEditJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitHumanActorJobResponse.h
  include/tencentcloud/vclm/v20240523/model/VideoEditParam.h
  include/tencentcloud/vclm/v20240523/model/ReferenceSubject.h
  include/tencentcloud/vclm/v20240523/model/ImageInfo.h
  include/tencentcloud/vclm/v20240523/model/Image.h
  include/tencentcloud/vclm/v20240523/model/DescribeMotionControlKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/ReferVideoInfo.h
  include/tencentcloud/vclm/v20240523/model/SubmitAigcVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitReferenceToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/LogoParam.h
  include/tencentcloud/vclm/v20240523/model/FaceTemplateInfo.h
  include/tencentcloud/vclm/v20240523/model/DescribeAigcVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoFaceFusionJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoEditKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/CameraControlConfig.h
  include/tencentcloud/vclm/v20240523/model/DescribeReferenceToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeAigcVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitVideoExtendKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeHumanActorJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitMotionControlKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitTextToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/MultiPrompt.h
  include/tencentcloud/vclm/v20240523/model/DescribeTextToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeTemplateToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/SubmitTextToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribePortraitSingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeHunyuanToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeTextToVideoViduJobRequest.h
  include/tencentcloud/vclm/v20240523/model/Trajectory.h
  include/tencentcloud/vclm/v20240523/model/DescribeTextToVideoViduJobResponse.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoVoiceJobRequest.h
  include/tencentcloud/vclm/v20240523/model/CameraControl.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoFaceFusionJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoGeneralJobResponse.h
  include/tencentcloud/vclm/v20240523/model/FaceMergeInfo.h
  include/tencentcloud/vclm/v20240523/model/CheckAnimateImageJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoExtendKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitPortraitSingJobRequest.h
  include/tencentcloud/vclm/v20240523/model/Element.h
  include/tencentcloud/vclm/v20240523/model/DynamicMask.h
  include/tencentcloud/vclm/v20240523/model/SubmitHunyuanToVideoJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitTextToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoStylizationJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitHunyuanToVideoJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoEditJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeVideoEditKlingJobResponse.h
  include/tencentcloud/vclm/v20240523/model/FaceRect.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageToVideoJobResponse.h
  )

set(vclm_src
  src/v20240523/VclmClient.cpp
  src/v20240523/model/DescribeImageToVideoGeneralJobResponse.cpp
  src/v20240523/model/SubmitVideoStylizationJobRequest.cpp
  src/v20240523/model/SubmitImageToVideoJobRequest.cpp
  src/v20240523/model/DescribeVideoVoiceJobResponse.cpp
  src/v20240523/model/SubmitHumanActorJobRequest.cpp
  src/v20240523/model/DescribeImageToVideoViduJobResponse.cpp
  src/v20240523/model/SubmitTextToVideoViduJobRequest.cpp
  src/v20240523/model/SubmitVideoEditJobRequest.cpp
  src/v20240523/model/DescribeVideoExtendKlingJobRequest.cpp
  src/v20240523/model/SubmitVideoEditKlingJobRequest.cpp
  src/v20240523/model/Voice.cpp
  src/v20240523/model/SubmitImageAnimateJobResponse.cpp
  src/v20240523/model/SubmitVideoFaceFusionJobResponse.cpp
  src/v20240523/model/DescribeTemplateToVideoJobResponse.cpp
  src/v20240523/model/DescribeReferenceToVideoViduJobResponse.cpp
  src/v20240523/model/SubmitMotionControlKlingJobRequest.cpp
  src/v20240523/model/SubmitVideoExtendKlingJobRequest.cpp
  src/v20240523/model/SubmitTemplateToVideoJobResponse.cpp
  src/v20240523/model/SubmitTemplateToVideoJobRequest.cpp
  src/v20240523/model/LogoRect.cpp
  src/v20240523/model/DescribeVideoEditKlingJobRequest.cpp
  src/v20240523/model/SubmitVideoVoiceJobRequest.cpp
  src/v20240523/model/DescribeTextToVideoJobResponse.cpp
  src/v20240523/model/ExtraParam.cpp
  src/v20240523/model/DescribeVideoEditJobResponse.cpp
  src/v20240523/model/SubmitVideoStylizationJobResponse.cpp
  src/v20240523/model/SubmitVideoFaceFusionJobRequest.cpp
  src/v20240523/model/SubmitReferenceToVideoViduJobRequest.cpp
  src/v20240523/model/SubmitImageToVideoGeneralJobRequest.cpp
  src/v20240523/model/SubmitImageToVideoViduJobRequest.cpp
  src/v20240523/model/DescribeHumanActorJobRequest.cpp
  src/v20240523/model/DescribeImageToVideoGeneralJobRequest.cpp
  src/v20240523/model/SubmitAigcVideoJobResponse.cpp
  src/v20240523/model/SubmitVideoVoiceJobResponse.cpp
  src/v20240523/model/SubmitImageToVideoViduJobResponse.cpp
  src/v20240523/model/SubmitPortraitSingJobResponse.cpp
  src/v20240523/model/DescribeImageToVideoJobResponse.cpp
  src/v20240523/model/DescribePortraitSingJobRequest.cpp
  src/v20240523/model/DescribeHunyuanToVideoJobRequest.cpp
  src/v20240523/model/DescribeMotionControlKlingJobRequest.cpp
  src/v20240523/model/CheckAnimateImageJobResponse.cpp
  src/v20240523/model/SubmitVideoEditJobResponse.cpp
  src/v20240523/model/DescribeVideoStylizationJobRequest.cpp
  src/v20240523/model/SubmitHumanActorJobResponse.cpp
  src/v20240523/model/VideoEditParam.cpp
  src/v20240523/model/ReferenceSubject.cpp
  src/v20240523/model/ImageInfo.cpp
  src/v20240523/model/Image.cpp
  src/v20240523/model/DescribeMotionControlKlingJobResponse.cpp
  src/v20240523/model/ReferVideoInfo.cpp
  src/v20240523/model/SubmitAigcVideoJobRequest.cpp
  src/v20240523/model/SubmitReferenceToVideoViduJobResponse.cpp
  src/v20240523/model/LogoParam.cpp
  src/v20240523/model/FaceTemplateInfo.cpp
  src/v20240523/model/DescribeAigcVideoJobRequest.cpp
  src/v20240523/model/SubmitImageAnimateJobRequest.cpp
  src/v20240523/model/DescribeVideoFaceFusionJobRequest.cpp
  src/v20240523/model/DescribeImageToVideoViduJobRequest.cpp
  src/v20240523/model/SubmitVideoEditKlingJobResponse.cpp
  src/v20240523/model/CameraControlConfig.cpp
  src/v20240523/model/DescribeReferenceToVideoViduJobRequest.cpp
  src/v20240523/model/DescribeImageAnimateJobResponse.cpp
  src/v20240523/model/DescribeAigcVideoJobResponse.cpp
  src/v20240523/model/SubmitVideoExtendKlingJobResponse.cpp
  src/v20240523/model/DescribeHumanActorJobResponse.cpp
  src/v20240523/model/SubmitMotionControlKlingJobResponse.cpp
  src/v20240523/model/SubmitTextToVideoJobResponse.cpp
  src/v20240523/model/MultiPrompt.cpp
  src/v20240523/model/DescribeTextToVideoJobRequest.cpp
  src/v20240523/model/DescribeImageToVideoJobRequest.cpp
  src/v20240523/model/DescribeTemplateToVideoJobRequest.cpp
  src/v20240523/model/SubmitTextToVideoViduJobResponse.cpp
  src/v20240523/model/DescribeImageAnimateJobRequest.cpp
  src/v20240523/model/DescribePortraitSingJobResponse.cpp
  src/v20240523/model/DescribeHunyuanToVideoJobResponse.cpp
  src/v20240523/model/DescribeTextToVideoViduJobRequest.cpp
  src/v20240523/model/Trajectory.cpp
  src/v20240523/model/DescribeTextToVideoViduJobResponse.cpp
  src/v20240523/model/DescribeVideoVoiceJobRequest.cpp
  src/v20240523/model/CameraControl.cpp
  src/v20240523/model/DescribeVideoFaceFusionJobResponse.cpp
  src/v20240523/model/SubmitImageToVideoGeneralJobResponse.cpp
  src/v20240523/model/FaceMergeInfo.cpp
  src/v20240523/model/CheckAnimateImageJobRequest.cpp
  src/v20240523/model/DescribeVideoExtendKlingJobResponse.cpp
  src/v20240523/model/SubmitPortraitSingJobRequest.cpp
  src/v20240523/model/Element.cpp
  src/v20240523/model/DynamicMask.cpp
  src/v20240523/model/SubmitHunyuanToVideoJobResponse.cpp
  src/v20240523/model/SubmitTextToVideoJobRequest.cpp
  src/v20240523/model/DescribeVideoStylizationJobResponse.cpp
  src/v20240523/model/SubmitHunyuanToVideoJobRequest.cpp
  src/v20240523/model/DescribeVideoEditJobRequest.cpp
  src/v20240523/model/DescribeVideoEditKlingJobResponse.cpp
  src/v20240523/model/FaceRect.cpp
  src/v20240523/model/SubmitImageToVideoJobResponse.cpp
  )

set(vclm_include
    include/tencentcloud/vclm
  )

add_library(vclm ${LIB_TYPE}
  ${vclm_public_header}
  ${vclm_public_header_model}
  ${vclm_src})

set_target_properties(vclm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vclm
  )

target_include_directories(vclm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vclm
  core)

#install(FILES ${vclm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vclm/v20240523)
#install(FILES ${vclm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vclm/v20240523/model)
install(DIRECTORY ${vclm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vclm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

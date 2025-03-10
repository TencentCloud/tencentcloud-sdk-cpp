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

set(aiart_public_header
  include/tencentcloud/aiart/v20221229/AiartClient.h
  )

set(aiart_public_header_model
  include/tencentcloud/aiart/v20221229/model/SubmitDrawPortraitJobResponse.h
  include/tencentcloud/aiart/v20221229/model/RefineImageRequest.h
  include/tencentcloud/aiart/v20221229/model/LogoParam.h
  include/tencentcloud/aiart/v20221229/model/ImageToImageRequest.h
  include/tencentcloud/aiart/v20221229/model/QueryTrainPortraitModelJobRequest.h
  include/tencentcloud/aiart/v20221229/model/QueryTextToImageProJobResponse.h
  include/tencentcloud/aiart/v20221229/model/UploadTrainPortraitImagesRequest.h
  include/tencentcloud/aiart/v20221229/model/ResultConfig.h
  include/tencentcloud/aiart/v20221229/model/QueryMemeJobRequest.h
  include/tencentcloud/aiart/v20221229/model/QueryGlamPicJobResponse.h
  include/tencentcloud/aiart/v20221229/model/ImageOutpaintingRequest.h
  include/tencentcloud/aiart/v20221229/model/ReplaceBackgroundResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryMemeJobResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryDrawPortraitJobResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryTrainPortraitModelJobResponse.h
  include/tencentcloud/aiart/v20221229/model/ChangeClothesResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitGlamPicJobResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitMemeJobResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitTrainPortraitModelJobRequest.h
  include/tencentcloud/aiart/v20221229/model/SketchToImageRequest.h
  include/tencentcloud/aiart/v20221229/model/TextToImageRequest.h
  include/tencentcloud/aiart/v20221229/model/Rect.h
  include/tencentcloud/aiart/v20221229/model/FaceInfo.h
  include/tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitGlamPicJobRequest.h
  include/tencentcloud/aiart/v20221229/model/GenerateAvatarRequest.h
  include/tencentcloud/aiart/v20221229/model/LogoRect.h
  include/tencentcloud/aiart/v20221229/model/Filter.h
  include/tencentcloud/aiart/v20221229/model/ImageInpaintingRemovalResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitMemeJobRequest.h
  include/tencentcloud/aiart/v20221229/model/ReplaceBackgroundRequest.h
  include/tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobRequest.h
  include/tencentcloud/aiart/v20221229/model/SubmitTrainPortraitModelJobResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryDrawPortraitJobRequest.h
  include/tencentcloud/aiart/v20221229/model/ImageToImageResponse.h
  include/tencentcloud/aiart/v20221229/model/SketchToImageResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryGlamPicJobRequest.h
  include/tencentcloud/aiart/v20221229/model/ImageInpaintingRemovalRequest.h
  include/tencentcloud/aiart/v20221229/model/ChangeClothesRequest.h
  include/tencentcloud/aiart/v20221229/model/ImageOutpaintingResponse.h
  include/tencentcloud/aiart/v20221229/model/UploadTrainPortraitImagesResponse.h
  include/tencentcloud/aiart/v20221229/model/QueryTextToImageProJobRequest.h
  include/tencentcloud/aiart/v20221229/model/GenerateAvatarResponse.h
  include/tencentcloud/aiart/v20221229/model/RefineImageResponse.h
  include/tencentcloud/aiart/v20221229/model/TextToImageResponse.h
  include/tencentcloud/aiart/v20221229/model/SubmitDrawPortraitJobRequest.h
  )

set(aiart_src
  src/v20221229/AiartClient.cpp
  src/v20221229/model/SubmitDrawPortraitJobResponse.cpp
  src/v20221229/model/RefineImageRequest.cpp
  src/v20221229/model/LogoParam.cpp
  src/v20221229/model/ImageToImageRequest.cpp
  src/v20221229/model/QueryTrainPortraitModelJobRequest.cpp
  src/v20221229/model/QueryTextToImageProJobResponse.cpp
  src/v20221229/model/UploadTrainPortraitImagesRequest.cpp
  src/v20221229/model/ResultConfig.cpp
  src/v20221229/model/QueryMemeJobRequest.cpp
  src/v20221229/model/QueryGlamPicJobResponse.cpp
  src/v20221229/model/ImageOutpaintingRequest.cpp
  src/v20221229/model/ReplaceBackgroundResponse.cpp
  src/v20221229/model/QueryMemeJobResponse.cpp
  src/v20221229/model/QueryDrawPortraitJobResponse.cpp
  src/v20221229/model/QueryTrainPortraitModelJobResponse.cpp
  src/v20221229/model/ChangeClothesResponse.cpp
  src/v20221229/model/SubmitGlamPicJobResponse.cpp
  src/v20221229/model/SubmitMemeJobResponse.cpp
  src/v20221229/model/SubmitTrainPortraitModelJobRequest.cpp
  src/v20221229/model/SketchToImageRequest.cpp
  src/v20221229/model/TextToImageRequest.cpp
  src/v20221229/model/Rect.cpp
  src/v20221229/model/FaceInfo.cpp
  src/v20221229/model/SubmitTextToImageProJobResponse.cpp
  src/v20221229/model/SubmitGlamPicJobRequest.cpp
  src/v20221229/model/GenerateAvatarRequest.cpp
  src/v20221229/model/LogoRect.cpp
  src/v20221229/model/Filter.cpp
  src/v20221229/model/ImageInpaintingRemovalResponse.cpp
  src/v20221229/model/SubmitMemeJobRequest.cpp
  src/v20221229/model/ReplaceBackgroundRequest.cpp
  src/v20221229/model/SubmitTextToImageProJobRequest.cpp
  src/v20221229/model/SubmitTrainPortraitModelJobResponse.cpp
  src/v20221229/model/QueryDrawPortraitJobRequest.cpp
  src/v20221229/model/ImageToImageResponse.cpp
  src/v20221229/model/SketchToImageResponse.cpp
  src/v20221229/model/QueryGlamPicJobRequest.cpp
  src/v20221229/model/ImageInpaintingRemovalRequest.cpp
  src/v20221229/model/ChangeClothesRequest.cpp
  src/v20221229/model/ImageOutpaintingResponse.cpp
  src/v20221229/model/UploadTrainPortraitImagesResponse.cpp
  src/v20221229/model/QueryTextToImageProJobRequest.cpp
  src/v20221229/model/GenerateAvatarResponse.cpp
  src/v20221229/model/RefineImageResponse.cpp
  src/v20221229/model/TextToImageResponse.cpp
  src/v20221229/model/SubmitDrawPortraitJobRequest.cpp
  )

set(aiart_include
    include/tencentcloud/aiart
  )

add_library(aiart ${LIB_TYPE}
  ${aiart_public_header}
  ${aiart_public_header_model}
  ${aiart_src})

set_target_properties(aiart
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}aiart
  )

target_include_directories(aiart
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(aiart
  core)

#install(FILES ${aiart_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aiart/v20221229)
#install(FILES ${aiart_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/aiart/v20221229/model)
install(DIRECTORY ${aiart_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS aiart
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

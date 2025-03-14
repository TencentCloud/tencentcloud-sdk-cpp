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

set(ims_public_header
  include/tencentcloud/ims/v20200713/ImsClient.h
  include/tencentcloud/ims/v20201229/ImsClient.h
  )

set(ims_public_header_model
  include/tencentcloud/ims/v20200713/model/ImageModerationRequest.h
  include/tencentcloud/ims/v20200713/model/RecognitionResult.h
  include/tencentcloud/ims/v20200713/model/ObjectResult.h
  include/tencentcloud/ims/v20200713/model/OcrTextDetail.h
  include/tencentcloud/ims/v20200713/model/RecognitionTag.h
  include/tencentcloud/ims/v20200713/model/ObjectDetail.h
  include/tencentcloud/ims/v20200713/model/OcrResult.h
  include/tencentcloud/ims/v20200713/model/LibDetail.h
  include/tencentcloud/ims/v20200713/model/Location.h
  include/tencentcloud/ims/v20200713/model/LabelResult.h
  include/tencentcloud/ims/v20200713/model/LabelDetailItem.h
  include/tencentcloud/ims/v20200713/model/Device.h
  include/tencentcloud/ims/v20200713/model/LibResult.h
  include/tencentcloud/ims/v20200713/model/ImageModerationResponse.h
  include/tencentcloud/ims/v20200713/model/User.h
  include/tencentcloud/ims/v20201229/model/ImageModerationRequest.h
  include/tencentcloud/ims/v20201229/model/RecognitionResult.h
  include/tencentcloud/ims/v20201229/model/OcrHitInfo.h
  include/tencentcloud/ims/v20201229/model/ObjectResult.h
  include/tencentcloud/ims/v20201229/model/OcrTextDetail.h
  include/tencentcloud/ims/v20201229/model/CreateImageModerationAsyncTaskResponse.h
  include/tencentcloud/ims/v20201229/model/RecognitionTag.h
  include/tencentcloud/ims/v20201229/model/ObjectDetail.h
  include/tencentcloud/ims/v20201229/model/Device.h
  include/tencentcloud/ims/v20201229/model/OcrResult.h
  include/tencentcloud/ims/v20201229/model/LibDetail.h
  include/tencentcloud/ims/v20201229/model/Location.h
  include/tencentcloud/ims/v20201229/model/LabelResult.h
  include/tencentcloud/ims/v20201229/model/LabelDetailItem.h
  include/tencentcloud/ims/v20201229/model/CreateImageModerationAsyncTaskRequest.h
  include/tencentcloud/ims/v20201229/model/LibResult.h
  include/tencentcloud/ims/v20201229/model/ImageModerationResponse.h
  include/tencentcloud/ims/v20201229/model/Positions.h
  include/tencentcloud/ims/v20201229/model/User.h
  )

set(ims_src
  src/v20200713/ImsClient.cpp
  src/v20201229/ImsClient.cpp
  src/v20200713/model/ImageModerationRequest.cpp
  src/v20200713/model/RecognitionResult.cpp
  src/v20200713/model/ObjectResult.cpp
  src/v20200713/model/OcrTextDetail.cpp
  src/v20200713/model/RecognitionTag.cpp
  src/v20200713/model/ObjectDetail.cpp
  src/v20200713/model/OcrResult.cpp
  src/v20200713/model/LibDetail.cpp
  src/v20200713/model/Location.cpp
  src/v20200713/model/LabelResult.cpp
  src/v20200713/model/LabelDetailItem.cpp
  src/v20200713/model/Device.cpp
  src/v20200713/model/LibResult.cpp
  src/v20200713/model/ImageModerationResponse.cpp
  src/v20200713/model/User.cpp
  src/v20201229/model/ImageModerationRequest.cpp
  src/v20201229/model/RecognitionResult.cpp
  src/v20201229/model/OcrHitInfo.cpp
  src/v20201229/model/ObjectResult.cpp
  src/v20201229/model/OcrTextDetail.cpp
  src/v20201229/model/CreateImageModerationAsyncTaskResponse.cpp
  src/v20201229/model/RecognitionTag.cpp
  src/v20201229/model/ObjectDetail.cpp
  src/v20201229/model/Device.cpp
  src/v20201229/model/OcrResult.cpp
  src/v20201229/model/LibDetail.cpp
  src/v20201229/model/Location.cpp
  src/v20201229/model/LabelResult.cpp
  src/v20201229/model/LabelDetailItem.cpp
  src/v20201229/model/CreateImageModerationAsyncTaskRequest.cpp
  src/v20201229/model/LibResult.cpp
  src/v20201229/model/ImageModerationResponse.cpp
  src/v20201229/model/Positions.cpp
  src/v20201229/model/User.cpp
  )

set(ims_include
    include/tencentcloud/ims
  )

add_library(ims ${LIB_TYPE}
  ${ims_public_header}
  ${ims_public_header_model}
  ${ims_src})

set_target_properties(ims
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ims
  )

target_include_directories(ims
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ims
  core)

#install(FILES ${ims_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ims/v20201229)
#install(FILES ${ims_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ims/v20201229/model)
install(DIRECTORY ${ims_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ims
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

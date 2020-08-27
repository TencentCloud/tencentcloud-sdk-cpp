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

set(fmu_public_header
  include/tencentcloud/fmu/v20191213/FmuClient.h
  )

set(fmu_public_header_model
  include/tencentcloud/fmu/v20191213/model/DeleteModelRequest.h
  include/tencentcloud/fmu/v20191213/model/BeautifyVideoRequest.h
  include/tencentcloud/fmu/v20191213/model/CancelBeautifyVideoJobResponse.h
  include/tencentcloud/fmu/v20191213/model/RGBAInfo.h
  include/tencentcloud/fmu/v20191213/model/BeautifyVideoOutput.h
  include/tencentcloud/fmu/v20191213/model/LipColorInfo.h
  include/tencentcloud/fmu/v20191213/model/CreateModelResponse.h
  include/tencentcloud/fmu/v20191213/model/GetModelListResponse.h
  include/tencentcloud/fmu/v20191213/model/BeautifyPicResponse.h
  include/tencentcloud/fmu/v20191213/model/GetModelListRequest.h
  include/tencentcloud/fmu/v20191213/model/BeautifyVideoResponse.h
  include/tencentcloud/fmu/v20191213/model/ModelInfo.h
  include/tencentcloud/fmu/v20191213/model/TryLipstickPicResponse.h
  include/tencentcloud/fmu/v20191213/model/DeleteModelResponse.h
  include/tencentcloud/fmu/v20191213/model/CancelBeautifyVideoJobRequest.h
  include/tencentcloud/fmu/v20191213/model/BeautyParam.h
  include/tencentcloud/fmu/v20191213/model/TryLipstickPicRequest.h
  include/tencentcloud/fmu/v20191213/model/QueryBeautifyVideoJobResponse.h
  include/tencentcloud/fmu/v20191213/model/CreateModelRequest.h
  include/tencentcloud/fmu/v20191213/model/FaceRect.h
  include/tencentcloud/fmu/v20191213/model/BeautifyPicRequest.h
  include/tencentcloud/fmu/v20191213/model/QueryBeautifyVideoJobRequest.h
  )

set(fmu_src
  src/v20191213/FmuClient.cpp
  src/v20191213/model/DeleteModelRequest.cpp
  src/v20191213/model/BeautifyVideoRequest.cpp
  src/v20191213/model/CancelBeautifyVideoJobResponse.cpp
  src/v20191213/model/RGBAInfo.cpp
  src/v20191213/model/BeautifyVideoOutput.cpp
  src/v20191213/model/LipColorInfo.cpp
  src/v20191213/model/CreateModelResponse.cpp
  src/v20191213/model/GetModelListResponse.cpp
  src/v20191213/model/BeautifyPicResponse.cpp
  src/v20191213/model/GetModelListRequest.cpp
  src/v20191213/model/BeautifyVideoResponse.cpp
  src/v20191213/model/ModelInfo.cpp
  src/v20191213/model/TryLipstickPicResponse.cpp
  src/v20191213/model/DeleteModelResponse.cpp
  src/v20191213/model/CancelBeautifyVideoJobRequest.cpp
  src/v20191213/model/BeautyParam.cpp
  src/v20191213/model/TryLipstickPicRequest.cpp
  src/v20191213/model/QueryBeautifyVideoJobResponse.cpp
  src/v20191213/model/CreateModelRequest.cpp
  src/v20191213/model/FaceRect.cpp
  src/v20191213/model/BeautifyPicRequest.cpp
  src/v20191213/model/QueryBeautifyVideoJobRequest.cpp
  )

set(fmu_include
    include/tencentcloud/fmu
  )

add_library(fmu ${LIB_TYPE}
  ${fmu_public_header}
  ${fmu_public_header_model}
  ${fmu_src})

set_target_properties(fmu
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}fmu
  )

target_include_directories(fmu
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(fmu
  core)

#install(FILES ${fmu_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/fmu/v20191213)
#install(FILES ${fmu_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/fmu/v20191213/model)
install(DIRECTORY ${fmu_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS fmu
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

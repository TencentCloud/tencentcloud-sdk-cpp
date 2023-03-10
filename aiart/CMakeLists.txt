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
  include/tencentcloud/aiart/v20221229/model/ImageToImageResponse.h
  include/tencentcloud/aiart/v20221229/model/LogoParam.h
  include/tencentcloud/aiart/v20221229/model/ImageToImageRequest.h
  include/tencentcloud/aiart/v20221229/model/LogoRect.h
  include/tencentcloud/aiart/v20221229/model/ResultConfig.h
  include/tencentcloud/aiart/v20221229/model/TextToImageRequest.h
  include/tencentcloud/aiart/v20221229/model/TextToImageResponse.h
  )

set(aiart_src
  src/v20221229/AiartClient.cpp
  src/v20221229/model/ImageToImageResponse.cpp
  src/v20221229/model/LogoParam.cpp
  src/v20221229/model/ImageToImageRequest.cpp
  src/v20221229/model/LogoRect.cpp
  src/v20221229/model/ResultConfig.cpp
  src/v20221229/model/TextToImageRequest.cpp
  src/v20221229/model/TextToImageResponse.cpp
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

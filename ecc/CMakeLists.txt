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

set(ecc_public_header
  include/tencentcloud/ecc/v20181213/EccClient.h
  )

set(ecc_public_header_model
  include/tencentcloud/ecc/v20181213/model/CorrectMultiImageResponse.h
  include/tencentcloud/ecc/v20181213/model/DescribeTaskRequest.h
  include/tencentcloud/ecc/v20181213/model/SentenceItem.h
  include/tencentcloud/ecc/v20181213/model/ECCResponse.h
  include/tencentcloud/ecc/v20181213/model/EHOCRResponse.h
  include/tencentcloud/ecc/v20181213/model/ErrorCoordinate.h
  include/tencentcloud/ecc/v20181213/model/ECCRequest.h
  include/tencentcloud/ecc/v20181213/model/SentenceCom.h
  include/tencentcloud/ecc/v20181213/model/SentenceSuggest.h
  include/tencentcloud/ecc/v20181213/model/CorrectData.h
  include/tencentcloud/ecc/v20181213/model/ScoreCategory.h
  include/tencentcloud/ecc/v20181213/model/Aspect.h
  include/tencentcloud/ecc/v20181213/model/CompostionContext.h
  include/tencentcloud/ecc/v20181213/model/DescribeTaskResponse.h
  include/tencentcloud/ecc/v20181213/model/EHOCRRequest.h
  include/tencentcloud/ecc/v20181213/model/CompositionContext.h
  include/tencentcloud/ecc/v20181213/model/CorrectMultiImageRequest.h
  )

set(ecc_src
  src/v20181213/EccClient.cpp
  src/v20181213/model/CorrectMultiImageResponse.cpp
  src/v20181213/model/DescribeTaskRequest.cpp
  src/v20181213/model/SentenceItem.cpp
  src/v20181213/model/ECCResponse.cpp
  src/v20181213/model/EHOCRResponse.cpp
  src/v20181213/model/ErrorCoordinate.cpp
  src/v20181213/model/ECCRequest.cpp
  src/v20181213/model/SentenceCom.cpp
  src/v20181213/model/SentenceSuggest.cpp
  src/v20181213/model/CorrectData.cpp
  src/v20181213/model/ScoreCategory.cpp
  src/v20181213/model/Aspect.cpp
  src/v20181213/model/CompostionContext.cpp
  src/v20181213/model/DescribeTaskResponse.cpp
  src/v20181213/model/EHOCRRequest.cpp
  src/v20181213/model/CompositionContext.cpp
  src/v20181213/model/CorrectMultiImageRequest.cpp
  )

set(ecc_include
    include/tencentcloud/ecc
  )

add_library(ecc ${LIB_TYPE}
  ${ecc_public_header}
  ${ecc_public_header_model}
  ${ecc_src})

set_target_properties(ecc
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecc
  )

target_include_directories(ecc
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ecc
  core)

#install(FILES ${ecc_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecc/v20181213)
#install(FILES ${ecc_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecc/v20181213/model)
install(DIRECTORY ${ecc_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ecc
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

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

set(bma_public_header
  include/tencentcloud/bma/v20210624/BmaClient.h
  )

set(bma_public_header_model
  include/tencentcloud/bma/v20210624/model/DescribeCRWorkInfoRequest.h
  include/tencentcloud/bma/v20210624/model/DescribeCRWorkInfoResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRRightResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRBlockRequest.h
  include/tencentcloud/bma/v20210624/model/CreateCRBlockResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyResponse.h
  include/tencentcloud/bma/v20210624/model/CreateCRCompanyVerifyRequest.h
  )

set(bma_src
  src/v20210624/BmaClient.cpp
  src/v20210624/model/DescribeCRWorkInfoRequest.cpp
  src/v20210624/model/DescribeCRWorkInfoResponse.cpp
  src/v20210624/model/CreateCRRightRequest.cpp
  src/v20210624/model/CreateCRRightResponse.cpp
  src/v20210624/model/CreateCRBlockRequest.cpp
  src/v20210624/model/CreateCRBlockResponse.cpp
  src/v20210624/model/CreateCRCompanyVerifyResponse.cpp
  src/v20210624/model/CreateCRCompanyVerifyRequest.cpp
  )

set(bma_include
    include/tencentcloud/bma
  )

add_library(bma ${LIB_TYPE}
  ${bma_public_header}
  ${bma_public_header_model}
  ${bma_src})

set_target_properties(bma
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bma
  )

target_include_directories(bma
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bma
  core)

#install(FILES ${bma_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bma/v20210624)
#install(FILES ${bma_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bma/v20210624/model)
install(DIRECTORY ${bma_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bma
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

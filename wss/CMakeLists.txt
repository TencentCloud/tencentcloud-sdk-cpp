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

set(wss_public_header
  include/tencentcloud/wss/v20180426/WssClient.h
  )

set(wss_public_header_model
  include/tencentcloud/wss/v20180426/model/DeleteCertRequest.h
  include/tencentcloud/wss/v20180426/model/UploadCertResponse.h
  include/tencentcloud/wss/v20180426/model/DeleteCertResponse.h
  include/tencentcloud/wss/v20180426/model/DescribeCertListResponse.h
  include/tencentcloud/wss/v20180426/model/UploadCertRequest.h
  include/tencentcloud/wss/v20180426/model/SSLCertificate.h
  include/tencentcloud/wss/v20180426/model/DescribeCertListRequest.h
  include/tencentcloud/wss/v20180426/model/SSLProjectInfo.h
  )

set(wss_src
  src/v20180426/WssClient.cpp
  src/v20180426/model/DeleteCertRequest.cpp
  src/v20180426/model/UploadCertResponse.cpp
  src/v20180426/model/DeleteCertResponse.cpp
  src/v20180426/model/DescribeCertListResponse.cpp
  src/v20180426/model/UploadCertRequest.cpp
  src/v20180426/model/SSLCertificate.cpp
  src/v20180426/model/DescribeCertListRequest.cpp
  src/v20180426/model/SSLProjectInfo.cpp
  )

set(wss_include
    include/tencentcloud/wss
  )

add_library(wss ${LIB_TYPE}
  ${wss_public_header}
  ${wss_public_header_model}
  ${wss_src})

set_target_properties(wss
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}wss
  )

target_include_directories(wss
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(wss
  core)

#install(FILES ${wss_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wss/v20180426)
#install(FILES ${wss_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/wss/v20180426/model)
install(DIRECTORY ${wss_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS wss
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

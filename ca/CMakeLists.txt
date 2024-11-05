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

set(ca_public_header
  include/tencentcloud/ca/v20230228/CaClient.h
  )

set(ca_public_header_model
  include/tencentcloud/ca/v20230228/model/CreateVerifyReportRequest.h
  include/tencentcloud/ca/v20230228/model/CertificateIdentityUser.h
  include/tencentcloud/ca/v20230228/model/DescribeVerifyReportRequest.h
  include/tencentcloud/ca/v20230228/model/UploadFileRequest.h
  include/tencentcloud/ca/v20230228/model/CreateVerifyReportResponse.h
  include/tencentcloud/ca/v20230228/model/UploadFileResponse.h
  include/tencentcloud/ca/v20230228/model/DescribeVerifyReportResponse.h
  include/tencentcloud/ca/v20230228/model/FileInfo.h
  )

set(ca_src
  src/v20230228/CaClient.cpp
  src/v20230228/model/CreateVerifyReportRequest.cpp
  src/v20230228/model/CertificateIdentityUser.cpp
  src/v20230228/model/DescribeVerifyReportRequest.cpp
  src/v20230228/model/UploadFileRequest.cpp
  src/v20230228/model/CreateVerifyReportResponse.cpp
  src/v20230228/model/UploadFileResponse.cpp
  src/v20230228/model/DescribeVerifyReportResponse.cpp
  src/v20230228/model/FileInfo.cpp
  )

set(ca_include
    include/tencentcloud/ca
  )

add_library(ca ${LIB_TYPE}
  ${ca_public_header}
  ${ca_public_header_model}
  ${ca_src})

set_target_properties(ca
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ca
  )

target_include_directories(ca
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ca
  core)

#install(FILES ${ca_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ca/v20230228)
#install(FILES ${ca_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ca/v20230228/model)
install(DIRECTORY ${ca_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ca
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

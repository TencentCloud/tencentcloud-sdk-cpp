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

set(ssl_public_header
  include/tencentcloud/ssl/v20191205/SslClient.h
  )

set(ssl_public_header_model
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h
  include/tencentcloud/ssl/v20191205/model/Certificates.h
  include/tencentcloud/ssl/v20191205/model/CertificateExtra.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/OperationLog.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/DvAuthDetail.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h
  include/tencentcloud/ssl/v20191205/model/DvAuths.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/ProjectInfo.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/SubmittedData.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h
  )

set(ssl_src
  src/v20191205/SslClient.cpp
  src/v20191205/model/ApplyCertificateResponse.cpp
  src/v20191205/model/DeleteCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateOperateLogsResponse.cpp
  src/v20191205/model/CommitCertificateInformationRequest.cpp
  src/v20191205/model/CommitCertificateInformationResponse.cpp
  src/v20191205/model/ReplaceCertificateResponse.cpp
  src/v20191205/model/DownloadCertificateRequest.cpp
  src/v20191205/model/CancelCertificateOrderRequest.cpp
  src/v20191205/model/ModifyCertificateProjectResponse.cpp
  src/v20191205/model/Certificates.cpp
  src/v20191205/model/CertificateExtra.cpp
  src/v20191205/model/DescribeCertificateResponse.cpp
  src/v20191205/model/OperationLog.cpp
  src/v20191205/model/UploadCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateDetailRequest.cpp
  src/v20191205/model/ApplyCertificateRequest.cpp
  src/v20191205/model/ReplaceCertificateRequest.cpp
  src/v20191205/model/DeleteCertificateResponse.cpp
  src/v20191205/model/DvAuthDetail.cpp
  src/v20191205/model/ModifyCertificateProjectRequest.cpp
  src/v20191205/model/DvAuths.cpp
  src/v20191205/model/ModifyCertificateAliasRequest.cpp
  src/v20191205/model/DescribeCertificateRequest.cpp
  src/v20191205/model/ProjectInfo.cpp
  src/v20191205/model/DescribeCertificateOperateLogsRequest.cpp
  src/v20191205/model/CancelCertificateOrderResponse.cpp
  src/v20191205/model/SubmitCertificateInformationResponse.cpp
  src/v20191205/model/DescribeCertificatesResponse.cpp
  src/v20191205/model/DownloadCertificateResponse.cpp
  src/v20191205/model/UploadCertificateResponse.cpp
  src/v20191205/model/DescribeCertificateDetailResponse.cpp
  src/v20191205/model/ModifyCertificateAliasResponse.cpp
  src/v20191205/model/SubmitCertificateInformationRequest.cpp
  src/v20191205/model/SubmittedData.cpp
  src/v20191205/model/DescribeCertificatesRequest.cpp
  )

set(ssl_include
    include/tencentcloud/ssl
  )

add_library(ssl ${LIB_TYPE}
  ${ssl_public_header}
  ${ssl_public_header_model}
  ${ssl_src})

set_target_properties(ssl
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssl
  )

target_include_directories(ssl
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssl
  core)

#install(FILES ${ssl_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205)
#install(FILES ${ssl_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205/model)
install(DIRECTORY ${ssl_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssl
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

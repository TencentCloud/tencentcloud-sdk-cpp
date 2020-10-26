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

set(sslpod_public_header
  include/tencentcloud/sslpod/v20190605/SslpodClient.h
  )

set(sslpod_public_header_model
  include/tencentcloud/sslpod/v20190605/model/RefreshDomainResponse.h
  include/tencentcloud/sslpod/v20190605/model/DeleteDomainRequest.h
  include/tencentcloud/sslpod/v20190605/model/DescribeNoticeInfoRequest.h
  include/tencentcloud/sslpod/v20190605/model/ModifyDomainTagsResponse.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainCertsRequest.h
  include/tencentcloud/sslpod/v20190605/model/RefreshDomainRequest.h
  include/tencentcloud/sslpod/v20190605/model/ResolveDomainRequest.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomains.h
  include/tencentcloud/sslpod/v20190605/model/DashboardResult.h
  include/tencentcloud/sslpod/v20190605/model/DescribeNoticeInfoResponse.h
  include/tencentcloud/sslpod/v20190605/model/ChartNameValue.h
  include/tencentcloud/sslpod/v20190605/model/CreateDomainRequest.h
  include/tencentcloud/sslpod/v20190605/model/ResolveDomainResponse.h
  include/tencentcloud/sslpod/v20190605/model/ModifyDomainTagsRequest.h
  include/tencentcloud/sslpod/v20190605/model/CertInfo.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDashboardResponse.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainTagsResponse.h
  include/tencentcloud/sslpod/v20190605/model/ChartHistogram.h
  include/tencentcloud/sslpod/v20190605/model/LimitInfo.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDashboardRequest.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainsResponse.h
  include/tencentcloud/sslpod/v20190605/model/NoticeInfoResult.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainCertsResponse.h
  include/tencentcloud/sslpod/v20190605/model/DomainSiteInfo.h
  include/tencentcloud/sslpod/v20190605/model/DeleteDomainResponse.h
  include/tencentcloud/sslpod/v20190605/model/CreateDomainResponse.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainTagsRequest.h
  include/tencentcloud/sslpod/v20190605/model/DescribeDomainsRequest.h
  )

set(sslpod_src
  src/v20190605/SslpodClient.cpp
  src/v20190605/model/RefreshDomainResponse.cpp
  src/v20190605/model/DeleteDomainRequest.cpp
  src/v20190605/model/DescribeNoticeInfoRequest.cpp
  src/v20190605/model/ModifyDomainTagsResponse.cpp
  src/v20190605/model/DescribeDomainCertsRequest.cpp
  src/v20190605/model/RefreshDomainRequest.cpp
  src/v20190605/model/ResolveDomainRequest.cpp
  src/v20190605/model/DescribeDomains.cpp
  src/v20190605/model/DashboardResult.cpp
  src/v20190605/model/DescribeNoticeInfoResponse.cpp
  src/v20190605/model/ChartNameValue.cpp
  src/v20190605/model/CreateDomainRequest.cpp
  src/v20190605/model/ResolveDomainResponse.cpp
  src/v20190605/model/ModifyDomainTagsRequest.cpp
  src/v20190605/model/CertInfo.cpp
  src/v20190605/model/DescribeDashboardResponse.cpp
  src/v20190605/model/DescribeDomainTagsResponse.cpp
  src/v20190605/model/ChartHistogram.cpp
  src/v20190605/model/LimitInfo.cpp
  src/v20190605/model/DescribeDashboardRequest.cpp
  src/v20190605/model/DescribeDomainsResponse.cpp
  src/v20190605/model/NoticeInfoResult.cpp
  src/v20190605/model/DescribeDomainCertsResponse.cpp
  src/v20190605/model/DomainSiteInfo.cpp
  src/v20190605/model/DeleteDomainResponse.cpp
  src/v20190605/model/CreateDomainResponse.cpp
  src/v20190605/model/DescribeDomainTagsRequest.cpp
  src/v20190605/model/DescribeDomainsRequest.cpp
  )

set(sslpod_include
    include/tencentcloud/sslpod
  )

add_library(sslpod ${LIB_TYPE}
  ${sslpod_public_header}
  ${sslpod_public_header_model}
  ${sslpod_src})

set_target_properties(sslpod
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sslpod
  )

target_include_directories(sslpod
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(sslpod
  core)

#install(FILES ${sslpod_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sslpod/v20190605)
#install(FILES ${sslpod_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/sslpod/v20190605/model)
install(DIRECTORY ${sslpod_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS sslpod
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

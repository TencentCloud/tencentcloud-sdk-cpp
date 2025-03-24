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

set(ecdn_public_header
  include/tencentcloud/ecdn/v20191012/EcdnClient.h
  )

set(ecdn_public_header_model
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsRequest.h
  include/tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigResponse.h
  include/tencentcloud/ecdn/v20191012/model/AdvanceHttps.h
  include/tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheRequest.h
  include/tencentcloud/ecdn/v20191012/model/ResourceData.h
  include/tencentcloud/ecdn/v20191012/model/Https.h
  include/tencentcloud/ecdn/v20191012/model/Cache.h
  include/tencentcloud/ecdn/v20191012/model/ForceRedirect.h
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsResponse.h
  include/tencentcloud/ecdn/v20191012/model/TimestampData.h
  include/tencentcloud/ecdn/v20191012/model/DomainData.h
  include/tencentcloud/ecdn/v20191012/model/Sort.h
  include/tencentcloud/ecdn/v20191012/model/IpFreqLimit.h
  include/tencentcloud/ecdn/v20191012/model/DescribePurgeTasksRequest.h
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsResponse.h
  include/tencentcloud/ecdn/v20191012/model/DomainLogs.h
  include/tencentcloud/ecdn/v20191012/model/Hsts.h
  include/tencentcloud/ecdn/v20191012/model/DetailData.h
  include/tencentcloud/ecdn/v20191012/model/HttpHeaderPathRule.h
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsResponse.h
  include/tencentcloud/ecdn/v20191012/model/EcdnData.h
  include/tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigRequest.h
  include/tencentcloud/ecdn/v20191012/model/ClientCert.h
  include/tencentcloud/ecdn/v20191012/model/DomainBriefInfo.h
  include/tencentcloud/ecdn/v20191012/model/Tag.h
  include/tencentcloud/ecdn/v20191012/model/WebSocket.h
  include/tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheResponse.h
  include/tencentcloud/ecdn/v20191012/model/IpFilter.h
  include/tencentcloud/ecdn/v20191012/model/ResponseHeader.h
  include/tencentcloud/ecdn/v20191012/model/DescribeDomainsResponse.h
  include/tencentcloud/ecdn/v20191012/model/DescribePurgeTasksResponse.h
  include/tencentcloud/ecdn/v20191012/model/IpStatus.h
  include/tencentcloud/ecdn/v20191012/model/PurgeTask.h
  include/tencentcloud/ecdn/v20191012/model/CacheRule.h
  include/tencentcloud/ecdn/v20191012/model/DescribeIpStatusResponse.h
  include/tencentcloud/ecdn/v20191012/model/Origin.h
  include/tencentcloud/ecdn/v20191012/model/ServerCert.h
  include/tencentcloud/ecdn/v20191012/model/CacheKey.h
  include/tencentcloud/ecdn/v20191012/model/DomainFilter.h
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsRequest.h
  include/tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsRequest.h
  include/tencentcloud/ecdn/v20191012/model/DomainDetailInfo.h
  include/tencentcloud/ecdn/v20191012/model/DescribeIpStatusRequest.h
  include/tencentcloud/ecdn/v20191012/model/DescribeDomainsRequest.h
  )

set(ecdn_src
  src/v20191012/EcdnClient.cpp
  src/v20191012/model/DescribeEcdnStatisticsRequest.cpp
  src/v20191012/model/DescribeDomainsConfigResponse.cpp
  src/v20191012/model/AdvanceHttps.cpp
  src/v20191012/model/PurgeUrlsCacheRequest.cpp
  src/v20191012/model/ResourceData.cpp
  src/v20191012/model/Https.cpp
  src/v20191012/model/Cache.cpp
  src/v20191012/model/ForceRedirect.cpp
  src/v20191012/model/DescribeEcdnDomainStatisticsResponse.cpp
  src/v20191012/model/TimestampData.cpp
  src/v20191012/model/DomainData.cpp
  src/v20191012/model/Sort.cpp
  src/v20191012/model/IpFreqLimit.cpp
  src/v20191012/model/DescribePurgeTasksRequest.cpp
  src/v20191012/model/DescribeEcdnStatisticsResponse.cpp
  src/v20191012/model/DomainLogs.cpp
  src/v20191012/model/Hsts.cpp
  src/v20191012/model/DetailData.cpp
  src/v20191012/model/HttpHeaderPathRule.cpp
  src/v20191012/model/DescribeEcdnDomainLogsResponse.cpp
  src/v20191012/model/EcdnData.cpp
  src/v20191012/model/DescribeDomainsConfigRequest.cpp
  src/v20191012/model/ClientCert.cpp
  src/v20191012/model/DomainBriefInfo.cpp
  src/v20191012/model/Tag.cpp
  src/v20191012/model/WebSocket.cpp
  src/v20191012/model/PurgeUrlsCacheResponse.cpp
  src/v20191012/model/IpFilter.cpp
  src/v20191012/model/ResponseHeader.cpp
  src/v20191012/model/DescribeDomainsResponse.cpp
  src/v20191012/model/DescribePurgeTasksResponse.cpp
  src/v20191012/model/IpStatus.cpp
  src/v20191012/model/PurgeTask.cpp
  src/v20191012/model/CacheRule.cpp
  src/v20191012/model/DescribeIpStatusResponse.cpp
  src/v20191012/model/Origin.cpp
  src/v20191012/model/ServerCert.cpp
  src/v20191012/model/CacheKey.cpp
  src/v20191012/model/DomainFilter.cpp
  src/v20191012/model/DescribeEcdnDomainStatisticsRequest.cpp
  src/v20191012/model/DescribeEcdnDomainLogsRequest.cpp
  src/v20191012/model/DomainDetailInfo.cpp
  src/v20191012/model/DescribeIpStatusRequest.cpp
  src/v20191012/model/DescribeDomainsRequest.cpp
  )

set(ecdn_include
    include/tencentcloud/ecdn
  )

add_library(ecdn ${LIB_TYPE}
  ${ecdn_public_header}
  ${ecdn_public_header_model}
  ${ecdn_src})

set_target_properties(ecdn
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecdn
  )

target_include_directories(ecdn
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ecdn
  core)

#install(FILES ${ecdn_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecdn/v20191012)
#install(FILES ${ecdn_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ecdn/v20191012/model)
install(DIRECTORY ${ecdn_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ecdn
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

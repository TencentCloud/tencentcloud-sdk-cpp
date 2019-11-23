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

set(cws_public_header
  include/tencentcloud/cws/v20180312/CwsClient.h
  )

set(cws_public_header_model
  include/tencentcloud/cws/v20180312/model/ModifySiteAttributeRequest.h
  include/tencentcloud/cws/v20180312/model/MonitorsDetail.h
  include/tencentcloud/cws/v20180312/model/DescribeSitesResponse.h
  include/tencentcloud/cws/v20180312/model/DescribeMonitorsResponse.h
  include/tencentcloud/cws/v20180312/model/DeleteSitesRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeConfigRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsRequest.h
  include/tencentcloud/cws/v20180312/model/ModifyConfigAttributeResponse.h
  include/tencentcloud/cws/v20180312/model/CreateSitesResponse.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsNumberRequest.h
  include/tencentcloud/cws/v20180312/model/ModifyMonitorAttributeResponse.h
  include/tencentcloud/cws/v20180312/model/ModifySiteAttributeResponse.h
  include/tencentcloud/cws/v20180312/model/CreateVulsReportRequest.h
  include/tencentcloud/cws/v20180312/model/CreateSitesScansResponse.h
  include/tencentcloud/cws/v20180312/model/SitesVerification.h
  include/tencentcloud/cws/v20180312/model/DescribeSiteQuotaResponse.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsNumberResponse.h
  include/tencentcloud/cws/v20180312/model/CreateVulsMisinformationRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsNumberTimelineRequest.h
  include/tencentcloud/cws/v20180312/model/MonitorMiniSite.h
  include/tencentcloud/cws/v20180312/model/CreateSitesScansRequest.h
  include/tencentcloud/cws/v20180312/model/CreateMonitorsResponse.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsResponse.h
  include/tencentcloud/cws/v20180312/model/VerifySitesResponse.h
  include/tencentcloud/cws/v20180312/model/CreateMonitorsRequest.h
  include/tencentcloud/cws/v20180312/model/DeleteMonitorsResponse.h
  include/tencentcloud/cws/v20180312/model/Monitor.h
  include/tencentcloud/cws/v20180312/model/Vul.h
  include/tencentcloud/cws/v20180312/model/VulsTimeline.h
  include/tencentcloud/cws/v20180312/model/CreateVulsMisinformationResponse.h
  include/tencentcloud/cws/v20180312/model/VerifySitesRequest.h
  include/tencentcloud/cws/v20180312/model/MiniSite.h
  include/tencentcloud/cws/v20180312/model/ModifyMonitorAttributeRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeVulsNumberTimelineResponse.h
  include/tencentcloud/cws/v20180312/model/CreateVulsReportResponse.h
  include/tencentcloud/cws/v20180312/model/CreateSitesRequest.h
  include/tencentcloud/cws/v20180312/model/ModifyConfigAttributeRequest.h
  include/tencentcloud/cws/v20180312/model/Filter.h
  include/tencentcloud/cws/v20180312/model/DescribeMonitorsRequest.h
  include/tencentcloud/cws/v20180312/model/DeleteSitesResponse.h
  include/tencentcloud/cws/v20180312/model/DeleteMonitorsRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeSitesVerificationResponse.h
  include/tencentcloud/cws/v20180312/model/Site.h
  include/tencentcloud/cws/v20180312/model/DescribeConfigResponse.h
  include/tencentcloud/cws/v20180312/model/DescribeSitesRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeSiteQuotaRequest.h
  include/tencentcloud/cws/v20180312/model/DescribeSitesVerificationRequest.h
  )

set(cws_src
  src/v20180312/CwsClient.cpp
  src/v20180312/model/ModifySiteAttributeRequest.cpp
  src/v20180312/model/MonitorsDetail.cpp
  src/v20180312/model/DescribeSitesResponse.cpp
  src/v20180312/model/DescribeMonitorsResponse.cpp
  src/v20180312/model/DeleteSitesRequest.cpp
  src/v20180312/model/DescribeConfigRequest.cpp
  src/v20180312/model/DescribeVulsRequest.cpp
  src/v20180312/model/ModifyConfigAttributeResponse.cpp
  src/v20180312/model/CreateSitesResponse.cpp
  src/v20180312/model/DescribeVulsNumberRequest.cpp
  src/v20180312/model/ModifyMonitorAttributeResponse.cpp
  src/v20180312/model/ModifySiteAttributeResponse.cpp
  src/v20180312/model/CreateVulsReportRequest.cpp
  src/v20180312/model/CreateSitesScansResponse.cpp
  src/v20180312/model/SitesVerification.cpp
  src/v20180312/model/DescribeSiteQuotaResponse.cpp
  src/v20180312/model/DescribeVulsNumberResponse.cpp
  src/v20180312/model/CreateVulsMisinformationRequest.cpp
  src/v20180312/model/DescribeVulsNumberTimelineRequest.cpp
  src/v20180312/model/MonitorMiniSite.cpp
  src/v20180312/model/CreateSitesScansRequest.cpp
  src/v20180312/model/CreateMonitorsResponse.cpp
  src/v20180312/model/DescribeVulsResponse.cpp
  src/v20180312/model/VerifySitesResponse.cpp
  src/v20180312/model/CreateMonitorsRequest.cpp
  src/v20180312/model/DeleteMonitorsResponse.cpp
  src/v20180312/model/Monitor.cpp
  src/v20180312/model/Vul.cpp
  src/v20180312/model/VulsTimeline.cpp
  src/v20180312/model/CreateVulsMisinformationResponse.cpp
  src/v20180312/model/VerifySitesRequest.cpp
  src/v20180312/model/MiniSite.cpp
  src/v20180312/model/ModifyMonitorAttributeRequest.cpp
  src/v20180312/model/DescribeVulsNumberTimelineResponse.cpp
  src/v20180312/model/CreateVulsReportResponse.cpp
  src/v20180312/model/CreateSitesRequest.cpp
  src/v20180312/model/ModifyConfigAttributeRequest.cpp
  src/v20180312/model/Filter.cpp
  src/v20180312/model/DescribeMonitorsRequest.cpp
  src/v20180312/model/DeleteSitesResponse.cpp
  src/v20180312/model/DeleteMonitorsRequest.cpp
  src/v20180312/model/DescribeSitesVerificationResponse.cpp
  src/v20180312/model/Site.cpp
  src/v20180312/model/DescribeConfigResponse.cpp
  src/v20180312/model/DescribeSitesRequest.cpp
  src/v20180312/model/DescribeSiteQuotaRequest.cpp
  src/v20180312/model/DescribeSitesVerificationRequest.cpp
  )

set(cws_include
    include/tencentcloud/cws
  )

add_library(cws ${LIB_TYPE}
  ${cws_public_header}
  ${cws_public_header_model}
  ${cws_src})

set_target_properties(cws
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cws
  )

target_include_directories(cws
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cws
  core)

#install(FILES ${cws_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cws/v20180312)
#install(FILES ${cws_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cws/v20180312/model)
install(DIRECTORY ${cws_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cws
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

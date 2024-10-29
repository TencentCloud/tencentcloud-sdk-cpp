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

set(bsca_public_header
  include/tencentcloud/bsca/v20210811/BscaClient.h
  )

set(bsca_public_header_model
  include/tencentcloud/bsca/v20210811/model/MatchKBPURLListResponse.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentVulnerabilityRequest.h
  include/tencentcloud/bsca/v20210811/model/AffectedComponent.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentVersionListRequest.h
  include/tencentcloud/bsca/v20210811/model/ComponentVulnerabilityUnion.h
  include/tencentcloud/bsca/v20210811/model/LicenseUnion.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentVulnerabilityResponse.h
  include/tencentcloud/bsca/v20210811/model/LicenseSummary.h
  include/tencentcloud/bsca/v20210811/model/SearchKBComponentRequest.h
  include/tencentcloud/bsca/v20210811/model/Qualifier.h
  include/tencentcloud/bsca/v20210811/model/CVSSV3Info.h
  include/tencentcloud/bsca/v20210811/model/Component.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBVulnerabilityResponse.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBLicenseResponse.h
  include/tencentcloud/bsca/v20210811/model/ComponentVersion.h
  include/tencentcloud/bsca/v20210811/model/MatchKBPURLListRequest.h
  include/tencentcloud/bsca/v20210811/model/ComponentVersionInfo.h
  include/tencentcloud/bsca/v20210811/model/VulnerabilityUnion.h
  include/tencentcloud/bsca/v20210811/model/LicenseDetail.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBVulnerabilityRequest.h
  include/tencentcloud/bsca/v20210811/model/VulnerabilityDetail.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentResponse.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentVersionListResponse.h
  include/tencentcloud/bsca/v20210811/model/VulnerabilitySummary.h
  include/tencentcloud/bsca/v20210811/model/ComponentTagFilter.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBLicenseRequest.h
  include/tencentcloud/bsca/v20210811/model/CVSSV2Info.h
  include/tencentcloud/bsca/v20210811/model/DescribeKBComponentRequest.h
  include/tencentcloud/bsca/v20210811/model/PURL.h
  include/tencentcloud/bsca/v20210811/model/SearchKBComponentResponse.h
  include/tencentcloud/bsca/v20210811/model/ComponentVulnerabilitySummary.h
  include/tencentcloud/bsca/v20210811/model/LicenseRestriction.h
  )

set(bsca_src
  src/v20210811/BscaClient.cpp
  src/v20210811/model/MatchKBPURLListResponse.cpp
  src/v20210811/model/DescribeKBComponentVulnerabilityRequest.cpp
  src/v20210811/model/AffectedComponent.cpp
  src/v20210811/model/DescribeKBComponentVersionListRequest.cpp
  src/v20210811/model/ComponentVulnerabilityUnion.cpp
  src/v20210811/model/LicenseUnion.cpp
  src/v20210811/model/DescribeKBComponentVulnerabilityResponse.cpp
  src/v20210811/model/LicenseSummary.cpp
  src/v20210811/model/SearchKBComponentRequest.cpp
  src/v20210811/model/Qualifier.cpp
  src/v20210811/model/CVSSV3Info.cpp
  src/v20210811/model/Component.cpp
  src/v20210811/model/DescribeKBVulnerabilityResponse.cpp
  src/v20210811/model/DescribeKBLicenseResponse.cpp
  src/v20210811/model/ComponentVersion.cpp
  src/v20210811/model/MatchKBPURLListRequest.cpp
  src/v20210811/model/ComponentVersionInfo.cpp
  src/v20210811/model/VulnerabilityUnion.cpp
  src/v20210811/model/LicenseDetail.cpp
  src/v20210811/model/DescribeKBVulnerabilityRequest.cpp
  src/v20210811/model/VulnerabilityDetail.cpp
  src/v20210811/model/DescribeKBComponentResponse.cpp
  src/v20210811/model/DescribeKBComponentVersionListResponse.cpp
  src/v20210811/model/VulnerabilitySummary.cpp
  src/v20210811/model/ComponentTagFilter.cpp
  src/v20210811/model/DescribeKBLicenseRequest.cpp
  src/v20210811/model/CVSSV2Info.cpp
  src/v20210811/model/DescribeKBComponentRequest.cpp
  src/v20210811/model/PURL.cpp
  src/v20210811/model/SearchKBComponentResponse.cpp
  src/v20210811/model/ComponentVulnerabilitySummary.cpp
  src/v20210811/model/LicenseRestriction.cpp
  )

set(bsca_include
    include/tencentcloud/bsca
  )

add_library(bsca ${LIB_TYPE}
  ${bsca_public_header}
  ${bsca_public_header_model}
  ${bsca_src})

set_target_properties(bsca
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bsca
  )

target_include_directories(bsca
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bsca
  core)

#install(FILES ${bsca_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bsca/v20210811)
#install(FILES ${bsca_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bsca/v20210811/model)
install(DIRECTORY ${bsca_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bsca
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

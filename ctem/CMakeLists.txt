#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

set(ctem_public_header
  include/tencentcloud/ctem/v20231128/CtemClient.h
  )

set(ctem_public_header_model
  include/tencentcloud/ctem/v20231128/model/DescribeFakeWechatOfficialsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeManagesRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeAppsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeJobRecordsResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayLeakageCode.h
  include/tencentcloud/ctem/v20231128/model/DescribeAppsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeSensitiveInfosRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayAsset.h
  include/tencentcloud/ctem/v20231128/model/DescribeWechatAppletsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeCustomersRequest.h
  include/tencentcloud/ctem/v20231128/model/ModifyLabelRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayLeakageData.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeWebsitesResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayWechatOfficialAccount.h
  include/tencentcloud/ctem/v20231128/model/DisplayConfig.h
  include/tencentcloud/ctem/v20231128/model/DescribeNetDisksResponse.h
  include/tencentcloud/ctem/v20231128/model/CreateJobRecordResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeCustomersResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeDomainsResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayDarkWeb.h
  include/tencentcloud/ctem/v20231128/model/DescribePortsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeSensitiveInfosResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeConfigsResponse.h
  include/tencentcloud/ctem/v20231128/model/IdndValue.h
  include/tencentcloud/ctem/v20231128/model/DisplayLeakageEmail.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeWebsitesRequest.h
  include/tencentcloud/ctem/v20231128/model/ModifyCustomerResponse.h
  include/tencentcloud/ctem/v20231128/model/CreateJobRecordRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeSuspiciousAssetsResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayJobRecordDetail.h
  include/tencentcloud/ctem/v20231128/model/DescribeAssetsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeJobRecordDetailsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeSubDomainsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayFakeWebsite.h
  include/tencentcloud/ctem/v20231128/model/DescribeVulsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeGithubsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageEmailsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeAssetsResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayEnterprise.h
  include/tencentcloud/ctem/v20231128/model/StopJobRecordRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplaySensitiveInfo.h
  include/tencentcloud/ctem/v20231128/model/ModifyLabelResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeEnterprisesRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageCodesRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayFakeMiniProgram.h
  include/tencentcloud/ctem/v20231128/model/DisplayFakeWechatOfficial.h
  include/tencentcloud/ctem/v20231128/model/DisplayHttp.h
  include/tencentcloud/ctem/v20231128/model/DescribePortsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayWechatApplet.h
  include/tencentcloud/ctem/v20231128/model/DescribeGithubsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeWechatOfficialAccountsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeWechatOfficialAccountsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayFakeApp.h
  include/tencentcloud/ctem/v20231128/model/DescribeDarkWebsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeHttpsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeEnterprisesResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeNetDisksRequest.h
  include/tencentcloud/ctem/v20231128/model/ModifyCustomerRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayApp.h
  include/tencentcloud/ctem/v20231128/model/DisplayNetDisk.h
  include/tencentcloud/ctem/v20231128/model/DisplaySubDomain.h
  include/tencentcloud/ctem/v20231128/model/DescribeSuspiciousAssetsRequest.h
  include/tencentcloud/ctem/v20231128/model/Filter.h
  include/tencentcloud/ctem/v20231128/model/DisplayVul.h
  include/tencentcloud/ctem/v20231128/model/DescribeWechatAppletsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeAppsResponse.h
  include/tencentcloud/ctem/v20231128/model/DisplayWeakPassword.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageEmailsRequest.h
  include/tencentcloud/ctem/v20231128/model/CreateCustomerResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeManagesResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeConfigsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeWeakPasswordsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayPort.h
  include/tencentcloud/ctem/v20231128/model/StopJobRecordResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeMiniProgramsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayJobRecord.h
  include/tencentcloud/ctem/v20231128/model/CreateCustomerRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageDatasRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeJobRecordDetailsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeVulsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplayGithub.h
  include/tencentcloud/ctem/v20231128/model/DisplayToolCommon.h
  include/tencentcloud/ctem/v20231128/model/Customer.h
  include/tencentcloud/ctem/v20231128/model/DisplayManage.h
  include/tencentcloud/ctem/v20231128/model/DisplayDomain.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeMiniProgramsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeSubDomainsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeHttpsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageDatasResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeAppsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeWeakPasswordsResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeFakeWechatOfficialsRequest.h
  include/tencentcloud/ctem/v20231128/model/DisplaySuspiciousAsset.h
  include/tencentcloud/ctem/v20231128/model/DescribeJobRecordsRequest.h
  include/tencentcloud/ctem/v20231128/model/DescribeLeakageCodesResponse.h
  include/tencentcloud/ctem/v20231128/model/DescribeDomainsRequest.h
  include/tencentcloud/ctem/v20231128/model/JobRecordProgress.h
  include/tencentcloud/ctem/v20231128/model/DescribeDarkWebsResponse.h
  )

set(ctem_src
  src/v20231128/CtemClient.cpp
  src/v20231128/model/DescribeFakeWechatOfficialsResponse.cpp
  src/v20231128/model/DescribeManagesRequest.cpp
  src/v20231128/model/DescribeFakeAppsRequest.cpp
  src/v20231128/model/DescribeJobRecordsResponse.cpp
  src/v20231128/model/DisplayLeakageCode.cpp
  src/v20231128/model/DescribeAppsRequest.cpp
  src/v20231128/model/DescribeSensitiveInfosRequest.cpp
  src/v20231128/model/DisplayAsset.cpp
  src/v20231128/model/DescribeWechatAppletsResponse.cpp
  src/v20231128/model/DescribeCustomersRequest.cpp
  src/v20231128/model/ModifyLabelRequest.cpp
  src/v20231128/model/DisplayLeakageData.cpp
  src/v20231128/model/DescribeFakeWebsitesResponse.cpp
  src/v20231128/model/DisplayWechatOfficialAccount.cpp
  src/v20231128/model/DisplayConfig.cpp
  src/v20231128/model/DescribeNetDisksResponse.cpp
  src/v20231128/model/CreateJobRecordResponse.cpp
  src/v20231128/model/DescribeCustomersResponse.cpp
  src/v20231128/model/DescribeDomainsResponse.cpp
  src/v20231128/model/DisplayDarkWeb.cpp
  src/v20231128/model/DescribePortsResponse.cpp
  src/v20231128/model/DescribeSensitiveInfosResponse.cpp
  src/v20231128/model/DescribeConfigsResponse.cpp
  src/v20231128/model/IdndValue.cpp
  src/v20231128/model/DisplayLeakageEmail.cpp
  src/v20231128/model/DescribeFakeWebsitesRequest.cpp
  src/v20231128/model/ModifyCustomerResponse.cpp
  src/v20231128/model/CreateJobRecordRequest.cpp
  src/v20231128/model/DescribeSuspiciousAssetsResponse.cpp
  src/v20231128/model/DisplayJobRecordDetail.cpp
  src/v20231128/model/DescribeAssetsRequest.cpp
  src/v20231128/model/DescribeJobRecordDetailsRequest.cpp
  src/v20231128/model/DescribeSubDomainsRequest.cpp
  src/v20231128/model/DisplayFakeWebsite.cpp
  src/v20231128/model/DescribeVulsResponse.cpp
  src/v20231128/model/DescribeGithubsResponse.cpp
  src/v20231128/model/DescribeLeakageEmailsResponse.cpp
  src/v20231128/model/DescribeAssetsResponse.cpp
  src/v20231128/model/DisplayEnterprise.cpp
  src/v20231128/model/StopJobRecordRequest.cpp
  src/v20231128/model/DisplaySensitiveInfo.cpp
  src/v20231128/model/ModifyLabelResponse.cpp
  src/v20231128/model/DescribeEnterprisesRequest.cpp
  src/v20231128/model/DescribeLeakageCodesRequest.cpp
  src/v20231128/model/DisplayFakeMiniProgram.cpp
  src/v20231128/model/DisplayFakeWechatOfficial.cpp
  src/v20231128/model/DisplayHttp.cpp
  src/v20231128/model/DescribePortsRequest.cpp
  src/v20231128/model/DisplayWechatApplet.cpp
  src/v20231128/model/DescribeGithubsRequest.cpp
  src/v20231128/model/DescribeWechatOfficialAccountsResponse.cpp
  src/v20231128/model/DescribeWechatOfficialAccountsRequest.cpp
  src/v20231128/model/DisplayFakeApp.cpp
  src/v20231128/model/DescribeDarkWebsRequest.cpp
  src/v20231128/model/DescribeHttpsRequest.cpp
  src/v20231128/model/DescribeEnterprisesResponse.cpp
  src/v20231128/model/DescribeNetDisksRequest.cpp
  src/v20231128/model/ModifyCustomerRequest.cpp
  src/v20231128/model/DisplayApp.cpp
  src/v20231128/model/DisplayNetDisk.cpp
  src/v20231128/model/DisplaySubDomain.cpp
  src/v20231128/model/DescribeSuspiciousAssetsRequest.cpp
  src/v20231128/model/Filter.cpp
  src/v20231128/model/DisplayVul.cpp
  src/v20231128/model/DescribeWechatAppletsRequest.cpp
  src/v20231128/model/DescribeFakeAppsResponse.cpp
  src/v20231128/model/DisplayWeakPassword.cpp
  src/v20231128/model/DescribeLeakageEmailsRequest.cpp
  src/v20231128/model/CreateCustomerResponse.cpp
  src/v20231128/model/DescribeManagesResponse.cpp
  src/v20231128/model/DescribeConfigsRequest.cpp
  src/v20231128/model/DescribeWeakPasswordsRequest.cpp
  src/v20231128/model/DisplayPort.cpp
  src/v20231128/model/StopJobRecordResponse.cpp
  src/v20231128/model/DescribeFakeMiniProgramsRequest.cpp
  src/v20231128/model/DisplayJobRecord.cpp
  src/v20231128/model/CreateCustomerRequest.cpp
  src/v20231128/model/DescribeLeakageDatasRequest.cpp
  src/v20231128/model/DescribeJobRecordDetailsResponse.cpp
  src/v20231128/model/DescribeVulsRequest.cpp
  src/v20231128/model/DisplayGithub.cpp
  src/v20231128/model/DisplayToolCommon.cpp
  src/v20231128/model/Customer.cpp
  src/v20231128/model/DisplayManage.cpp
  src/v20231128/model/DisplayDomain.cpp
  src/v20231128/model/DescribeFakeMiniProgramsResponse.cpp
  src/v20231128/model/DescribeSubDomainsResponse.cpp
  src/v20231128/model/DescribeHttpsResponse.cpp
  src/v20231128/model/DescribeLeakageDatasResponse.cpp
  src/v20231128/model/DescribeAppsResponse.cpp
  src/v20231128/model/DescribeWeakPasswordsResponse.cpp
  src/v20231128/model/DescribeFakeWechatOfficialsRequest.cpp
  src/v20231128/model/DisplaySuspiciousAsset.cpp
  src/v20231128/model/DescribeJobRecordsRequest.cpp
  src/v20231128/model/DescribeLeakageCodesResponse.cpp
  src/v20231128/model/DescribeDomainsRequest.cpp
  src/v20231128/model/JobRecordProgress.cpp
  src/v20231128/model/DescribeDarkWebsResponse.cpp
  )

set(ctem_include
    include/tencentcloud/ctem
  )

add_library(ctem ${LIB_TYPE}
  ${ctem_public_header}
  ${ctem_public_header_model}
  ${ctem_src})

set_target_properties(ctem
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ctem
  )

target_include_directories(ctem
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ctem
  core)

#install(FILES ${ctem_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ctem/v20231128)
#install(FILES ${ctem_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ctem/v20231128/model)
install(DIRECTORY ${ctem_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ctem
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

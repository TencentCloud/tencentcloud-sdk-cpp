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

set(teo_public_header
  include/tencentcloud/teo/v20220106/TeoClient.h
  )

set(teo_public_header_model
  include/tencentcloud/teo/v20220106/model/Compression.h
  include/tencentcloud/teo/v20220106/model/HostCertSetting.h
  include/tencentcloud/teo/v20220106/model/ModifyDefaultCertificateRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeZoneDetailsResponse.h
  include/tencentcloud/teo/v20220106/model/DeleteApplicationProxyResponse.h
  include/tencentcloud/teo/v20220106/model/Https.h
  include/tencentcloud/teo/v20220106/model/ScanDnsRecordsResponse.h
  include/tencentcloud/teo/v20220106/model/ZoneFilter.h
  include/tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusResponse.h
  include/tencentcloud/teo/v20220106/model/DescribePrefetchTasksResponse.h
  include/tencentcloud/teo/v20220106/model/DeleteApplicationProxyRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeZoneSettingRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneStatusRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyDnsRecordRequest.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesRequest.h
  include/tencentcloud/teo/v20220106/model/LoadBalancing.h
  include/tencentcloud/teo/v20220106/model/ModifyDnssecRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneSettingRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailRequest.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyResponse.h
  include/tencentcloud/teo/v20220106/model/ImportDnsRecordsRequest.h
  include/tencentcloud/teo/v20220106/model/CacheConfigNoCache.h
  include/tencentcloud/teo/v20220106/model/Origin.h
  include/tencentcloud/teo/v20220106/model/Task.h
  include/tencentcloud/teo/v20220106/model/CertSort.h
  include/tencentcloud/teo/v20220106/model/DescribeHostsSettingResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneRequest.h
  include/tencentcloud/teo/v20220106/model/DeleteZoneResponse.h
  include/tencentcloud/teo/v20220106/model/ReclaimZoneResponse.h
  include/tencentcloud/teo/v20220106/model/CreatePurgeTaskResponse.h
  include/tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeIdentificationRequest.h
  include/tencentcloud/teo/v20220106/model/CreateDnsRecordRequest.h
  include/tencentcloud/teo/v20220106/model/L7OfflineLog.h
  include/tencentcloud/teo/v20220106/model/ApplicationProxyRule.h
  include/tencentcloud/teo/v20220106/model/SmartRouting.h
  include/tencentcloud/teo/v20220106/model/DescribeDnsDataResponse.h
  include/tencentcloud/teo/v20220106/model/Zone.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusRequest.h
  include/tencentcloud/teo/v20220106/model/CacheConfigCache.h
  include/tencentcloud/teo/v20220106/model/CertFilter.h
  include/tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusRequest.h
  include/tencentcloud/teo/v20220106/model/Quic.h
  include/tencentcloud/teo/v20220106/model/DescribeCnameStatusResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeLoadBalancingRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleRequest.h
  include/tencentcloud/teo/v20220106/model/CnameStatus.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneSettingResponse.h
  include/tencentcloud/teo/v20220106/model/DownloadL7LogsResponse.h
  include/tencentcloud/teo/v20220106/model/CreateDnsRecordResponse.h
  include/tencentcloud/teo/v20220106/model/ServerCertInfo.h
  include/tencentcloud/teo/v20220106/model/DescribeZonesRequest.h
  include/tencentcloud/teo/v20220106/model/OriginRecord.h
  include/tencentcloud/teo/v20220106/model/CreatePrefetchTaskRequest.h
  include/tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleRequest.h
  include/tencentcloud/teo/v20220106/model/CacheConfigFollowOrigin.h
  include/tencentcloud/teo/v20220106/model/VanityNameServers.h
  include/tencentcloud/teo/v20220106/model/DescribeApplicationProxyResponse.h
  include/tencentcloud/teo/v20220106/model/CreateLoadBalancingResponse.h
  include/tencentcloud/teo/v20220106/model/IdentifyZoneResponse.h
  include/tencentcloud/teo/v20220106/model/WebSocket.h
  include/tencentcloud/teo/v20220106/model/DataItem.h
  include/tencentcloud/teo/v20220106/model/ModifyLoadBalancingRequest.h
  include/tencentcloud/teo/v20220106/model/CreateLoadBalancingRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeDnssecRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailResponse.h
  include/tencentcloud/teo/v20220106/model/DescribePrefetchTasksRequest.h
  include/tencentcloud/teo/v20220106/model/DnsRecord.h
  include/tencentcloud/teo/v20220106/model/DescribeDnsRecordsRequest.h
  include/tencentcloud/teo/v20220106/model/CreatePrefetchTaskResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleResponse.h
  include/tencentcloud/teo/v20220106/model/FailReason.h
  include/tencentcloud/teo/v20220106/model/CreateZoneRequest.h
  include/tencentcloud/teo/v20220106/model/OriginRecordPrivateParameter.h
  include/tencentcloud/teo/v20220106/model/CheckCertificateResponse.h
  include/tencentcloud/teo/v20220106/model/DescribePurgeTasksResponse.h
  include/tencentcloud/teo/v20220106/model/DownloadL7LogsRequest.h
  include/tencentcloud/teo/v20220106/model/DeleteLoadBalancingResponse.h
  include/tencentcloud/teo/v20220106/model/CheckCertificateRequest.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleRequest.h
  include/tencentcloud/teo/v20220106/model/ForceRedirect.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusResponse.h
  include/tencentcloud/teo/v20220106/model/DetailHost.h
  include/tencentcloud/teo/v20220106/model/DescribeDnsRecordsResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeHostsCertificateRequest.h
  include/tencentcloud/teo/v20220106/model/Hsts.h
  include/tencentcloud/teo/v20220106/model/ModifyHostsCertificateResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyLoadBalancingResponse.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyDnsRecordResponse.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyRequest.h
  include/tencentcloud/teo/v20220106/model/PostMaxSize.h
  include/tencentcloud/teo/v20220106/model/DescribeCnameStatusRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeDnssecResponse.h
  include/tencentcloud/teo/v20220106/model/CreateZoneResponse.h
  include/tencentcloud/teo/v20220106/model/DnsDataFilter.h
  include/tencentcloud/teo/v20220106/model/DeleteLoadBalancingRequest.h
  include/tencentcloud/teo/v20220106/model/ApplicationProxy.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyResponse.h
  include/tencentcloud/teo/v20220106/model/CacheKey.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeZonesResponse.h
  include/tencentcloud/teo/v20220106/model/Header.h
  include/tencentcloud/teo/v20220106/model/DescribeZoneDetailsRequest.h
  include/tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeApplicationProxyRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusRequest.h
  include/tencentcloud/teo/v20220106/model/QueryString.h
  include/tencentcloud/teo/v20220106/model/ReclaimZoneRequest.h
  include/tencentcloud/teo/v20220106/model/DeleteZoneRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyDefaultCertificateResponse.h
  include/tencentcloud/teo/v20220106/model/ClientIp.h
  include/tencentcloud/teo/v20220106/model/DescribeHostsCertificateResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeZoneSettingResponse.h
  include/tencentcloud/teo/v20220106/model/DescribePurgeTasksRequest.h
  include/tencentcloud/teo/v20220106/model/IdentifyZoneRequest.h
  include/tencentcloud/teo/v20220106/model/CacheConfig.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpResponse.h
  include/tencentcloud/teo/v20220106/model/MaxAge.h
  include/tencentcloud/teo/v20220106/model/DeleteDnsRecordsRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyHostsCertificateRequest.h
  include/tencentcloud/teo/v20220106/model/ModifyZoneStatusResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeDnsDataRequest.h
  include/tencentcloud/teo/v20220106/model/CreatePurgeTaskRequest.h
  include/tencentcloud/teo/v20220106/model/DeleteDnsRecordsResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeHostsSettingRequest.h
  include/tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeIdentificationResponse.h
  include/tencentcloud/teo/v20220106/model/OriginGroup.h
  include/tencentcloud/teo/v20220106/model/DescribeLoadBalancingResponse.h
  include/tencentcloud/teo/v20220106/model/ModifyDnssecResponse.h
  include/tencentcloud/teo/v20220106/model/ScanDnsRecordsRequest.h
  include/tencentcloud/teo/v20220106/model/ImportDnsRecordsResponse.h
  include/tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailRequest.h
  include/tencentcloud/teo/v20220106/model/DefaultServerCertInfo.h
  include/tencentcloud/teo/v20220106/model/DnssecInfo.h
  include/tencentcloud/teo/v20220106/model/DnsRecordFilter.h
  include/tencentcloud/teo/v20220106/model/UpstreamHttp2.h
  include/tencentcloud/teo/v20220106/model/OfflineCache.h
  include/tencentcloud/teo/v20220106/model/VanityNameServersIps.h
  )

set(teo_src
  src/v20220106/TeoClient.cpp
  src/v20220106/model/Compression.cpp
  src/v20220106/model/HostCertSetting.cpp
  src/v20220106/model/ModifyDefaultCertificateRequest.cpp
  src/v20220106/model/DescribeZoneDetailsResponse.cpp
  src/v20220106/model/DeleteApplicationProxyResponse.cpp
  src/v20220106/model/Https.cpp
  src/v20220106/model/ScanDnsRecordsResponse.cpp
  src/v20220106/model/ZoneFilter.cpp
  src/v20220106/model/ModifyLoadBalancingStatusResponse.cpp
  src/v20220106/model/DescribePrefetchTasksResponse.cpp
  src/v20220106/model/DeleteApplicationProxyRequest.cpp
  src/v20220106/model/DescribeZoneSettingRequest.cpp
  src/v20220106/model/ModifyZoneStatusRequest.cpp
  src/v20220106/model/ModifyDnsRecordRequest.cpp
  src/v20220106/model/CreateApplicationProxyRulesRequest.cpp
  src/v20220106/model/LoadBalancing.cpp
  src/v20220106/model/ModifyDnssecRequest.cpp
  src/v20220106/model/ModifyZoneSettingRequest.cpp
  src/v20220106/model/DescribeApplicationProxyDetailRequest.cpp
  src/v20220106/model/CreateApplicationProxyResponse.cpp
  src/v20220106/model/ImportDnsRecordsRequest.cpp
  src/v20220106/model/CacheConfigNoCache.cpp
  src/v20220106/model/Origin.cpp
  src/v20220106/model/Task.cpp
  src/v20220106/model/CertSort.cpp
  src/v20220106/model/DescribeHostsSettingResponse.cpp
  src/v20220106/model/ModifyZoneResponse.cpp
  src/v20220106/model/ModifyZoneRequest.cpp
  src/v20220106/model/DeleteZoneResponse.cpp
  src/v20220106/model/ReclaimZoneResponse.cpp
  src/v20220106/model/CreatePurgeTaskResponse.cpp
  src/v20220106/model/DeleteApplicationProxyRuleResponse.cpp
  src/v20220106/model/DescribeIdentificationRequest.cpp
  src/v20220106/model/CreateDnsRecordRequest.cpp
  src/v20220106/model/L7OfflineLog.cpp
  src/v20220106/model/ApplicationProxyRule.cpp
  src/v20220106/model/SmartRouting.cpp
  src/v20220106/model/DescribeDnsDataResponse.cpp
  src/v20220106/model/Zone.cpp
  src/v20220106/model/ModifyApplicationProxyStatusRequest.cpp
  src/v20220106/model/CacheConfigCache.cpp
  src/v20220106/model/CertFilter.cpp
  src/v20220106/model/ModifyLoadBalancingStatusRequest.cpp
  src/v20220106/model/Quic.cpp
  src/v20220106/model/DescribeCnameStatusResponse.cpp
  src/v20220106/model/DescribeLoadBalancingRequest.cpp
  src/v20220106/model/ModifyApplicationProxyRuleRequest.cpp
  src/v20220106/model/CnameStatus.cpp
  src/v20220106/model/ModifyZoneSettingResponse.cpp
  src/v20220106/model/DownloadL7LogsResponse.cpp
  src/v20220106/model/CreateDnsRecordResponse.cpp
  src/v20220106/model/ServerCertInfo.cpp
  src/v20220106/model/DescribeZonesRequest.cpp
  src/v20220106/model/OriginRecord.cpp
  src/v20220106/model/CreatePrefetchTaskRequest.cpp
  src/v20220106/model/DeleteApplicationProxyRuleRequest.cpp
  src/v20220106/model/CacheConfigFollowOrigin.cpp
  src/v20220106/model/VanityNameServers.cpp
  src/v20220106/model/DescribeApplicationProxyResponse.cpp
  src/v20220106/model/CreateLoadBalancingResponse.cpp
  src/v20220106/model/IdentifyZoneResponse.cpp
  src/v20220106/model/WebSocket.cpp
  src/v20220106/model/DataItem.cpp
  src/v20220106/model/ModifyLoadBalancingRequest.cpp
  src/v20220106/model/CreateLoadBalancingRequest.cpp
  src/v20220106/model/DescribeDnssecRequest.cpp
  src/v20220106/model/DescribeLoadBalancingDetailResponse.cpp
  src/v20220106/model/DescribePrefetchTasksRequest.cpp
  src/v20220106/model/DnsRecord.cpp
  src/v20220106/model/DescribeDnsRecordsRequest.cpp
  src/v20220106/model/CreatePrefetchTaskResponse.cpp
  src/v20220106/model/DescribeDefaultCertificatesRequest.cpp
  src/v20220106/model/ModifyApplicationProxyRuleResponse.cpp
  src/v20220106/model/FailReason.cpp
  src/v20220106/model/CreateZoneRequest.cpp
  src/v20220106/model/OriginRecordPrivateParameter.cpp
  src/v20220106/model/CheckCertificateResponse.cpp
  src/v20220106/model/DescribePurgeTasksResponse.cpp
  src/v20220106/model/DownloadL7LogsRequest.cpp
  src/v20220106/model/DeleteLoadBalancingResponse.cpp
  src/v20220106/model/CheckCertificateRequest.cpp
  src/v20220106/model/CreateApplicationProxyRuleRequest.cpp
  src/v20220106/model/ForceRedirect.cpp
  src/v20220106/model/ModifyApplicationProxyRequest.cpp
  src/v20220106/model/ModifyApplicationProxyStatusResponse.cpp
  src/v20220106/model/DetailHost.cpp
  src/v20220106/model/DescribeDnsRecordsResponse.cpp
  src/v20220106/model/DescribeApplicationProxyDetailResponse.cpp
  src/v20220106/model/ModifyZoneCnameSpeedUpRequest.cpp
  src/v20220106/model/DescribeHostsCertificateRequest.cpp
  src/v20220106/model/Hsts.cpp
  src/v20220106/model/ModifyHostsCertificateResponse.cpp
  src/v20220106/model/ModifyLoadBalancingResponse.cpp
  src/v20220106/model/CreateApplicationProxyRuleResponse.cpp
  src/v20220106/model/ModifyDnsRecordResponse.cpp
  src/v20220106/model/CreateApplicationProxyRequest.cpp
  src/v20220106/model/PostMaxSize.cpp
  src/v20220106/model/DescribeCnameStatusRequest.cpp
  src/v20220106/model/DescribeDnssecResponse.cpp
  src/v20220106/model/CreateZoneResponse.cpp
  src/v20220106/model/DnsDataFilter.cpp
  src/v20220106/model/DeleteLoadBalancingRequest.cpp
  src/v20220106/model/ApplicationProxy.cpp
  src/v20220106/model/ModifyApplicationProxyResponse.cpp
  src/v20220106/model/CacheKey.cpp
  src/v20220106/model/ModifyApplicationProxyRuleStatusResponse.cpp
  src/v20220106/model/DescribeZonesResponse.cpp
  src/v20220106/model/Header.cpp
  src/v20220106/model/DescribeZoneDetailsRequest.cpp
  src/v20220106/model/DescribeDefaultCertificatesResponse.cpp
  src/v20220106/model/DescribeApplicationProxyRequest.cpp
  src/v20220106/model/ModifyApplicationProxyRuleStatusRequest.cpp
  src/v20220106/model/QueryString.cpp
  src/v20220106/model/ReclaimZoneRequest.cpp
  src/v20220106/model/DeleteZoneRequest.cpp
  src/v20220106/model/ModifyDefaultCertificateResponse.cpp
  src/v20220106/model/ClientIp.cpp
  src/v20220106/model/DescribeHostsCertificateResponse.cpp
  src/v20220106/model/DescribeZoneSettingResponse.cpp
  src/v20220106/model/DescribePurgeTasksRequest.cpp
  src/v20220106/model/IdentifyZoneRequest.cpp
  src/v20220106/model/CacheConfig.cpp
  src/v20220106/model/ModifyZoneCnameSpeedUpResponse.cpp
  src/v20220106/model/MaxAge.cpp
  src/v20220106/model/DeleteDnsRecordsRequest.cpp
  src/v20220106/model/ModifyHostsCertificateRequest.cpp
  src/v20220106/model/ModifyZoneStatusResponse.cpp
  src/v20220106/model/DescribeDnsDataRequest.cpp
  src/v20220106/model/CreatePurgeTaskRequest.cpp
  src/v20220106/model/DeleteDnsRecordsResponse.cpp
  src/v20220106/model/DescribeHostsSettingRequest.cpp
  src/v20220106/model/CreateApplicationProxyRulesResponse.cpp
  src/v20220106/model/DescribeIdentificationResponse.cpp
  src/v20220106/model/OriginGroup.cpp
  src/v20220106/model/DescribeLoadBalancingResponse.cpp
  src/v20220106/model/ModifyDnssecResponse.cpp
  src/v20220106/model/ScanDnsRecordsRequest.cpp
  src/v20220106/model/ImportDnsRecordsResponse.cpp
  src/v20220106/model/DescribeLoadBalancingDetailRequest.cpp
  src/v20220106/model/DefaultServerCertInfo.cpp
  src/v20220106/model/DnssecInfo.cpp
  src/v20220106/model/DnsRecordFilter.cpp
  src/v20220106/model/UpstreamHttp2.cpp
  src/v20220106/model/OfflineCache.cpp
  src/v20220106/model/VanityNameServersIps.cpp
  )

set(teo_include
    include/tencentcloud/teo
  )

add_library(teo ${LIB_TYPE}
  ${teo_public_header}
  ${teo_public_header_model}
  ${teo_src})

set_target_properties(teo
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}teo
  )

target_include_directories(teo
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(teo
  core)

#install(FILES ${teo_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/teo/v20220106)
#install(FILES ${teo_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/teo/v20220106/model)
install(DIRECTORY ${teo_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS teo
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

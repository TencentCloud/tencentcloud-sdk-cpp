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

set(antiddos_public_header
  include/tencentcloud/antiddos/v20200309/AntiddosClient.h
  )

set(antiddos_public_header_model
  include/tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeBlackWhiteIpListResponse.h
  include/tencentcloud/antiddos/v20200309/model/ProxyTypeInfo.h
  include/tencentcloud/antiddos/v20200309/model/CreateBoundIPRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfig.h
  include/tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListResponse.h
  include/tencentcloud/antiddos/v20200309/model/IPAlarmThresholdRelation.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/InstanceRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h
  include/tencentcloud/antiddos/v20200309/model/KeyValue.h
  include/tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsRequest.h
  include/tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSAIRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesRequest.h
  include/tencentcloud/antiddos/v20200309/model/StaticPackRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DeleteBlackWhiteIpListResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainRequest.h
  include/tencentcloud/antiddos/v20200309/model/BoundIpInfo.h
  include/tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressResponse.h
  include/tencentcloud/antiddos/v20200309/model/BGPIPInstance.h
  include/tencentcloud/antiddos/v20200309/model/DeleteBlackWhiteIpListRequest.h
  include/tencentcloud/antiddos/v20200309/model/SourceServer.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameResponse.h
  include/tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressRequest.h
  include/tencentcloud/antiddos/v20200309/model/BlackWhiteIpRelation.h
  include/tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyResponse.h
  include/tencentcloud/antiddos/v20200309/model/EipAddressPackRelation.h
  include/tencentcloud/antiddos/v20200309/model/ProtocolBlockRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/BGPIPInstanceUsages.h
  include/tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/Layer7Rule.h
  include/tencentcloud/antiddos/v20200309/model/L4RuleSource.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyRequest.h
  include/tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressResponse.h
  include/tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfigRelation.h
  include/tencentcloud/antiddos/v20200309/model/PackInfo.h
  include/tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeBlackWhiteIpListRequest.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/ModifyL7RulesEdgeRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusResponse.h
  include/tencentcloud/antiddos/v20200309/model/WaterPrintConfig.h
  include/tencentcloud/antiddos/v20200309/model/ProtocolBlockConfig.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListListenerRequest.h
  include/tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/Layer4Rule.h
  include/tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/BGPIPInstanceSpecification.h
  include/tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListResponse.h
  include/tencentcloud/antiddos/v20200309/model/DDoSAIRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/ListenerCcThreholdConfig.h
  include/tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusRequest.h
  include/tencentcloud/antiddos/v20200309/model/IPLineInfo.h
  include/tencentcloud/antiddos/v20200309/model/EipAddressRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListListenerResponse.h
  include/tencentcloud/antiddos/v20200309/model/ProtectThresholdRelation.h
  include/tencentcloud/antiddos/v20200309/model/ModifyL7RulesEdgeResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsResponse.h
  include/tencentcloud/antiddos/v20200309/model/DDoSSpeedLimitConfig.h
  include/tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/CertIdInsL7Rules.h
  include/tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/SuccessCode.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/PortSegment.h
  include/tencentcloud/antiddos/v20200309/model/PacketFilterConfig.h
  include/tencentcloud/antiddos/v20200309/model/DefaultAlarmThreshold.h
  include/tencentcloud/antiddos/v20200309/model/ForwardListener.h
  include/tencentcloud/antiddos/v20200309/model/BGPInstanceSpecification.h
  include/tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyRequest.h
  include/tencentcloud/antiddos/v20200309/model/WaterPrintRelation.h
  include/tencentcloud/antiddos/v20200309/model/InsL7Rules.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIResponse.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressRequest.h
  include/tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListRequest.h
  include/tencentcloud/antiddos/v20200309/model/CreateBoundIPResponse.h
  include/tencentcloud/antiddos/v20200309/model/SpeedValue.h
  include/tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainResponse.h
  include/tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainResponse.h
  include/tencentcloud/antiddos/v20200309/model/EipProductInfo.h
  include/tencentcloud/antiddos/v20200309/model/CreateDDoSAIResponse.h
  include/tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfigRelation.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/RegionInfo.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigRequest.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/BGPInstance.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/BGPInstanceUsages.h
  include/tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/L7RuleEntry.h
  include/tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyResponse.h
  include/tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListRequest.h
  include/tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigResponse.h
  include/tencentcloud/antiddos/v20200309/model/SchedulingDomainInfo.h
  include/tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdRequest.h
  include/tencentcloud/antiddos/v20200309/model/WaterPrintKey.h
  include/tencentcloud/antiddos/v20200309/model/PacketFilterRelation.h
  include/tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigRequest.h
  )

set(antiddos_src
  src/v20200309/AntiddosClient.cpp
  src/v20200309/model/CreateDefaultAlarmThresholdRequest.cpp
  src/v20200309/model/DescribeListBGPIPInstancesResponse.cpp
  src/v20200309/model/DescribeBlackWhiteIpListResponse.cpp
  src/v20200309/model/ProxyTypeInfo.cpp
  src/v20200309/model/CreateBoundIPRequest.cpp
  src/v20200309/model/DescribeListSchedulingDomainRequest.cpp
  src/v20200309/model/CreateWaterPrintConfigRequest.cpp
  src/v20200309/model/DDoSGeoIPBlockConfig.cpp
  src/v20200309/model/CreateBlackWhiteIpListResponse.cpp
  src/v20200309/model/IPAlarmThresholdRelation.cpp
  src/v20200309/model/ModifyDDoSGeoIPBlockConfigRequest.cpp
  src/v20200309/model/DescribeL7RulesBySSLCertIdResponse.cpp
  src/v20200309/model/DescribeListDDoSSpeedLimitConfigRequest.cpp
  src/v20200309/model/InstanceRelation.cpp
  src/v20200309/model/DescribeListProtocolBlockConfigResponse.cpp
  src/v20200309/model/DescribeListBGPInstancesRequest.cpp
  src/v20200309/model/KeyValue.cpp
  src/v20200309/model/DeleteDDoSSpeedLimitConfigRequest.cpp
  src/v20200309/model/CreatePacketFilterConfigResponse.cpp
  src/v20200309/model/CreateL7RuleCertsRequest.cpp
  src/v20200309/model/DeleteDDoSGeoIPBlockConfigRequest.cpp
  src/v20200309/model/CreateIPAlarmThresholdConfigRequest.cpp
  src/v20200309/model/DescribeDefaultAlarmThresholdResponse.cpp
  src/v20200309/model/CreateDDoSAIRequest.cpp
  src/v20200309/model/DescribeListProtectThresholdConfigRequest.cpp
  src/v20200309/model/CreateWaterPrintConfigResponse.cpp
  src/v20200309/model/DescribeListBGPIPInstancesRequest.cpp
  src/v20200309/model/StaticPackRelation.cpp
  src/v20200309/model/DescribeL7RulesBySSLCertIdRequest.cpp
  src/v20200309/model/DescribeListPacketFilterConfigResponse.cpp
  src/v20200309/model/DeleteBlackWhiteIpListResponse.cpp
  src/v20200309/model/CreateSchedulingDomainRequest.cpp
  src/v20200309/model/BoundIpInfo.cpp
  src/v20200309/model/DisassociateDDoSEipAddressResponse.cpp
  src/v20200309/model/BGPIPInstance.cpp
  src/v20200309/model/DeleteBlackWhiteIpListRequest.cpp
  src/v20200309/model/SourceServer.cpp
  src/v20200309/model/ModifyDomainUsrNameResponse.cpp
  src/v20200309/model/DisassociateDDoSEipAddressRequest.cpp
  src/v20200309/model/BlackWhiteIpRelation.cpp
  src/v20200309/model/DeleteWaterPrintKeyResponse.cpp
  src/v20200309/model/EipAddressPackRelation.cpp
  src/v20200309/model/ProtocolBlockRelation.cpp
  src/v20200309/model/DescribeListPacketFilterConfigRequest.cpp
  src/v20200309/model/BGPIPInstanceUsages.cpp
  src/v20200309/model/ModifyPacketFilterConfigResponse.cpp
  src/v20200309/model/DescribeListDDoSGeoIPBlockConfigRequest.cpp
  src/v20200309/model/Layer7Rule.cpp
  src/v20200309/model/L4RuleSource.cpp
  src/v20200309/model/CreateDDoSSpeedLimitConfigRequest.cpp
  src/v20200309/model/CreateDDoSGeoIPBlockConfigRequest.cpp
  src/v20200309/model/CreateProtocolBlockConfigRequest.cpp
  src/v20200309/model/DeleteWaterPrintKeyRequest.cpp
  src/v20200309/model/AssociateDDoSEipAddressResponse.cpp
  src/v20200309/model/DDoSSpeedLimitConfigRelation.cpp
  src/v20200309/model/PackInfo.cpp
  src/v20200309/model/ModifyPacketFilterConfigRequest.cpp
  src/v20200309/model/DescribeBlackWhiteIpListRequest.cpp
  src/v20200309/model/ModifyDomainUsrNameRequest.cpp
  src/v20200309/model/CreateDDoSSpeedLimitConfigResponse.cpp
  src/v20200309/model/DeletePacketFilterConfigRequest.cpp
  src/v20200309/model/ModifyL7RulesEdgeRequest.cpp
  src/v20200309/model/DescribeListDDoSGeoIPBlockConfigResponse.cpp
  src/v20200309/model/DescribeBasicDeviceStatusResponse.cpp
  src/v20200309/model/WaterPrintConfig.cpp
  src/v20200309/model/ProtocolBlockConfig.cpp
  src/v20200309/model/DescribeListListenerRequest.cpp
  src/v20200309/model/DeleteWaterPrintConfigResponse.cpp
  src/v20200309/model/Layer4Rule.cpp
  src/v20200309/model/DeletePacketFilterConfigResponse.cpp
  src/v20200309/model/CreateProtocolBlockConfigResponse.cpp
  src/v20200309/model/BGPIPInstanceSpecification.cpp
  src/v20200309/model/CreateIPAlarmThresholdConfigResponse.cpp
  src/v20200309/model/DeleteWaterPrintConfigRequest.cpp
  src/v20200309/model/DescribeListBlackWhiteIpListResponse.cpp
  src/v20200309/model/DDoSAIRelation.cpp
  src/v20200309/model/DescribeListDDoSSpeedLimitConfigResponse.cpp
  src/v20200309/model/CreateDDoSGeoIPBlockConfigResponse.cpp
  src/v20200309/model/ListenerCcThreholdConfig.cpp
  src/v20200309/model/DescribeBasicDeviceStatusRequest.cpp
  src/v20200309/model/IPLineInfo.cpp
  src/v20200309/model/EipAddressRelation.cpp
  src/v20200309/model/DescribeListListenerResponse.cpp
  src/v20200309/model/ProtectThresholdRelation.cpp
  src/v20200309/model/ModifyL7RulesEdgeResponse.cpp
  src/v20200309/model/CreateL7RuleCertsResponse.cpp
  src/v20200309/model/DDoSSpeedLimitConfig.cpp
  src/v20200309/model/AssociateDDoSEipLoadBalancerRequest.cpp
  src/v20200309/model/DescribeListProtectThresholdConfigResponse.cpp
  src/v20200309/model/CertIdInsL7Rules.cpp
  src/v20200309/model/CreateDefaultAlarmThresholdResponse.cpp
  src/v20200309/model/DescribeListIPAlarmConfigResponse.cpp
  src/v20200309/model/SuccessCode.cpp
  src/v20200309/model/DescribeListBGPInstancesResponse.cpp
  src/v20200309/model/DescribeListDDoSAIRequest.cpp
  src/v20200309/model/DescribeListIPAlarmConfigRequest.cpp
  src/v20200309/model/PortSegment.cpp
  src/v20200309/model/PacketFilterConfig.cpp
  src/v20200309/model/DefaultAlarmThreshold.cpp
  src/v20200309/model/ForwardListener.cpp
  src/v20200309/model/BGPInstanceSpecification.cpp
  src/v20200309/model/SwitchWaterPrintConfigResponse.cpp
  src/v20200309/model/CreateWaterPrintKeyRequest.cpp
  src/v20200309/model/WaterPrintRelation.cpp
  src/v20200309/model/InsL7Rules.cpp
  src/v20200309/model/DescribeListDDoSAIResponse.cpp
  src/v20200309/model/ModifyDDoSSpeedLimitConfigRequest.cpp
  src/v20200309/model/AssociateDDoSEipAddressRequest.cpp
  src/v20200309/model/AssociateDDoSEipLoadBalancerResponse.cpp
  src/v20200309/model/CreateBlackWhiteIpListRequest.cpp
  src/v20200309/model/CreateBoundIPResponse.cpp
  src/v20200309/model/SpeedValue.cpp
  src/v20200309/model/SwitchWaterPrintConfigRequest.cpp
  src/v20200309/model/DescribeListSchedulingDomainResponse.cpp
  src/v20200309/model/CreateSchedulingDomainResponse.cpp
  src/v20200309/model/EipProductInfo.cpp
  src/v20200309/model/CreateDDoSAIResponse.cpp
  src/v20200309/model/DDoSGeoIPBlockConfigRelation.cpp
  src/v20200309/model/DescribeListProtocolBlockConfigRequest.cpp
  src/v20200309/model/RegionInfo.cpp
  src/v20200309/model/DescribeListWaterPrintConfigRequest.cpp
  src/v20200309/model/ModifyDDoSGeoIPBlockConfigResponse.cpp
  src/v20200309/model/BGPInstance.cpp
  src/v20200309/model/DescribeListWaterPrintConfigResponse.cpp
  src/v20200309/model/BGPInstanceUsages.cpp
  src/v20200309/model/DeleteDDoSSpeedLimitConfigResponse.cpp
  src/v20200309/model/L7RuleEntry.cpp
  src/v20200309/model/CreateWaterPrintKeyResponse.cpp
  src/v20200309/model/DeleteDDoSGeoIPBlockConfigResponse.cpp
  src/v20200309/model/DescribeListBlackWhiteIpListRequest.cpp
  src/v20200309/model/ModifyDDoSSpeedLimitConfigResponse.cpp
  src/v20200309/model/SchedulingDomainInfo.cpp
  src/v20200309/model/DescribeDefaultAlarmThresholdRequest.cpp
  src/v20200309/model/WaterPrintKey.cpp
  src/v20200309/model/PacketFilterRelation.cpp
  src/v20200309/model/CreatePacketFilterConfigRequest.cpp
  )

set(antiddos_include
    include/tencentcloud/antiddos
  )

add_library(antiddos ${LIB_TYPE}
  ${antiddos_public_header}
  ${antiddos_public_header_model}
  ${antiddos_src})

set_target_properties(antiddos
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}antiddos
  )

target_include_directories(antiddos
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(antiddos
  core)

#install(FILES ${antiddos_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/antiddos/v20200309)
#install(FILES ${antiddos_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/antiddos/v20200309/model)
install(DIRECTORY ${antiddos_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS antiddos
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

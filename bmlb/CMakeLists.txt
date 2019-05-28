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

set(bmlb_public_header
  include/tencentcloud/bmlb/v20180625/BmlbClient.h
  )

set(bmlb_public_header_model
  include/tencentcloud/bmlb/v20180625/model/SetTrafficMirrorHealthSwitchRequest.h
  include/tencentcloud/bmlb/v20180625/model/SetTrafficMirrorAliasResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteL7RulesRequest.h
  include/tencentcloud/bmlb/v20180625/model/DeleteTrafficMirrorResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7BackendPortResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendProbePortResponse.h
  include/tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiver.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendPortResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7LocationsResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusRequest.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL4Backend.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4ListenerResponse.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoL4Listener.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4ListenerInfoRequest.h
  include/tencentcloud/bmlb/v20180625/model/L4ListenerInfo.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7RulesRequest.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL7BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendWeightResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteL7DomainsResponse.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoBackend.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL4BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindL7Backend.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7ListenerResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerTaskResultRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7RulesResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateTrafficMirrorResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeDevicesBindInfoRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindL4BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/TrafficMirrorListener.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenersExResponse.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL7Backend.h
  include/tencentcloud/bmlb/v20180625/model/TrafficMirrorReceiver.h
  include/tencentcloud/bmlb/v20180625/model/TrafficMirrorPortStatus.h
  include/tencentcloud/bmlb/v20180625/model/UploadCertResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiversResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendProbePortRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsRequest.h
  include/tencentcloud/bmlb/v20180625/model/UploadCertRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4ListenerInfoResponse.h
  include/tencentcloud/bmlb/v20180625/model/BindTrafficMirrorListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7BackendPortRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendPortRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4ListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7LocationsRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateL4ListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7BackendWeightResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/L7Listener.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7RulesRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7BackendWeightRequest.h
  include/tencentcloud/bmlb/v20180625/model/CreateL4ListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/ReplaceCertRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindL7BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/L7Rule.h
  include/tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiversResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteL7DomainsRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiversRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindTrafficMirrorListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/BindL7BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4Backend.h
  include/tencentcloud/bmlb/v20180625/model/DescribeCertDetailResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusResponse.h
  include/tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiversResponse.h
  include/tencentcloud/bmlb/v20180625/model/ReplaceCertResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerPortInfoRequest.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoLocation.h
  include/tencentcloud/bmlb/v20180625/model/SetTrafficMirrorHealthSwitchResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteLoadBalancerRequest.h
  include/tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7Rule.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7RulesResponse.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7ListenerRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiver.h
  include/tencentcloud/bmlb/v20180625/model/L7ExListener.h
  include/tencentcloud/bmlb/v20180625/model/L7ListenerInfo.h
  include/tencentcloud/bmlb/v20180625/model/L7ListenerInfoRule.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/Filter.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoRule.h
  include/tencentcloud/bmlb/v20180625/model/TrafficMirror.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancersRequest.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoLoadBalancer.h
  include/tencentcloud/bmlb/v20180625/model/L4Listener.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7Listener.h
  include/tencentcloud/bmlb/v20180625/model/DeleteLoadBalancerResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateTrafficMirrorRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindL4BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenerInfoResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateLoadBalancersResponse.h
  include/tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiver.h
  include/tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeResponse.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL7BackendsRequest.h
  include/tencentcloud/bmlb/v20180625/model/L7ListenerInfoLocation.h
  include/tencentcloud/bmlb/v20180625/model/L7RulesLocation.h
  include/tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeListener.h
  include/tencentcloud/bmlb/v20180625/model/TrafficMirrorReciversStatus.h
  include/tencentcloud/bmlb/v20180625/model/CreateLoadBalancersRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerPortInfoResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenerInfoRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4ListenerRequest.h
  include/tencentcloud/bmlb/v20180625/model/L4Backend.h
  include/tencentcloud/bmlb/v20180625/model/L7Backend.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL7LocationRule.h
  include/tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerRequest.h
  include/tencentcloud/bmlb/v20180625/model/DevicesBindInfoL7Listener.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4ListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7ListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateLoadBalancerBzConf.h
  include/tencentcloud/bmlb/v20180625/model/DeleteTrafficMirrorRequest.h
  include/tencentcloud/bmlb/v20180625/model/CreateL7ListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/BindL4Backend.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL7ListenersExRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerTaskResultResponse.h
  include/tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiversRequest.h
  include/tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorListenersRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeCertDetailRequest.h
  include/tencentcloud/bmlb/v20180625/model/DescribeDevicesBindInfoResponse.h
  include/tencentcloud/bmlb/v20180625/model/LoadBalancerPortInfoListener.h
  include/tencentcloud/bmlb/v20180625/model/DescribeL4BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/CreateL4Listener.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorListenersResponse.h
  include/tencentcloud/bmlb/v20180625/model/DescribeLoadBalancersResponse.h
  include/tencentcloud/bmlb/v20180625/model/DeleteL7RulesResponse.h
  include/tencentcloud/bmlb/v20180625/model/CertDetailLoadBalancer.h
  include/tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiversRequest.h
  include/tencentcloud/bmlb/v20180625/model/SetTrafficMirrorAliasRequest.h
  include/tencentcloud/bmlb/v20180625/model/UnbindL4BackendsResponse.h
  include/tencentcloud/bmlb/v20180625/model/L7ListenerInfoBackend.h
  include/tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeRequest.h
  include/tencentcloud/bmlb/v20180625/model/ModifyL4BackendWeightRequest.h
  include/tencentcloud/bmlb/v20180625/model/LoadBalancer.h
  )

set(bmlb_src
  src/v20180625/BmlbClient.cpp
  src/v20180625/model/SetTrafficMirrorHealthSwitchRequest.cpp
  src/v20180625/model/SetTrafficMirrorAliasResponse.cpp
  src/v20180625/model/DeleteL7RulesRequest.cpp
  src/v20180625/model/DeleteTrafficMirrorResponse.cpp
  src/v20180625/model/ModifyL7BackendPortResponse.cpp
  src/v20180625/model/ModifyL4BackendProbePortResponse.cpp
  src/v20180625/model/BindTrafficMirrorReceiver.cpp
  src/v20180625/model/ModifyL4BackendPortResponse.cpp
  src/v20180625/model/ModifyL7LocationsResponse.cpp
  src/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusRequest.cpp
  src/v20180625/model/UnbindL4Backend.cpp
  src/v20180625/model/ModifyL4ListenerResponse.cpp
  src/v20180625/model/DevicesBindInfoL4Listener.cpp
  src/v20180625/model/DescribeL4ListenerInfoRequest.cpp
  src/v20180625/model/L4ListenerInfo.cpp
  src/v20180625/model/DescribeL7RulesRequest.cpp
  src/v20180625/model/UnbindL7BackendsResponse.cpp
  src/v20180625/model/ModifyL4BackendWeightResponse.cpp
  src/v20180625/model/DeleteL7DomainsResponse.cpp
  src/v20180625/model/DevicesBindInfoBackend.cpp
  src/v20180625/model/UnbindL4BackendsRequest.cpp
  src/v20180625/model/DescribeL7ListenersRequest.cpp
  src/v20180625/model/DescribeTrafficMirrorListenersRequest.cpp
  src/v20180625/model/BindL7Backend.cpp
  src/v20180625/model/ModifyL7ListenerResponse.cpp
  src/v20180625/model/DescribeLoadBalancerTaskResultRequest.cpp
  src/v20180625/model/DescribeL7RulesResponse.cpp
  src/v20180625/model/CreateTrafficMirrorResponse.cpp
  src/v20180625/model/DescribeDevicesBindInfoRequest.cpp
  src/v20180625/model/BindL4BackendsResponse.cpp
  src/v20180625/model/TrafficMirrorListener.cpp
  src/v20180625/model/DescribeL7ListenersExResponse.cpp
  src/v20180625/model/UnbindL7Backend.cpp
  src/v20180625/model/TrafficMirrorReceiver.cpp
  src/v20180625/model/TrafficMirrorPortStatus.cpp
  src/v20180625/model/UploadCertResponse.cpp
  src/v20180625/model/DescribeTrafficMirrorReceiversResponse.cpp
  src/v20180625/model/DeleteListenersRequest.cpp
  src/v20180625/model/ModifyL4BackendProbePortRequest.cpp
  src/v20180625/model/DescribeTrafficMirrorsRequest.cpp
  src/v20180625/model/UploadCertRequest.cpp
  src/v20180625/model/DescribeL4ListenerInfoResponse.cpp
  src/v20180625/model/BindTrafficMirrorListenersRequest.cpp
  src/v20180625/model/ModifyL7BackendPortRequest.cpp
  src/v20180625/model/ModifyL4BackendPortRequest.cpp
  src/v20180625/model/DescribeL4ListenersResponse.cpp
  src/v20180625/model/ModifyL7LocationsRequest.cpp
  src/v20180625/model/ModifyLoadBalancerResponse.cpp
  src/v20180625/model/CreateL4ListenersResponse.cpp
  src/v20180625/model/ModifyL7BackendWeightResponse.cpp
  src/v20180625/model/DescribeTrafficMirrorsResponse.cpp
  src/v20180625/model/DescribeL7BackendsRequest.cpp
  src/v20180625/model/L7Listener.cpp
  src/v20180625/model/CreateL7RulesRequest.cpp
  src/v20180625/model/ModifyL7BackendWeightRequest.cpp
  src/v20180625/model/CreateL4ListenersRequest.cpp
  src/v20180625/model/ReplaceCertRequest.cpp
  src/v20180625/model/BindL7BackendsResponse.cpp
  src/v20180625/model/L7Rule.cpp
  src/v20180625/model/UnbindTrafficMirrorReceiversResponse.cpp
  src/v20180625/model/DeleteL7DomainsRequest.cpp
  src/v20180625/model/BindTrafficMirrorReceiversRequest.cpp
  src/v20180625/model/BindTrafficMirrorListenersResponse.cpp
  src/v20180625/model/BindL7BackendsRequest.cpp
  src/v20180625/model/DescribeL4Backend.cpp
  src/v20180625/model/DescribeCertDetailResponse.cpp
  src/v20180625/model/DescribeL4BackendsRequest.cpp
  src/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusResponse.cpp
  src/v20180625/model/BindTrafficMirrorReceiversResponse.cpp
  src/v20180625/model/ReplaceCertResponse.cpp
  src/v20180625/model/DescribeLoadBalancerPortInfoRequest.cpp
  src/v20180625/model/DevicesBindInfoLocation.cpp
  src/v20180625/model/SetTrafficMirrorHealthSwitchResponse.cpp
  src/v20180625/model/DeleteLoadBalancerRequest.cpp
  src/v20180625/model/UnbindTrafficMirrorListenersResponse.cpp
  src/v20180625/model/CreateL7Rule.cpp
  src/v20180625/model/CreateL7RulesResponse.cpp
  src/v20180625/model/ModifyL7ListenerRequest.cpp
  src/v20180625/model/DescribeTrafficMirrorReceiver.cpp
  src/v20180625/model/L7ExListener.cpp
  src/v20180625/model/L7ListenerInfo.cpp
  src/v20180625/model/L7ListenerInfoRule.cpp
  src/v20180625/model/DescribeL7BackendsResponse.cpp
  src/v20180625/model/Filter.cpp
  src/v20180625/model/DevicesBindInfoRule.cpp
  src/v20180625/model/TrafficMirror.cpp
  src/v20180625/model/DescribeLoadBalancersRequest.cpp
  src/v20180625/model/DevicesBindInfoLoadBalancer.cpp
  src/v20180625/model/L4Listener.cpp
  src/v20180625/model/CreateL7Listener.cpp
  src/v20180625/model/DeleteLoadBalancerResponse.cpp
  src/v20180625/model/CreateTrafficMirrorRequest.cpp
  src/v20180625/model/BindL4BackendsRequest.cpp
  src/v20180625/model/DescribeL7ListenerInfoResponse.cpp
  src/v20180625/model/DescribeL7ListenersResponse.cpp
  src/v20180625/model/DeleteListenersResponse.cpp
  src/v20180625/model/CreateLoadBalancersResponse.cpp
  src/v20180625/model/UnbindTrafficMirrorReceiver.cpp
  src/v20180625/model/ModifyLoadBalancerChargeModeResponse.cpp
  src/v20180625/model/UnbindL7BackendsRequest.cpp
  src/v20180625/model/L7ListenerInfoLocation.cpp
  src/v20180625/model/L7RulesLocation.cpp
  src/v20180625/model/ModifyLoadBalancerChargeModeListener.cpp
  src/v20180625/model/TrafficMirrorReciversStatus.cpp
  src/v20180625/model/CreateLoadBalancersRequest.cpp
  src/v20180625/model/DescribeLoadBalancerPortInfoResponse.cpp
  src/v20180625/model/DescribeL7ListenerInfoRequest.cpp
  src/v20180625/model/ModifyL4ListenerRequest.cpp
  src/v20180625/model/L4Backend.cpp
  src/v20180625/model/L7Backend.cpp
  src/v20180625/model/ModifyL7LocationRule.cpp
  src/v20180625/model/ModifyLoadBalancerRequest.cpp
  src/v20180625/model/DevicesBindInfoL7Listener.cpp
  src/v20180625/model/DescribeL4ListenersRequest.cpp
  src/v20180625/model/CreateL7ListenersResponse.cpp
  src/v20180625/model/CreateLoadBalancerBzConf.cpp
  src/v20180625/model/DeleteTrafficMirrorRequest.cpp
  src/v20180625/model/CreateL7ListenersRequest.cpp
  src/v20180625/model/BindL4Backend.cpp
  src/v20180625/model/DescribeL7ListenersExRequest.cpp
  src/v20180625/model/DescribeLoadBalancerTaskResultResponse.cpp
  src/v20180625/model/UnbindTrafficMirrorReceiversRequest.cpp
  src/v20180625/model/UnbindTrafficMirrorListenersRequest.cpp
  src/v20180625/model/DescribeCertDetailRequest.cpp
  src/v20180625/model/DescribeDevicesBindInfoResponse.cpp
  src/v20180625/model/LoadBalancerPortInfoListener.cpp
  src/v20180625/model/DescribeL4BackendsResponse.cpp
  src/v20180625/model/CreateL4Listener.cpp
  src/v20180625/model/DescribeTrafficMirrorListenersResponse.cpp
  src/v20180625/model/DescribeLoadBalancersResponse.cpp
  src/v20180625/model/DeleteL7RulesResponse.cpp
  src/v20180625/model/CertDetailLoadBalancer.cpp
  src/v20180625/model/DescribeTrafficMirrorReceiversRequest.cpp
  src/v20180625/model/SetTrafficMirrorAliasRequest.cpp
  src/v20180625/model/UnbindL4BackendsResponse.cpp
  src/v20180625/model/L7ListenerInfoBackend.cpp
  src/v20180625/model/ModifyLoadBalancerChargeModeRequest.cpp
  src/v20180625/model/ModifyL4BackendWeightRequest.cpp
  src/v20180625/model/LoadBalancer.cpp
  )

set(bmlb_include
    include/tencentcloud/bmlb
  )

add_library(bmlb ${LIB_TYPE}
  ${bmlb_public_header}
  ${bmlb_public_header_model}
  ${bmlb_src})

set_target_properties(bmlb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bmlb
  )

target_include_directories(bmlb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(bmlb
  core)

#install(FILES ${bmlb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmlb/v20180625)
#install(FILES ${bmlb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/bmlb/v20180625/model)
install(DIRECTORY ${bmlb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS bmlb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

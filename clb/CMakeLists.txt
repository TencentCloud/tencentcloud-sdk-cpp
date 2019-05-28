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

set(clb_public_header
  include/tencentcloud/clb/v20180317/ClbClient.h
  )

set(clb_public_header_model
  include/tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyTargetPortRequest.h
  include/tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsResponse.h
  include/tencentcloud/clb/v20180317/model/RsWeightRule.h
  include/tencentcloud/clb/v20180317/model/BatchModifyTargetWeightResponse.h
  include/tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h
  include/tencentcloud/clb/v20180317/model/DeleteRuleRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyRuleRequest.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h
  include/tencentcloud/clb/v20180317/model/ClassicalTarget.h
  include/tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyTargetWeightResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeTaskStatusRequest.h
  include/tencentcloud/clb/v20180317/model/DescribeRewriteResponse.h
  include/tencentcloud/clb/v20180317/model/CreateRuleResponse.h
  include/tencentcloud/clb/v20180317/model/ClassicalTargetInfo.h
  include/tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h
  include/tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBResponse.h
  include/tencentcloud/clb/v20180317/model/LoadBalancerHealth.h
  include/tencentcloud/clb/v20180317/model/ModifyRuleResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsRequest.h
  include/tencentcloud/clb/v20180317/model/DescribeListenersResponse.h
  include/tencentcloud/clb/v20180317/model/AutoRewriteRequest.h
  include/tencentcloud/clb/v20180317/model/DescribeTaskStatusResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeTargetHealthRequest.h
  include/tencentcloud/clb/v20180317/model/TargetHealth.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusResponse.h
  include/tencentcloud/clb/v20180317/model/RuleHealth.h
  include/tencentcloud/clb/v20180317/model/Listener.h
  include/tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesResponse.h
  include/tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyListenerRequest.h
  include/tencentcloud/clb/v20180317/model/Target.h
  include/tencentcloud/clb/v20180317/model/RegisterTargetsRequest.h
  include/tencentcloud/clb/v20180317/model/HealthCheck.h
  include/tencentcloud/clb/v20180317/model/DeleteListenerRequest.h
  include/tencentcloud/clb/v20180317/model/ClassicalHealth.h
  include/tencentcloud/clb/v20180317/model/ModifyTargetPortResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdRequest.h
  include/tencentcloud/clb/v20180317/model/ManualRewriteResponse.h
  include/tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyDomainRequest.h
  include/tencentcloud/clb/v20180317/model/Backend.h
  include/tencentcloud/clb/v20180317/model/ClassicalListener.h
  include/tencentcloud/clb/v20180317/model/CertificateInput.h
  include/tencentcloud/clb/v20180317/model/CreateListenerResponse.h
  include/tencentcloud/clb/v20180317/model/ClassicalLoadBalancerInfo.h
  include/tencentcloud/clb/v20180317/model/RuleOutput.h
  include/tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h
  include/tencentcloud/clb/v20180317/model/CreateRuleRequest.h
  include/tencentcloud/clb/v20180317/model/RuleTargets.h
  include/tencentcloud/clb/v20180317/model/ManualRewriteRequest.h
  include/tencentcloud/clb/v20180317/model/ModifyListenerResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeTargetHealthResponse.h
  include/tencentcloud/clb/v20180317/model/CreateListenerRequest.h
  include/tencentcloud/clb/v20180317/model/RewriteLocationMap.h
  include/tencentcloud/clb/v20180317/model/ModifyDomainResponse.h
  include/tencentcloud/clb/v20180317/model/RegisterTargetsResponse.h
  include/tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h
  include/tencentcloud/clb/v20180317/model/DeleteLoadBalancerResponse.h
  include/tencentcloud/clb/v20180317/model/AutoRewriteResponse.h
  include/tencentcloud/clb/v20180317/model/DeregisterTargetsResponse.h
  include/tencentcloud/clb/v20180317/model/RewriteTarget.h
  include/tencentcloud/clb/v20180317/model/DescribeTargetsResponse.h
  include/tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h
  include/tencentcloud/clb/v20180317/model/DeleteRewriteResponse.h
  include/tencentcloud/clb/v20180317/model/TargetRegionInfo.h
  include/tencentcloud/clb/v20180317/model/DeleteRuleResponse.h
  include/tencentcloud/clb/v20180317/model/DeregisterTargetsRequest.h
  include/tencentcloud/clb/v20180317/model/ListenerBackend.h
  include/tencentcloud/clb/v20180317/model/TagInfo.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusRequest.h
  include/tencentcloud/clb/v20180317/model/CreateLoadBalancerResponse.h
  include/tencentcloud/clb/v20180317/model/DescribeListenersRequest.h
  include/tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsRequest.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsResponse.h
  include/tencentcloud/clb/v20180317/model/RuleInput.h
  include/tencentcloud/clb/v20180317/model/DescribeLoadBalancersResponse.h
  include/tencentcloud/clb/v20180317/model/DeleteListenerResponse.h
  include/tencentcloud/clb/v20180317/model/CertificateOutput.h
  include/tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h
  include/tencentcloud/clb/v20180317/model/ListenerHealth.h
  include/tencentcloud/clb/v20180317/model/LoadBalancer.h
  )

set(clb_src
  src/v20180317/ClbClient.cpp
  src/v20180317/model/DeleteRewriteRequest.cpp
  src/v20180317/model/ModifyTargetPortRequest.cpp
  src/v20180317/model/SetLoadBalancerSecurityGroupsResponse.cpp
  src/v20180317/model/RsWeightRule.cpp
  src/v20180317/model/BatchModifyTargetWeightResponse.cpp
  src/v20180317/model/CreateLoadBalancerRequest.cpp
  src/v20180317/model/DeleteRuleRequest.cpp
  src/v20180317/model/ModifyLoadBalancerAttributesRequest.cpp
  src/v20180317/model/ModifyRuleRequest.cpp
  src/v20180317/model/DescribeClassicalLBByInstanceIdResponse.cpp
  src/v20180317/model/DescribeRewriteRequest.cpp
  src/v20180317/model/ClassicalTarget.cpp
  src/v20180317/model/DeregisterTargetsFromClassicalLBRequest.cpp
  src/v20180317/model/ModifyTargetWeightResponse.cpp
  src/v20180317/model/DescribeTaskStatusRequest.cpp
  src/v20180317/model/DescribeRewriteResponse.cpp
  src/v20180317/model/CreateRuleResponse.cpp
  src/v20180317/model/ClassicalTargetInfo.cpp
  src/v20180317/model/DescribeTargetsRequest.cpp
  src/v20180317/model/RegisterTargetsWithClassicalLBResponse.cpp
  src/v20180317/model/LoadBalancerHealth.cpp
  src/v20180317/model/ModifyRuleResponse.cpp
  src/v20180317/model/DescribeClassicalLBTargetsRequest.cpp
  src/v20180317/model/DescribeListenersResponse.cpp
  src/v20180317/model/AutoRewriteRequest.cpp
  src/v20180317/model/DescribeTaskStatusResponse.cpp
  src/v20180317/model/DescribeTargetHealthRequest.cpp
  src/v20180317/model/TargetHealth.cpp
  src/v20180317/model/DescribeClassicalLBHealthStatusResponse.cpp
  src/v20180317/model/RuleHealth.cpp
  src/v20180317/model/Listener.cpp
  src/v20180317/model/ModifyLoadBalancerAttributesResponse.cpp
  src/v20180317/model/RegisterTargetsWithClassicalLBRequest.cpp
  src/v20180317/model/ModifyListenerRequest.cpp
  src/v20180317/model/Target.cpp
  src/v20180317/model/RegisterTargetsRequest.cpp
  src/v20180317/model/HealthCheck.cpp
  src/v20180317/model/DeleteListenerRequest.cpp
  src/v20180317/model/ClassicalHealth.cpp
  src/v20180317/model/ModifyTargetPortResponse.cpp
  src/v20180317/model/DescribeClassicalLBByInstanceIdRequest.cpp
  src/v20180317/model/ManualRewriteResponse.cpp
  src/v20180317/model/ModifyTargetWeightRequest.cpp
  src/v20180317/model/ModifyDomainRequest.cpp
  src/v20180317/model/Backend.cpp
  src/v20180317/model/ClassicalListener.cpp
  src/v20180317/model/CertificateInput.cpp
  src/v20180317/model/CreateListenerResponse.cpp
  src/v20180317/model/ClassicalLoadBalancerInfo.cpp
  src/v20180317/model/RuleOutput.cpp
  src/v20180317/model/DeleteLoadBalancerRequest.cpp
  src/v20180317/model/CreateRuleRequest.cpp
  src/v20180317/model/RuleTargets.cpp
  src/v20180317/model/ManualRewriteRequest.cpp
  src/v20180317/model/ModifyListenerResponse.cpp
  src/v20180317/model/DescribeTargetHealthResponse.cpp
  src/v20180317/model/CreateListenerRequest.cpp
  src/v20180317/model/RewriteLocationMap.cpp
  src/v20180317/model/ModifyDomainResponse.cpp
  src/v20180317/model/RegisterTargetsResponse.cpp
  src/v20180317/model/DeregisterTargetsFromClassicalLBResponse.cpp
  src/v20180317/model/DescribeLoadBalancersRequest.cpp
  src/v20180317/model/DeleteLoadBalancerResponse.cpp
  src/v20180317/model/AutoRewriteResponse.cpp
  src/v20180317/model/DeregisterTargetsResponse.cpp
  src/v20180317/model/RewriteTarget.cpp
  src/v20180317/model/DescribeTargetsResponse.cpp
  src/v20180317/model/BatchModifyTargetWeightRequest.cpp
  src/v20180317/model/DeleteRewriteResponse.cpp
  src/v20180317/model/TargetRegionInfo.cpp
  src/v20180317/model/DeleteRuleResponse.cpp
  src/v20180317/model/DeregisterTargetsRequest.cpp
  src/v20180317/model/ListenerBackend.cpp
  src/v20180317/model/TagInfo.cpp
  src/v20180317/model/DescribeClassicalLBListenersResponse.cpp
  src/v20180317/model/DescribeClassicalLBHealthStatusRequest.cpp
  src/v20180317/model/CreateLoadBalancerResponse.cpp
  src/v20180317/model/DescribeListenersRequest.cpp
  src/v20180317/model/SetLoadBalancerSecurityGroupsRequest.cpp
  src/v20180317/model/DescribeClassicalLBTargetsResponse.cpp
  src/v20180317/model/RuleInput.cpp
  src/v20180317/model/DescribeLoadBalancersResponse.cpp
  src/v20180317/model/DeleteListenerResponse.cpp
  src/v20180317/model/CertificateOutput.cpp
  src/v20180317/model/DescribeClassicalLBListenersRequest.cpp
  src/v20180317/model/ListenerHealth.cpp
  src/v20180317/model/LoadBalancer.cpp
  )

set(clb_include
    include/tencentcloud/clb
  )

add_library(clb ${LIB_TYPE}
  ${clb_public_header}
  ${clb_public_header_model}
  ${clb_src})

set_target_properties(clb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}clb
  )

target_include_directories(clb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(clb
  core)

#install(FILES ${clb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/clb/v20180317)
#install(FILES ${clb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/clb/v20180317/model)
install(DIRECTORY ${clb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS clb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

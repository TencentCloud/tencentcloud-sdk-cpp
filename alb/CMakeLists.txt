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

set(alb_public_header
  include/tencentcloud/alb/v20251030/AlbClient.h
  )

set(alb_public_header_model
  include/tencentcloud/alb/v20251030/model/NotifyUnbindTargetRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeQuotaRequest.h
  include/tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerRequest.h
  include/tencentcloud/alb/v20251030/model/DeleteRulesRequest.h
  include/tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsResponse.h
  include/tencentcloud/alb/v20251030/model/ZoneMappingsItem.h
  include/tencentcloud/alb/v20251030/model/LoadBalancerDetail.h
  include/tencentcloud/alb/v20251030/model/CreateLoadBalancerRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesRequest.h
  include/tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerRequest.h
  include/tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusRequest.h
  include/tencentcloud/alb/v20251030/model/HTTPHeaderInfo.h
  include/tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesResponse.h
  include/tencentcloud/alb/v20251030/model/LoadBalancerAddress.h
  include/tencentcloud/alb/v20251030/model/NotifyUnbindTargetResponse.h
  include/tencentcloud/alb/v20251030/model/TargetOutput.h
  include/tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateResponse.h
  include/tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateRequest.h
  include/tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesRequest.h
  include/tencentcloud/alb/v20251030/model/IPAddressInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerDetailResponse.h
  include/tencentcloud/alb/v20251030/model/RuleAction.h
  include/tencentcloud/alb/v20251030/model/DescribeRulesResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupsResponse.h
  include/tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerDetailRequest.h
  include/tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyListenerAttributesResponse.h
  include/tencentcloud/alb/v20251030/model/AccessLogConfig.h
  include/tencentcloud/alb/v20251030/model/ModifyRulesAttributesResponse.h
  include/tencentcloud/alb/v20251030/model/HTTPRewriteInfo.h
  include/tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeListenersResponse.h
  include/tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerRequest.h
  include/tencentcloud/alb/v20251030/model/XForwardedForConfig.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupsRequest.h
  include/tencentcloud/alb/v20251030/model/QuotaInfo.h
  include/tencentcloud/alb/v20251030/model/DeleteLoadBalancersResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeRulesRequest.h
  include/tencentcloud/alb/v20251030/model/HTTPCookieInfo.h
  include/tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesResponse.h
  include/tencentcloud/alb/v20251030/model/HTTPRedirectInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeZonesRequest.h
  include/tencentcloud/alb/v20251030/model/Job.h
  include/tencentcloud/alb/v20251030/model/RelatedListener.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerCertificatesRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeRequest.h
  include/tencentcloud/alb/v20251030/model/CreateRulesResponse.h
  include/tencentcloud/alb/v20251030/model/CreateSecurityPolicyResponse.h
  include/tencentcloud/alb/v20251030/model/DeleteListenerRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesResponse.h
  include/tencentcloud/alb/v20251030/model/RuleModify.h
  include/tencentcloud/alb/v20251030/model/StickySessionConfig.h
  include/tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesResponse.h
  include/tencentcloud/alb/v20251030/model/ListenerOutput.h
  include/tencentcloud/alb/v20251030/model/PostPayPriceInfo.h
  include/tencentcloud/alb/v20251030/model/CreateRulesRequest.h
  include/tencentcloud/alb/v20251030/model/DeleteSecurityPolicyResponse.h
  include/tencentcloud/alb/v20251030/model/TargetToAdd.h
  include/tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesResponse.h
  include/tencentcloud/alb/v20251030/model/RemoveHTTPHeaderInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerCertificatesResponse.h
  include/tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsRequest.h
  include/tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupResponse.h
  include/tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeAsyncJobsRequest.h
  include/tencentcloud/alb/v20251030/model/CreateListenerResponse.h
  include/tencentcloud/alb/v20251030/model/CreateTargetGroupResponse.h
  include/tencentcloud/alb/v20251030/model/TargetGroupConfig.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetRequest.h
  include/tencentcloud/alb/v20251030/model/TargetGroupStickySession.h
  include/tencentcloud/alb/v20251030/model/DeleteLoadBalancersRequest.h
  include/tencentcloud/alb/v20251030/model/RuleCondition.h
  include/tencentcloud/alb/v20251030/model/Zone.h
  include/tencentcloud/alb/v20251030/model/RuleOutput.h
  include/tencentcloud/alb/v20251030/model/SecurityPolicyCapability.h
  include/tencentcloud/alb/v20251030/model/ModificationProtectionInfo.h
  include/tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupResponse.h
  include/tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesResponse.h
  include/tencentcloud/alb/v20251030/model/DeleteSecurityPolicyRequest.h
  include/tencentcloud/alb/v20251030/model/RuleHealthStatusInfo.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeResponse.h
  include/tencentcloud/alb/v20251030/model/CertificateInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetResponse.h
  include/tencentcloud/alb/v20251030/model/CreateTargetGroupRequest.h
  include/tencentcloud/alb/v20251030/model/TargetHealthStatusInfo.h
  include/tencentcloud/alb/v20251030/model/CreateListenerRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionResponse.h
  include/tencentcloud/alb/v20251030/model/RuleInput.h
  include/tencentcloud/alb/v20251030/model/DefaultAction.h
  include/tencentcloud/alb/v20251030/model/TargetGroupHealthInfo.h
  include/tencentcloud/alb/v20251030/model/SecurityPolicyRelations.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsRequest.h
  include/tencentcloud/alb/v20251030/model/LoadBalancerOperationLocksItem.h
  include/tencentcloud/alb/v20251030/model/DescribeLoadBalancersRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesRequest.h
  include/tencentcloud/alb/v20251030/model/HealthCheckConfig.h
  include/tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesRequest.h
  include/tencentcloud/alb/v20251030/model/HealthCheckTemplate.h
  include/tencentcloud/alb/v20251030/model/DescribeZonesResponse.h
  include/tencentcloud/alb/v20251030/model/CreateSecurityPolicyRequest.h
  include/tencentcloud/alb/v20251030/model/TargetGroupOutput.h
  include/tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusResponse.h
  include/tencentcloud/alb/v20251030/model/SecurityPolicyInfo.h
  include/tencentcloud/alb/v20251030/model/ModifyRulesAttributesRequest.h
  include/tencentcloud/alb/v20251030/model/DeletionProtectionConfig.h
  include/tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailRequest.h
  include/tencentcloud/alb/v20251030/model/InsertHTTPHeaderInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesResponse.h
  include/tencentcloud/alb/v20251030/model/HTTPQueryStringInfo.h
  include/tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateResponse.h
  include/tencentcloud/alb/v20251030/model/DeleteRulesResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeQuotaResponse.h
  include/tencentcloud/alb/v20251030/model/DeleteTargetGroupsResponse.h
  include/tencentcloud/alb/v20251030/model/Price.h
  include/tencentcloud/alb/v20251030/model/ModifyListenerAttributesRequest.h
  include/tencentcloud/alb/v20251030/model/TargetToRemove.h
  include/tencentcloud/alb/v20251030/model/LoadBalancerBillingConfig.h
  include/tencentcloud/alb/v20251030/model/TagInfo.h
  include/tencentcloud/alb/v20251030/model/TargetGroupTuple.h
  include/tencentcloud/alb/v20251030/model/CreateLoadBalancerResponse.h
  include/tencentcloud/alb/v20251030/model/TargetToModify.h
  include/tencentcloud/alb/v20251030/model/DescribeListenersRequest.h
  include/tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionRequest.h
  include/tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailResponse.h
  include/tencentcloud/alb/v20251030/model/FixedResponseInfo.h
  include/tencentcloud/alb/v20251030/model/DescribeLoadBalancersResponse.h
  include/tencentcloud/alb/v20251030/model/Filter.h
  include/tencentcloud/alb/v20251030/model/ZoneMappingInfo.h
  include/tencentcloud/alb/v20251030/model/DeleteListenerResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesRequest.h
  include/tencentcloud/alb/v20251030/model/DeleteTargetGroupsRequest.h
  include/tencentcloud/alb/v20251030/model/DescribeAsyncJobsResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsResponse.h
  include/tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesRequest.h
  include/tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesResponse.h
  include/tencentcloud/alb/v20251030/model/LoadBalancer.h
  )

set(alb_src
  src/v20251030/AlbClient.cpp
  src/v20251030/model/NotifyUnbindTargetRequest.cpp
  src/v20251030/model/DescribeQuotaRequest.cpp
  src/v20251030/model/InquirePriceCreateLoadBalancerRequest.cpp
  src/v20251030/model/DeleteRulesRequest.cpp
  src/v20251030/model/SetLoadBalancerSecurityGroupsResponse.cpp
  src/v20251030/model/ZoneMappingsItem.cpp
  src/v20251030/model/LoadBalancerDetail.cpp
  src/v20251030/model/CreateLoadBalancerRequest.cpp
  src/v20251030/model/ModifyLoadBalancerAttributesRequest.cpp
  src/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerRequest.cpp
  src/v20251030/model/CreateHealthCheckTemplateRequest.cpp
  src/v20251030/model/DescribeListenerHealthStatusRequest.cpp
  src/v20251030/model/HTTPHeaderInfo.cpp
  src/v20251030/model/DeleteHealthCheckTemplatesRequest.cpp
  src/v20251030/model/ModifyLoadBalancerAttributesResponse.cpp
  src/v20251030/model/LoadBalancerAddress.cpp
  src/v20251030/model/NotifyUnbindTargetResponse.cpp
  src/v20251030/model/TargetOutput.cpp
  src/v20251030/model/CreateHealthCheckTemplateResponse.cpp
  src/v20251030/model/ModifyHealthCheckTemplateRequest.cpp
  src/v20251030/model/AssociateListenerAdditionalCertificatesRequest.cpp
  src/v20251030/model/IPAddressInfo.cpp
  src/v20251030/model/DescribeListenerDetailResponse.cpp
  src/v20251030/model/RuleAction.cpp
  src/v20251030/model/DescribeRulesResponse.cpp
  src/v20251030/model/DescribeTargetGroupsResponse.cpp
  src/v20251030/model/RemoveTargetsFromTargetGroupRequest.cpp
  src/v20251030/model/DescribeListenerDetailRequest.cpp
  src/v20251030/model/AddTargetsToTargetGroupRequest.cpp
  src/v20251030/model/ModifyListenerAttributesResponse.cpp
  src/v20251030/model/AccessLogConfig.cpp
  src/v20251030/model/ModifyRulesAttributesResponse.cpp
  src/v20251030/model/HTTPRewriteInfo.cpp
  src/v20251030/model/AssociateBandwidthPackageWithLoadBalancerResponse.cpp
  src/v20251030/model/DescribeListenersResponse.cpp
  src/v20251030/model/AssociateBandwidthPackageWithLoadBalancerRequest.cpp
  src/v20251030/model/XForwardedForConfig.cpp
  src/v20251030/model/DescribeTargetGroupsRequest.cpp
  src/v20251030/model/QuotaInfo.cpp
  src/v20251030/model/DeleteLoadBalancersResponse.cpp
  src/v20251030/model/DescribeRulesRequest.cpp
  src/v20251030/model/HTTPCookieInfo.cpp
  src/v20251030/model/ModifySecurityPolicyAttributesRequest.cpp
  src/v20251030/model/DescribeSecurityPolicyRelationsResponse.cpp
  src/v20251030/model/DescribeSecurityPoliciesResponse.cpp
  src/v20251030/model/HTTPRedirectInfo.cpp
  src/v20251030/model/DescribeZonesRequest.cpp
  src/v20251030/model/Job.cpp
  src/v20251030/model/RelatedListener.cpp
  src/v20251030/model/DescribeListenerCertificatesRequest.cpp
  src/v20251030/model/ModifyLoadBalancerAddressTypeRequest.cpp
  src/v20251030/model/CreateRulesResponse.cpp
  src/v20251030/model/CreateSecurityPolicyResponse.cpp
  src/v20251030/model/DeleteListenerRequest.cpp
  src/v20251030/model/ModifyTargetGroupAttributesResponse.cpp
  src/v20251030/model/RuleModify.cpp
  src/v20251030/model/StickySessionConfig.cpp
  src/v20251030/model/AssociateListenerAdditionalCertificatesResponse.cpp
  src/v20251030/model/ListenerOutput.cpp
  src/v20251030/model/PostPayPriceInfo.cpp
  src/v20251030/model/CreateRulesRequest.cpp
  src/v20251030/model/DeleteSecurityPolicyResponse.cpp
  src/v20251030/model/TargetToAdd.cpp
  src/v20251030/model/DisassociateListenerAdditionalCertificatesResponse.cpp
  src/v20251030/model/DescribeSecurityPolicyCapabilitiesResponse.cpp
  src/v20251030/model/RemoveHTTPHeaderInfo.cpp
  src/v20251030/model/DescribeTargetGroupTargetsRequest.cpp
  src/v20251030/model/DescribeListenerCertificatesResponse.cpp
  src/v20251030/model/SetLoadBalancerSecurityGroupsRequest.cpp
  src/v20251030/model/RemoveTargetsFromTargetGroupResponse.cpp
  src/v20251030/model/AddTargetsToTargetGroupResponse.cpp
  src/v20251030/model/DescribeAsyncJobsRequest.cpp
  src/v20251030/model/CreateListenerResponse.cpp
  src/v20251030/model/CreateTargetGroupResponse.cpp
  src/v20251030/model/TargetGroupConfig.cpp
  src/v20251030/model/DescribeTargetGroupsByTargetRequest.cpp
  src/v20251030/model/TargetGroupStickySession.cpp
  src/v20251030/model/DeleteLoadBalancersRequest.cpp
  src/v20251030/model/RuleCondition.cpp
  src/v20251030/model/Zone.cpp
  src/v20251030/model/RuleOutput.cpp
  src/v20251030/model/SecurityPolicyCapability.cpp
  src/v20251030/model/ModificationProtectionInfo.cpp
  src/v20251030/model/ModifyTargetsInTargetGroupResponse.cpp
  src/v20251030/model/ModifySecurityPolicyAttributesResponse.cpp
  src/v20251030/model/DeleteSecurityPolicyRequest.cpp
  src/v20251030/model/RuleHealthStatusInfo.cpp
  src/v20251030/model/ModifyLoadBalancerAddressTypeResponse.cpp
  src/v20251030/model/CertificateInfo.cpp
  src/v20251030/model/DescribeHealthCheckTemplatesResponse.cpp
  src/v20251030/model/DescribeTargetGroupsByTargetResponse.cpp
  src/v20251030/model/CreateTargetGroupRequest.cpp
  src/v20251030/model/TargetHealthStatusInfo.cpp
  src/v20251030/model/CreateListenerRequest.cpp
  src/v20251030/model/ModifyLoadBalancerModificationProtectionResponse.cpp
  src/v20251030/model/RuleInput.cpp
  src/v20251030/model/DefaultAction.cpp
  src/v20251030/model/TargetGroupHealthInfo.cpp
  src/v20251030/model/SecurityPolicyRelations.cpp
  src/v20251030/model/DescribeSecurityPolicyRelationsRequest.cpp
  src/v20251030/model/LoadBalancerOperationLocksItem.cpp
  src/v20251030/model/DescribeLoadBalancersRequest.cpp
  src/v20251030/model/ModifyTargetsInTargetGroupRequest.cpp
  src/v20251030/model/DescribeSecurityPolicyCapabilitiesRequest.cpp
  src/v20251030/model/HealthCheckConfig.cpp
  src/v20251030/model/ModifyTargetGroupAttributesRequest.cpp
  src/v20251030/model/HealthCheckTemplate.cpp
  src/v20251030/model/DescribeZonesResponse.cpp
  src/v20251030/model/CreateSecurityPolicyRequest.cpp
  src/v20251030/model/TargetGroupOutput.cpp
  src/v20251030/model/InquirePriceCreateLoadBalancerResponse.cpp
  src/v20251030/model/DescribeListenerHealthStatusResponse.cpp
  src/v20251030/model/SecurityPolicyInfo.cpp
  src/v20251030/model/ModifyRulesAttributesRequest.cpp
  src/v20251030/model/DeletionProtectionConfig.cpp
  src/v20251030/model/DisassociateListenerAdditionalCertificatesRequest.cpp
  src/v20251030/model/DescribeLoadBalancerDetailRequest.cpp
  src/v20251030/model/InsertHTTPHeaderInfo.cpp
  src/v20251030/model/DescribeHealthCheckTemplatesRequest.cpp
  src/v20251030/model/DescribeSystemSecurityPoliciesResponse.cpp
  src/v20251030/model/HTTPQueryStringInfo.cpp
  src/v20251030/model/ModifyHealthCheckTemplateResponse.cpp
  src/v20251030/model/DeleteRulesResponse.cpp
  src/v20251030/model/DescribeQuotaResponse.cpp
  src/v20251030/model/DeleteTargetGroupsResponse.cpp
  src/v20251030/model/Price.cpp
  src/v20251030/model/ModifyListenerAttributesRequest.cpp
  src/v20251030/model/TargetToRemove.cpp
  src/v20251030/model/LoadBalancerBillingConfig.cpp
  src/v20251030/model/TagInfo.cpp
  src/v20251030/model/TargetGroupTuple.cpp
  src/v20251030/model/CreateLoadBalancerResponse.cpp
  src/v20251030/model/TargetToModify.cpp
  src/v20251030/model/DescribeListenersRequest.cpp
  src/v20251030/model/ModifyLoadBalancerModificationProtectionRequest.cpp
  src/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerResponse.cpp
  src/v20251030/model/DescribeLoadBalancerDetailResponse.cpp
  src/v20251030/model/FixedResponseInfo.cpp
  src/v20251030/model/DescribeLoadBalancersResponse.cpp
  src/v20251030/model/Filter.cpp
  src/v20251030/model/ZoneMappingInfo.cpp
  src/v20251030/model/DeleteListenerResponse.cpp
  src/v20251030/model/DescribeSystemSecurityPoliciesRequest.cpp
  src/v20251030/model/DeleteTargetGroupsRequest.cpp
  src/v20251030/model/DescribeAsyncJobsResponse.cpp
  src/v20251030/model/DescribeTargetGroupTargetsResponse.cpp
  src/v20251030/model/DescribeSecurityPoliciesRequest.cpp
  src/v20251030/model/DeleteHealthCheckTemplatesResponse.cpp
  src/v20251030/model/LoadBalancer.cpp
  )

set(alb_include
    include/tencentcloud/alb
  )

add_library(alb ${LIB_TYPE}
  ${alb_public_header}
  ${alb_public_header_model}
  ${alb_src})

set_target_properties(alb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}alb
  )

target_include_directories(alb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(alb
  core)

#install(FILES ${alb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/alb/v20251030)
#install(FILES ${alb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/alb/v20251030/model)
install(DIRECTORY ${alb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS alb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )

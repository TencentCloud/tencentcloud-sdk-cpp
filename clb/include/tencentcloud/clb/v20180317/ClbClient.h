/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
#define TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/clb/v20180317/model/AddModelKeyRequest.h>
#include <tencentcloud/clb/v20180317/model/AddModelKeyResponse.h>
#include <tencentcloud/clb/v20180317/model/AddModelRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/AddModelRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/AssociateBudgetRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateBudgetResponse.h>
#include <tencentcloud/clb/v20180317/model/AssociateCustomizedConfigRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateCustomizedConfigResponse.h>
#include <tencentcloud/clb/v20180317/model/AssociateModelRouterGuardrailsRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateModelRouterGuardrailsResponse.h>
#include <tencentcloud/clb/v20180317/model/AssociateModelsToModelRouterRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateModelsToModelRouterResponse.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/AssociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchDeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetTagRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetTagResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchRegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/ChatCompletionsRequest.h>
#include <tencentcloud/clb/v20180317/model/ChatCompletionsResponse.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CloneLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateBYOKNetworkRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateBYOKNetworkResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateBudgetRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateBudgetResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateIntentRouterRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateIntentRouterResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateKeyRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateKeyResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateKeysRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateKeysResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateModelRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateModelResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateModelRouterRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateModelRouterResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateModelRouterResourcePackageRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateModelRouterResourcePackageResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTargetGroupResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateTopicResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateUserGroupRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateUserGroupResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteBudgetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteBudgetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteIntentRouterRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteIntentRouterResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteKeysRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteKeysResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerSnatIpsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteModelRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteModelResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteModelRoutersRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteModelRoutersResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteUserGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteUserGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterModelsFromServiceProviderRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterModelsFromServiceProviderResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeAssociatedModelAvailabilityRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeAssociatedModelAvailabilityResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeAsyncJobsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeAsyncJobsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBlockIPTaskResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBudgetAssociationsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBudgetAssociationsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeBudgetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeBudgetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClsLogSetResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClusterResourcesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClusterResourcesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCrossTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigAssociateListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeCustomizedConfigListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeExclusiveClustersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeExclusiveClustersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeIdleLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeIdleLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeIntentRouterTiersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeIntentRouterTiersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeIntentRoutersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeIntentRoutersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeKeysRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeKeysResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBOperateProtectRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLBOperateProtectResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerListByCertIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerOverviewResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancerTrafficResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelAliasesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelAliasesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelAssociationsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelAssociationsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelKeysRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelKeysResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelNamesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelNamesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterDetailRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterDetailResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterGuardrailsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterGuardrailsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterLogsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterLogsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterQuotaRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterQuotaResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterResourcePackageDeductionRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterResourcePackageDeductionResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterResourcePackagesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRouterResourcePackagesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRoutersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeModelRoutersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeQuotaResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeResourcesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeServiceProviderHealthStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeServiceProviderHealthStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeSupportedProvidersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeSupportedProvidersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstanceStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstanceStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupListResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeUpperModelsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeUpperModelsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeUserGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeUserGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateBudgetRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateBudgetResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateCustomizedConfigRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateCustomizedConfigResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateModelRouterGuardrailsRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateModelRouterGuardrailsResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateModelsFromModelRouterRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateModelsFromModelRouterResponse.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/DisassociateTargetGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/InquirePriceCreateModelRouterResourcePackageRequest.h>
#include <tencentcloud/clb/v20180317/model/InquirePriceCreateModelRouterResourcePackageResponse.h>
#include <tencentcloud/clb/v20180317/model/InquirePriceRefundModelRouterResourcePackageRequest.h>
#include <tencentcloud/clb/v20180317/model/InquirePriceRefundModelRouterResourcePackageResponse.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceCreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceCreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceModifyLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceModifyLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceRefundLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceRefundLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceRenewLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/InquiryPriceRenewLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/MigrateClassicalLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyBlockIPListResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyBudgetAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyBudgetAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyIntentRouterAttributeRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyIntentRouterAttributeResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeyAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeyAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeysBlockStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeysBlockStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeysUserGroupRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyKeysUserGroupResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerMixIpTargetRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerMixIpTargetResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancersProjectRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancersProjectResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelAliasAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelAliasAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterGuardrailsRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterGuardrailsResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterSecurityGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyModelRouterSecurityGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyServiceProviderModelAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyServiceProviderModelAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupAttributeResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetGroupInstancesWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyUserGroupAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyUserGroupAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/RefundModelRouterResourcePackageRequest.h>
#include <tencentcloud/clb/v20180317/model/RefundModelRouterResourcePackageResponse.h>
#include <tencentcloud/clb/v20180317/model/RegenerateKeysRequest.h>
#include <tencentcloud/clb/v20180317/model/RegenerateKeysResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterFunctionTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterFunctionTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterModelsToServiceProviderRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterModelsToServiceProviderResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetGroupInstancesResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/RemoveModelKeyRequest.h>
#include <tencentcloud/clb/v20180317/model/RemoveModelKeyResponse.h>
#include <tencentcloud/clb/v20180317/model/RemoveModelRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/RemoveModelRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/RenewLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/RenewLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/ReplaceCertForLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/SetCustomizedConfigForLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerStartStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerStartStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/SetSecurityGroupForLoadbalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/TestModelInputModalitiesRequest.h>
#include <tencentcloud/clb/v20180317/model/TestModelInputModalitiesResponse.h>
#include <tencentcloud/clb/v20180317/model/TestServiceProviderConnectionRequest.h>
#include <tencentcloud/clb/v20180317/model/TestServiceProviderConnectionResponse.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            class ClbClient : public AbstractClient
            {
            public:
                ClbClient(const Credential &credential, const std::string &region);
                ClbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddModelKeyResponse> AddModelKeyOutcome;
                typedef std::future<AddModelKeyOutcome> AddModelKeyOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AddModelKeyRequest&, AddModelKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddModelKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::AddModelRewriteResponse> AddModelRewriteOutcome;
                typedef std::future<AddModelRewriteOutcome> AddModelRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AddModelRewriteRequest&, AddModelRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddModelRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateBudgetResponse> AssociateBudgetOutcome;
                typedef std::future<AssociateBudgetOutcome> AssociateBudgetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateBudgetRequest&, AssociateBudgetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateBudgetAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateCustomizedConfigResponse> AssociateCustomizedConfigOutcome;
                typedef std::future<AssociateCustomizedConfigOutcome> AssociateCustomizedConfigOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateCustomizedConfigRequest&, AssociateCustomizedConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateCustomizedConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateModelRouterGuardrailsResponse> AssociateModelRouterGuardrailsOutcome;
                typedef std::future<AssociateModelRouterGuardrailsOutcome> AssociateModelRouterGuardrailsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateModelRouterGuardrailsRequest&, AssociateModelRouterGuardrailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateModelRouterGuardrailsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateModelsToModelRouterResponse> AssociateModelsToModelRouterOutcome;
                typedef std::future<AssociateModelsToModelRouterOutcome> AssociateModelsToModelRouterOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateModelsToModelRouterRequest&, AssociateModelsToModelRouterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateModelsToModelRouterAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateTargetGroupsResponse> AssociateTargetGroupsOutcome;
                typedef std::future<AssociateTargetGroupsOutcome> AssociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AssociateTargetGroupsRequest&, AssociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AutoRewriteResponse> AutoRewriteOutcome;
                typedef std::future<AutoRewriteOutcome> AutoRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AutoRewriteRequest&, AutoRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AutoRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeregisterTargetsResponse> BatchDeregisterTargetsOutcome;
                typedef std::future<BatchDeregisterTargetsOutcome> BatchDeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchDeregisterTargetsRequest&, BatchDeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTargetTagResponse> BatchModifyTargetTagOutcome;
                typedef std::future<BatchModifyTargetTagOutcome> BatchModifyTargetTagOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetTagRequest&, BatchModifyTargetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterTargetsResponse> BatchRegisterTargetsOutcome;
                typedef std::future<BatchRegisterTargetsOutcome> BatchRegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchRegisterTargetsRequest&, BatchRegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatCompletionsResponse> ChatCompletionsOutcome;
                typedef std::future<ChatCompletionsOutcome> ChatCompletionsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ChatCompletionsRequest&, ChatCompletionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatCompletionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneLoadBalancerResponse> CloneLoadBalancerOutcome;
                typedef std::future<CloneLoadBalancerOutcome> CloneLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CloneLoadBalancerRequest&, CloneLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBYOKNetworkResponse> CreateBYOKNetworkOutcome;
                typedef std::future<CreateBYOKNetworkOutcome> CreateBYOKNetworkOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateBYOKNetworkRequest&, CreateBYOKNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBYOKNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBudgetResponse> CreateBudgetOutcome;
                typedef std::future<CreateBudgetOutcome> CreateBudgetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateBudgetRequest&, CreateBudgetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBudgetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClsLogSetResponse> CreateClsLogSetOutcome;
                typedef std::future<CreateClsLogSetOutcome> CreateClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateClsLogSetRequest&, CreateClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntentRouterResponse> CreateIntentRouterOutcome;
                typedef std::future<CreateIntentRouterOutcome> CreateIntentRouterOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateIntentRouterRequest&, CreateIntentRouterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntentRouterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyResponse> CreateKeyOutcome;
                typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateKeyRequest&, CreateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeysResponse> CreateKeysOutcome;
                typedef std::future<CreateKeysOutcome> CreateKeysOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateKeysRequest&, CreateKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerSnatIpsResponse> CreateLoadBalancerSnatIpsOutcome;
                typedef std::future<CreateLoadBalancerSnatIpsOutcome> CreateLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerSnatIpsRequest&, CreateLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelResponse> CreateModelOutcome;
                typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateModelRequest&, CreateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelRouterResponse> CreateModelRouterOutcome;
                typedef std::future<CreateModelRouterOutcome> CreateModelRouterOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateModelRouterRequest&, CreateModelRouterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelRouterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelRouterResourcePackageResponse> CreateModelRouterResourcePackageOutcome;
                typedef std::future<CreateModelRouterResourcePackageOutcome> CreateModelRouterResourcePackageOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateModelRouterResourcePackageRequest&, CreateModelRouterResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelRouterResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserGroupResponse> CreateUserGroupOutcome;
                typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateUserGroupRequest&, CreateUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBudgetsResponse> DeleteBudgetsOutcome;
                typedef std::future<DeleteBudgetsOutcome> DeleteBudgetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteBudgetsRequest&, DeleteBudgetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBudgetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntentRouterResponse> DeleteIntentRouterOutcome;
                typedef std::future<DeleteIntentRouterOutcome> DeleteIntentRouterOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteIntentRouterRequest&, DeleteIntentRouterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntentRouterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKeysResponse> DeleteKeysOutcome;
                typedef std::future<DeleteKeysOutcome> DeleteKeysOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteKeysRequest&, DeleteKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerListenersResponse> DeleteLoadBalancerListenersOutcome;
                typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerListenersRequest&, DeleteLoadBalancerListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerSnatIpsResponse> DeleteLoadBalancerSnatIpsOutcome;
                typedef std::future<DeleteLoadBalancerSnatIpsOutcome> DeleteLoadBalancerSnatIpsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerSnatIpsRequest&, DeleteLoadBalancerSnatIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerSnatIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelResponse> DeleteModelOutcome;
                typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteModelRequest&, DeleteModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelRoutersResponse> DeleteModelRoutersOutcome;
                typedef std::future<DeleteModelRoutersOutcome> DeleteModelRoutersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteModelRoutersRequest&, DeleteModelRoutersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelRoutersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRewriteResponse> DeleteRewriteOutcome;
                typedef std::future<DeleteRewriteOutcome> DeleteRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRewriteRequest&, DeleteRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserGroupsResponse> DeleteUserGroupsOutcome;
                typedef std::future<DeleteUserGroupsOutcome> DeleteUserGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteUserGroupsRequest&, DeleteUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterFunctionTargetsResponse> DeregisterFunctionTargetsOutcome;
                typedef std::future<DeregisterFunctionTargetsOutcome> DeregisterFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterFunctionTargetsRequest&, DeregisterFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterModelsFromServiceProviderResponse> DeregisterModelsFromServiceProviderOutcome;
                typedef std::future<DeregisterModelsFromServiceProviderOutcome> DeregisterModelsFromServiceProviderOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterModelsFromServiceProviderRequest&, DeregisterModelsFromServiceProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterModelsFromServiceProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetGroupInstancesResponse> DeregisterTargetGroupInstancesOutcome;
                typedef std::future<DeregisterTargetGroupInstancesOutcome> DeregisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetGroupInstancesRequest&, DeregisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsResponse> DeregisterTargetsOutcome;
                typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsRequest&, DeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetsFromClassicalLBResponse> DeregisterTargetsFromClassicalLBOutcome;
                typedef std::future<DeregisterTargetsFromClassicalLBOutcome> DeregisterTargetsFromClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsFromClassicalLBRequest&, DeregisterTargetsFromClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsFromClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssociatedModelAvailabilityResponse> DescribeAssociatedModelAvailabilityOutcome;
                typedef std::future<DescribeAssociatedModelAvailabilityOutcome> DescribeAssociatedModelAvailabilityOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeAssociatedModelAvailabilityRequest&, DescribeAssociatedModelAvailabilityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssociatedModelAvailabilityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncJobsResponse> DescribeAsyncJobsOutcome;
                typedef std::future<DescribeAsyncJobsOutcome> DescribeAsyncJobsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeAsyncJobsRequest&, DescribeAsyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPListResponse> DescribeBlockIPListOutcome;
                typedef std::future<DescribeBlockIPListOutcome> DescribeBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPListRequest&, DescribeBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIPTaskResponse> DescribeBlockIPTaskOutcome;
                typedef std::future<DescribeBlockIPTaskOutcome> DescribeBlockIPTaskOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBlockIPTaskRequest&, DescribeBlockIPTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIPTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBudgetAssociationsResponse> DescribeBudgetAssociationsOutcome;
                typedef std::future<DescribeBudgetAssociationsOutcome> DescribeBudgetAssociationsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBudgetAssociationsRequest&, DescribeBudgetAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBudgetAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBudgetsResponse> DescribeBudgetsOutcome;
                typedef std::future<DescribeBudgetsOutcome> DescribeBudgetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeBudgetsRequest&, DescribeBudgetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBudgetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBByInstanceIdResponse> DescribeClassicalLBByInstanceIdOutcome;
                typedef std::future<DescribeClassicalLBByInstanceIdOutcome> DescribeClassicalLBByInstanceIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBByInstanceIdRequest&, DescribeClassicalLBByInstanceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBByInstanceIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBHealthStatusResponse> DescribeClassicalLBHealthStatusOutcome;
                typedef std::future<DescribeClassicalLBHealthStatusOutcome> DescribeClassicalLBHealthStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBHealthStatusRequest&, DescribeClassicalLBHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBListenersResponse> DescribeClassicalLBListenersOutcome;
                typedef std::future<DescribeClassicalLBListenersOutcome> DescribeClassicalLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBListenersRequest&, DescribeClassicalLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBTargetsResponse> DescribeClassicalLBTargetsOutcome;
                typedef std::future<DescribeClassicalLBTargetsOutcome> DescribeClassicalLBTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBTargetsRequest&, DescribeClassicalLBTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClsLogSetResponse> DescribeClsLogSetOutcome;
                typedef std::future<DescribeClsLogSetOutcome> DescribeClsLogSetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClsLogSetRequest&, DescribeClsLogSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClsLogSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterResourcesResponse> DescribeClusterResourcesOutcome;
                typedef std::future<DescribeClusterResourcesOutcome> DescribeClusterResourcesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClusterResourcesRequest&, DescribeClusterResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossTargetsResponse> DescribeCrossTargetsOutcome;
                typedef std::future<DescribeCrossTargetsOutcome> DescribeCrossTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCrossTargetsRequest&, DescribeCrossTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigAssociateListResponse> DescribeCustomizedConfigAssociateListOutcome;
                typedef std::future<DescribeCustomizedConfigAssociateListOutcome> DescribeCustomizedConfigAssociateListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigAssociateListRequest&, DescribeCustomizedConfigAssociateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigAssociateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigListResponse> DescribeCustomizedConfigListOutcome;
                typedef std::future<DescribeCustomizedConfigListOutcome> DescribeCustomizedConfigListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigListRequest&, DescribeCustomizedConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExclusiveClustersResponse> DescribeExclusiveClustersOutcome;
                typedef std::future<DescribeExclusiveClustersOutcome> DescribeExclusiveClustersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeExclusiveClustersRequest&, DescribeExclusiveClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExclusiveClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdleLoadBalancersResponse> DescribeIdleLoadBalancersOutcome;
                typedef std::future<DescribeIdleLoadBalancersOutcome> DescribeIdleLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeIdleLoadBalancersRequest&, DescribeIdleLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdleLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntentRouterTiersResponse> DescribeIntentRouterTiersOutcome;
                typedef std::future<DescribeIntentRouterTiersOutcome> DescribeIntentRouterTiersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeIntentRouterTiersRequest&, DescribeIntentRouterTiersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentRouterTiersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntentRoutersResponse> DescribeIntentRoutersOutcome;
                typedef std::future<DescribeIntentRoutersOutcome> DescribeIntentRoutersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeIntentRoutersRequest&, DescribeIntentRoutersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntentRoutersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeysResponse> DescribeKeysOutcome;
                typedef std::future<DescribeKeysOutcome> DescribeKeysOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeKeysRequest&, DescribeKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLBListenersResponse> DescribeLBListenersOutcome;
                typedef std::future<DescribeLBListenersOutcome> DescribeLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLBListenersRequest&, DescribeLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLBOperateProtectResponse> DescribeLBOperateProtectOutcome;
                typedef std::future<DescribeLBOperateProtectOutcome> DescribeLBOperateProtectOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLBOperateProtectRequest&, DescribeLBOperateProtectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLBOperateProtectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerListByCertIdResponse> DescribeLoadBalancerListByCertIdOutcome;
                typedef std::future<DescribeLoadBalancerListByCertIdOutcome> DescribeLoadBalancerListByCertIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerListByCertIdRequest&, DescribeLoadBalancerListByCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListByCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerOverviewResponse> DescribeLoadBalancerOverviewOutcome;
                typedef std::future<DescribeLoadBalancerOverviewOutcome> DescribeLoadBalancerOverviewOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerOverviewRequest&, DescribeLoadBalancerOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerTrafficResponse> DescribeLoadBalancerTrafficOutcome;
                typedef std::future<DescribeLoadBalancerTrafficOutcome> DescribeLoadBalancerTrafficOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerTrafficRequest&, DescribeLoadBalancerTrafficOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTrafficAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersDetailResponse> DescribeLoadBalancersDetailOutcome;
                typedef std::future<DescribeLoadBalancersDetailOutcome> DescribeLoadBalancersDetailOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersDetailRequest&, DescribeLoadBalancersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAliasesResponse> DescribeModelAliasesOutcome;
                typedef std::future<DescribeModelAliasesOutcome> DescribeModelAliasesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelAliasesRequest&, DescribeModelAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAliasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelAssociationsResponse> DescribeModelAssociationsOutcome;
                typedef std::future<DescribeModelAssociationsOutcome> DescribeModelAssociationsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelAssociationsRequest&, DescribeModelAssociationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelAssociationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelKeysResponse> DescribeModelKeysOutcome;
                typedef std::future<DescribeModelKeysOutcome> DescribeModelKeysOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelKeysRequest&, DescribeModelKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelNamesResponse> DescribeModelNamesOutcome;
                typedef std::future<DescribeModelNamesOutcome> DescribeModelNamesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelNamesRequest&, DescribeModelNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRewriteResponse> DescribeModelRewriteOutcome;
                typedef std::future<DescribeModelRewriteOutcome> DescribeModelRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRewriteRequest&, DescribeModelRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterDetailResponse> DescribeModelRouterDetailOutcome;
                typedef std::future<DescribeModelRouterDetailOutcome> DescribeModelRouterDetailOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterDetailRequest&, DescribeModelRouterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterGuardrailsResponse> DescribeModelRouterGuardrailsOutcome;
                typedef std::future<DescribeModelRouterGuardrailsOutcome> DescribeModelRouterGuardrailsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterGuardrailsRequest&, DescribeModelRouterGuardrailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterGuardrailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterLogsResponse> DescribeModelRouterLogsOutcome;
                typedef std::future<DescribeModelRouterLogsOutcome> DescribeModelRouterLogsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterLogsRequest&, DescribeModelRouterLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterQuotaResponse> DescribeModelRouterQuotaOutcome;
                typedef std::future<DescribeModelRouterQuotaOutcome> DescribeModelRouterQuotaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterQuotaRequest&, DescribeModelRouterQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterResourcePackageDeductionResponse> DescribeModelRouterResourcePackageDeductionOutcome;
                typedef std::future<DescribeModelRouterResourcePackageDeductionOutcome> DescribeModelRouterResourcePackageDeductionOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterResourcePackageDeductionRequest&, DescribeModelRouterResourcePackageDeductionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterResourcePackageDeductionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRouterResourcePackagesResponse> DescribeModelRouterResourcePackagesOutcome;
                typedef std::future<DescribeModelRouterResourcePackagesOutcome> DescribeModelRouterResourcePackagesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRouterResourcePackagesRequest&, DescribeModelRouterResourcePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRouterResourcePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelRoutersResponse> DescribeModelRoutersOutcome;
                typedef std::future<DescribeModelRoutersOutcome> DescribeModelRoutersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeModelRoutersRequest&, DescribeModelRoutersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelRoutersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaResponse> DescribeQuotaOutcome;
                typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeQuotaRequest&, DescribeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesResponse> DescribeResourcesOutcome;
                typedef std::future<DescribeResourcesOutcome> DescribeResourcesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeResourcesRequest&, DescribeResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRewriteResponse> DescribeRewriteOutcome;
                typedef std::future<DescribeRewriteOutcome> DescribeRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeRewriteRequest&, DescribeRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceProviderHealthStatusResponse> DescribeServiceProviderHealthStatusOutcome;
                typedef std::future<DescribeServiceProviderHealthStatusOutcome> DescribeServiceProviderHealthStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeServiceProviderHealthStatusRequest&, DescribeServiceProviderHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceProviderHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedProvidersResponse> DescribeSupportedProvidersOutcome;
                typedef std::future<DescribeSupportedProvidersOutcome> DescribeSupportedProvidersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeSupportedProvidersRequest&, DescribeSupportedProvidersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedProvidersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstanceStatusResponse> DescribeTargetGroupInstanceStatusOutcome;
                typedef std::future<DescribeTargetGroupInstanceStatusOutcome> DescribeTargetGroupInstanceStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupInstanceStatusRequest&, DescribeTargetGroupInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstancesResponse> DescribeTargetGroupInstancesOutcome;
                typedef std::future<DescribeTargetGroupInstancesOutcome> DescribeTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupInstancesRequest&, DescribeTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupListResponse> DescribeTargetGroupListOutcome;
                typedef std::future<DescribeTargetGroupListOutcome> DescribeTargetGroupListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupListRequest&, DescribeTargetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpperModelsResponse> DescribeUpperModelsOutcome;
                typedef std::future<DescribeUpperModelsOutcome> DescribeUpperModelsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeUpperModelsRequest&, DescribeUpperModelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpperModelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserGroupsResponse> DescribeUserGroupsOutcome;
                typedef std::future<DescribeUserGroupsOutcome> DescribeUserGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeUserGroupsRequest&, DescribeUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateBudgetResponse> DisassociateBudgetOutcome;
                typedef std::future<DisassociateBudgetOutcome> DisassociateBudgetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateBudgetRequest&, DisassociateBudgetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateBudgetAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateCustomizedConfigResponse> DisassociateCustomizedConfigOutcome;
                typedef std::future<DisassociateCustomizedConfigOutcome> DisassociateCustomizedConfigOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateCustomizedConfigRequest&, DisassociateCustomizedConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateCustomizedConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateModelRouterGuardrailsResponse> DisassociateModelRouterGuardrailsOutcome;
                typedef std::future<DisassociateModelRouterGuardrailsOutcome> DisassociateModelRouterGuardrailsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateModelRouterGuardrailsRequest&, DisassociateModelRouterGuardrailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateModelRouterGuardrailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateModelsFromModelRouterResponse> DisassociateModelsFromModelRouterOutcome;
                typedef std::future<DisassociateModelsFromModelRouterOutcome> DisassociateModelsFromModelRouterOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateModelsFromModelRouterRequest&, DisassociateModelsFromModelRouterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateModelsFromModelRouterAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateTargetGroupsResponse> DisassociateTargetGroupsOutcome;
                typedef std::future<DisassociateTargetGroupsOutcome> DisassociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DisassociateTargetGroupsRequest&, DisassociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateModelRouterResourcePackageResponse> InquirePriceCreateModelRouterResourcePackageOutcome;
                typedef std::future<InquirePriceCreateModelRouterResourcePackageOutcome> InquirePriceCreateModelRouterResourcePackageOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquirePriceCreateModelRouterResourcePackageRequest&, InquirePriceCreateModelRouterResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateModelRouterResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRefundModelRouterResourcePackageResponse> InquirePriceRefundModelRouterResourcePackageOutcome;
                typedef std::future<InquirePriceRefundModelRouterResourcePackageOutcome> InquirePriceRefundModelRouterResourcePackageOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquirePriceRefundModelRouterResourcePackageRequest&, InquirePriceRefundModelRouterResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRefundModelRouterResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateLoadBalancerResponse> InquiryPriceCreateLoadBalancerOutcome;
                typedef std::future<InquiryPriceCreateLoadBalancerOutcome> InquiryPriceCreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquiryPriceCreateLoadBalancerRequest&, InquiryPriceCreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceModifyLoadBalancerResponse> InquiryPriceModifyLoadBalancerOutcome;
                typedef std::future<InquiryPriceModifyLoadBalancerOutcome> InquiryPriceModifyLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquiryPriceModifyLoadBalancerRequest&, InquiryPriceModifyLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceModifyLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRefundLoadBalancerResponse> InquiryPriceRefundLoadBalancerOutcome;
                typedef std::future<InquiryPriceRefundLoadBalancerOutcome> InquiryPriceRefundLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquiryPriceRefundLoadBalancerRequest&, InquiryPriceRefundLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRefundLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewLoadBalancerResponse> InquiryPriceRenewLoadBalancerOutcome;
                typedef std::future<InquiryPriceRenewLoadBalancerOutcome> InquiryPriceRenewLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::InquiryPriceRenewLoadBalancerRequest&, InquiryPriceRenewLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ManualRewriteResponse> ManualRewriteOutcome;
                typedef std::future<ManualRewriteOutcome> ManualRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ManualRewriteRequest&, ManualRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManualRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateClassicalLoadBalancersResponse> MigrateClassicalLoadBalancersOutcome;
                typedef std::future<MigrateClassicalLoadBalancersOutcome> MigrateClassicalLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::MigrateClassicalLoadBalancersRequest&, MigrateClassicalLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateClassicalLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIPListResponse> ModifyBlockIPListOutcome;
                typedef std::future<ModifyBlockIPListOutcome> ModifyBlockIPListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyBlockIPListRequest&, ModifyBlockIPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIPListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBudgetAttributesResponse> ModifyBudgetAttributesOutcome;
                typedef std::future<ModifyBudgetAttributesOutcome> ModifyBudgetAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyBudgetAttributesRequest&, ModifyBudgetAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBudgetAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainAttributesResponse> ModifyDomainAttributesOutcome;
                typedef std::future<ModifyDomainAttributesOutcome> ModifyDomainAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainAttributesRequest&, ModifyDomainAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFunctionTargetsResponse> ModifyFunctionTargetsOutcome;
                typedef std::future<ModifyFunctionTargetsOutcome> ModifyFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyFunctionTargetsRequest&, ModifyFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntentRouterAttributeResponse> ModifyIntentRouterAttributeOutcome;
                typedef std::future<ModifyIntentRouterAttributeOutcome> ModifyIntentRouterAttributeOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyIntentRouterAttributeRequest&, ModifyIntentRouterAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntentRouterAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKeyAttributesResponse> ModifyKeyAttributesOutcome;
                typedef std::future<ModifyKeyAttributesOutcome> ModifyKeyAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyKeyAttributesRequest&, ModifyKeyAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKeyAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKeysBlockStatusResponse> ModifyKeysBlockStatusOutcome;
                typedef std::future<ModifyKeysBlockStatusOutcome> ModifyKeysBlockStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyKeysBlockStatusRequest&, ModifyKeysBlockStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKeysBlockStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKeysUserGroupResponse> ModifyKeysUserGroupOutcome;
                typedef std::future<ModifyKeysUserGroupOutcome> ModifyKeysUserGroupOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyKeysUserGroupRequest&, ModifyKeysUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKeysUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerMixIpTargetResponse> ModifyLoadBalancerMixIpTargetOutcome;
                typedef std::future<ModifyLoadBalancerMixIpTargetOutcome> ModifyLoadBalancerMixIpTargetOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerMixIpTargetRequest&, ModifyLoadBalancerMixIpTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerMixIpTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerSlaResponse> ModifyLoadBalancerSlaOutcome;
                typedef std::future<ModifyLoadBalancerSlaOutcome> ModifyLoadBalancerSlaOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerSlaRequest&, ModifyLoadBalancerSlaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerSlaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancersProjectResponse> ModifyLoadBalancersProjectOutcome;
                typedef std::future<ModifyLoadBalancersProjectOutcome> ModifyLoadBalancersProjectOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancersProjectRequest&, ModifyLoadBalancersProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancersProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelAliasAttributesResponse> ModifyModelAliasAttributesOutcome;
                typedef std::future<ModifyModelAliasAttributesOutcome> ModifyModelAliasAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyModelAliasAttributesRequest&, ModifyModelAliasAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelAliasAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelAttributesResponse> ModifyModelAttributesOutcome;
                typedef std::future<ModifyModelAttributesOutcome> ModifyModelAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyModelAttributesRequest&, ModifyModelAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelRouterAttributesResponse> ModifyModelRouterAttributesOutcome;
                typedef std::future<ModifyModelRouterAttributesOutcome> ModifyModelRouterAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyModelRouterAttributesRequest&, ModifyModelRouterAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelRouterAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelRouterGuardrailsResponse> ModifyModelRouterGuardrailsOutcome;
                typedef std::future<ModifyModelRouterGuardrailsOutcome> ModifyModelRouterGuardrailsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyModelRouterGuardrailsRequest&, ModifyModelRouterGuardrailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelRouterGuardrailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelRouterSecurityGroupsResponse> ModifyModelRouterSecurityGroupsOutcome;
                typedef std::future<ModifyModelRouterSecurityGroupsOutcome> ModifyModelRouterSecurityGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyModelRouterSecurityGroupsRequest&, ModifyModelRouterSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelRouterSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceProviderModelAttributesResponse> ModifyServiceProviderModelAttributesOutcome;
                typedef std::future<ModifyServiceProviderModelAttributesOutcome> ModifyServiceProviderModelAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyServiceProviderModelAttributesRequest&, ModifyServiceProviderModelAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceProviderModelAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributeResponse> ModifyTargetGroupAttributeOutcome;
                typedef std::future<ModifyTargetGroupAttributeOutcome> ModifyTargetGroupAttributeOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupAttributeRequest&, ModifyTargetGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesPortResponse> ModifyTargetGroupInstancesPortOutcome;
                typedef std::future<ModifyTargetGroupInstancesPortOutcome> ModifyTargetGroupInstancesPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesPortRequest&, ModifyTargetGroupInstancesPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesWeightResponse> ModifyTargetGroupInstancesWeightOutcome;
                typedef std::future<ModifyTargetGroupInstancesWeightOutcome> ModifyTargetGroupInstancesWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetGroupInstancesWeightRequest&, ModifyTargetGroupInstancesWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserGroupAttributesResponse> ModifyUserGroupAttributesOutcome;
                typedef std::future<ModifyUserGroupAttributesOutcome> ModifyUserGroupAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyUserGroupAttributesRequest&, ModifyUserGroupAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundModelRouterResourcePackageResponse> RefundModelRouterResourcePackageOutcome;
                typedef std::future<RefundModelRouterResourcePackageOutcome> RefundModelRouterResourcePackageOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RefundModelRouterResourcePackageRequest&, RefundModelRouterResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundModelRouterResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::RegenerateKeysResponse> RegenerateKeysOutcome;
                typedef std::future<RegenerateKeysOutcome> RegenerateKeysOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegenerateKeysRequest&, RegenerateKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegenerateKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterFunctionTargetsResponse> RegisterFunctionTargetsOutcome;
                typedef std::future<RegisterFunctionTargetsOutcome> RegisterFunctionTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterFunctionTargetsRequest&, RegisterFunctionTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterFunctionTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterModelsToServiceProviderResponse> RegisterModelsToServiceProviderOutcome;
                typedef std::future<RegisterModelsToServiceProviderOutcome> RegisterModelsToServiceProviderOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterModelsToServiceProviderRequest&, RegisterModelsToServiceProviderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterModelsToServiceProviderAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetGroupInstancesResponse> RegisterTargetGroupInstancesOutcome;
                typedef std::future<RegisterTargetGroupInstancesOutcome> RegisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetGroupInstancesRequest&, RegisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsResponse> RegisterTargetsOutcome;
                typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsRequest&, RegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetsWithClassicalLBResponse> RegisterTargetsWithClassicalLBOutcome;
                typedef std::future<RegisterTargetsWithClassicalLBOutcome> RegisterTargetsWithClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsWithClassicalLBRequest&, RegisterTargetsWithClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsWithClassicalLBAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveModelKeyResponse> RemoveModelKeyOutcome;
                typedef std::future<RemoveModelKeyOutcome> RemoveModelKeyOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RemoveModelKeyRequest&, RemoveModelKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveModelKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveModelRewriteResponse> RemoveModelRewriteOutcome;
                typedef std::future<RemoveModelRewriteOutcome> RemoveModelRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RemoveModelRewriteRequest&, RemoveModelRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveModelRewriteAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewLoadBalancersResponse> RenewLoadBalancersOutcome;
                typedef std::future<RenewLoadBalancersOutcome> RenewLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RenewLoadBalancersRequest&, RenewLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertForLoadBalancersResponse> ReplaceCertForLoadBalancersOutcome;
                typedef std::future<ReplaceCertForLoadBalancersOutcome> ReplaceCertForLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ReplaceCertForLoadBalancersRequest&, ReplaceCertForLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertForLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCustomizedConfigForLoadBalancerResponse> SetCustomizedConfigForLoadBalancerOutcome;
                typedef std::future<SetCustomizedConfigForLoadBalancerOutcome> SetCustomizedConfigForLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetCustomizedConfigForLoadBalancerRequest&, SetCustomizedConfigForLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCustomizedConfigForLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerClsLogResponse> SetLoadBalancerClsLogOutcome;
                typedef std::future<SetLoadBalancerClsLogOutcome> SetLoadBalancerClsLogOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerClsLogRequest&, SetLoadBalancerClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerStartStatusResponse> SetLoadBalancerStartStatusOutcome;
                typedef std::future<SetLoadBalancerStartStatusOutcome> SetLoadBalancerStartStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerStartStatusRequest&, SetLoadBalancerStartStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerStartStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::SetSecurityGroupForLoadbalancersResponse> SetSecurityGroupForLoadbalancersOutcome;
                typedef std::future<SetSecurityGroupForLoadbalancersOutcome> SetSecurityGroupForLoadbalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetSecurityGroupForLoadbalancersRequest&, SetSecurityGroupForLoadbalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityGroupForLoadbalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::TestModelInputModalitiesResponse> TestModelInputModalitiesOutcome;
                typedef std::future<TestModelInputModalitiesOutcome> TestModelInputModalitiesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::TestModelInputModalitiesRequest&, TestModelInputModalitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestModelInputModalitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::TestServiceProviderConnectionResponse> TestServiceProviderConnectionOutcome;
                typedef std::future<TestServiceProviderConnectionOutcome> TestServiceProviderConnectionOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::TestServiceProviderConnectionRequest&, TestServiceProviderConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestServiceProviderConnectionAsyncHandler;



                /**
                 *给 BYOK 模型添加 Key
                 * @param req AddModelKeyRequest
                 * @return AddModelKeyOutcome
                 */
                AddModelKeyOutcome AddModelKey(const Model::AddModelKeyRequest &request);
                void AddModelKeyAsync(const Model::AddModelKeyRequest& request, const AddModelKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddModelKeyOutcomeCallable AddModelKeyCallable(const Model::AddModelKeyRequest& request);

                /**
                 *为模型路由实例新增或覆盖一条模型重写规则（Model Rewrite）。当 SourceModel 已存在重写规则时，本次请求会用新的 TargetModel 覆盖原值（覆盖语义）。该接口为异步接口。
                 * @param req AddModelRewriteRequest
                 * @return AddModelRewriteOutcome
                 */
                AddModelRewriteOutcome AddModelRewrite(const Model::AddModelRewriteRequest &request);
                void AddModelRewriteAsync(const Model::AddModelRewriteRequest& request, const AddModelRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddModelRewriteOutcomeCallable AddModelRewriteCallable(const Model::AddModelRewriteRequest& request);

                /**
                 *将Budget关联到企业型模型路由实例或企业型实例下的Key。资源已关联其他Budget时，本次请求会替换为新的Budget。
                 * @param req AssociateBudgetRequest
                 * @return AssociateBudgetOutcome
                 */
                AssociateBudgetOutcome AssociateBudget(const Model::AssociateBudgetRequest &request);
                void AssociateBudgetAsync(const Model::AssociateBudgetRequest& request, const AssociateBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateBudgetOutcomeCallable AssociateBudgetCallable(const Model::AssociateBudgetRequest& request);

                /**
                 *关联配置到server或location，根据配置类型关联到server或location。准备下线，请使用SetCustomizedConfigForLoadBalancer。
                 * @param req AssociateCustomizedConfigRequest
                 * @return AssociateCustomizedConfigOutcome
                 */
                AssociateCustomizedConfigOutcome AssociateCustomizedConfig(const Model::AssociateCustomizedConfigRequest &request);
                void AssociateCustomizedConfigAsync(const Model::AssociateCustomizedConfigRequest& request, const AssociateCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateCustomizedConfigOutcomeCallable AssociateCustomizedConfigCallable(const Model::AssociateCustomizedConfigRequest& request);

                /**
                 *为指定模型路由实例关联 Guardrails 防护。当前支持关联腾讯云 WAF LLM SDK 接入配置，关联成功后，模型路由转发的请求会按照绑定的 WAF 防护配置进行安全检测。

本接口为异步接口。接口返回成功表示请求已受理，可使用返回的 RequestId 调用 DescribeAsyncJobs 查询任务执行结果；防护配置生效后，可调用 DescribeModelRouterGuardrails 查询当前关联。

当前每个模型路由实例最多关联 1 个 Guardrail。如需替换已关联的防护配置，请调用 ModifyModelRouterGuardrails。
                 * @param req AssociateModelRouterGuardrailsRequest
                 * @return AssociateModelRouterGuardrailsOutcome
                 */
                AssociateModelRouterGuardrailsOutcome AssociateModelRouterGuardrails(const Model::AssociateModelRouterGuardrailsRequest &request);
                void AssociateModelRouterGuardrailsAsync(const Model::AssociateModelRouterGuardrailsRequest& request, const AssociateModelRouterGuardrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateModelRouterGuardrailsOutcomeCallable AssociateModelRouterGuardrailsCallable(const Model::AssociateModelRouterGuardrailsRequest& request);

                /**
                 *将模型关联到模型路由实例
                 * @param req AssociateModelsToModelRouterRequest
                 * @return AssociateModelsToModelRouterOutcome
                 */
                AssociateModelsToModelRouterOutcome AssociateModelsToModelRouter(const Model::AssociateModelsToModelRouterRequest &request);
                void AssociateModelsToModelRouterAsync(const Model::AssociateModelsToModelRouterRequest& request, const AssociateModelsToModelRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateModelsToModelRouterOutcomeCallable AssociateModelsToModelRouterCallable(const Model::AssociateModelsToModelRouterRequest& request);

                /**
                 *本接口(AssociateTargetGroups)用来将目标组绑定到负载均衡的监听器（四层协议）或转发规则（七层协议）上。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
限制说明：
- 四层监听器绑定旧版目标组需要监听器开启后端目标组。
- 七层绑定目标组，数据结构 TargetGroupAssociation 中 LocationId 为必填项。
- 负载均衡的 VPC 需要和目标组的 VPC 一致。
                 * @param req AssociateTargetGroupsRequest
                 * @return AssociateTargetGroupsOutcome
                 */
                AssociateTargetGroupsOutcome AssociateTargetGroups(const Model::AssociateTargetGroupsRequest &request);
                void AssociateTargetGroupsAsync(const Model::AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateTargetGroupsOutcomeCallable AssociateTargetGroupsCallable(const Model::AssociateTargetGroupsRequest& request);

                /**
                 *用户需要先创建出一个HTTPS:443监听器，并在其下创建转发规则。通过调用本接口，系统会自动创建出一个HTTP:80监听器（如果之前不存在），并在其下创建转发规则，与HTTPS:443监听器下的Domains（在入参中指定）对应。创建成功后可以通过HTTP:80地址自动跳转为HTTPS:443地址进行访问。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req AutoRewriteRequest
                 * @return AutoRewriteOutcome
                 */
                AutoRewriteOutcome AutoRewrite(const Model::AutoRewriteRequest &request);
                void AutoRewriteAsync(const Model::AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AutoRewriteOutcomeCallable AutoRewriteCallable(const Model::AutoRewriteRequest& request);

                /**
                 *批量解绑四七层后端服务。批量解绑的资源数量上限为500。只支持VPC网络负载均衡。
                 * @param req BatchDeregisterTargetsRequest
                 * @return BatchDeregisterTargetsOutcome
                 */
                BatchDeregisterTargetsOutcome BatchDeregisterTargets(const Model::BatchDeregisterTargetsRequest &request);
                void BatchDeregisterTargetsAsync(const Model::BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeregisterTargetsOutcomeCallable BatchDeregisterTargetsCallable(const Model::BatchDeregisterTargetsRequest& request);

                /**
                 *BatchModifyTargetTag 接口用于批量修改负载均衡监听器绑定的后端机器的标签。批量修改的资源数量上限为500。本接口为同步接口。<br/>负载均衡的4层和7层监听器支持此接口，传统型负载均衡不支持。
                 * @param req BatchModifyTargetTagRequest
                 * @return BatchModifyTargetTagOutcome
                 */
                BatchModifyTargetTagOutcome BatchModifyTargetTag(const Model::BatchModifyTargetTagRequest &request);
                void BatchModifyTargetTagAsync(const Model::BatchModifyTargetTagRequest& request, const BatchModifyTargetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetTagOutcomeCallable BatchModifyTargetTagCallable(const Model::BatchModifyTargetTagRequest& request);

                /**
                 *BatchModifyTargetWeight 接口用于批量修改负载均衡监听器绑定的后端机器的转发权重。批量修改的资源数量上限为500。本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。<br/>负载均衡的4层和7层监听器支持此接口，传统型负载均衡不支持。
                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *批量绑定虚拟主机或弹性网卡，支持跨域绑定，支持四层、七层（TCP、UDP、HTTP、HTTPS）协议绑定。批量绑定的资源数量上限为500。只支持VPC网络负载均衡。
                 * @param req BatchRegisterTargetsRequest
                 * @return BatchRegisterTargetsOutcome
                 */
                BatchRegisterTargetsOutcome BatchRegisterTargets(const Model::BatchRegisterTargetsRequest &request);
                void BatchRegisterTargetsAsync(const Model::BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterTargetsOutcomeCallable BatchRegisterTargetsCallable(const Model::BatchRegisterTargetsRequest& request);

                /**
                 *聊天测试，发送聊天请求验证模型连通性。用户传入 ApiKey 和 Model，支持自定义消息和额外参数、支持多模态附件。stream 强制关闭，max_tokens 上限 100。
                 * @param req ChatCompletionsRequest
                 * @return ChatCompletionsOutcome
                 */
                ChatCompletionsOutcome ChatCompletions(const Model::ChatCompletionsRequest &request);
                void ChatCompletionsAsync(const Model::ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatCompletionsOutcomeCallable ChatCompletionsCallable(const Model::ChatCompletionsRequest& request);

                /**
                 *克隆负载均衡实例，根据指定的负载均衡实例，复制出相同规则和绑定关系的负载均衡实例。克隆接口为异步操作，克隆的数据以调用CloneLoadBalancer时为准，如果调用CloneLoadBalancer后克隆CLB发生变化，变化规则不会克隆。

注：查询实例创建状态可以根据返回值中的requestId访问[DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)接口

限制说明
实例属性维度限制：
- 支持克隆实例计费模式为按量计费与包年包月的实例，包年包月实例克隆后的新实例网络计费模式会转换为按小时带宽计费，其带宽、规格与原实例设置保持一致。
- 不支持克隆未关联实例计费项的 CLB（历史免费活动创建）。
- 不支持克隆传统型负载均衡实例和高防 CLB。
- 不支持克隆基础网络类型的实例。
- 不支持克隆 Anycast 类型的实例。
- 不支持克隆 IPv6 NAT64 版本的实例。
- 不支持克隆被封禁或冻结的实例。
- 执行克隆操作前，请确保实例上没有使用已过期证书，否则会导致克隆失败。
配额维度限制：
- 当实例的监听器个数超过 50 个时，不支持克隆。
- 当共享型实例的公网带宽上限超过 2G 时，不支持克隆。

通过接口调用：
BGP带宽包必须传带宽包id
独占集群克隆必须传对应的参数，否则按共享型创建
                 * @param req CloneLoadBalancerRequest
                 * @return CloneLoadBalancerOutcome
                 */
                CloneLoadBalancerOutcome CloneLoadBalancer(const Model::CloneLoadBalancerRequest &request);
                void CloneLoadBalancerAsync(const Model::CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneLoadBalancerOutcomeCallable CloneLoadBalancerCallable(const Model::CloneLoadBalancerRequest& request);

                /**
                 *初始化 BYOK VPC 网络资源。PrivateCustom 场景的 Phase 1：创建 BYOK 模型主表记录并提交 VPC 网络初始化异步任务（申请 IP、创建 LBNAT、绑定 SNAT 等）。完成后需调用 CreateModel 传入返回的 ServiceProviderId 完成业务资源创建。
                 * @param req CreateBYOKNetworkRequest
                 * @return CreateBYOKNetworkOutcome
                 */
                CreateBYOKNetworkOutcome CreateBYOKNetwork(const Model::CreateBYOKNetworkRequest &request);
                void CreateBYOKNetworkAsync(const Model::CreateBYOKNetworkRequest& request, const CreateBYOKNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBYOKNetworkOutcomeCallable CreateBYOKNetworkCallable(const Model::CreateBYOKNetworkRequest& request);

                /**
                 *创建Budget对象。BudgetConfigs最多支持1d、7d、30d三个刷新周期各一个；BudgetResetAt不支持作为入参设置，由系统自动维护。可在创建时通过Resources同时关联已存在的企业型模型路由实例或企业型实例下的Key。创建请求提交后，可通过DescribeBudgets查询状态。
                 * @param req CreateBudgetRequest
                 * @return CreateBudgetOutcome
                 */
                CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest &request);
                void CreateBudgetAsync(const Model::CreateBudgetRequest& request, const CreateBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBudgetOutcomeCallable CreateBudgetCallable(const Model::CreateBudgetRequest& request);

                /**
                 *创建CLB专有日志集，此日志集用于存储CLB的日志。
                 * @param req CreateClsLogSetRequest
                 * @return CreateClsLogSetOutcome
                 */
                CreateClsLogSetOutcome CreateClsLogSet(const Model::CreateClsLogSetRequest &request);
                void CreateClsLogSetAsync(const Model::CreateClsLogSetRequest& request, const CreateClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogSetOutcomeCallable CreateClsLogSetCallable(const Model::CreateClsLogSetRequest& request);

                /**
                 *为模型路由实例创建一个意图路由（Intent Router）。意图路由是独立资源，请求匹配model=<RouteName>时将通过配置的分层进行路由。
                 * @param req CreateIntentRouterRequest
                 * @return CreateIntentRouterOutcome
                 */
                CreateIntentRouterOutcome CreateIntentRouter(const Model::CreateIntentRouterRequest &request);
                void CreateIntentRouterAsync(const Model::CreateIntentRouterRequest& request, const CreateIntentRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntentRouterOutcomeCallable CreateIntentRouterCallable(const Model::CreateIntentRouterRequest& request);

                /**
                 *创建 API Key
                 * @param req CreateKeyRequest
                 * @return CreateKeyOutcome
                 */
                CreateKeyOutcome CreateKey(const Model::CreateKeyRequest &request);
                void CreateKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request);

                /**
                 *批量创建Key
                 * @param req CreateKeysRequest
                 * @return CreateKeysOutcome
                 */
                CreateKeysOutcome CreateKeys(const Model::CreateKeysRequest &request);
                void CreateKeysAsync(const Model::CreateKeysRequest& request, const CreateKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeysOutcomeCallable CreateKeysCallable(const Model::CreateKeysRequest& request);

                /**
                 *在一个负载均衡实例下创建监听器。
本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *本接口(CreateLoadBalancer)用来创建负载均衡实例。为了使用负载均衡服务，您必须购买一个或多个负载均衡实例。成功调用该接口后，会返回负载均衡实例的唯一 ID。负载均衡实例的类型分为：公网、内网。详情可参考产品说明中的产品类型。
注意：(1)可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域是否支持创建IPv6实例；(2)一个账号在每个地域的默认购买配额为：公网100个，内网100个。
本接口为异步接口，接口成功返回后，可使用 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询负载均衡实例的状态（如创建中、正常），以确定是否创建成功。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *针对SnatPro负载均衡，这个接口用于添加SnatIp，如果负载均衡没有开启SnatPro，添加SnatIp后会自动开启。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req CreateLoadBalancerSnatIpsRequest
                 * @return CreateLoadBalancerSnatIpsOutcome
                 */
                CreateLoadBalancerSnatIpsOutcome CreateLoadBalancerSnatIps(const Model::CreateLoadBalancerSnatIpsRequest &request);
                void CreateLoadBalancerSnatIpsAsync(const Model::CreateLoadBalancerSnatIpsRequest& request, const CreateLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerSnatIpsOutcomeCallable CreateLoadBalancerSnatIpsCallable(const Model::CreateLoadBalancerSnatIpsRequest& request);

                /**
                 *创建 BYOK 模型
                 * @param req CreateModelRequest
                 * @return CreateModelOutcome
                 */
                CreateModelOutcome CreateModel(const Model::CreateModelRequest &request);
                void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request);

                /**
                 *创建模型路由实例
                 * @param req CreateModelRouterRequest
                 * @return CreateModelRouterOutcome
                 */
                CreateModelRouterOutcome CreateModelRouter(const Model::CreateModelRouterRequest &request);
                void CreateModelRouterAsync(const Model::CreateModelRouterRequest& request, const CreateModelRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelRouterOutcomeCallable CreateModelRouterCallable(const Model::CreateModelRouterRequest& request);

                /**
                 *创建模型路由资源包
                 * @param req CreateModelRouterResourcePackageRequest
                 * @return CreateModelRouterResourcePackageOutcome
                 */
                CreateModelRouterResourcePackageOutcome CreateModelRouterResourcePackage(const Model::CreateModelRouterResourcePackageRequest &request);
                void CreateModelRouterResourcePackageAsync(const Model::CreateModelRouterResourcePackageRequest& request, const CreateModelRouterResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelRouterResourcePackageOutcomeCallable CreateModelRouterResourcePackageCallable(const Model::CreateModelRouterResourcePackageRequest& request);

                /**
                 *CreateRule 接口用于在一个已存在的负载均衡七层监听器下创建转发规则，七层监听器中，后端服务必须绑定到规则上而非监听器上。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *创建目标组。该功能正在内测中，如需使用，请通过[工单申请](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20LB&step=1)。
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *创建主题，默认开启全文索引和键值索引。如果不存在CLB专有日志集，则创建失败。
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *在指定模型路由实例下创建一个用户组。用户组是介于模型路由实例与 Key 之间的一层可选分组，可为组内 Key 统一配置模型白名单，并通过关联 Budget 统一管理额度。创建为异步操作，接口会同步返回用户组ID，可凭返回的 RequestId 调用 DescribeAsyncJobs 查询创建进度。
                 * @param req CreateUserGroupRequest
                 * @return CreateUserGroupOutcome
                 */
                CreateUserGroupOutcome CreateUserGroup(const Model::CreateUserGroupRequest &request);
                void CreateUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserGroupOutcomeCallable CreateUserGroupCallable(const Model::CreateUserGroupRequest& request);

                /**
                 *删除Budget对象。Budget存在任何关联资源时不允许删除，需要先调用DisassociateBudget解除关联。
                 * @param req DeleteBudgetsRequest
                 * @return DeleteBudgetsOutcome
                 */
                DeleteBudgetsOutcome DeleteBudgets(const Model::DeleteBudgetsRequest &request);
                void DeleteBudgetsAsync(const Model::DeleteBudgetsRequest& request, const DeleteBudgetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBudgetsOutcomeCallable DeleteBudgetsCallable(const Model::DeleteBudgetsRequest& request);

                /**
                 *删除模型路由实例下的一个意图路由（Intent Router）。
                 * @param req DeleteIntentRouterRequest
                 * @return DeleteIntentRouterOutcome
                 */
                DeleteIntentRouterOutcome DeleteIntentRouter(const Model::DeleteIntentRouterRequest &request);
                void DeleteIntentRouterAsync(const Model::DeleteIntentRouterRequest& request, const DeleteIntentRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntentRouterOutcomeCallable DeleteIntentRouterCallable(const Model::DeleteIntentRouterRequest& request);

                /**
                 *批量删除 API Key。
                 * @param req DeleteKeysRequest
                 * @return DeleteKeysOutcome
                 */
                DeleteKeysOutcome DeleteKeys(const Model::DeleteKeysRequest &request);
                void DeleteKeysAsync(const Model::DeleteKeysRequest& request, const DeleteKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKeysOutcomeCallable DeleteKeysCallable(const Model::DeleteKeysRequest& request);

                /**
                 *本接口用来删除负载均衡实例下的监听器（四层和七层）。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *DeleteLoadBalancer 接口用以删除指定的一个或多个负载均衡实例。成功删除后，会把负载均衡实例下的监听器、转发规则一起删除，并把后端服务解绑。
本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *该接口支持删除负载均衡的多个监听器。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerListenersRequest
                 * @return DeleteLoadBalancerListenersOutcome
                 */
                DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest &request);
                void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request);

                /**
                 *这个接口用于删除SnatPro的负载均衡的SnatIp。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerSnatIpsRequest
                 * @return DeleteLoadBalancerSnatIpsOutcome
                 */
                DeleteLoadBalancerSnatIpsOutcome DeleteLoadBalancerSnatIps(const Model::DeleteLoadBalancerSnatIpsRequest &request);
                void DeleteLoadBalancerSnatIpsAsync(const Model::DeleteLoadBalancerSnatIpsRequest& request, const DeleteLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerSnatIpsOutcomeCallable DeleteLoadBalancerSnatIpsCallable(const Model::DeleteLoadBalancerSnatIpsRequest& request);

                /**
                 *删除 BYOK 模型
                 * @param req DeleteModelRequest
                 * @return DeleteModelOutcome
                 */
                DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest &request);
                void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request);

                /**
                 *删除模型路由实例
                 * @param req DeleteModelRoutersRequest
                 * @return DeleteModelRoutersOutcome
                 */
                DeleteModelRoutersOutcome DeleteModelRouters(const Model::DeleteModelRoutersRequest &request);
                void DeleteModelRoutersAsync(const Model::DeleteModelRoutersRequest& request, const DeleteModelRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelRoutersOutcomeCallable DeleteModelRoutersCallable(const Model::DeleteModelRoutersRequest& request);

                /**
                 *DeleteRewrite 接口支持删除指定转发规则之间的重定向关系。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteRewriteRequest
                 * @return DeleteRewriteOutcome
                 */
                DeleteRewriteOutcome DeleteRewrite(const Model::DeleteRewriteRequest &request);
                void DeleteRewriteAsync(const Model::DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRewriteOutcomeCallable DeleteRewriteCallable(const Model::DeleteRewriteRequest& request);

                /**
                 *DeleteRule 接口用来删除负载均衡实例七层监听器下的转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *删除目标组，支持批量删除目标组，单次最多批量删除 20 个目标组。
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *批量删除用户组。组内若仍存在 Key，将拒绝删除（错误码 ResourceInUse），需先将 Key 移出或迁移到其他组。删除为异步操作，可凭返回的 RequestId 调用 DescribeAsyncJobs 查询进度。
                 * @param req DeleteUserGroupsRequest
                 * @return DeleteUserGroupsOutcome
                 */
                DeleteUserGroupsOutcome DeleteUserGroups(const Model::DeleteUserGroupsRequest &request);
                void DeleteUserGroupsAsync(const Model::DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserGroupsOutcomeCallable DeleteUserGroupsCallable(const Model::DeleteUserGroupsRequest& request);

                /**
                 *DeregisterFunctionTargets 接口用来将一个云函数从负载均衡的转发规则上解绑，对于七层监听器，还需通过 LocationId 或 Domain+Url 指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
<br/>限制说明：

- 仅广州、深圳金融、上海、上海金融、北京、成都、中国香港、新加坡、东京、硅谷地域支持绑定 SCF。
- 仅标准账户类型支持绑定 SCF，传统账户类型不支持。建议升级为标准账户类型，详情可参见 [账户类型升级说明](https://cloud.tencent.com/document/product/1199/49090)。
- 传统型负载均衡不支持绑定 SCF。
- 基础网络类型不支持绑定 SCF。
- CLB 默认支持绑定同地域下的所有 SCF，可支持跨 VPC 绑定 SCF，不支持跨地域绑定。
- 目前仅 IPv4、IPv6 NAT64 版本的负载均衡支持绑定 SCF，IPv6 版本的暂不支持。
- 仅七层（HTTP、HTTPS）监听器支持绑定 SCF，四层（TCP、UDP、TCP SSL）监听器和七层 QUIC 监听器不支持。
- CLB 绑定 SCF 仅支持绑定“Event 函数”类型的云函数。
                 * @param req DeregisterFunctionTargetsRequest
                 * @return DeregisterFunctionTargetsOutcome
                 */
                DeregisterFunctionTargetsOutcome DeregisterFunctionTargets(const Model::DeregisterFunctionTargetsRequest &request);
                void DeregisterFunctionTargetsAsync(const Model::DeregisterFunctionTargetsRequest& request, const DeregisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterFunctionTargetsOutcomeCallable DeregisterFunctionTargetsCallable(const Model::DeregisterFunctionTargetsRequest& request);

                /**
                 *将模型关联到模型路由实例
                 * @param req DeregisterModelsFromServiceProviderRequest
                 * @return DeregisterModelsFromServiceProviderOutcome
                 */
                DeregisterModelsFromServiceProviderOutcome DeregisterModelsFromServiceProvider(const Model::DeregisterModelsFromServiceProviderRequest &request);
                void DeregisterModelsFromServiceProviderAsync(const Model::DeregisterModelsFromServiceProviderRequest& request, const DeregisterModelsFromServiceProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterModelsFromServiceProviderOutcomeCallable DeregisterModelsFromServiceProviderCallable(const Model::DeregisterModelsFromServiceProviderRequest& request);

                /**
                 *从目标组中解绑服务器。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req DeregisterTargetGroupInstancesRequest
                 * @return DeregisterTargetGroupInstancesOutcome
                 */
                DeregisterTargetGroupInstancesOutcome DeregisterTargetGroupInstances(const Model::DeregisterTargetGroupInstancesRequest &request);
                void DeregisterTargetGroupInstancesAsync(const Model::DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetGroupInstancesOutcomeCallable DeregisterTargetGroupInstancesCallable(const Model::DeregisterTargetGroupInstancesRequest& request);

                /**
                 *DeregisterTargets 接口用来将一台或多台后端服务从负载均衡的监听器或转发规则上解绑，对于四层监听器，只需指定监听器ID即可，对于七层监听器，还需通过LocationId或Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeregisterTargetsRequest
                 * @return DeregisterTargetsOutcome
                 */
                DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest &request);
                void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request);

                /**
                 *DeregisterTargetsFromClassicalLB 接口用于解绑负载均衡后端服务。本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req DeregisterTargetsFromClassicalLBRequest
                 * @return DeregisterTargetsFromClassicalLBOutcome
                 */
                DeregisterTargetsFromClassicalLBOutcome DeregisterTargetsFromClassicalLB(const Model::DeregisterTargetsFromClassicalLBRequest &request);
                void DeregisterTargetsFromClassicalLBAsync(const Model::DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsFromClassicalLBOutcomeCallable DeregisterTargetsFromClassicalLBCallable(const Model::DeregisterTargetsFromClassicalLBRequest& request);

                /**
                 *查询实例下关联模型的可用性
                 * @param req DescribeAssociatedModelAvailabilityRequest
                 * @return DescribeAssociatedModelAvailabilityOutcome
                 */
                DescribeAssociatedModelAvailabilityOutcome DescribeAssociatedModelAvailability(const Model::DescribeAssociatedModelAvailabilityRequest &request);
                void DescribeAssociatedModelAvailabilityAsync(const Model::DescribeAssociatedModelAvailabilityRequest& request, const DescribeAssociatedModelAvailabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssociatedModelAvailabilityOutcomeCallable DescribeAssociatedModelAvailabilityCallable(const Model::DescribeAssociatedModelAvailabilityRequest& request);

                /**
                 *查询异步任务信息
                 * @param req DescribeAsyncJobsRequest
                 * @return DescribeAsyncJobsOutcome
                 */
                DescribeAsyncJobsOutcome DescribeAsyncJobs(const Model::DescribeAsyncJobsRequest &request);
                void DescribeAsyncJobsAsync(const Model::DescribeAsyncJobsRequest& request, const DescribeAsyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncJobsOutcomeCallable DescribeAsyncJobsCallable(const Model::DescribeAsyncJobsRequest& request);

                /**
                 *查询一个负载均衡所封禁的IP列表（黑名单）。（接口灰度中，如需使用请提工单）
                 * @param req DescribeBlockIPListRequest
                 * @return DescribeBlockIPListOutcome
                 */
                DescribeBlockIPListOutcome DescribeBlockIPList(const Model::DescribeBlockIPListRequest &request);
                void DescribeBlockIPListAsync(const Model::DescribeBlockIPListRequest& request, const DescribeBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPListOutcomeCallable DescribeBlockIPListCallable(const Model::DescribeBlockIPListRequest& request);

                /**
                 *根据 ModifyBlockIPList 接口返回的异步任务的ID，查询封禁IP（黑名单）异步任务的执行状态。（接口灰度中，如需使用请提工单）
                 * @param req DescribeBlockIPTaskRequest
                 * @return DescribeBlockIPTaskOutcome
                 */
                DescribeBlockIPTaskOutcome DescribeBlockIPTask(const Model::DescribeBlockIPTaskRequest &request);
                void DescribeBlockIPTaskAsync(const Model::DescribeBlockIPTaskRequest& request, const DescribeBlockIPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIPTaskOutcomeCallable DescribeBlockIPTaskCallable(const Model::DescribeBlockIPTaskRequest& request);

                /**
                 *查询指定Budget关联的资源列表。支持按资源类型过滤。
                 * @param req DescribeBudgetAssociationsRequest
                 * @return DescribeBudgetAssociationsOutcome
                 */
                DescribeBudgetAssociationsOutcome DescribeBudgetAssociations(const Model::DescribeBudgetAssociationsRequest &request);
                void DescribeBudgetAssociationsAsync(const Model::DescribeBudgetAssociationsRequest& request, const DescribeBudgetAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBudgetAssociationsOutcomeCallable DescribeBudgetAssociationsCallable(const Model::DescribeBudgetAssociationsRequest& request);

                /**
                 *查询Budget列表。
                 * @param req DescribeBudgetsRequest
                 * @return DescribeBudgetsOutcome
                 */
                DescribeBudgetsOutcome DescribeBudgets(const Model::DescribeBudgetsRequest &request);
                void DescribeBudgetsAsync(const Model::DescribeBudgetsRequest& request, const DescribeBudgetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBudgetsOutcomeCallable DescribeBudgetsCallable(const Model::DescribeBudgetsRequest& request);

                /**
                 *DescribeClassicalLBByInstanceId用于通过后端实例ID获取传统型负载均衡ID列表。
                 * @param req DescribeClassicalLBByInstanceIdRequest
                 * @return DescribeClassicalLBByInstanceIdOutcome
                 */
                DescribeClassicalLBByInstanceIdOutcome DescribeClassicalLBByInstanceId(const Model::DescribeClassicalLBByInstanceIdRequest &request);
                void DescribeClassicalLBByInstanceIdAsync(const Model::DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBByInstanceIdOutcomeCallable DescribeClassicalLBByInstanceIdCallable(const Model::DescribeClassicalLBByInstanceIdRequest& request);

                /**
                 *DescribeClassicalLBHealthStatus用于获取传统型负载均衡后端的健康状态
                 * @param req DescribeClassicalLBHealthStatusRequest
                 * @return DescribeClassicalLBHealthStatusOutcome
                 */
                DescribeClassicalLBHealthStatusOutcome DescribeClassicalLBHealthStatus(const Model::DescribeClassicalLBHealthStatusRequest &request);
                void DescribeClassicalLBHealthStatusAsync(const Model::DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBHealthStatusOutcomeCallable DescribeClassicalLBHealthStatusCallable(const Model::DescribeClassicalLBHealthStatusRequest& request);

                /**
                 *DescribeClassicalLBListeners 接口用于获取传统型负载均衡的监听器信息。
                 * @param req DescribeClassicalLBListenersRequest
                 * @return DescribeClassicalLBListenersOutcome
                 */
                DescribeClassicalLBListenersOutcome DescribeClassicalLBListeners(const Model::DescribeClassicalLBListenersRequest &request);
                void DescribeClassicalLBListenersAsync(const Model::DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBListenersOutcomeCallable DescribeClassicalLBListenersCallable(const Model::DescribeClassicalLBListenersRequest& request);

                /**
                 *DescribeClassicalLBTargets用于获取传统型负载均衡绑定的后端服务。
                 * @param req DescribeClassicalLBTargetsRequest
                 * @return DescribeClassicalLBTargetsOutcome
                 */
                DescribeClassicalLBTargetsOutcome DescribeClassicalLBTargets(const Model::DescribeClassicalLBTargetsRequest &request);
                void DescribeClassicalLBTargetsAsync(const Model::DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBTargetsOutcomeCallable DescribeClassicalLBTargetsCallable(const Model::DescribeClassicalLBTargetsRequest& request);

                /**
                 *获取用户的CLB专有日志集。
                 * @param req DescribeClsLogSetRequest
                 * @return DescribeClsLogSetOutcome
                 */
                DescribeClsLogSetOutcome DescribeClsLogSet(const Model::DescribeClsLogSetRequest &request);
                void DescribeClsLogSetAsync(const Model::DescribeClsLogSetRequest& request, const DescribeClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClsLogSetOutcomeCallable DescribeClsLogSetCallable(const Model::DescribeClsLogSetRequest& request);

                /**
                 *查询独占集群中的资源列表，支持按集群ID、VIP、负载均衡ID、是否闲置为过滤条件检索。
                 * @param req DescribeClusterResourcesRequest
                 * @return DescribeClusterResourcesOutcome
                 */
                DescribeClusterResourcesOutcome DescribeClusterResources(const Model::DescribeClusterResourcesRequest &request);
                void DescribeClusterResourcesAsync(const Model::DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterResourcesOutcomeCallable DescribeClusterResourcesCallable(const Model::DescribeClusterResourcesRequest& request);

                /**
                 *查询跨域2.0版本云联网后端子机和网卡信息。
                 * @param req DescribeCrossTargetsRequest
                 * @return DescribeCrossTargetsOutcome
                 */
                DescribeCrossTargetsOutcome DescribeCrossTargets(const Model::DescribeCrossTargetsRequest &request);
                void DescribeCrossTargetsAsync(const Model::DescribeCrossTargetsRequest& request, const DescribeCrossTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossTargetsOutcomeCallable DescribeCrossTargetsCallable(const Model::DescribeCrossTargetsRequest& request);

                /**
                 *拉取配置绑定的 server 或 location，如果 domain 存在，结果将根据 domain 过滤。或拉取配置绑定的 loadbalancer。
                 * @param req DescribeCustomizedConfigAssociateListRequest
                 * @return DescribeCustomizedConfigAssociateListOutcome
                 */
                DescribeCustomizedConfigAssociateListOutcome DescribeCustomizedConfigAssociateList(const Model::DescribeCustomizedConfigAssociateListRequest &request);
                void DescribeCustomizedConfigAssociateListAsync(const Model::DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigAssociateListOutcomeCallable DescribeCustomizedConfigAssociateListCallable(const Model::DescribeCustomizedConfigAssociateListRequest& request);

                /**
                 *拉取个性化配置列表，返回用户 AppId 下指定类型的配置。
                 * @param req DescribeCustomizedConfigListRequest
                 * @return DescribeCustomizedConfigListOutcome
                 */
                DescribeCustomizedConfigListOutcome DescribeCustomizedConfigList(const Model::DescribeCustomizedConfigListRequest &request);
                void DescribeCustomizedConfigListAsync(const Model::DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigListOutcomeCallable DescribeCustomizedConfigListCallable(const Model::DescribeCustomizedConfigListRequest& request);

                /**
                 *查询集群信息列表，支持以集群类型、集群唯一ID、集群名字、集群标签、集群内vip、集群内负载均衡唯一id、集群网络类型、可用区等条件进行检索
                 * @param req DescribeExclusiveClustersRequest
                 * @return DescribeExclusiveClustersOutcome
                 */
                DescribeExclusiveClustersOutcome DescribeExclusiveClusters(const Model::DescribeExclusiveClustersRequest &request);
                void DescribeExclusiveClustersAsync(const Model::DescribeExclusiveClustersRequest& request, const DescribeExclusiveClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExclusiveClustersOutcomeCallable DescribeExclusiveClustersCallable(const Model::DescribeExclusiveClustersRequest& request);

                /**
                 *闲置实例是指创建超过7天后付费实例，且没有创建规则或创建规则没有绑定子机的负载均衡实例。
                 * @param req DescribeIdleLoadBalancersRequest
                 * @return DescribeIdleLoadBalancersOutcome
                 */
                DescribeIdleLoadBalancersOutcome DescribeIdleLoadBalancers(const Model::DescribeIdleLoadBalancersRequest &request);
                void DescribeIdleLoadBalancersAsync(const Model::DescribeIdleLoadBalancersRequest& request, const DescribeIdleLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdleLoadBalancersOutcomeCallable DescribeIdleLoadBalancersCallable(const Model::DescribeIdleLoadBalancersRequest& request);

                /**
                 *查询平台维护的 IntentRouter Tier 字典。
                 * @param req DescribeIntentRouterTiersRequest
                 * @return DescribeIntentRouterTiersOutcome
                 */
                DescribeIntentRouterTiersOutcome DescribeIntentRouterTiers(const Model::DescribeIntentRouterTiersRequest &request);
                void DescribeIntentRouterTiersAsync(const Model::DescribeIntentRouterTiersRequest& request, const DescribeIntentRouterTiersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntentRouterTiersOutcomeCallable DescribeIntentRouterTiersCallable(const Model::DescribeIntentRouterTiersRequest& request);

                /**
                 *查询模型路由实例下的意图路由（Intent Router）列表。
                 * @param req DescribeIntentRoutersRequest
                 * @return DescribeIntentRoutersOutcome
                 */
                DescribeIntentRoutersOutcome DescribeIntentRouters(const Model::DescribeIntentRoutersRequest &request);
                void DescribeIntentRoutersAsync(const Model::DescribeIntentRoutersRequest& request, const DescribeIntentRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntentRoutersOutcomeCallable DescribeIntentRoutersCallable(const Model::DescribeIntentRoutersRequest& request);

                /**
                 *查询指定实例的 API Key 列表。
                 * @param req DescribeKeysRequest
                 * @return DescribeKeysOutcome
                 */
                DescribeKeysOutcome DescribeKeys(const Model::DescribeKeysRequest &request);
                void DescribeKeysAsync(const Model::DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeysOutcomeCallable DescribeKeysCallable(const Model::DescribeKeysRequest& request);

                /**
                 *查询后端云主机或弹性网卡绑定的负载均衡，支持弹性网卡和cvm查询。
                 * @param req DescribeLBListenersRequest
                 * @return DescribeLBListenersOutcome
                 */
                DescribeLBListenersOutcome DescribeLBListeners(const Model::DescribeLBListenersRequest &request);
                void DescribeLBListenersAsync(const Model::DescribeLBListenersRequest& request, const DescribeLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLBListenersOutcomeCallable DescribeLBListenersCallable(const Model::DescribeLBListenersRequest& request);

                /**
                 *查询负载均衡的操作保护信息。
                 * @param req DescribeLBOperateProtectRequest
                 * @return DescribeLBOperateProtectOutcome
                 */
                DescribeLBOperateProtectOutcome DescribeLBOperateProtect(const Model::DescribeLBOperateProtectRequest &request);
                void DescribeLBOperateProtectAsync(const Model::DescribeLBOperateProtectRequest& request, const DescribeLBOperateProtectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLBOperateProtectOutcomeCallable DescribeLBOperateProtectCallable(const Model::DescribeLBOperateProtectRequest& request);

                /**
                 *DescribeListeners 接口可根据负载均衡器 ID、监听器的协议或端口作为过滤条件获取监听器列表。如果不指定任何过滤条件，则返回该负载均衡实例下的所有监听器。
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *根据证书ID查询其在一个地域中所关联到负载均衡实例列表
                 * @param req DescribeLoadBalancerListByCertIdRequest
                 * @return DescribeLoadBalancerListByCertIdOutcome
                 */
                DescribeLoadBalancerListByCertIdOutcome DescribeLoadBalancerListByCertId(const Model::DescribeLoadBalancerListByCertIdRequest &request);
                void DescribeLoadBalancerListByCertIdAsync(const Model::DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerListByCertIdOutcomeCallable DescribeLoadBalancerListByCertIdCallable(const Model::DescribeLoadBalancerListByCertIdRequest& request);

                /**
                 *查询运行中、隔离中、即将到期和负载均衡总数。
                 * @param req DescribeLoadBalancerOverviewRequest
                 * @return DescribeLoadBalancerOverviewOutcome
                 */
                DescribeLoadBalancerOverviewOutcome DescribeLoadBalancerOverview(const Model::DescribeLoadBalancerOverviewRequest &request);
                void DescribeLoadBalancerOverviewAsync(const Model::DescribeLoadBalancerOverviewRequest& request, const DescribeLoadBalancerOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerOverviewOutcomeCallable DescribeLoadBalancerOverviewCallable(const Model::DescribeLoadBalancerOverviewRequest& request);

                /**
                 *查询账号下的高流量负载均衡，返回前10个负载均衡。如果是子账号登录，只返回子账号有权限的负载均衡。
                 * @param req DescribeLoadBalancerTrafficRequest
                 * @return DescribeLoadBalancerTrafficOutcome
                 */
                DescribeLoadBalancerTrafficOutcome DescribeLoadBalancerTraffic(const Model::DescribeLoadBalancerTrafficRequest &request);
                void DescribeLoadBalancerTrafficAsync(const Model::DescribeLoadBalancerTrafficRequest& request, const DescribeLoadBalancerTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerTrafficOutcomeCallable DescribeLoadBalancerTrafficCallable(const Model::DescribeLoadBalancerTrafficRequest& request);

                /**
                 *查询一个地域的负载均衡实例列表。
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *查询负载均衡的详细信息，包括监听器，规则及后端目标。
                 * @param req DescribeLoadBalancersDetailRequest
                 * @return DescribeLoadBalancersDetailOutcome
                 */
                DescribeLoadBalancersDetailOutcome DescribeLoadBalancersDetail(const Model::DescribeLoadBalancersDetailRequest &request);
                void DescribeLoadBalancersDetailAsync(const Model::DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersDetailOutcomeCallable DescribeLoadBalancersDetailCallable(const Model::DescribeLoadBalancersDetailRequest& request);

                /**
                 *查询当前用户 BYOK 中已经配置过的模型别名列表，按 Provider 和 ModelAliasName 去重。
                 * @param req DescribeModelAliasesRequest
                 * @return DescribeModelAliasesOutcome
                 */
                DescribeModelAliasesOutcome DescribeModelAliases(const Model::DescribeModelAliasesRequest &request);
                void DescribeModelAliasesAsync(const Model::DescribeModelAliasesRequest& request, const DescribeModelAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAliasesOutcomeCallable DescribeModelAliasesCallable(const Model::DescribeModelAliasesRequest& request);

                /**
                 *查询实例关联的模型列表
                 * @param req DescribeModelAssociationsRequest
                 * @return DescribeModelAssociationsOutcome
                 */
                DescribeModelAssociationsOutcome DescribeModelAssociations(const Model::DescribeModelAssociationsRequest &request);
                void DescribeModelAssociationsAsync(const Model::DescribeModelAssociationsRequest& request, const DescribeModelAssociationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelAssociationsOutcomeCallable DescribeModelAssociationsCallable(const Model::DescribeModelAssociationsRequest& request);

                /**
                 *查询 BYOK 模型列表及 Key 信息
                 * @param req DescribeModelKeysRequest
                 * @return DescribeModelKeysOutcome
                 */
                DescribeModelKeysOutcome DescribeModelKeys(const Model::DescribeModelKeysRequest &request);
                void DescribeModelKeysAsync(const Model::DescribeModelKeysRequest& request, const DescribeModelKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelKeysOutcomeCallable DescribeModelKeysCallable(const Model::DescribeModelKeysRequest& request);

                /**
                 *查询模型标识聚合列表
                 * @param req DescribeModelNamesRequest
                 * @return DescribeModelNamesOutcome
                 */
                DescribeModelNamesOutcome DescribeModelNames(const Model::DescribeModelNamesRequest &request);
                void DescribeModelNamesAsync(const Model::DescribeModelNamesRequest& request, const DescribeModelNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelNamesOutcomeCallable DescribeModelNamesCallable(const Model::DescribeModelNamesRequest& request);

                /**
                 *查询模型路由实例上的全部模型重写规则（Model Rewrite），或按 SourceModel 精确过滤后的单条规则。该接口为同步只读接口。
                 * @param req DescribeModelRewriteRequest
                 * @return DescribeModelRewriteOutcome
                 */
                DescribeModelRewriteOutcome DescribeModelRewrite(const Model::DescribeModelRewriteRequest &request);
                void DescribeModelRewriteAsync(const Model::DescribeModelRewriteRequest& request, const DescribeModelRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRewriteOutcomeCallable DescribeModelRewriteCallable(const Model::DescribeModelRewriteRequest& request);

                /**
                 *查询模型路由详细信息
                 * @param req DescribeModelRouterDetailRequest
                 * @return DescribeModelRouterDetailOutcome
                 */
                DescribeModelRouterDetailOutcome DescribeModelRouterDetail(const Model::DescribeModelRouterDetailRequest &request);
                void DescribeModelRouterDetailAsync(const Model::DescribeModelRouterDetailRequest& request, const DescribeModelRouterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterDetailOutcomeCallable DescribeModelRouterDetailCallable(const Model::DescribeModelRouterDetailRequest& request);

                /**
                 *查询模型路由实例当前已关联的 Guardrails 防护配置。

本接口为同步只读接口，不触发状态变更。AssociateModelRouterGuardrails、DisassociateModelRouterGuardrails 和 ModifyModelRouterGuardrails 为异步受理接口；如需确认变更任务是否执行成功，请优先使用写接口返回的 RequestId 调用 DescribeAsyncJobs 查询任务状态。
                 * @param req DescribeModelRouterGuardrailsRequest
                 * @return DescribeModelRouterGuardrailsOutcome
                 */
                DescribeModelRouterGuardrailsOutcome DescribeModelRouterGuardrails(const Model::DescribeModelRouterGuardrailsRequest &request);
                void DescribeModelRouterGuardrailsAsync(const Model::DescribeModelRouterGuardrailsRequest& request, const DescribeModelRouterGuardrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterGuardrailsOutcomeCallable DescribeModelRouterGuardrailsCallable(const Model::DescribeModelRouterGuardrailsRequest& request);

                /**
                 *查询实例的使用日志
                 * @param req DescribeModelRouterLogsRequest
                 * @return DescribeModelRouterLogsOutcome
                 */
                DescribeModelRouterLogsOutcome DescribeModelRouterLogs(const Model::DescribeModelRouterLogsRequest &request);
                void DescribeModelRouterLogsAsync(const Model::DescribeModelRouterLogsRequest& request, const DescribeModelRouterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterLogsOutcomeCallable DescribeModelRouterLogsCallable(const Model::DescribeModelRouterLogsRequest& request);

                /**
                 *查询用户配额信息
                 * @param req DescribeModelRouterQuotaRequest
                 * @return DescribeModelRouterQuotaOutcome
                 */
                DescribeModelRouterQuotaOutcome DescribeModelRouterQuota(const Model::DescribeModelRouterQuotaRequest &request);
                void DescribeModelRouterQuotaAsync(const Model::DescribeModelRouterQuotaRequest& request, const DescribeModelRouterQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterQuotaOutcomeCallable DescribeModelRouterQuotaCallable(const Model::DescribeModelRouterQuotaRequest& request);

                /**
                 *查询模型路由资源包抵扣明细
                 * @param req DescribeModelRouterResourcePackageDeductionRequest
                 * @return DescribeModelRouterResourcePackageDeductionOutcome
                 */
                DescribeModelRouterResourcePackageDeductionOutcome DescribeModelRouterResourcePackageDeduction(const Model::DescribeModelRouterResourcePackageDeductionRequest &request);
                void DescribeModelRouterResourcePackageDeductionAsync(const Model::DescribeModelRouterResourcePackageDeductionRequest& request, const DescribeModelRouterResourcePackageDeductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterResourcePackageDeductionOutcomeCallable DescribeModelRouterResourcePackageDeductionCallable(const Model::DescribeModelRouterResourcePackageDeductionRequest& request);

                /**
                 *查询模型路由资源包
                 * @param req DescribeModelRouterResourcePackagesRequest
                 * @return DescribeModelRouterResourcePackagesOutcome
                 */
                DescribeModelRouterResourcePackagesOutcome DescribeModelRouterResourcePackages(const Model::DescribeModelRouterResourcePackagesRequest &request);
                void DescribeModelRouterResourcePackagesAsync(const Model::DescribeModelRouterResourcePackagesRequest& request, const DescribeModelRouterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRouterResourcePackagesOutcomeCallable DescribeModelRouterResourcePackagesCallable(const Model::DescribeModelRouterResourcePackagesRequest& request);

                /**
                 *查询模型路由列表页
                 * @param req DescribeModelRoutersRequest
                 * @return DescribeModelRoutersOutcome
                 */
                DescribeModelRoutersOutcome DescribeModelRouters(const Model::DescribeModelRoutersRequest &request);
                void DescribeModelRoutersAsync(const Model::DescribeModelRoutersRequest& request, const DescribeModelRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelRoutersOutcomeCallable DescribeModelRoutersCallable(const Model::DescribeModelRoutersRequest& request);

                /**
                 *查询用户当前地域下的各项配额
                 * @param req DescribeQuotaRequest
                 * @return DescribeQuotaOutcome
                 */
                DescribeQuotaOutcome DescribeQuota(const Model::DescribeQuotaRequest &request);
                void DescribeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOutcomeCallable DescribeQuotaCallable(const Model::DescribeQuotaRequest& request);

                /**
                 *查询用户在当前地域支持可用区列表和资源列表。
                 * @param req DescribeResourcesRequest
                 * @return DescribeResourcesOutcome
                 */
                DescribeResourcesOutcome DescribeResources(const Model::DescribeResourcesRequest &request);
                void DescribeResourcesAsync(const Model::DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesOutcomeCallable DescribeResourcesCallable(const Model::DescribeResourcesRequest& request);

                /**
                 *DescribeRewrite 接口可根据负载均衡实例ID，查询一个负载均衡实例下转发规则的重定向关系。如果不指定监听器ID或转发规则ID，则返回该负载均衡实例下的所有重定向关系。
                 * @param req DescribeRewriteRequest
                 * @return DescribeRewriteOutcome
                 */
                DescribeRewriteOutcome DescribeRewrite(const Model::DescribeRewriteRequest &request);
                void DescribeRewriteAsync(const Model::DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRewriteOutcomeCallable DescribeRewriteCallable(const Model::DescribeRewriteRequest& request);

                /**
                 *查询BYOK健康检查信息
                 * @param req DescribeServiceProviderHealthStatusRequest
                 * @return DescribeServiceProviderHealthStatusOutcome
                 */
                DescribeServiceProviderHealthStatusOutcome DescribeServiceProviderHealthStatus(const Model::DescribeServiceProviderHealthStatusRequest &request);
                void DescribeServiceProviderHealthStatusAsync(const Model::DescribeServiceProviderHealthStatusRequest& request, const DescribeServiceProviderHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceProviderHealthStatusOutcomeCallable DescribeServiceProviderHealthStatusCallable(const Model::DescribeServiceProviderHealthStatusRequest& request);

                /**
                 *查询平台支持的 Provider 列表
                 * @param req DescribeSupportedProvidersRequest
                 * @return DescribeSupportedProvidersOutcome
                 */
                DescribeSupportedProvidersOutcome DescribeSupportedProviders(const Model::DescribeSupportedProvidersRequest &request);
                void DescribeSupportedProvidersAsync(const Model::DescribeSupportedProvidersRequest& request, const DescribeSupportedProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedProvidersOutcomeCallable DescribeSupportedProvidersCallable(const Model::DescribeSupportedProvidersRequest& request);

                /**
                 *查询目标组后端服务状态。目前仅支持网关负载均衡类型的目标组支持查询后端服务状态。
                 * @param req DescribeTargetGroupInstanceStatusRequest
                 * @return DescribeTargetGroupInstanceStatusOutcome
                 */
                DescribeTargetGroupInstanceStatusOutcome DescribeTargetGroupInstanceStatus(const Model::DescribeTargetGroupInstanceStatusRequest &request);
                void DescribeTargetGroupInstanceStatusAsync(const Model::DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstanceStatusOutcomeCallable DescribeTargetGroupInstanceStatusCallable(const Model::DescribeTargetGroupInstanceStatusRequest& request);

                /**
                 *获取目标组绑定的服务器信息
                 * @param req DescribeTargetGroupInstancesRequest
                 * @return DescribeTargetGroupInstancesOutcome
                 */
                DescribeTargetGroupInstancesOutcome DescribeTargetGroupInstances(const Model::DescribeTargetGroupInstancesRequest &request);
                void DescribeTargetGroupInstancesAsync(const Model::DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstancesOutcomeCallable DescribeTargetGroupInstancesCallable(const Model::DescribeTargetGroupInstancesRequest& request);

                /**
                 *获取目标组列表
                 * @param req DescribeTargetGroupListRequest
                 * @return DescribeTargetGroupListOutcome
                 */
                DescribeTargetGroupListOutcome DescribeTargetGroupList(const Model::DescribeTargetGroupListRequest &request);
                void DescribeTargetGroupListAsync(const Model::DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupListOutcomeCallable DescribeTargetGroupListCallable(const Model::DescribeTargetGroupListRequest& request);

                /**
                 *查询目标组信息
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *DescribeTargetHealth 接口用来获取负载均衡后端服务的健康检查结果，不支持传统型负载均衡。
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *DescribeTargets 接口用来查询负载均衡实例的某些监听器绑定的后端服务列表。
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *本接口用于查询异步任务的执行状态，对于非查询类的接口（创建/删除负载均衡实例、监听器、规则以及绑定或解绑后端服务等），在接口调用成功后，都需要使用本接口查询任务最终是否执行成功。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *查询上游 Provider 支持的模型列表。通过代理转发用户提供的 ApiBase 和 ApiKey 到上游 Provider 的模型列表端点，返回可用的模型名称列表。
                 * @param req DescribeUpperModelsRequest
                 * @return DescribeUpperModelsOutcome
                 */
                DescribeUpperModelsOutcome DescribeUpperModels(const Model::DescribeUpperModelsRequest &request);
                void DescribeUpperModelsAsync(const Model::DescribeUpperModelsRequest& request, const DescribeUpperModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpperModelsOutcomeCallable DescribeUpperModelsCallable(const Model::DescribeUpperModelsRequest& request);

                /**
                 *查询指定模型路由实例下的用户组列表或详情，支持按ID、名称、状态、标签过滤及分页。真实用户组按名称字典序升序返回；返回列表末尾恒追加一个「未分组」虚拟分组（UserGroupId 固定为 ugrp-ungrouped、UserGroupName 固定为 ungrouped），它并非用户真实创建的用户组，而是代表该实例下所有未归属任何用户组的 Key（其 KeyCount 为无组 Key 数，不计入 TotalCount，不可修改或删除）。
                 * @param req DescribeUserGroupsRequest
                 * @return DescribeUserGroupsOutcome
                 */
                DescribeUserGroupsOutcome DescribeUserGroups(const Model::DescribeUserGroupsRequest &request);
                void DescribeUserGroupsAsync(const Model::DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserGroupsOutcomeCallable DescribeUserGroupsCallable(const Model::DescribeUserGroupsRequest& request);

                /**
                 *解除Budget与模型路由实例或Key的关联。
                 * @param req DisassociateBudgetRequest
                 * @return DisassociateBudgetOutcome
                 */
                DisassociateBudgetOutcome DisassociateBudget(const Model::DisassociateBudgetRequest &request);
                void DisassociateBudgetAsync(const Model::DisassociateBudgetRequest& request, const DisassociateBudgetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateBudgetOutcomeCallable DisassociateBudgetCallable(const Model::DisassociateBudgetRequest& request);

                /**
                 *去关联个性化配置，准备下线，请使用SetCustomizedConfigForLoadBalancer。
                 * @param req DisassociateCustomizedConfigRequest
                 * @return DisassociateCustomizedConfigOutcome
                 */
                DisassociateCustomizedConfigOutcome DisassociateCustomizedConfig(const Model::DisassociateCustomizedConfigRequest &request);
                void DisassociateCustomizedConfigAsync(const Model::DisassociateCustomizedConfigRequest& request, const DisassociateCustomizedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateCustomizedConfigOutcomeCallable DisassociateCustomizedConfigCallable(const Model::DisassociateCustomizedConfigRequest& request);

                /**
                 *解除模型路由实例与 Guardrails 防护配置的关联。解除后，模型路由不再使用指定的 Guardrail 防护配置。

本接口为异步接口。接口返回成功表示请求已受理，可使用返回的 RequestId 调用 DescribeAsyncJobs 查询任务执行结果；解除完成后，可调用 DescribeModelRouterGuardrails 查询当前关联。

本接口通过 GuardrailId 定位要解除的防护配置。GuardrailId 可通过 DescribeModelRouterGuardrails 获取。若传入的 GuardrailId 当前未关联到该模型路由实例，接口按幂等成功处理。
                 * @param req DisassociateModelRouterGuardrailsRequest
                 * @return DisassociateModelRouterGuardrailsOutcome
                 */
                DisassociateModelRouterGuardrailsOutcome DisassociateModelRouterGuardrails(const Model::DisassociateModelRouterGuardrailsRequest &request);
                void DisassociateModelRouterGuardrailsAsync(const Model::DisassociateModelRouterGuardrailsRequest& request, const DisassociateModelRouterGuardrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateModelRouterGuardrailsOutcomeCallable DisassociateModelRouterGuardrailsCallable(const Model::DisassociateModelRouterGuardrailsRequest& request);

                /**
                 *将模型从模型路由实例解除关联
                 * @param req DisassociateModelsFromModelRouterRequest
                 * @return DisassociateModelsFromModelRouterOutcome
                 */
                DisassociateModelsFromModelRouterOutcome DisassociateModelsFromModelRouter(const Model::DisassociateModelsFromModelRouterRequest &request);
                void DisassociateModelsFromModelRouterAsync(const Model::DisassociateModelsFromModelRouterRequest& request, const DisassociateModelsFromModelRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateModelsFromModelRouterOutcomeCallable DisassociateModelsFromModelRouterCallable(const Model::DisassociateModelsFromModelRouterRequest& request);

                /**
                 *解除规则的目标组关联关系。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
当解绑七层转发规则时，LocationId 为必填项。
                 * @param req DisassociateTargetGroupsRequest
                 * @return DisassociateTargetGroupsOutcome
                 */
                DisassociateTargetGroupsOutcome DisassociateTargetGroups(const Model::DisassociateTargetGroupsRequest &request);
                void DisassociateTargetGroupsAsync(const Model::DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateTargetGroupsOutcomeCallable DisassociateTargetGroupsCallable(const Model::DisassociateTargetGroupsRequest& request);

                /**
                 *查询创建模型路由资源包的价格。
                 * @param req InquirePriceCreateModelRouterResourcePackageRequest
                 * @return InquirePriceCreateModelRouterResourcePackageOutcome
                 */
                InquirePriceCreateModelRouterResourcePackageOutcome InquirePriceCreateModelRouterResourcePackage(const Model::InquirePriceCreateModelRouterResourcePackageRequest &request);
                void InquirePriceCreateModelRouterResourcePackageAsync(const Model::InquirePriceCreateModelRouterResourcePackageRequest& request, const InquirePriceCreateModelRouterResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateModelRouterResourcePackageOutcomeCallable InquirePriceCreateModelRouterResourcePackageCallable(const Model::InquirePriceCreateModelRouterResourcePackageRequest& request);

                /**
                 *查询退还模型路由资源包的价格。非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。
                 * @param req InquirePriceRefundModelRouterResourcePackageRequest
                 * @return InquirePriceRefundModelRouterResourcePackageOutcome
                 */
                InquirePriceRefundModelRouterResourcePackageOutcome InquirePriceRefundModelRouterResourcePackage(const Model::InquirePriceRefundModelRouterResourcePackageRequest &request);
                void InquirePriceRefundModelRouterResourcePackageAsync(const Model::InquirePriceRefundModelRouterResourcePackageRequest& request, const InquirePriceRefundModelRouterResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRefundModelRouterResourcePackageOutcomeCallable InquirePriceRefundModelRouterResourcePackageCallable(const Model::InquirePriceRefundModelRouterResourcePackageRequest& request);

                /**
                 *InquiryPriceCreateLoadBalancer接口查询创建负载均衡的价格。
                 * @param req InquiryPriceCreateLoadBalancerRequest
                 * @return InquiryPriceCreateLoadBalancerOutcome
                 */
                InquiryPriceCreateLoadBalancerOutcome InquiryPriceCreateLoadBalancer(const Model::InquiryPriceCreateLoadBalancerRequest &request);
                void InquiryPriceCreateLoadBalancerAsync(const Model::InquiryPriceCreateLoadBalancerRequest& request, const InquiryPriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateLoadBalancerOutcomeCallable InquiryPriceCreateLoadBalancerCallable(const Model::InquiryPriceCreateLoadBalancerRequest& request);

                /**
                 *InquiryPriceModifyLoadBalancer接口修改负载均衡配置询价。
                 * @param req InquiryPriceModifyLoadBalancerRequest
                 * @return InquiryPriceModifyLoadBalancerOutcome
                 */
                InquiryPriceModifyLoadBalancerOutcome InquiryPriceModifyLoadBalancer(const Model::InquiryPriceModifyLoadBalancerRequest &request);
                void InquiryPriceModifyLoadBalancerAsync(const Model::InquiryPriceModifyLoadBalancerRequest& request, const InquiryPriceModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceModifyLoadBalancerOutcomeCallable InquiryPriceModifyLoadBalancerCallable(const Model::InquiryPriceModifyLoadBalancerRequest& request);

                /**
                 *InquiryPriceRefundLoadBalancer接口查询负载均衡退费价格，只支持预付费类型的负载均衡实例。
                 * @param req InquiryPriceRefundLoadBalancerRequest
                 * @return InquiryPriceRefundLoadBalancerOutcome
                 */
                InquiryPriceRefundLoadBalancerOutcome InquiryPriceRefundLoadBalancer(const Model::InquiryPriceRefundLoadBalancerRequest &request);
                void InquiryPriceRefundLoadBalancerAsync(const Model::InquiryPriceRefundLoadBalancerRequest& request, const InquiryPriceRefundLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRefundLoadBalancerOutcomeCallable InquiryPriceRefundLoadBalancerCallable(const Model::InquiryPriceRefundLoadBalancerRequest& request);

                /**
                 *InquiryPriceRenewLoadBalancer接口查询对负载均衡续费的价格，只支持预付费负载均衡续费。
                 * @param req InquiryPriceRenewLoadBalancerRequest
                 * @return InquiryPriceRenewLoadBalancerOutcome
                 */
                InquiryPriceRenewLoadBalancerOutcome InquiryPriceRenewLoadBalancer(const Model::InquiryPriceRenewLoadBalancerRequest &request);
                void InquiryPriceRenewLoadBalancerAsync(const Model::InquiryPriceRenewLoadBalancerRequest& request, const InquiryPriceRenewLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewLoadBalancerOutcomeCallable InquiryPriceRenewLoadBalancerCallable(const Model::InquiryPriceRenewLoadBalancerRequest& request);

                /**
                 *用户手动配置原访问地址和重定向地址，系统自动将原访问地址的请求重定向至对应路径的目的地址。同一域名下可以配置多条路径作为重定向策略，实现http/https之间请求的自动跳转。设置重定向时，需满足如下约束条件：若A已经重定向至B，则A不能再重定向至C（除非先删除老的重定向关系，再建立新的重定向关系），B不能重定向至任何其它地址。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ManualRewriteRequest
                 * @return ManualRewriteOutcome
                 */
                ManualRewriteOutcome ManualRewrite(const Model::ManualRewriteRequest &request);
                void ManualRewriteAsync(const Model::ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManualRewriteOutcomeCallable ManualRewriteCallable(const Model::ManualRewriteRequest& request);

                /**
                 *本接口将传统型负载均衡迁移成(原应用型)负载均衡
本接口为异步接口，接口成功返回后，可使用 DescribeLoadBalancers 接口查询负载均衡实例的状态（如创建中、正常），以确定是否创建成功。
                 * @param req MigrateClassicalLoadBalancersRequest
                 * @return MigrateClassicalLoadBalancersOutcome
                 */
                MigrateClassicalLoadBalancersOutcome MigrateClassicalLoadBalancers(const Model::MigrateClassicalLoadBalancersRequest &request);
                void MigrateClassicalLoadBalancersAsync(const Model::MigrateClassicalLoadBalancersRequest& request, const MigrateClassicalLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateClassicalLoadBalancersOutcomeCallable MigrateClassicalLoadBalancersCallable(const Model::MigrateClassicalLoadBalancersRequest& request);

                /**
                 *修改负载均衡的IP（client IP）封禁黑名单列表，一个转发规则最多支持封禁 2000000 个IP，及黑名单容量为 2000000。
（接口灰度中，如需使用请提工单）
                 * @param req ModifyBlockIPListRequest
                 * @return ModifyBlockIPListOutcome
                 */
                ModifyBlockIPListOutcome ModifyBlockIPList(const Model::ModifyBlockIPListRequest &request);
                void ModifyBlockIPListAsync(const Model::ModifyBlockIPListRequest& request, const ModifyBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIPListOutcomeCallable ModifyBlockIPListCallable(const Model::ModifyBlockIPListRequest& request);

                /**
                 *修改Budget属性。BudgetConfigs最多支持1d、7d、30d三个刷新周期各一个；BudgetResetAt不支持作为入参设置，由系统自动维护。修改请求提交后，可通过DescribeBudgets查询状态。
                 * @param req ModifyBudgetAttributesRequest
                 * @return ModifyBudgetAttributesOutcome
                 */
                ModifyBudgetAttributesOutcome ModifyBudgetAttributes(const Model::ModifyBudgetAttributesRequest &request);
                void ModifyBudgetAttributesAsync(const Model::ModifyBudgetAttributesRequest& request, const ModifyBudgetAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBudgetAttributesOutcomeCallable ModifyBudgetAttributesCallable(const Model::ModifyBudgetAttributesRequest& request);

                /**
                 *ModifyDomain接口用来修改负载均衡七层监听器下的域名。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *ModifyDomainAttributes接口用于修改负载均衡7层监听器转发规则的域名级别属性，如修改域名、修改DefaultServer、开启/关闭Http2、修改证书
本接口为异步接口，本接口返回成功后，需以返回的RequestId为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyDomainAttributesRequest
                 * @return ModifyDomainAttributesOutcome
                 */
                ModifyDomainAttributesOutcome ModifyDomainAttributes(const Model::ModifyDomainAttributesRequest &request);
                void ModifyDomainAttributesAsync(const Model::ModifyDomainAttributesRequest& request, const ModifyDomainAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainAttributesOutcomeCallable ModifyDomainAttributesCallable(const Model::ModifyDomainAttributesRequest& request);

                /**
                 *修改负载均衡转发规则上所绑定的云函数。
限制说明：
- 仅支持绑定“Event 函数”类型的云函数。
                 * @param req ModifyFunctionTargetsRequest
                 * @return ModifyFunctionTargetsOutcome
                 */
                ModifyFunctionTargetsOutcome ModifyFunctionTargets(const Model::ModifyFunctionTargetsRequest &request);
                void ModifyFunctionTargetsAsync(const Model::ModifyFunctionTargetsRequest& request, const ModifyFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFunctionTargetsOutcomeCallable ModifyFunctionTargetsCallable(const Model::ModifyFunctionTargetsRequest& request);

                /**
                 *修改意图路由（Intent Router）的属性，支持修改路由名称（RouteName）和分层配置（Tiers）。
RouteName和Tiers均为选填，至少传入一个。Tiers为全量替换（非增量）。
                 * @param req ModifyIntentRouterAttributeRequest
                 * @return ModifyIntentRouterAttributeOutcome
                 */
                ModifyIntentRouterAttributeOutcome ModifyIntentRouterAttribute(const Model::ModifyIntentRouterAttributeRequest &request);
                void ModifyIntentRouterAttributeAsync(const Model::ModifyIntentRouterAttributeRequest& request, const ModifyIntentRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntentRouterAttributeOutcomeCallable ModifyIntentRouterAttributeCallable(const Model::ModifyIntentRouterAttributeRequest& request);

                /**
                 *修改 API Key 的属性
                 * @param req ModifyKeyAttributesRequest
                 * @return ModifyKeyAttributesOutcome
                 */
                ModifyKeyAttributesOutcome ModifyKeyAttributes(const Model::ModifyKeyAttributesRequest &request);
                void ModifyKeyAttributesAsync(const Model::ModifyKeyAttributesRequest& request, const ModifyKeyAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKeyAttributesOutcomeCallable ModifyKeyAttributesCallable(const Model::ModifyKeyAttributesRequest& request);

                /**
                 *禁用/启用Key
                 * @param req ModifyKeysBlockStatusRequest
                 * @return ModifyKeysBlockStatusOutcome
                 */
                ModifyKeysBlockStatusOutcome ModifyKeysBlockStatus(const Model::ModifyKeysBlockStatusRequest &request);
                void ModifyKeysBlockStatusAsync(const Model::ModifyKeysBlockStatusRequest& request, const ModifyKeysBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKeysBlockStatusOutcomeCallable ModifyKeysBlockStatusCallable(const Model::ModifyKeysBlockStatusRequest& request);

                /**
                 *批量变更 Key 的用户组归属：UserGroupId 传真实用户组ID表示批量入组/跨组移动，传 ugrp-ungrouped 表示批量移出到未分组。变更为异步操作，可凭返回的 RequestId 调用 DescribeAsyncJobs 查询进度。
                 * @param req ModifyKeysUserGroupRequest
                 * @return ModifyKeysUserGroupOutcome
                 */
                ModifyKeysUserGroupOutcome ModifyKeysUserGroup(const Model::ModifyKeysUserGroupRequest &request);
                void ModifyKeysUserGroupAsync(const Model::ModifyKeysUserGroupRequest& request, const ModifyKeysUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKeysUserGroupOutcomeCallable ModifyKeysUserGroupCallable(const Model::ModifyKeysUserGroupRequest& request);

                /**
                 *ModifyListener接口用来修改负载均衡监听器的属性，包括监听器名称、健康检查参数、证书信息、转发策略等。本接口不支持传统型负载均衡。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *修改负载均衡实例的属性。支持修改负载均衡实例的名称、设置负载均衡的跨域属性。
注意：非带宽上移用户的 CLB 实例必须加入带宽包才可以设置跨域属性。修改网络计费模式请到控制台操作。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *修改IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                 * @param req ModifyLoadBalancerMixIpTargetRequest
                 * @return ModifyLoadBalancerMixIpTargetOutcome
                 */
                ModifyLoadBalancerMixIpTargetOutcome ModifyLoadBalancerMixIpTarget(const Model::ModifyLoadBalancerMixIpTargetRequest &request);
                void ModifyLoadBalancerMixIpTargetAsync(const Model::ModifyLoadBalancerMixIpTargetRequest& request, const ModifyLoadBalancerMixIpTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerMixIpTargetOutcomeCallable ModifyLoadBalancerMixIpTargetCallable(const Model::ModifyLoadBalancerMixIpTargetRequest& request);

                /**
                 *本接口（ModifyLoadBalancerSla）用于调整按量计费模式实例的性能容量型规格，如共享型升级性能容量型，性能容量型实例规格调整。<br/>
限制条件：
- 共享型升级为性能容量型实例后，不支持再回退到共享型实例。
- 传统型负载均衡实例不支持升级为性能容量型实例。
                 * @param req ModifyLoadBalancerSlaRequest
                 * @return ModifyLoadBalancerSlaOutcome
                 */
                ModifyLoadBalancerSlaOutcome ModifyLoadBalancerSla(const Model::ModifyLoadBalancerSlaRequest &request);
                void ModifyLoadBalancerSlaAsync(const Model::ModifyLoadBalancerSlaRequest& request, const ModifyLoadBalancerSlaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerSlaOutcomeCallable ModifyLoadBalancerSlaCallable(const Model::ModifyLoadBalancerSlaRequest& request);

                /**
                 *修改一个或多个负载均衡实例所属项目。
                 * @param req ModifyLoadBalancersProjectRequest
                 * @return ModifyLoadBalancersProjectOutcome
                 */
                ModifyLoadBalancersProjectOutcome ModifyLoadBalancersProject(const Model::ModifyLoadBalancersProjectRequest &request);
                void ModifyLoadBalancersProjectAsync(const Model::ModifyLoadBalancersProjectRequest& request, const ModifyLoadBalancersProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancersProjectOutcomeCallable ModifyLoadBalancersProjectCallable(const Model::ModifyLoadBalancersProjectRequest& request);

                /**
                 *批量修改模型别名属性。本期支持批量修改模型别名的 Coefficient 配置。接口为异步接口，提交成功后返回 RequestId。
                 * @param req ModifyModelAliasAttributesRequest
                 * @return ModifyModelAliasAttributesOutcome
                 */
                ModifyModelAliasAttributesOutcome ModifyModelAliasAttributes(const Model::ModifyModelAliasAttributesRequest &request);
                void ModifyModelAliasAttributesAsync(const Model::ModifyModelAliasAttributesRequest& request, const ModifyModelAliasAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelAliasAttributesOutcomeCallable ModifyModelAliasAttributesCallable(const Model::ModifyModelAliasAttributesRequest& request);

                /**
                 *修改BYOK的属性，包含：自定义名字
                 * @param req ModifyModelAttributesRequest
                 * @return ModifyModelAttributesOutcome
                 */
                ModifyModelAttributesOutcome ModifyModelAttributes(const Model::ModifyModelAttributesRequest &request);
                void ModifyModelAttributesAsync(const Model::ModifyModelAttributesRequest& request, const ModifyModelAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelAttributesOutcomeCallable ModifyModelAttributesCallable(const Model::ModifyModelAttributesRequest& request);

                /**
                 *修改模型路由属性。支持修改实例名称、限速配置、路由配置，以及替换企业型实例 HTTPS 服务端点绑定的证书（CertId）。每次调用至少传入一个待修改的属性字段，未传入的字段保持原值不变。其中证书替换在请求内同步完成，成功返回即已生效；其余属性修改异步生效，可通过 DescribeModelRouterDetail 接口查询修改结果。
                 * @param req ModifyModelRouterAttributesRequest
                 * @return ModifyModelRouterAttributesOutcome
                 */
                ModifyModelRouterAttributesOutcome ModifyModelRouterAttributes(const Model::ModifyModelRouterAttributesRequest &request);
                void ModifyModelRouterAttributesAsync(const Model::ModifyModelRouterAttributesRequest& request, const ModifyModelRouterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelRouterAttributesOutcomeCallable ModifyModelRouterAttributesCallable(const Model::ModifyModelRouterAttributesRequest& request);

                /**
                 *修改模型路由实例已关联的 Guardrail 防护配置。调用时需要指定已有的 GuardrailId，并在 Type 为 WAF 时传入 InstanceId 和 ServiceId；InputCheckDepth 为选填字段，未传时沿用当前已关联 Guardrail 的取值。修改成功后，GuardrailId 保持不变。

本接口为异步接口。接口返回成功表示请求已受理，可使用返回的 RequestId 调用 DescribeAsyncJobs 查询任务执行结果；修改完成后，可调用 DescribeModelRouterGuardrails 查询最新防护配置。

当前每个模型路由实例最多关联 1 个 Guardrail。
                 * @param req ModifyModelRouterGuardrailsRequest
                 * @return ModifyModelRouterGuardrailsOutcome
                 */
                ModifyModelRouterGuardrailsOutcome ModifyModelRouterGuardrails(const Model::ModifyModelRouterGuardrailsRequest &request);
                void ModifyModelRouterGuardrailsAsync(const Model::ModifyModelRouterGuardrailsRequest& request, const ModifyModelRouterGuardrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelRouterGuardrailsOutcomeCallable ModifyModelRouterGuardrailsCallable(const Model::ModifyModelRouterGuardrailsRequest& request);

                /**
                 *修改模型路由实例关联的安全组
                 * @param req ModifyModelRouterSecurityGroupsRequest
                 * @return ModifyModelRouterSecurityGroupsOutcome
                 */
                ModifyModelRouterSecurityGroupsOutcome ModifyModelRouterSecurityGroups(const Model::ModifyModelRouterSecurityGroupsRequest &request);
                void ModifyModelRouterSecurityGroupsAsync(const Model::ModifyModelRouterSecurityGroupsRequest& request, const ModifyModelRouterSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelRouterSecurityGroupsOutcomeCallable ModifyModelRouterSecurityGroupsCallable(const Model::ModifyModelRouterSecurityGroupsRequest& request);

                /**
                 *ModifyRule 接口用来修改负载均衡七层监听器下的转发规则的各项属性，包括转发路径、健康检查属性、转发策略等。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *修改byok实例下指定模型的属性。该接口为异步接口，可使用DescribeAsyncJobs根据requestId查询异步任务的进度。
                 * @param req ModifyServiceProviderModelAttributesRequest
                 * @return ModifyServiceProviderModelAttributesOutcome
                 */
                ModifyServiceProviderModelAttributesOutcome ModifyServiceProviderModelAttributes(const Model::ModifyServiceProviderModelAttributesRequest &request);
                void ModifyServiceProviderModelAttributesAsync(const Model::ModifyServiceProviderModelAttributesRequest& request, const ModifyServiceProviderModelAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceProviderModelAttributesOutcomeCallable ModifyServiceProviderModelAttributesCallable(const Model::ModifyServiceProviderModelAttributesRequest& request);

                /**
                 *修改目标组的名称或者默认端口属性
                 * @param req ModifyTargetGroupAttributeRequest
                 * @return ModifyTargetGroupAttributeOutcome
                 */
                ModifyTargetGroupAttributeOutcome ModifyTargetGroupAttribute(const Model::ModifyTargetGroupAttributeRequest &request);
                void ModifyTargetGroupAttributeAsync(const Model::ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributeOutcomeCallable ModifyTargetGroupAttributeCallable(const Model::ModifyTargetGroupAttributeRequest& request);

                /**
                 *批量修改目标组服务器端口。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req ModifyTargetGroupInstancesPortRequest
                 * @return ModifyTargetGroupInstancesPortOutcome
                 */
                ModifyTargetGroupInstancesPortOutcome ModifyTargetGroupInstancesPort(const Model::ModifyTargetGroupInstancesPortRequest &request);
                void ModifyTargetGroupInstancesPortAsync(const Model::ModifyTargetGroupInstancesPortRequest& request, const ModifyTargetGroupInstancesPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesPortOutcomeCallable ModifyTargetGroupInstancesPortCallable(const Model::ModifyTargetGroupInstancesPortRequest& request);

                /**
                 *批量修改目标组的服务器权重。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req ModifyTargetGroupInstancesWeightRequest
                 * @return ModifyTargetGroupInstancesWeightOutcome
                 */
                ModifyTargetGroupInstancesWeightOutcome ModifyTargetGroupInstancesWeight(const Model::ModifyTargetGroupInstancesWeightRequest &request);
                void ModifyTargetGroupInstancesWeightAsync(const Model::ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesWeightOutcomeCallable ModifyTargetGroupInstancesWeightCallable(const Model::ModifyTargetGroupInstancesWeightRequest& request);

                /**
                 *ModifyTargetPort接口用于修改监听器绑定的后端服务的端口。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *ModifyTargetWeight 接口用于修改负载均衡绑定的后端服务的转发权重。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *修改用户组的名称、模型白名单或关联预算。仅修改传入的字段；其中数组类字段（Models）传入即整体覆盖。BudgetId 传入即关联/替换该组预算（不支持解绑，解绑用 DisassociateBudget）。修改为异步操作，可凭返回的 RequestId 调用 DescribeAsyncJobs 查询进度。
                 * @param req ModifyUserGroupAttributesRequest
                 * @return ModifyUserGroupAttributesOutcome
                 */
                ModifyUserGroupAttributesOutcome ModifyUserGroupAttributes(const Model::ModifyUserGroupAttributesRequest &request);
                void ModifyUserGroupAttributesAsync(const Model::ModifyUserGroupAttributesRequest& request, const ModifyUserGroupAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserGroupAttributesOutcomeCallable ModifyUserGroupAttributesCallable(const Model::ModifyUserGroupAttributesRequest& request);

                /**
                 *退还模型路由资源包，非有效状态或者设置了自动续订且自动续订已生效的资源包不允许退款。
                 * @param req RefundModelRouterResourcePackageRequest
                 * @return RefundModelRouterResourcePackageOutcome
                 */
                RefundModelRouterResourcePackageOutcome RefundModelRouterResourcePackage(const Model::RefundModelRouterResourcePackageRequest &request);
                void RefundModelRouterResourcePackageAsync(const Model::RefundModelRouterResourcePackageRequest& request, const RefundModelRouterResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundModelRouterResourcePackageOutcomeCallable RefundModelRouterResourcePackageCallable(const Model::RefundModelRouterResourcePackageRequest& request);

                /**
                 *批量重新生成Key
                 * @param req RegenerateKeysRequest
                 * @return RegenerateKeysOutcome
                 */
                RegenerateKeysOutcome RegenerateKeys(const Model::RegenerateKeysRequest &request);
                void RegenerateKeysAsync(const Model::RegenerateKeysRequest& request, const RegenerateKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegenerateKeysOutcomeCallable RegenerateKeysCallable(const Model::RegenerateKeysRequest& request);

                /**
                 *RegisterFunctionTargets 接口用来将一个云函数绑定到负载均衡的7层转发规则，在此之前您需要先行创建相关的7层监听器（HTTP、HTTPS）和转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。<br/>
限制说明：
- 仅广州、深圳金融、上海、上海金融、北京、成都、中国香港、新加坡、东京、硅谷地域支持绑定 SCF。
- 仅标准账户类型支持绑定 SCF，传统账户类型不支持。建议升级为标准账户类型，详情可参见 [账户类型升级说明](https://cloud.tencent.com/document/product/1199/49090)。 
- 传统型负载均衡不支持绑定 SCF。
- 基础网络类型不支持绑定 SCF。
- CLB 默认支持绑定同地域下的所有 SCF，可支持跨 VPC 绑定 SCF，不支持跨地域绑定。
- 目前仅 IPv4、IPv6 NAT64 版本的负载均衡支持绑定 SCF，IPv6 版本的暂不支持。
- 仅七层（HTTP、HTTPS）监听器支持绑定 SCF，四层（TCP、UDP、TCP SSL）监听器和七层 QUIC 监听器不支持。
- CLB 绑定 SCF 仅支持绑定“Event 函数”类型的云函数。
- 一个转发规则只支持绑定一个云函数。
                 * @param req RegisterFunctionTargetsRequest
                 * @return RegisterFunctionTargetsOutcome
                 */
                RegisterFunctionTargetsOutcome RegisterFunctionTargets(const Model::RegisterFunctionTargetsRequest &request);
                void RegisterFunctionTargetsAsync(const Model::RegisterFunctionTargetsRequest& request, const RegisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterFunctionTargetsOutcomeCallable RegisterFunctionTargetsCallable(const Model::RegisterFunctionTargetsRequest& request);

                /**
                 *将模型关联到模型路由实例
                 * @param req RegisterModelsToServiceProviderRequest
                 * @return RegisterModelsToServiceProviderOutcome
                 */
                RegisterModelsToServiceProviderOutcome RegisterModelsToServiceProvider(const Model::RegisterModelsToServiceProviderRequest &request);
                void RegisterModelsToServiceProviderAsync(const Model::RegisterModelsToServiceProviderRequest& request, const RegisterModelsToServiceProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterModelsToServiceProviderOutcomeCallable RegisterModelsToServiceProviderCallable(const Model::RegisterModelsToServiceProviderRequest& request);

                /**
                 *注册服务器到目标组。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req RegisterTargetGroupInstancesRequest
                 * @return RegisterTargetGroupInstancesOutcome
                 */
                RegisterTargetGroupInstancesOutcome RegisterTargetGroupInstances(const Model::RegisterTargetGroupInstancesRequest &request);
                void RegisterTargetGroupInstancesAsync(const Model::RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetGroupInstancesOutcomeCallable RegisterTargetGroupInstancesCallable(const Model::RegisterTargetGroupInstancesRequest& request);

                /**
                 *RegisterTargets 接口用来将一台或多台后端服务绑定到负载均衡的监听器（或7层转发规则），在此之前您需要先行创建相关的4层监听器或7层转发规则。对于四层监听器（TCP、UDP），只需指定监听器ID即可，对于七层监听器（HTTP、HTTPS），还需通过LocationId或者Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req RegisterTargetsRequest
                 * @return RegisterTargetsOutcome
                 */
                RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest &request);
                void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request);

                /**
                 *RegisterTargetsWithClassicalLB 接口用于绑定后端服务到传统型负载均衡。本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 DescribeTaskStatus 接口查询本次任务是否成功。
                 * @param req RegisterTargetsWithClassicalLBRequest
                 * @return RegisterTargetsWithClassicalLBOutcome
                 */
                RegisterTargetsWithClassicalLBOutcome RegisterTargetsWithClassicalLB(const Model::RegisterTargetsWithClassicalLBRequest &request);
                void RegisterTargetsWithClassicalLBAsync(const Model::RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsWithClassicalLBOutcomeCallable RegisterTargetsWithClassicalLBCallable(const Model::RegisterTargetsWithClassicalLBRequest& request);

                /**
                 *删除 BYOK 模型下的指定 Key
                 * @param req RemoveModelKeyRequest
                 * @return RemoveModelKeyOutcome
                 */
                RemoveModelKeyOutcome RemoveModelKey(const Model::RemoveModelKeyRequest &request);
                void RemoveModelKeyAsync(const Model::RemoveModelKeyRequest& request, const RemoveModelKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveModelKeyOutcomeCallable RemoveModelKeyCallable(const Model::RemoveModelKeyRequest& request);

                /**
                 *删除模型路由实例上的一条模型重写规则（按 SourceModel 定位）。该接口为幂等接口：当指定的 SourceModel 不存在重写规则时，请求默认成功。
                 * @param req RemoveModelRewriteRequest
                 * @return RemoveModelRewriteOutcome
                 */
                RemoveModelRewriteOutcome RemoveModelRewrite(const Model::RemoveModelRewriteRequest &request);
                void RemoveModelRewriteAsync(const Model::RemoveModelRewriteRequest& request, const RemoveModelRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveModelRewriteOutcomeCallable RemoveModelRewriteCallable(const Model::RemoveModelRewriteRequest& request);

                /**
                 *本接口 (RenewLoadBalancers) 用于续费包年包月实例。
                 * @param req RenewLoadBalancersRequest
                 * @return RenewLoadBalancersOutcome
                 */
                RenewLoadBalancersOutcome RenewLoadBalancers(const Model::RenewLoadBalancersRequest &request);
                void RenewLoadBalancersAsync(const Model::RenewLoadBalancersRequest& request, const RenewLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewLoadBalancersOutcomeCallable RenewLoadBalancersCallable(const Model::RenewLoadBalancersRequest& request);

                /**
                 *ReplaceCertForLoadBalancers 接口用以替换负载均衡实例所关联的证书，对于各个地域的负载均衡，如果指定的老的证书ID与其有关联关系，则会先解除关联，再建立新证书与该负载均衡的关联关系。
此接口支持替换服务端证书或客户端证书。
需要使用的新证书，可以通过传入证书ID来指定，如果不指定证书ID，则必须传入证书内容等相关信息，用以新建证书并绑定至负载均衡。
注：本接口仅可从广州地域调用。
                 * @param req ReplaceCertForLoadBalancersRequest
                 * @return ReplaceCertForLoadBalancersOutcome
                 */
                ReplaceCertForLoadBalancersOutcome ReplaceCertForLoadBalancers(const Model::ReplaceCertForLoadBalancersRequest &request);
                void ReplaceCertForLoadBalancersAsync(const Model::ReplaceCertForLoadBalancersRequest& request, const ReplaceCertForLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertForLoadBalancersOutcomeCallable ReplaceCertForLoadBalancersCallable(const Model::ReplaceCertForLoadBalancersRequest& request);

                /**
                 *负载均衡维度的个性化配置相关操作：创建、删除、修改、绑定、解绑
                 * @param req SetCustomizedConfigForLoadBalancerRequest
                 * @return SetCustomizedConfigForLoadBalancerOutcome
                 */
                SetCustomizedConfigForLoadBalancerOutcome SetCustomizedConfigForLoadBalancer(const Model::SetCustomizedConfigForLoadBalancerRequest &request);
                void SetCustomizedConfigForLoadBalancerAsync(const Model::SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCustomizedConfigForLoadBalancerOutcomeCallable SetCustomizedConfigForLoadBalancerCallable(const Model::SetCustomizedConfigForLoadBalancerRequest& request);

                /**
                 *增加、删除、更新负载均衡的日志服务(CLS)主题。
                 * @param req SetLoadBalancerClsLogRequest
                 * @return SetLoadBalancerClsLogOutcome
                 */
                SetLoadBalancerClsLogOutcome SetLoadBalancerClsLog(const Model::SetLoadBalancerClsLogRequest &request);
                void SetLoadBalancerClsLogAsync(const Model::SetLoadBalancerClsLogRequest& request, const SetLoadBalancerClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerClsLogOutcomeCallable SetLoadBalancerClsLogCallable(const Model::SetLoadBalancerClsLogRequest& request);

                /**
                 *SetLoadBalancerSecurityGroups 接口支持对一个公网负载均衡实例执行设置（绑定、解绑）安全组操作。查询一个负载均衡实例目前已绑定的安全组，可使用 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口。本接口是set语义，
绑定操作时，入参需要传入负载均衡实例要绑定的所有安全组（已绑定的+新增绑定的）。
解绑操作时，入参需要传入负载均衡实例执行解绑后所绑定的所有安全组；如果要解绑所有安全组，可不传此参数，或传入空数组。注意：内网 CLB 绑定 EIP 后，CLB 上的安全组对来自 EIP 的流量不生效，对来自内网 CLB 的流量生效。
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

                /**
                 *启停负载均衡实例或者监听器。
本接口为异步接口，接口返回成功后，需以得到的 RequestID 为入参，调用  [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683)  接口查询本次任务是否成功。
                 * @param req SetLoadBalancerStartStatusRequest
                 * @return SetLoadBalancerStartStatusOutcome
                 */
                SetLoadBalancerStartStatusOutcome SetLoadBalancerStartStatus(const Model::SetLoadBalancerStartStatusRequest &request);
                void SetLoadBalancerStartStatusAsync(const Model::SetLoadBalancerStartStatusRequest& request, const SetLoadBalancerStartStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerStartStatusOutcomeCallable SetLoadBalancerStartStatusCallable(const Model::SetLoadBalancerStartStatusRequest& request);

                /**
                 *绑定或解绑一个安全组到多个公网负载均衡实例。
                 * @param req SetSecurityGroupForLoadbalancersRequest
                 * @return SetSecurityGroupForLoadbalancersOutcome
                 */
                SetSecurityGroupForLoadbalancersOutcome SetSecurityGroupForLoadbalancers(const Model::SetSecurityGroupForLoadbalancersRequest &request);
                void SetSecurityGroupForLoadbalancersAsync(const Model::SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetSecurityGroupForLoadbalancersOutcomeCallable SetSecurityGroupForLoadbalancersCallable(const Model::SetSecurityGroupForLoadbalancersRequest& request);

                /**
                 *探测模型支持的输入多模态能力。可在创建byok实例勾选模型支持的多模态能力列表、编辑byok实例下模型支持的多模态能力列表时探测。探测完成可根据探测结果一键录入多模态能力列表。
                 * @param req TestModelInputModalitiesRequest
                 * @return TestModelInputModalitiesOutcome
                 */
                TestModelInputModalitiesOutcome TestModelInputModalities(const Model::TestModelInputModalitiesRequest &request);
                void TestModelInputModalitiesAsync(const Model::TestModelInputModalitiesRequest& request, const TestModelInputModalitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestModelInputModalitiesOutcomeCallable TestModelInputModalitiesCallable(const Model::TestModelInputModalitiesRequest& request);

                /**
                 *BYOK健康检查
                 * @param req TestServiceProviderConnectionRequest
                 * @return TestServiceProviderConnectionOutcome
                 */
                TestServiceProviderConnectionOutcome TestServiceProviderConnection(const Model::TestServiceProviderConnectionRequest &request);
                void TestServiceProviderConnectionAsync(const Model::TestServiceProviderConnectionRequest& request, const TestServiceProviderConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestServiceProviderConnectionOutcomeCallable TestServiceProviderConnectionCallable(const Model::TestServiceProviderConnectionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

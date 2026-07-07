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

#ifndef TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_
#define TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateListenerRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateListenerResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteListenerRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteListenerResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteLoadBalancersRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteLoadBalancersResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeAsyncJobsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeAsyncJobsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerDetailRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerDetailResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenersRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenersResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeQuotaRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeQuotaResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeZonesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeZonesResponse.h>
#include <tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyListenerAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyListenerAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyRulesAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyRulesAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/NotifyUnbindTargetRequest.h>
#include <tencentcloud/alb/v20251030/model/NotifyUnbindTargetResponse.h>
#include <tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsResponse.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            class AlbClient : public AbstractClient
            {
            public:
                AlbClient(const Credential &credential, const std::string &region);
                AlbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddTargetsToTargetGroupResponse> AddTargetsToTargetGroupOutcome;
                typedef std::future<AddTargetsToTargetGroupOutcome> AddTargetsToTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AddTargetsToTargetGroupRequest&, AddTargetsToTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTargetsToTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateBandwidthPackageWithLoadBalancerResponse> AssociateBandwidthPackageWithLoadBalancerOutcome;
                typedef std::future<AssociateBandwidthPackageWithLoadBalancerOutcome> AssociateBandwidthPackageWithLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AssociateBandwidthPackageWithLoadBalancerRequest&, AssociateBandwidthPackageWithLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateBandwidthPackageWithLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateListenerAdditionalCertificatesResponse> AssociateListenerAdditionalCertificatesOutcome;
                typedef std::future<AssociateListenerAdditionalCertificatesOutcome> AssociateListenerAdditionalCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AssociateListenerAdditionalCertificatesRequest&, AssociateListenerAdditionalCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateListenerAdditionalCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHealthCheckTemplateResponse> CreateHealthCheckTemplateOutcome;
                typedef std::future<CreateHealthCheckTemplateOutcome> CreateHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateHealthCheckTemplateRequest&, CreateHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRulesResponse> CreateRulesOutcome;
                typedef std::future<CreateRulesOutcome> CreateRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateRulesRequest&, CreateRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHealthCheckTemplatesResponse> DeleteHealthCheckTemplatesOutcome;
                typedef std::future<DeleteHealthCheckTemplatesOutcome> DeleteHealthCheckTemplatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteHealthCheckTemplatesRequest&, DeleteHealthCheckTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancersResponse> DeleteLoadBalancersOutcome;
                typedef std::future<DeleteLoadBalancersOutcome> DeleteLoadBalancersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteLoadBalancersRequest&, DeleteLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncJobsResponse> DescribeAsyncJobsOutcome;
                typedef std::future<DescribeAsyncJobsOutcome> DescribeAsyncJobsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeAsyncJobsRequest&, DescribeAsyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckTemplatesResponse> DescribeHealthCheckTemplatesOutcome;
                typedef std::future<DescribeHealthCheckTemplatesOutcome> DescribeHealthCheckTemplatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeHealthCheckTemplatesRequest&, DescribeHealthCheckTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerCertificatesResponse> DescribeListenerCertificatesOutcome;
                typedef std::future<DescribeListenerCertificatesOutcome> DescribeListenerCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerCertificatesRequest&, DescribeListenerCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerDetailResponse> DescribeListenerDetailOutcome;
                typedef std::future<DescribeListenerDetailOutcome> DescribeListenerDetailOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerDetailRequest&, DescribeListenerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerHealthStatusResponse> DescribeListenerHealthStatusOutcome;
                typedef std::future<DescribeListenerHealthStatusOutcome> DescribeListenerHealthStatusOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerHealthStatusRequest&, DescribeListenerHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerDetailResponse> DescribeLoadBalancerDetailOutcome;
                typedef std::future<DescribeLoadBalancerDetailOutcome> DescribeLoadBalancerDetailOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeLoadBalancerDetailRequest&, DescribeLoadBalancerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaResponse> DescribeQuotaOutcome;
                typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeQuotaRequest&, DescribeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPoliciesResponse> DescribeSecurityPoliciesOutcome;
                typedef std::future<DescribeSecurityPoliciesOutcome> DescribeSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPoliciesRequest&, DescribeSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyCapabilitiesResponse> DescribeSecurityPolicyCapabilitiesOutcome;
                typedef std::future<DescribeSecurityPolicyCapabilitiesOutcome> DescribeSecurityPolicyCapabilitiesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPolicyCapabilitiesRequest&, DescribeSecurityPolicyCapabilitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyCapabilitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyRelationsResponse> DescribeSecurityPolicyRelationsOutcome;
                typedef std::future<DescribeSecurityPolicyRelationsOutcome> DescribeSecurityPolicyRelationsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPolicyRelationsRequest&, DescribeSecurityPolicyRelationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyRelationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemSecurityPoliciesResponse> DescribeSystemSecurityPoliciesOutcome;
                typedef std::future<DescribeSystemSecurityPoliciesOutcome> DescribeSystemSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSystemSecurityPoliciesRequest&, DescribeSystemSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupTargetsResponse> DescribeTargetGroupTargetsOutcome;
                typedef std::future<DescribeTargetGroupTargetsOutcome> DescribeTargetGroupTargetsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupTargetsRequest&, DescribeTargetGroupTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsByTargetResponse> DescribeTargetGroupsByTargetOutcome;
                typedef std::future<DescribeTargetGroupsByTargetOutcome> DescribeTargetGroupsByTargetOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupsByTargetRequest&, DescribeTargetGroupsByTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsByTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateBandwidthPackageFromLoadBalancerResponse> DisassociateBandwidthPackageFromLoadBalancerOutcome;
                typedef std::future<DisassociateBandwidthPackageFromLoadBalancerOutcome> DisassociateBandwidthPackageFromLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DisassociateBandwidthPackageFromLoadBalancerRequest&, DisassociateBandwidthPackageFromLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateBandwidthPackageFromLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateListenerAdditionalCertificatesResponse> DisassociateListenerAdditionalCertificatesOutcome;
                typedef std::future<DisassociateListenerAdditionalCertificatesOutcome> DisassociateListenerAdditionalCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DisassociateListenerAdditionalCertificatesRequest&, DisassociateListenerAdditionalCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateListenerAdditionalCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateLoadBalancerResponse> InquirePriceCreateLoadBalancerOutcome;
                typedef std::future<InquirePriceCreateLoadBalancerOutcome> InquirePriceCreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::InquirePriceCreateLoadBalancerRequest&, InquirePriceCreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHealthCheckTemplateResponse> ModifyHealthCheckTemplateOutcome;
                typedef std::future<ModifyHealthCheckTemplateOutcome> ModifyHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyHealthCheckTemplateRequest&, ModifyHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerAttributesResponse> ModifyListenerAttributesOutcome;
                typedef std::future<ModifyListenerAttributesOutcome> ModifyListenerAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyListenerAttributesRequest&, ModifyListenerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAddressTypeResponse> ModifyLoadBalancerAddressTypeOutcome;
                typedef std::future<ModifyLoadBalancerAddressTypeOutcome> ModifyLoadBalancerAddressTypeOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerAddressTypeRequest&, ModifyLoadBalancerAddressTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAddressTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerModificationProtectionResponse> ModifyLoadBalancerModificationProtectionOutcome;
                typedef std::future<ModifyLoadBalancerModificationProtectionOutcome> ModifyLoadBalancerModificationProtectionOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerModificationProtectionRequest&, ModifyLoadBalancerModificationProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerModificationProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRulesAttributesResponse> ModifyRulesAttributesOutcome;
                typedef std::future<ModifyRulesAttributesOutcome> ModifyRulesAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyRulesAttributesRequest&, ModifyRulesAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRulesAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyAttributesResponse> ModifySecurityPolicyAttributesOutcome;
                typedef std::future<ModifySecurityPolicyAttributesOutcome> ModifySecurityPolicyAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifySecurityPolicyAttributesRequest&, ModifySecurityPolicyAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributesResponse> ModifyTargetGroupAttributesOutcome;
                typedef std::future<ModifyTargetGroupAttributesOutcome> ModifyTargetGroupAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyTargetGroupAttributesRequest&, ModifyTargetGroupAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetsInTargetGroupResponse> ModifyTargetsInTargetGroupOutcome;
                typedef std::future<ModifyTargetsInTargetGroupOutcome> ModifyTargetsInTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyTargetsInTargetGroupRequest&, ModifyTargetsInTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetsInTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::NotifyUnbindTargetResponse> NotifyUnbindTargetOutcome;
                typedef std::future<NotifyUnbindTargetOutcome> NotifyUnbindTargetOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::NotifyUnbindTargetRequest&, NotifyUnbindTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> NotifyUnbindTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveTargetsFromTargetGroupResponse> RemoveTargetsFromTargetGroupOutcome;
                typedef std::future<RemoveTargetsFromTargetGroupOutcome> RemoveTargetsFromTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::RemoveTargetsFromTargetGroupRequest&, RemoveTargetsFromTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTargetsFromTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;



                /**
                 *向目标组内添加后端服务
                 * @param req AddTargetsToTargetGroupRequest
                 * @return AddTargetsToTargetGroupOutcome
                 */
                AddTargetsToTargetGroupOutcome AddTargetsToTargetGroup(const Model::AddTargetsToTargetGroupRequest &request);
                void AddTargetsToTargetGroupAsync(const Model::AddTargetsToTargetGroupRequest& request, const AddTargetsToTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTargetsToTargetGroupOutcomeCallable AddTargetsToTargetGroupCallable(const Model::AddTargetsToTargetGroupRequest& request);

                /**
                 *将共享带宽包绑定到应用型负载均衡实例。
                 * @param req AssociateBandwidthPackageWithLoadBalancerRequest
                 * @return AssociateBandwidthPackageWithLoadBalancerOutcome
                 */
                AssociateBandwidthPackageWithLoadBalancerOutcome AssociateBandwidthPackageWithLoadBalancer(const Model::AssociateBandwidthPackageWithLoadBalancerRequest &request);
                void AssociateBandwidthPackageWithLoadBalancerAsync(const Model::AssociateBandwidthPackageWithLoadBalancerRequest& request, const AssociateBandwidthPackageWithLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateBandwidthPackageWithLoadBalancerOutcomeCallable AssociateBandwidthPackageWithLoadBalancerCallable(const Model::AssociateBandwidthPackageWithLoadBalancerRequest& request);

                /**
                 *AssociateListenerAdditionalCertificates属于异步接口，即系统返回一个请求 ID，但该扩展证书尚未添加成功，系统后台的添加任务仍在进行。您可以调用DescribeListenerCertificates接口查询扩展证书的添加状态：
当HTTPS和QUIC监听器处于Associating状态时，表示扩展证书正在添加中。
当HTTPS和QUIC监听器处于Associated状态时，表示扩展证书添加成功。
                 * @param req AssociateListenerAdditionalCertificatesRequest
                 * @return AssociateListenerAdditionalCertificatesOutcome
                 */
                AssociateListenerAdditionalCertificatesOutcome AssociateListenerAdditionalCertificates(const Model::AssociateListenerAdditionalCertificatesRequest &request);
                void AssociateListenerAdditionalCertificatesAsync(const Model::AssociateListenerAdditionalCertificatesRequest& request, const AssociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateListenerAdditionalCertificatesOutcomeCallable AssociateListenerAdditionalCertificatesCallable(const Model::AssociateListenerAdditionalCertificatesRequest& request);

                /**
                 *创建健康检查模板
                 * @param req CreateHealthCheckTemplateRequest
                 * @return CreateHealthCheckTemplateOutcome
                 */
                CreateHealthCheckTemplateOutcome CreateHealthCheckTemplate(const Model::CreateHealthCheckTemplateRequest &request);
                void CreateHealthCheckTemplateAsync(const Model::CreateHealthCheckTemplateRequest& request, const CreateHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHealthCheckTemplateOutcomeCallable CreateHealthCheckTemplateCallable(const Model::CreateHealthCheckTemplateRequest& request);

                /**
                 *创建监听器
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 ***CreateLoadBalancer**接口属于异步接口，即系统返回一个实例ID，但该应用型负载均衡实例尚未创建成功，系统后台的创建任务仍在进行。您可以调用[DescribeLoadBalancerDetail](214362)查询应用型负载均衡实例的创建状态：
- 当应用型负载均衡实例处于**Provisioning**状态时，表示应用型负载均衡实例正在创建中。
- 当应用型负载均衡实例处于**Active**状态时，表示应用型负载均衡实例创建成功。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *CreateRules创建转发规则，本接口为异步接口，返回成功后需以返回的RequestID为入参，调用DescribeAsyncJobs接口查询本次任务是否成功。
一条规则最多支持10个转发条件（Conditions），5个转发动作（Actions）。
                 * @param req CreateRulesRequest
                 * @return CreateRulesOutcome
                 */
                CreateRulesOutcome CreateRules(const Model::CreateRulesRequest &request);
                void CreateRulesAsync(const Model::CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRulesOutcomeCallable CreateRulesCallable(const Model::CreateRulesRequest& request);

                /**
                 *创建自定义安全策略，用于配置 HTTPS 监听器的 TLS 协议版本和加密套件。通过安全策略，您可以灵活控制客户端与负载均衡之间 HTTPS 通信的安全级别。
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *目标组相关接口
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *删除健康检查模板
                 * @param req DeleteHealthCheckTemplatesRequest
                 * @return DeleteHealthCheckTemplatesOutcome
                 */
                DeleteHealthCheckTemplatesOutcome DeleteHealthCheckTemplates(const Model::DeleteHealthCheckTemplatesRequest &request);
                void DeleteHealthCheckTemplatesAsync(const Model::DeleteHealthCheckTemplatesRequest& request, const DeleteHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHealthCheckTemplatesOutcomeCallable DeleteHealthCheckTemplatesCallable(const Model::DeleteHealthCheckTemplatesRequest& request);

                /**
                 *删除监听器
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 ***DeleteLoadBalancers**接口属于异步接口，即系统返回一个请求ID，但该应用型负载均衡实例尚未删除成功，系统后台的删除任务仍在进行。您可以调用[DescribeLoadBalancerDetails](214362)查询应用型负载均衡实例的删除状态：
- 当应用型负载均衡实例处于**Deleting**状态时，表示应用型负载均衡实例正在删除中。
- 当查询不到指定的应用型负载均衡实例时，表示应用型负载均衡实例删除成功。
                 * @param req DeleteLoadBalancersRequest
                 * @return DeleteLoadBalancersOutcome
                 */
                DeleteLoadBalancersOutcome DeleteLoadBalancers(const Model::DeleteLoadBalancersRequest &request);
                void DeleteLoadBalancersAsync(const Model::DeleteLoadBalancersRequest& request, const DeleteLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancersOutcomeCallable DeleteLoadBalancersCallable(const Model::DeleteLoadBalancersRequest& request);

                /**
                 *DeleteRules删除转发规则，本接口为异步接口，返回成功后需以返回的RequestID为入参，调用DescribeAsyncJobs接口查询本次任务是否成功。
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *删除一个或多个自定义安全策略。删除安全策略前，请确保该策略未被任何 HTTPS 监听器引用，否则删除操作将失败。
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *删除目标组。
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *异步任务查询接口
                 * @param req DescribeAsyncJobsRequest
                 * @return DescribeAsyncJobsOutcome
                 */
                DescribeAsyncJobsOutcome DescribeAsyncJobs(const Model::DescribeAsyncJobsRequest &request);
                void DescribeAsyncJobsAsync(const Model::DescribeAsyncJobsRequest& request, const DescribeAsyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncJobsOutcomeCallable DescribeAsyncJobsCallable(const Model::DescribeAsyncJobsRequest& request);

                /**
                 *查询健康检查模板列表
                 * @param req DescribeHealthCheckTemplatesRequest
                 * @return DescribeHealthCheckTemplatesOutcome
                 */
                DescribeHealthCheckTemplatesOutcome DescribeHealthCheckTemplates(const Model::DescribeHealthCheckTemplatesRequest &request);
                void DescribeHealthCheckTemplatesAsync(const Model::DescribeHealthCheckTemplatesRequest& request, const DescribeHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckTemplatesOutcomeCallable DescribeHealthCheckTemplatesCallable(const Model::DescribeHealthCheckTemplatesRequest& request);

                /**
                 *根据实例id和监听器id，查询指定监听器绑定的证书列表
若输入CertificateType为SVR，返回扩展服务器证书与默认服务器证书的信息
若输入CertificateType为CA，返回默认CA证书的信息
                 * @param req DescribeListenerCertificatesRequest
                 * @return DescribeListenerCertificatesOutcome
                 */
                DescribeListenerCertificatesOutcome DescribeListenerCertificates(const Model::DescribeListenerCertificatesRequest &request);
                void DescribeListenerCertificatesAsync(const Model::DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerCertificatesOutcomeCallable DescribeListenerCertificatesCallable(const Model::DescribeListenerCertificatesRequest& request);

                /**
                 *查询单个监听器详情
                 * @param req DescribeListenerDetailRequest
                 * @return DescribeListenerDetailOutcome
                 */
                DescribeListenerDetailOutcome DescribeListenerDetail(const Model::DescribeListenerDetailRequest &request);
                void DescribeListenerDetailAsync(const Model::DescribeListenerDetailRequest& request, const DescribeListenerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerDetailOutcomeCallable DescribeListenerDetailCallable(const Model::DescribeListenerDetailRequest& request);

                /**
                 *查询监听器健康状态。
                 * @param req DescribeListenerHealthStatusRequest
                 * @return DescribeListenerHealthStatusOutcome
                 */
                DescribeListenerHealthStatusOutcome DescribeListenerHealthStatus(const Model::DescribeListenerHealthStatusRequest &request);
                void DescribeListenerHealthStatusAsync(const Model::DescribeListenerHealthStatusRequest& request, const DescribeListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerHealthStatusOutcomeCallable DescribeListenerHealthStatusCallable(const Model::DescribeListenerHealthStatusRequest& request);

                /**
                 *查询监听器列表
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *查询指定负载均衡实例的详细信息。
                 * @param req DescribeLoadBalancerDetailRequest
                 * @return DescribeLoadBalancerDetailOutcome
                 */
                DescribeLoadBalancerDetailOutcome DescribeLoadBalancerDetail(const Model::DescribeLoadBalancerDetailRequest &request);
                void DescribeLoadBalancerDetailAsync(const Model::DescribeLoadBalancerDetailRequest& request, const DescribeLoadBalancerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerDetailOutcomeCallable DescribeLoadBalancerDetailCallable(const Model::DescribeLoadBalancerDetailRequest& request);

                /**
                 *查询实例配置。
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *查询当前账号的 ALB 配额配置。支持按配额类型查询，也支持传入资源ID查询资源级配额；可通过 DisplayFields 按需返回已使用量和剩余可用量。
                 * @param req DescribeQuotaRequest
                 * @return DescribeQuotaOutcome
                 */
                DescribeQuotaOutcome DescribeQuota(const Model::DescribeQuotaRequest &request);
                void DescribeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOutcomeCallable DescribeQuotaCallable(const Model::DescribeQuotaRequest& request);

                /**
                 *查询转发规则
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *查询自定义安全策略列表，支持按安全策略 ID、名称或标签进行筛选，并支持分页查询。
                 * @param req DescribeSecurityPoliciesRequest
                 * @return DescribeSecurityPoliciesOutcome
                 */
                DescribeSecurityPoliciesOutcome DescribeSecurityPolicies(const Model::DescribeSecurityPoliciesRequest &request);
                void DescribeSecurityPoliciesAsync(const Model::DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPoliciesOutcomeCallable DescribeSecurityPoliciesCallable(const Model::DescribeSecurityPoliciesRequest& request);

                /**
                 *查询当前地域支持的安全策略配置能力，包括可选的 TLS 协议版本及各版本对应的加密套件列表。在创建或修改自定义安全策略前，建议先调用此接口获取可用的配置选项。
                 * @param req DescribeSecurityPolicyCapabilitiesRequest
                 * @return DescribeSecurityPolicyCapabilitiesOutcome
                 */
                DescribeSecurityPolicyCapabilitiesOutcome DescribeSecurityPolicyCapabilities(const Model::DescribeSecurityPolicyCapabilitiesRequest &request);
                void DescribeSecurityPolicyCapabilitiesAsync(const Model::DescribeSecurityPolicyCapabilitiesRequest& request, const DescribeSecurityPolicyCapabilitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyCapabilitiesOutcomeCallable DescribeSecurityPolicyCapabilitiesCallable(const Model::DescribeSecurityPolicyCapabilitiesRequest& request);

                /**
                 *查询安全策略的关联关系，即安全策略被哪些 HTTPS 监听器引用。在删除或修改安全策略前，建议先调用此接口确认影响范围。
                 * @param req DescribeSecurityPolicyRelationsRequest
                 * @return DescribeSecurityPolicyRelationsOutcome
                 */
                DescribeSecurityPolicyRelationsOutcome DescribeSecurityPolicyRelations(const Model::DescribeSecurityPolicyRelationsRequest &request);
                void DescribeSecurityPolicyRelationsAsync(const Model::DescribeSecurityPolicyRelationsRequest& request, const DescribeSecurityPolicyRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyRelationsOutcomeCallable DescribeSecurityPolicyRelationsCallable(const Model::DescribeSecurityPolicyRelationsRequest& request);

                /**
                 *查询系统安全策略。
                 * @param req DescribeSystemSecurityPoliciesRequest
                 * @return DescribeSystemSecurityPoliciesOutcome
                 */
                DescribeSystemSecurityPoliciesOutcome DescribeSystemSecurityPolicies(const Model::DescribeSystemSecurityPoliciesRequest &request);
                void DescribeSystemSecurityPoliciesAsync(const Model::DescribeSystemSecurityPoliciesRequest& request, const DescribeSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemSecurityPoliciesOutcomeCallable DescribeSystemSecurityPoliciesCallable(const Model::DescribeSystemSecurityPoliciesRequest& request);

                /**
                 *查询目标组内后端服务
                 * @param req DescribeTargetGroupTargetsRequest
                 * @return DescribeTargetGroupTargetsOutcome
                 */
                DescribeTargetGroupTargetsOutcome DescribeTargetGroupTargets(const Model::DescribeTargetGroupTargetsRequest &request);
                void DescribeTargetGroupTargetsAsync(const Model::DescribeTargetGroupTargetsRequest& request, const DescribeTargetGroupTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupTargetsOutcomeCallable DescribeTargetGroupTargetsCallable(const Model::DescribeTargetGroupTargetsRequest& request);

                /**
                 *查询目标组列表
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *根据子机查询绑定的目标组
                 * @param req DescribeTargetGroupsByTargetRequest
                 * @return DescribeTargetGroupsByTargetOutcome
                 */
                DescribeTargetGroupsByTargetOutcome DescribeTargetGroupsByTarget(const Model::DescribeTargetGroupsByTargetRequest &request);
                void DescribeTargetGroupsByTargetAsync(const Model::DescribeTargetGroupsByTargetRequest& request, const DescribeTargetGroupsByTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsByTargetOutcomeCallable DescribeTargetGroupsByTargetCallable(const Model::DescribeTargetGroupsByTargetRequest& request);

                /**
                 *查询可用区
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *将共享带宽包从应用型负载均衡实例解绑。
                 * @param req DisassociateBandwidthPackageFromLoadBalancerRequest
                 * @return DisassociateBandwidthPackageFromLoadBalancerOutcome
                 */
                DisassociateBandwidthPackageFromLoadBalancerOutcome DisassociateBandwidthPackageFromLoadBalancer(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest &request);
                void DisassociateBandwidthPackageFromLoadBalancerAsync(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest& request, const DisassociateBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateBandwidthPackageFromLoadBalancerOutcomeCallable DisassociateBandwidthPackageFromLoadBalancerCallable(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest& request);

                /**
                 *DisassociateListenerAdditionalCertificates属于异步接口，即系统返回一个请求 ID，但该扩展证书尚未解绑成功，系统后台的解绑任务仍在进行。您可以调用DescribeListenerCertificates接口查询证书的解绑状态：若证书处于Disassociating状态，则证书正在解绑中。
                 * @param req DisassociateListenerAdditionalCertificatesRequest
                 * @return DisassociateListenerAdditionalCertificatesOutcome
                 */
                DisassociateListenerAdditionalCertificatesOutcome DisassociateListenerAdditionalCertificates(const Model::DisassociateListenerAdditionalCertificatesRequest &request);
                void DisassociateListenerAdditionalCertificatesAsync(const Model::DisassociateListenerAdditionalCertificatesRequest& request, const DisassociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateListenerAdditionalCertificatesOutcomeCallable DisassociateListenerAdditionalCertificatesCallable(const Model::DisassociateListenerAdditionalCertificatesRequest& request);

                /**
                 *InquirePriceCreateLoadBalancer接口查询创建负载均衡的价格。
                 * @param req InquirePriceCreateLoadBalancerRequest
                 * @return InquirePriceCreateLoadBalancerOutcome
                 */
                InquirePriceCreateLoadBalancerOutcome InquirePriceCreateLoadBalancer(const Model::InquirePriceCreateLoadBalancerRequest &request);
                void InquirePriceCreateLoadBalancerAsync(const Model::InquirePriceCreateLoadBalancerRequest& request, const InquirePriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateLoadBalancerOutcomeCallable InquirePriceCreateLoadBalancerCallable(const Model::InquirePriceCreateLoadBalancerRequest& request);

                /**
                 *修改健康检查模板
                 * @param req ModifyHealthCheckTemplateRequest
                 * @return ModifyHealthCheckTemplateOutcome
                 */
                ModifyHealthCheckTemplateOutcome ModifyHealthCheckTemplate(const Model::ModifyHealthCheckTemplateRequest &request);
                void ModifyHealthCheckTemplateAsync(const Model::ModifyHealthCheckTemplateRequest& request, const ModifyHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHealthCheckTemplateOutcomeCallable ModifyHealthCheckTemplateCallable(const Model::ModifyHealthCheckTemplateRequest& request);

                /**
                 *修改监听器属性
                 * @param req ModifyListenerAttributesRequest
                 * @return ModifyListenerAttributesOutcome
                 */
                ModifyListenerAttributesOutcome ModifyListenerAttributes(const Model::ModifyListenerAttributesRequest &request);
                void ModifyListenerAttributesAsync(const Model::ModifyListenerAttributesRequest& request, const ModifyListenerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerAttributesOutcomeCallable ModifyListenerAttributesCallable(const Model::ModifyListenerAttributesRequest& request);

                /**
                 ***前提条件：**
您已经创建应用型负载均衡实例，具体操作，请参见 CreateLoadBalancer 。
当您需要通过此接口将应用型负载均衡实例的网络类型由私网变为公网时，您需要先创建一个弹性公网 IP。
**使用说明：**
ModifyLoadBalancerAddressType 接口属于异步接口，即系统返回一个请求 ID，但该应用型负载均衡实例的网络类型尚未变更成功，系统后台的变更任务仍在进行。您可以调用 DescribeLoadBalancerDetail 查询应用型负载均衡实例的网络类型的变更状态：
当应用型负载均衡实例处于 Configuring 状态时，表示应用型负载均衡实例的网络类型正在变更中。
当应用型负载均衡实例处于 Active 状态时，表示应用型负载均衡实例的网络类型变更成功。
                 * @param req ModifyLoadBalancerAddressTypeRequest
                 * @return ModifyLoadBalancerAddressTypeOutcome
                 */
                ModifyLoadBalancerAddressTypeOutcome ModifyLoadBalancerAddressType(const Model::ModifyLoadBalancerAddressTypeRequest &request);
                void ModifyLoadBalancerAddressTypeAsync(const Model::ModifyLoadBalancerAddressTypeRequest& request, const ModifyLoadBalancerAddressTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAddressTypeOutcomeCallable ModifyLoadBalancerAddressTypeCallable(const Model::ModifyLoadBalancerAddressTypeRequest& request);

                /**
                 ***ModifyLoadBalancerAttributes**接口属于异步接口，即系统返回一个请求ID，但该应用型负载均衡实例属性尚未修改成功，系统后台的修改任务仍在进行。您可以调用[DescribeLoadBalancerAttribute](214362)查询应用型负载均衡实例属性的修改状态：
- 当应用型负载均衡实例属性处于**Configuring**状态时，表示应用型负载均衡实例属性正在修改中。
- 当应用型负载均衡实例属性处于**Active**状态时，表示应用型负载均衡实例属性修改成功。
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *设置负载均衡实例修改保护。
                 * @param req ModifyLoadBalancerModificationProtectionRequest
                 * @return ModifyLoadBalancerModificationProtectionOutcome
                 */
                ModifyLoadBalancerModificationProtectionOutcome ModifyLoadBalancerModificationProtection(const Model::ModifyLoadBalancerModificationProtectionRequest &request);
                void ModifyLoadBalancerModificationProtectionAsync(const Model::ModifyLoadBalancerModificationProtectionRequest& request, const ModifyLoadBalancerModificationProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerModificationProtectionOutcomeCallable ModifyLoadBalancerModificationProtectionCallable(const Model::ModifyLoadBalancerModificationProtectionRequest& request);

                /**
                 *ModifyRulesAttributes修改转发规则属性，本接口为异步接口，返回成功后需以返回的RequestID为入参，调用DescribeAsyncJobs接口查询本次任务是否成功。
一条规则最多支持10个转发条件（Conditions），5个转发动作（Actions）。
                 * @param req ModifyRulesAttributesRequest
                 * @return ModifyRulesAttributesOutcome
                 */
                ModifyRulesAttributesOutcome ModifyRulesAttributes(const Model::ModifyRulesAttributesRequest &request);
                void ModifyRulesAttributesAsync(const Model::ModifyRulesAttributesRequest& request, const ModifyRulesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRulesAttributesOutcomeCallable ModifyRulesAttributesCallable(const Model::ModifyRulesAttributesRequest& request);

                /**
                 *修改自定义安全策略的属性，包括策略名称、TLS 协议版本和加密套件。修改后的配置将立即应用到所有关联该策略的 HTTPS 监听器。
                 * @param req ModifySecurityPolicyAttributesRequest
                 * @return ModifySecurityPolicyAttributesOutcome
                 */
                ModifySecurityPolicyAttributesOutcome ModifySecurityPolicyAttributes(const Model::ModifySecurityPolicyAttributesRequest &request);
                void ModifySecurityPolicyAttributesAsync(const Model::ModifySecurityPolicyAttributesRequest& request, const ModifySecurityPolicyAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyAttributesOutcomeCallable ModifySecurityPolicyAttributesCallable(const Model::ModifySecurityPolicyAttributesRequest& request);

                /**
                 *修改目标组。
                 * @param req ModifyTargetGroupAttributesRequest
                 * @return ModifyTargetGroupAttributesOutcome
                 */
                ModifyTargetGroupAttributesOutcome ModifyTargetGroupAttributes(const Model::ModifyTargetGroupAttributesRequest &request);
                void ModifyTargetGroupAttributesAsync(const Model::ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributesOutcomeCallable ModifyTargetGroupAttributesCallable(const Model::ModifyTargetGroupAttributesRequest& request);

                /**
                 *修改目标组内后端服务信息
                 * @param req ModifyTargetsInTargetGroupRequest
                 * @return ModifyTargetsInTargetGroupOutcome
                 */
                ModifyTargetsInTargetGroupOutcome ModifyTargetsInTargetGroup(const Model::ModifyTargetsInTargetGroupRequest &request);
                void ModifyTargetsInTargetGroupAsync(const Model::ModifyTargetsInTargetGroupRequest& request, const ModifyTargetsInTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetsInTargetGroupOutcomeCallable ModifyTargetsInTargetGroupCallable(const Model::ModifyTargetsInTargetGroupRequest& request);

                /**
                 *通知负载均衡解绑后端服务
                 * @param req NotifyUnbindTargetRequest
                 * @return NotifyUnbindTargetOutcome
                 */
                NotifyUnbindTargetOutcome NotifyUnbindTarget(const Model::NotifyUnbindTargetRequest &request);
                void NotifyUnbindTargetAsync(const Model::NotifyUnbindTargetRequest& request, const NotifyUnbindTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                NotifyUnbindTargetOutcomeCallable NotifyUnbindTargetCallable(const Model::NotifyUnbindTargetRequest& request);

                /**
                 *从目标组内移除后端服务
                 * @param req RemoveTargetsFromTargetGroupRequest
                 * @return RemoveTargetsFromTargetGroupOutcome
                 */
                RemoveTargetsFromTargetGroupOutcome RemoveTargetsFromTargetGroup(const Model::RemoveTargetsFromTargetGroupRequest &request);
                void RemoveTargetsFromTargetGroupAsync(const Model::RemoveTargetsFromTargetGroupRequest& request, const RemoveTargetsFromTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveTargetsFromTargetGroupOutcomeCallable RemoveTargetsFromTargetGroupCallable(const Model::RemoveTargetsFromTargetGroupRequest& request);

                /**
                 *SetLoadBalancerSecurityGroups 接口支持对一个公网负载均衡实例执行设置（绑定、解绑）安全组操作。查询一个负载均衡实例目前已绑定的安全组，可使用 [DescribeLoadBalancerDetail](xxx) 接口。本接口是set语义，
绑定操作时，入参需要传入负载均衡实例要绑定的所有安全组（已绑定的+新增绑定的）。
解绑操作时，入参需要传入负载均衡实例执行解绑后所绑定的所有安全组；如果要解绑所有安全组，可不传此参数，或传入空数组。
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_

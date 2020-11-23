/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_
#define TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecm/v20190719/model/AllocateAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/AllocateAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssociateAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssociateAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchDeregisterTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchDeregisterTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchRegisterTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchRegisterTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateHaVipRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateHaVipResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateRouteTableRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateRouteTableResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteHaVipRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteHaVipResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerListenersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerListenersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRouteTableRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRouteTableResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteVpcRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteVpcResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressQuotaRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressQuotaResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeHaVipsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeHaVipsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImportImageOsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImportImageOsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeListenersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeListenersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalanceTaskStatusRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalanceTaskStatusResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteConflictsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteConflictsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisableRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisableRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/EnableRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/EnableRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ImportCustomImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ImportCustomImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyHaVipAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyHaVipAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyImageAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyImageAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyRouteTableAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyRouteTableAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetPortRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetPortResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRouteTableAssociationRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRouteTableAssociationResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/StartInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/StartInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/StopInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/StopInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            class EcmClient : public AbstractClient
            {
            public:
                EcmClient(const Credential &credential, const std::string &region);
                EcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::BatchDeregisterTargetsResponse> BatchDeregisterTargetsOutcome;
                typedef std::future<BatchDeregisterTargetsOutcome> BatchDeregisterTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchDeregisterTargetsRequest&, BatchDeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeregisterTargetsAsyncHandler;
                typedef Outcome<Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Error, Model::BatchRegisterTargetsResponse> BatchRegisterTargetsOutcome;
                typedef std::future<BatchRegisterTargetsOutcome> BatchRegisterTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchRegisterTargetsRequest&, BatchRegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterTargetsAsyncHandler;
                typedef Outcome<Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Error, Model::CreateModuleResponse> CreateModuleOutcome;
                typedef std::future<CreateModuleOutcome> CreateModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateModuleRequest&, CreateModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModuleAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoadBalancerListenersResponse> DeleteLoadBalancerListenersOutcome;
                typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteLoadBalancerListenersRequest&, DeleteLoadBalancerListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenersAsyncHandler;
                typedef Outcome<Error, Model::DeleteModuleResponse> DeleteModuleOutcome;
                typedef std::future<DeleteModuleOutcome> DeleteModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteModuleRequest&, DeleteModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBaseOverviewResponse> DescribeBaseOverviewOutcome;
                typedef std::future<DescribeBaseOverviewOutcome> DescribeBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeBaseOverviewRequest&, DescribeBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomImageTaskResponse> DescribeCustomImageTaskOutcome;
                typedef std::future<DescribeCustomImageTaskOutcome> DescribeCustomImageTaskOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeCustomImageTaskRequest&, DescribeCustomImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomImageTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeDefaultSubnetResponse> DescribeDefaultSubnetOutcome;
                typedef std::future<DescribeDefaultSubnetOutcome> DescribeDefaultSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeDefaultSubnetRequest&, DescribeDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultSubnetAsyncHandler;
                typedef Outcome<Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Error, Model::DescribeImportImageOsResponse> DescribeImportImageOsOutcome;
                typedef std::future<DescribeImportImageOsOutcome> DescribeImportImageOsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImportImageOsRequest&, DescribeImportImageOsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportImageOsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceTypeConfigResponse> DescribeInstanceTypeConfigOutcome;
                typedef std::future<DescribeInstanceTypeConfigOutcome> DescribeInstanceTypeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceTypeConfigRequest&, DescribeInstanceTypeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceVncUrlResponse> DescribeInstanceVncUrlOutcome;
                typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceVncUrlRequest&, DescribeInstanceVncUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoadBalanceTaskStatusResponse> DescribeLoadBalanceTaskStatusOutcome;
                typedef std::future<DescribeLoadBalanceTaskStatusOutcome> DescribeLoadBalanceTaskStatusOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeLoadBalanceTaskStatusRequest&, DescribeLoadBalanceTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalanceTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Error, Model::DescribeModuleResponse> DescribeModuleOutcome;
                typedef std::future<DescribeModuleOutcome> DescribeModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleRequest&, DescribeModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeModuleDetailResponse> DescribeModuleDetailOutcome;
                typedef std::future<DescribeModuleDetailOutcome> DescribeModuleDetailOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleDetailRequest&, DescribeModuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNodeResponse> DescribeNodeOutcome;
                typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeNodeRequest&, DescribeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeAsyncHandler;
                typedef Outcome<Error, Model::DescribePeakBaseOverviewResponse> DescribePeakBaseOverviewOutcome;
                typedef std::future<DescribePeakBaseOverviewOutcome> DescribePeakBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakBaseOverviewRequest&, DescribePeakBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakBaseOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribePeakNetworkOverviewResponse> DescribePeakNetworkOverviewOutcome;
                typedef std::future<DescribePeakNetworkOverviewOutcome> DescribePeakNetworkOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakNetworkOverviewRequest&, DescribePeakNetworkOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakNetworkOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteConflictsResponse> DescribeRouteConflictsOutcome;
                typedef std::future<DescribeRouteConflictsOutcome> DescribeRouteConflictsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeRouteConflictsRequest&, DescribeRouteConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupLimitsResponse> DescribeSecurityGroupLimitsOutcome;
                typedef std::future<DescribeSecurityGroupLimitsOutcome> DescribeSecurityGroupLimitsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupLimitsRequest&, DescribeSecurityGroupLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupLimitsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DisableRoutesResponse> DisableRoutesOutcome;
                typedef std::future<DisableRoutesOutcome> DisableRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisableRoutesRequest&, DisableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRoutesAsyncHandler;
                typedef Outcome<Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::EnableRoutesResponse> EnableRoutesOutcome;
                typedef std::future<EnableRoutesOutcome> EnableRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::EnableRoutesRequest&, EnableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRoutesAsyncHandler;
                typedef Outcome<Error, Model::ImportCustomImageResponse> ImportCustomImageOutcome;
                typedef std::future<ImportCustomImageOutcome> ImportCustomImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ImportCustomImageRequest&, ImportCustomImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportCustomImageAsyncHandler;
                typedef Outcome<Error, Model::ImportImageResponse> ImportImageOutcome;
                typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ImportImageRequest&, ImportImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
                typedef Outcome<Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::ModifyDefaultSubnetResponse> ModifyDefaultSubnetOutcome;
                typedef std::future<ModifyDefaultSubnetOutcome> ModifyDefaultSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyDefaultSubnetRequest&, ModifyDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultSubnetAsyncHandler;
                typedef Outcome<Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyImageAttributeResponse> ModifyImageAttributeOutcome;
                typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyImageAttributeRequest&, ModifyImageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleConfigResponse> ModifyModuleConfigOutcome;
                typedef std::future<ModifyModuleConfigOutcome> ModifyModuleConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleConfigRequest&, ModifyModuleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleImageResponse> ModifyModuleImageOutcome;
                typedef std::future<ModifyModuleImageOutcome> ModifyModuleImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleImageRequest&, ModifyModuleImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleImageAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleIpDirectResponse> ModifyModuleIpDirectOutcome;
                typedef std::future<ModifyModuleIpDirectOutcome> ModifyModuleIpDirectOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleIpDirectRequest&, ModifyModuleIpDirectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleIpDirectAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNameResponse> ModifyModuleNameOutcome;
                typedef std::future<ModifyModuleNameOutcome> ModifyModuleNameOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNameRequest&, ModifyModuleNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNetworkResponse> ModifyModuleNetworkOutcome;
                typedef std::future<ModifyModuleNetworkOutcome> ModifyModuleNetworkOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNetworkRequest&, ModifyModuleNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNetworkAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleSecurityGroupsResponse> ModifyModuleSecurityGroupsOutcome;
                typedef std::future<ModifyModuleSecurityGroupsOutcome> ModifyModuleSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleSecurityGroupsRequest&, ModifyModuleSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Error, Model::RemovePrivateIpAddressesResponse> RemovePrivateIpAddressesOutcome;
                typedef std::future<RemovePrivateIpAddressesOutcome> RemovePrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RemovePrivateIpAddressesRequest&, RemovePrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesResponse> ResetInstancesOutcome;
                typedef std::future<ResetInstancesOutcome> ResetInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesRequest&, ResetInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesMaxBandwidthResponse> ResetInstancesMaxBandwidthOutcome;
                typedef std::future<ResetInstancesMaxBandwidthOutcome> ResetInstancesMaxBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesMaxBandwidthRequest&, ResetInstancesMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *申请一个或多个弹性公网IP（简称 EIP）
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *弹性网卡申请内网 IP
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *将弹性公网IP（简称 EIP）绑定到实例或弹性网卡的指定内网 IP 上。
将 EIP 绑定到实例（ECM）上，其本质是将 EIP 绑定到实例上主网卡的主内网 IP 上。
将 EIP 绑定到主网卡的主内网IP上，绑定过程会把其上绑定的普通公网 IP 自动解绑并释放。
将 EIP 绑定到指定网卡的内网 IP上（非主网卡的主内网IP），则必须先解绑该 EIP，才能再绑定新的。
将 EIP 绑定到NAT网关，请使用接口EipBindNatGateway
EIP 如果欠费或被封堵，则不能被绑定。
只有状态为 UNBIND 的 EIP 才能够被绑定。
                 * @param req AssociateAddressRequest
                 * @return AssociateAddressOutcome
                 */
                AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest &request);
                void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request);

                /**
                 *绑定安全组
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *弹性网卡绑定云主机
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

                /**
                 *批量解绑后端服务。
                 * @param req BatchDeregisterTargetsRequest
                 * @return BatchDeregisterTargetsOutcome
                 */
                BatchDeregisterTargetsOutcome BatchDeregisterTargets(const Model::BatchDeregisterTargetsRequest &request);
                void BatchDeregisterTargetsAsync(const Model::BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeregisterTargetsOutcomeCallable BatchDeregisterTargetsCallable(const Model::BatchDeregisterTargetsRequest& request);

                /**
                 *批量修改监听器绑定的后端机器的转发权重。
                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *批量绑定后端目标。
                 * @param req BatchRegisterTargetsRequest
                 * @return BatchRegisterTargetsOutcome
                 */
                BatchRegisterTargetsOutcome BatchRegisterTargets(const Model::BatchRegisterTargetsRequest &request);
                void BatchRegisterTargetsAsync(const Model::BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterTargetsOutcomeCallable BatchRegisterTargetsCallable(const Model::BatchRegisterTargetsRequest& request);

                /**
                 *本接口（CreateHaVip）用于创建高可用虚拟IP（HAVIP）
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

                /**
                 *本接口(CreateImage)用于将实例的系统盘制作为新镜像，创建后的镜像可以用于创建实例。
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *创建负载均衡监听器。
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *购买负载均衡实例。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *创建模块
                 * @param req CreateModuleRequest
                 * @return CreateModuleOutcome
                 */
                CreateModuleOutcome CreateModule(const Model::CreateModuleRequest &request);
                void CreateModuleAsync(const Model::CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModuleOutcomeCallable CreateModuleCallable(const Model::CreateModuleRequest& request);

                /**
                 *创建弹性网卡
                 * @param req CreateNetworkInterfaceRequest
                 * @return CreateNetworkInterfaceOutcome
                 */
                CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest &request);
                void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request);

                /**
                 *创建了VPC后，系统会创建一个默认路由表，所有新建的子网都会关联到默认路由表。默认情况下您可以直接使用默认路由表来管理您的路由策略。当您的路由策略较多时，您可以调用创建路由表接口创建更多路由表管理您的路由策略。
                 * @param req CreateRouteTableRequest
                 * @return CreateRouteTableOutcome
                 */
                CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest &request);
                void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request);

                /**
                 *创建路由策略
                 * @param req CreateRoutesRequest
                 * @return CreateRoutesOutcome
                 */
                CreateRoutesOutcome CreateRoutes(const Model::CreateRoutesRequest &request);
                void CreateRoutesAsync(const Model::CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutesOutcomeCallable CreateRoutesCallable(const Model::CreateRoutesRequest& request);

                /**
                 *创建安全组
                 * @param req CreateSecurityGroupRequest
                 * @return CreateSecurityGroupOutcome
                 */
                CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest &request);
                void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request);

                /**
                 *在 SecurityGroupPolicySet 参数中：

Version 安全组规则版本号，用户每次更新安全规则版本会自动加1，防止您更新的路由规则已过期，不填不考虑冲突。
在创建出站和入站规则（Egress 和 Ingress）时：
Protocol 字段支持输入TCP, UDP, ICMP, ICMPV6, GRE, ALL。
CidrBlock 字段允许输入符合cidr格式标准的任意字符串。(展开)在基础网络中，如果 CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IP，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
Ipv6CidrBlock 字段允许输入符合IPv6 cidr格式标准的任意字符串。(展开)在基础网络中，如果Ipv6CidrBlock 包含您的账户内的云服务器之外的设备在腾讯云的内网 IPv6，并不代表此规则允许您访问这些设备，租户之间网络隔离规则优先于安全组中的内网规则。
SecurityGroupId 字段允许输入与待修改的安全组位于相同项目中的安全组 ID，包括这个安全组 ID 本身，代表安全组下所有云服务器的内网 IP。使用这个字段时，这条规则用来匹配网络报文的过程中会随着被使用的这个 ID 所关联的云服务器变化而变化，不需要重新修改。
Port 字段允许输入一个单独端口号，或者用减号分隔的两个端口号代表端口范围，例如80或8000-8010。只有当 Protocol 字段是 TCP 或 UDP 时，Port 字段才被接受，即 Protocol 字段不是 TCP 或 UDP 时，Protocol 和 Port 排他关系，不允许同时输入，否则会接口报错。
Action 字段只允许输入 ACCEPT 或 DROP。
CidrBlock, Ipv6CidrBlock, SecurityGroupId, AddressTemplate 四者是排他关系，不允许同时输入，Protocol + Port 和 ServiceTemplate 二者是排他关系，不允许同时输入。
一次请求中只能创建单个方向的规则, 如果需要指定索引（PolicyIndex）参数, 多条规则的索引必须一致。
                 * @param req CreateSecurityGroupPoliciesRequest
                 * @return CreateSecurityGroupPoliciesOutcome
                 */
                CreateSecurityGroupPoliciesOutcome CreateSecurityGroupPolicies(const Model::CreateSecurityGroupPoliciesRequest &request);
                void CreateSecurityGroupPoliciesAsync(const Model::CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupPoliciesOutcomeCallable CreateSecurityGroupPoliciesCallable(const Model::CreateSecurityGroupPoliciesRequest& request);

                /**
                 *创建子网，若创建成功，则此子网会成为此可用区的默认子网。
                 * @param req CreateSubnetRequest
                 * @return CreateSubnetOutcome
                 */
                CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest &request);
                void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request);

                /**
                 *创建私有网络
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *用于删除高可用虚拟IP（HAVIP）
                 * @param req DeleteHaVipRequest
                 * @return DeleteHaVipOutcome
                 */
                DeleteHaVipOutcome DeleteHaVip(const Model::DeleteHaVipRequest &request);
                void DeleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHaVipOutcomeCallable DeleteHaVipCallable(const Model::DeleteHaVipRequest& request);

                /**
                 *删除镜像
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

                /**
                 *删除负载均衡监听器。
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *删除负载均衡实例。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *删除负载均衡多个监听器
                 * @param req DeleteLoadBalancerListenersRequest
                 * @return DeleteLoadBalancerListenersOutcome
                 */
                DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest &request);
                void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request);

                /**
                 *删除业务模块
                 * @param req DeleteModuleRequest
                 * @return DeleteModuleOutcome
                 */
                DeleteModuleOutcome DeleteModule(const Model::DeleteModuleRequest &request);
                void DeleteModuleAsync(const Model::DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModuleOutcomeCallable DeleteModuleCallable(const Model::DeleteModuleRequest& request);

                /**
                 *删除弹性网卡
                 * @param req DeleteNetworkInterfaceRequest
                 * @return DeleteNetworkInterfaceOutcome
                 */
                DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest &request);
                void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request);

                /**
                 *删除路由表
                 * @param req DeleteRouteTableRequest
                 * @return DeleteRouteTableOutcome
                 */
                DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest &request);
                void DeleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteTableOutcomeCallable DeleteRouteTableCallable(const Model::DeleteRouteTableRequest& request);

                /**
                 *对某个路由表批量删除路由策略
                 * @param req DeleteRoutesRequest
                 * @return DeleteRoutesOutcome
                 */
                DeleteRoutesOutcome DeleteRoutes(const Model::DeleteRoutesRequest &request);
                void DeleteRoutesAsync(const Model::DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutesOutcomeCallable DeleteRoutesCallable(const Model::DeleteRoutesRequest& request);

                /**
                 *只有当前账号下的安全组允许被删除。
安全组实例ID如果在其他安全组的规则中被引用，则无法直接删除。这种情况下，需要先进行规则修改，再删除安全组。
删除的安全组无法再找回，请谨慎调用。
                 * @param req DeleteSecurityGroupRequest
                 * @return DeleteSecurityGroupOutcome
                 */
                DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request);
                void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request);

                /**
                 *SecurityGroupPolicySet.Version 用于指定要操作的安全组的版本。传入 Version 版本号若不等于当前安全组的最新版本，将返回失败；若不传 Version 则直接删除指定PolicyIndex的规则。
                 * @param req DeleteSecurityGroupPoliciesRequest
                 * @return DeleteSecurityGroupPoliciesOutcome
                 */
                DeleteSecurityGroupPoliciesOutcome DeleteSecurityGroupPolicies(const Model::DeleteSecurityGroupPoliciesRequest &request);
                void DeleteSecurityGroupPoliciesAsync(const Model::DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupPoliciesOutcomeCallable DeleteSecurityGroupPoliciesCallable(const Model::DeleteSecurityGroupPoliciesRequest& request);

                /**
                 *删除子网，若子网为可用区下的默认子网，则默认子网会回退到系统自动创建的默认子网，非用户最新创建的子网。若默认子网不满足需求，可调用设置默认子网接口设置。
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

                /**
                 *删除私有网络
                 * @param req DeleteVpcRequest
                 * @return DeleteVpcOutcome
                 */
                DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest &request);
                void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request);

                /**
                 *查询您账户的弹性公网IP（简称 EIP）在当前地域的配额信息
                 * @param req DescribeAddressQuotaRequest
                 * @return DescribeAddressQuotaOutcome
                 */
                DescribeAddressQuotaOutcome DescribeAddressQuota(const Model::DescribeAddressQuotaRequest &request);
                void DescribeAddressQuotaAsync(const Model::DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressQuotaOutcomeCallable DescribeAddressQuotaCallable(const Model::DescribeAddressQuotaRequest& request);

                /**
                 *查询弹性公网IP列表
                 * @param req DescribeAddressesRequest
                 * @return DescribeAddressesOutcome
                 */
                DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest &request);
                void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request);

                /**
                 *获取概览页统计的基本数据
                 * @param req DescribeBaseOverviewRequest
                 * @return DescribeBaseOverviewOutcome
                 */
                DescribeBaseOverviewOutcome DescribeBaseOverview(const Model::DescribeBaseOverviewRequest &request);
                void DescribeBaseOverviewAsync(const Model::DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseOverviewOutcomeCallable DescribeBaseOverviewCallable(const Model::DescribeBaseOverviewRequest& request);

                /**
                 *获取带宽硬盘等数据的限制
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *查询导入镜像任务
                 * @param req DescribeCustomImageTaskRequest
                 * @return DescribeCustomImageTaskOutcome
                 */
                DescribeCustomImageTaskOutcome DescribeCustomImageTask(const Model::DescribeCustomImageTaskRequest &request);
                void DescribeCustomImageTaskAsync(const Model::DescribeCustomImageTaskRequest& request, const DescribeCustomImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomImageTaskOutcomeCallable DescribeCustomImageTaskCallable(const Model::DescribeCustomImageTaskRequest& request);

                /**
                 *查询可用区的默认子网
                 * @param req DescribeDefaultSubnetRequest
                 * @return DescribeDefaultSubnetOutcome
                 */
                DescribeDefaultSubnetOutcome DescribeDefaultSubnet(const Model::DescribeDefaultSubnetRequest &request);
                void DescribeDefaultSubnetAsync(const Model::DescribeDefaultSubnetRequest& request, const DescribeDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultSubnetOutcomeCallable DescribeDefaultSubnetCallable(const Model::DescribeDefaultSubnetRequest& request);

                /**
                 *用于查询高可用虚拟IP（HAVIP）列表。
                 * @param req DescribeHaVipsRequest
                 * @return DescribeHaVipsOutcome
                 */
                DescribeHaVipsOutcome DescribeHaVips(const Model::DescribeHaVipsRequest &request);
                void DescribeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHaVipsOutcomeCallable DescribeHaVipsCallable(const Model::DescribeHaVipsRequest& request);

                /**
                 *展示镜像列表
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *查询外部导入镜像支持的OS列表
                 * @param req DescribeImportImageOsRequest
                 * @return DescribeImportImageOsOutcome
                 */
                DescribeImportImageOsOutcome DescribeImportImageOs(const Model::DescribeImportImageOsRequest &request);
                void DescribeImportImageOsAsync(const Model::DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportImageOsOutcomeCallable DescribeImportImageOsCallable(const Model::DescribeImportImageOsRequest& request);

                /**
                 *获取机型配置列表
                 * @param req DescribeInstanceTypeConfigRequest
                 * @return DescribeInstanceTypeConfigOutcome
                 */
                DescribeInstanceTypeConfigOutcome DescribeInstanceTypeConfig(const Model::DescribeInstanceTypeConfigRequest &request);
                void DescribeInstanceTypeConfigAsync(const Model::DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypeConfigOutcomeCallable DescribeInstanceTypeConfigCallable(const Model::DescribeInstanceTypeConfigRequest& request);

                /**
                 *查询实例管理终端地址
                 * @param req DescribeInstanceVncUrlRequest
                 * @return DescribeInstanceVncUrlOutcome
                 */
                DescribeInstanceVncUrlOutcome DescribeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request);
                void DescribeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceVncUrlOutcomeCallable DescribeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request);

                /**
                 *获取实例的相关信息。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *通过实例id获取当前禁止的操作
                 * @param req DescribeInstancesDeniedActionsRequest
                 * @return DescribeInstancesDeniedActionsOutcome
                 */
                DescribeInstancesDeniedActionsOutcome DescribeInstancesDeniedActions(const Model::DescribeInstancesDeniedActionsRequest &request);
                void DescribeInstancesDeniedActionsAsync(const Model::DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDeniedActionsOutcomeCallable DescribeInstancesDeniedActionsCallable(const Model::DescribeInstancesDeniedActionsRequest& request);

                /**
                 *查询负载均衡的监听器列表。
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *查询负载均衡相关的任务状态
                 * @param req DescribeLoadBalanceTaskStatusRequest
                 * @return DescribeLoadBalanceTaskStatusOutcome
                 */
                DescribeLoadBalanceTaskStatusOutcome DescribeLoadBalanceTaskStatus(const Model::DescribeLoadBalanceTaskStatusRequest &request);
                void DescribeLoadBalanceTaskStatusAsync(const Model::DescribeLoadBalanceTaskStatusRequest& request, const DescribeLoadBalanceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalanceTaskStatusOutcomeCallable DescribeLoadBalanceTaskStatusCallable(const Model::DescribeLoadBalanceTaskStatusRequest& request);

                /**
                 *查询负载均衡实例列表。
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *获取模块列表
                 * @param req DescribeModuleRequest
                 * @return DescribeModuleOutcome
                 */
                DescribeModuleOutcome DescribeModule(const Model::DescribeModuleRequest &request);
                void DescribeModuleAsync(const Model::DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleOutcomeCallable DescribeModuleCallable(const Model::DescribeModuleRequest& request);

                /**
                 *展示模块详细信息
                 * @param req DescribeModuleDetailRequest
                 * @return DescribeModuleDetailOutcome
                 */
                DescribeModuleDetailOutcome DescribeModuleDetail(const Model::DescribeModuleDetailRequest &request);
                void DescribeModuleDetailAsync(const Model::DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleDetailOutcomeCallable DescribeModuleDetailCallable(const Model::DescribeModuleDetailRequest& request);

                /**
                 *查询弹性网卡列表
                 * @param req DescribeNetworkInterfacesRequest
                 * @return DescribeNetworkInterfacesOutcome
                 */
                DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request);
                void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request);

                /**
                 *获取节点列表
                 * @param req DescribeNodeRequest
                 * @return DescribeNodeOutcome
                 */
                DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest &request);
                void DescribeNodeAsync(const Model::DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeOutcomeCallable DescribeNodeCallable(const Model::DescribeNodeRequest& request);

                /**
                 *CPU 内存 硬盘等基础信息峰值数据
                 * @param req DescribePeakBaseOverviewRequest
                 * @return DescribePeakBaseOverviewOutcome
                 */
                DescribePeakBaseOverviewOutcome DescribePeakBaseOverview(const Model::DescribePeakBaseOverviewRequest &request);
                void DescribePeakBaseOverviewAsync(const Model::DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakBaseOverviewOutcomeCallable DescribePeakBaseOverviewCallable(const Model::DescribePeakBaseOverviewRequest& request);

                /**
                 *获取网络峰值数据
                 * @param req DescribePeakNetworkOverviewRequest
                 * @return DescribePeakNetworkOverviewOutcome
                 */
                DescribePeakNetworkOverviewOutcome DescribePeakNetworkOverview(const Model::DescribePeakNetworkOverviewRequest &request);
                void DescribePeakNetworkOverviewAsync(const Model::DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakNetworkOverviewOutcomeCallable DescribePeakNetworkOverviewCallable(const Model::DescribePeakNetworkOverviewRequest& request);

                /**
                 *查询自定义路由策略与云联网路由策略冲突列表
                 * @param req DescribeRouteConflictsRequest
                 * @return DescribeRouteConflictsOutcome
                 */
                DescribeRouteConflictsOutcome DescribeRouteConflicts(const Model::DescribeRouteConflictsRequest &request);
                void DescribeRouteConflictsAsync(const Model::DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteConflictsOutcomeCallable DescribeRouteConflictsCallable(const Model::DescribeRouteConflictsRequest& request);

                /**
                 *查询路由表对象列表
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *查询安全组关联实例统计
                 * @param req DescribeSecurityGroupAssociationStatisticsRequest
                 * @return DescribeSecurityGroupAssociationStatisticsOutcome
                 */
                DescribeSecurityGroupAssociationStatisticsOutcome DescribeSecurityGroupAssociationStatistics(const Model::DescribeSecurityGroupAssociationStatisticsRequest &request);
                void DescribeSecurityGroupAssociationStatisticsAsync(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupAssociationStatisticsOutcomeCallable DescribeSecurityGroupAssociationStatisticsCallable(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request);

                /**
                 *查询用户安全组配额
                 * @param req DescribeSecurityGroupLimitsRequest
                 * @return DescribeSecurityGroupLimitsOutcome
                 */
                DescribeSecurityGroupLimitsOutcome DescribeSecurityGroupLimits(const Model::DescribeSecurityGroupLimitsRequest &request);
                void DescribeSecurityGroupLimitsAsync(const Model::DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupLimitsOutcomeCallable DescribeSecurityGroupLimitsCallable(const Model::DescribeSecurityGroupLimitsRequest& request);

                /**
                 *查询安全组规则
                 * @param req DescribeSecurityGroupPoliciesRequest
                 * @return DescribeSecurityGroupPoliciesOutcome
                 */
                DescribeSecurityGroupPoliciesOutcome DescribeSecurityGroupPolicies(const Model::DescribeSecurityGroupPoliciesRequest &request);
                void DescribeSecurityGroupPoliciesAsync(const Model::DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPoliciesOutcomeCallable DescribeSecurityGroupPoliciesCallable(const Model::DescribeSecurityGroupPoliciesRequest& request);

                /**
                 *查看安全组
                 * @param req DescribeSecurityGroupsRequest
                 * @return DescribeSecurityGroupsOutcome
                 */
                DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request);
                void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request);

                /**
                 *查询子网列表
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *获取负载均衡后端服务的健康检查状态。
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *查询负载均衡绑定的后端服务列表。
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *查询EIP异步任务执行结果
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *本接口(DescribeTaskStatus)用于获取异步任务状态
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *查询私有网络列表
                 * @param req DescribeVpcsRequest
                 * @return DescribeVpcsOutcome
                 */
                DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest &request);
                void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request);

                /**
                 *弹性网卡解绑云主机
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *禁用已启用的子网路由
                 * @param req DisableRoutesRequest
                 * @return DisableRoutesOutcome
                 */
                DisableRoutesOutcome DisableRoutes(const Model::DisableRoutesRequest &request);
                void DisableRoutesAsync(const Model::DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRoutesOutcomeCallable DisableRoutesCallable(const Model::DisableRoutesRequest& request);

                /**
                 *解绑弹性公网IP（简称 EIP）
只有状态为 BIND 和 BIND_ENI 的 EIP 才能进行解绑定操作。
EIP 如果被封堵，则不能进行解绑定操作。
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *解绑安全组
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *启用已禁用的子网路由。
本接口会校验启用后，是否与已有路由冲突，如果冲突，则无法启用，失败处理。路由冲突时，需要先禁用与之冲突的路由，才能启用该路由。
                 * @param req EnableRoutesRequest
                 * @return EnableRoutesOutcome
                 */
                EnableRoutesOutcome EnableRoutes(const Model::EnableRoutesRequest &request);
                void EnableRoutesAsync(const Model::EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableRoutesOutcomeCallable EnableRoutesCallable(const Model::EnableRoutesRequest& request);

                /**
                 *导入自定义镜像，支持 RAW、VHD、QCOW2、VMDK 镜像格式
                 * @param req ImportCustomImageRequest
                 * @return ImportCustomImageOutcome
                 */
                ImportCustomImageOutcome ImportCustomImage(const Model::ImportCustomImageRequest &request);
                void ImportCustomImageAsync(const Model::ImportCustomImageRequest& request, const ImportCustomImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportCustomImageOutcomeCallable ImportCustomImageCallable(const Model::ImportCustomImageRequest& request);

                /**
                 *从CVM产品导入镜像到ECM
                 * @param req ImportImageRequest
                 * @return ImportImageOutcome
                 */
                ImportImageOutcome ImportImage(const Model::ImportImageRequest &request);
                void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request);

                /**
                 *弹性网卡迁移
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 *弹性网卡内网IP迁移。
该接口用于将一个内网IP从一个弹性网卡上迁移到另外一个弹性网卡，主IP地址不支持迁移。
迁移前后的弹性网卡必须在同一个子网内。
                 * @param req MigratePrivateIpAddressRequest
                 * @return MigratePrivateIpAddressOutcome
                 */
                MigratePrivateIpAddressOutcome MigratePrivateIpAddress(const Model::MigratePrivateIpAddressRequest &request);
                void MigratePrivateIpAddressAsync(const Model::MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigratePrivateIpAddressOutcomeCallable MigratePrivateIpAddressCallable(const Model::MigratePrivateIpAddressRequest& request);

                /**
                 *修改弹性公网IP属性
                 * @param req ModifyAddressAttributeRequest
                 * @return ModifyAddressAttributeOutcome
                 */
                ModifyAddressAttributeOutcome ModifyAddressAttribute(const Model::ModifyAddressAttributeRequest &request);
                void ModifyAddressAttributeAsync(const Model::ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressAttributeOutcomeCallable ModifyAddressAttributeCallable(const Model::ModifyAddressAttributeRequest& request);

                /**
                 *调整弹性公网IP带宽

                 * @param req ModifyAddressesBandwidthRequest
                 * @return ModifyAddressesBandwidthOutcome
                 */
                ModifyAddressesBandwidthOutcome ModifyAddressesBandwidth(const Model::ModifyAddressesBandwidthRequest &request);
                void ModifyAddressesBandwidthAsync(const Model::ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesBandwidthOutcomeCallable ModifyAddressesBandwidthCallable(const Model::ModifyAddressesBandwidthRequest& request);

                /**
                 *修改在一个可用区下创建实例时使用的默认子网（创建实例时，未填写VPC参数时使用的sunbetId）
                 * @param req ModifyDefaultSubnetRequest
                 * @return ModifyDefaultSubnetOutcome
                 */
                ModifyDefaultSubnetOutcome ModifyDefaultSubnet(const Model::ModifyDefaultSubnetRequest &request);
                void ModifyDefaultSubnetAsync(const Model::ModifyDefaultSubnetRequest& request, const ModifyDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultSubnetOutcomeCallable ModifyDefaultSubnetCallable(const Model::ModifyDefaultSubnetRequest& request);

                /**
                 *用于修改高可用虚拟IP（HAVIP）属性
                 * @param req ModifyHaVipAttributeRequest
                 * @return ModifyHaVipAttributeOutcome
                 */
                ModifyHaVipAttributeOutcome ModifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request);
                void ModifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHaVipAttributeOutcomeCallable ModifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request);

                /**
                 *本接口（ModifyImageAttribute）用于修改镜像属性。
                 * @param req ModifyImageAttributeRequest
                 * @return ModifyImageAttributeOutcome
                 */
                ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest &request);
                void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request);

                /**
                 *修改实例的属性。
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *修改负载均衡监听器属性。
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *修改负载均衡实例的属性。
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *修改模块配置，已关联实例的模块不支持调整配置。
                 * @param req ModifyModuleConfigRequest
                 * @return ModifyModuleConfigOutcome
                 */
                ModifyModuleConfigOutcome ModifyModuleConfig(const Model::ModifyModuleConfigRequest &request);
                void ModifyModuleConfigAsync(const Model::ModifyModuleConfigRequest& request, const ModifyModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleConfigOutcomeCallable ModifyModuleConfigCallable(const Model::ModifyModuleConfigRequest& request);

                /**
                 *修改模块的默认镜像
                 * @param req ModifyModuleImageRequest
                 * @return ModifyModuleImageOutcome
                 */
                ModifyModuleImageOutcome ModifyModuleImage(const Model::ModifyModuleImageRequest &request);
                void ModifyModuleImageAsync(const Model::ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleImageOutcomeCallable ModifyModuleImageCallable(const Model::ModifyModuleImageRequest& request);

                /**
                 *修改模块IP直通。
                 * @param req ModifyModuleIpDirectRequest
                 * @return ModifyModuleIpDirectOutcome
                 */
                ModifyModuleIpDirectOutcome ModifyModuleIpDirect(const Model::ModifyModuleIpDirectRequest &request);
                void ModifyModuleIpDirectAsync(const Model::ModifyModuleIpDirectRequest& request, const ModifyModuleIpDirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleIpDirectOutcomeCallable ModifyModuleIpDirectCallable(const Model::ModifyModuleIpDirectRequest& request);

                /**
                 *修改模块名称
                 * @param req ModifyModuleNameRequest
                 * @return ModifyModuleNameOutcome
                 */
                ModifyModuleNameOutcome ModifyModuleName(const Model::ModifyModuleNameRequest &request);
                void ModifyModuleNameAsync(const Model::ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNameOutcomeCallable ModifyModuleNameCallable(const Model::ModifyModuleNameRequest& request);

                /**
                 *修改模块默认带宽上限
                 * @param req ModifyModuleNetworkRequest
                 * @return ModifyModuleNetworkOutcome
                 */
                ModifyModuleNetworkOutcome ModifyModuleNetwork(const Model::ModifyModuleNetworkRequest &request);
                void ModifyModuleNetworkAsync(const Model::ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNetworkOutcomeCallable ModifyModuleNetworkCallable(const Model::ModifyModuleNetworkRequest& request);

                /**
                 *修改模块默认安全组
                 * @param req ModifyModuleSecurityGroupsRequest
                 * @return ModifyModuleSecurityGroupsOutcome
                 */
                ModifyModuleSecurityGroupsOutcome ModifyModuleSecurityGroups(const Model::ModifyModuleSecurityGroupsRequest &request);
                void ModifyModuleSecurityGroupsAsync(const Model::ModifyModuleSecurityGroupsRequest& request, const ModifyModuleSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleSecurityGroupsOutcomeCallable ModifyModuleSecurityGroupsCallable(const Model::ModifyModuleSecurityGroupsRequest& request);

                /**
                 *修改路由表属性
                 * @param req ModifyRouteTableAttributeRequest
                 * @return ModifyRouteTableAttributeOutcome
                 */
                ModifyRouteTableAttributeOutcome ModifyRouteTableAttribute(const Model::ModifyRouteTableAttributeRequest &request);
                void ModifyRouteTableAttributeAsync(const Model::ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableAttributeOutcomeCallable ModifyRouteTableAttributeCallable(const Model::ModifyRouteTableAttributeRequest& request);

                /**
                 *修改安全组属性
                 * @param req ModifySecurityGroupAttributeRequest
                 * @return ModifySecurityGroupAttributeOutcome
                 */
                ModifySecurityGroupAttributeOutcome ModifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request);
                void ModifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupAttributeOutcomeCallable ModifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request);

                /**
                 *修改安全组出站和入站规则
                 * @param req ModifySecurityGroupPoliciesRequest
                 * @return ModifySecurityGroupPoliciesOutcome
                 */
                ModifySecurityGroupPoliciesOutcome ModifySecurityGroupPolicies(const Model::ModifySecurityGroupPoliciesRequest &request);
                void ModifySecurityGroupPoliciesAsync(const Model::ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupPoliciesOutcomeCallable ModifySecurityGroupPoliciesCallable(const Model::ModifySecurityGroupPoliciesRequest& request);

                /**
                 *修改子网属性
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *修改监听器绑定的后端机器的端口。
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *修改监听器绑定的后端机器的转发权重。
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *修改私有网络（VPC）的相关属性
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *只有状态为RUNNING的实例才可以进行此操作；接口调用成功时，实例会进入REBOOTING状态；重启实例成功时，实例会进入RUNNING状态；支持强制重启，强制重启的效果等同于关闭物理计算机的电源开关再重新启动。强制重启可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常重启时使用。
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *释放一个或多个弹性公网IP（简称 EIP）。
该操作不可逆，释放后 EIP 关联的 IP 地址将不再属于您的名下。
只有状态为 UNBIND 的 EIP 才能进行释放操作。
                 * @param req ReleaseAddressesRequest
                 * @return ReleaseAddressesOutcome
                 */
                ReleaseAddressesOutcome ReleaseAddresses(const Model::ReleaseAddressesRequest &request);
                void ReleaseAddressesAsync(const Model::ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseAddressesOutcomeCallable ReleaseAddressesCallable(const Model::ReleaseAddressesRequest& request);

                /**
                 *弹性网卡退还内网 IP。
退还弹性网卡上的辅助内网IP，接口自动解关联弹性公网 IP。不能退还弹性网卡的主内网IP。
                 * @param req RemovePrivateIpAddressesRequest
                 * @return RemovePrivateIpAddressesOutcome
                 */
                RemovePrivateIpAddressesOutcome RemovePrivateIpAddresses(const Model::RemovePrivateIpAddressesRequest &request);
                void RemovePrivateIpAddressesAsync(const Model::RemovePrivateIpAddressesRequest& request, const RemovePrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePrivateIpAddressesOutcomeCallable RemovePrivateIpAddressesCallable(const Model::RemovePrivateIpAddressesRequest& request);

                /**
                 *修改子网关联的路由表，一个子网只能关联一个路由表。
                 * @param req ReplaceRouteTableAssociationRequest
                 * @return ReplaceRouteTableAssociationOutcome
                 */
                ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest &request);
                void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request);

                /**
                 *替换路由策略
                 * @param req ReplaceRoutesRequest
                 * @return ReplaceRoutesOutcome
                 */
                ReplaceRoutesOutcome ReplaceRoutes(const Model::ReplaceRoutesRequest &request);
                void ReplaceRoutesAsync(const Model::ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutesOutcomeCallable ReplaceRoutesCallable(const Model::ReplaceRoutesRequest& request);

                /**
                 *替换单条安全组路由规则, 单个请求中只能替换单个方向的一条规则, 必须要指定索引（PolicyIndex）。
                 * @param req ReplaceSecurityGroupPolicyRequest
                 * @return ReplaceSecurityGroupPolicyOutcome
                 */
                ReplaceSecurityGroupPolicyOutcome ReplaceSecurityGroupPolicy(const Model::ReplaceSecurityGroupPolicyRequest &request);
                void ReplaceSecurityGroupPolicyAsync(const Model::ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPolicyOutcomeCallable ReplaceSecurityGroupPolicyCallable(const Model::ReplaceSecurityGroupPolicyRequest& request);

                /**
                 *重装实例，若指定了ImageId参数，则使用指定的镜像重装；否则按照当前实例使用的镜像进行重装；若未指定密码，则密码通过站内信形式随后发送。
                 * @param req ResetInstancesRequest
                 * @return ResetInstancesOutcome
                 */
                ResetInstancesOutcome ResetInstances(const Model::ResetInstancesRequest &request);
                void ResetInstancesAsync(const Model::ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesOutcomeCallable ResetInstancesCallable(const Model::ResetInstancesRequest& request);

                /**
                 *重置实例的最大带宽上限。
                 * @param req ResetInstancesMaxBandwidthRequest
                 * @return ResetInstancesMaxBandwidthOutcome
                 */
                ResetInstancesMaxBandwidthOutcome ResetInstancesMaxBandwidth(const Model::ResetInstancesMaxBandwidthRequest &request);
                void ResetInstancesMaxBandwidthAsync(const Model::ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesMaxBandwidthOutcomeCallable ResetInstancesMaxBandwidthCallable(const Model::ResetInstancesMaxBandwidthRequest& request);

                /**
                 *重置处于运行中状态的实例的密码，需要显式指定强制关机参数ForceStop。如果没有显式指定强制关机参数，则只有处于关机状态的实例才允许执行重置密码操作。
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *对某个路由表名称和所有路由策略（Route）进行重新设置
                 * @param req ResetRoutesRequest
                 * @return ResetRoutesOutcome
                 */
                ResetRoutesOutcome ResetRoutes(const Model::ResetRoutesRequest &request);
                void ResetRoutesAsync(const Model::ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutesOutcomeCallable ResetRoutesCallable(const Model::ResetRoutesRequest& request);

                /**
                 *创建ECM实例
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *只有状态为STOPPED的实例才可以进行此操作；接口调用成功时，实例会进入STARTING状态；启动实例成功时，实例会进入RUNNING状态。
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *只有处于"RUNNING"状态的实例才能够进行关机操作；
调用成功时，实例会进入STOPPING状态；关闭实例成功时，实例会进入STOPPED状态；
支持强制关闭，强制关机的效果等同于关闭物理计算机的电源开关，强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *销毁实例
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_

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
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceResponse.h>
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
#include <tencentcloud/ecm/v20190719/model/DescribeImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h>
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
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressResponse.h>
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
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesResponse.h>
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
                typedef Outcome<Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateModuleResponse> CreateModuleOutcome;
                typedef std::future<CreateModuleOutcome> CreateModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateModuleRequest&, CreateModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModuleAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Error, Model::DeleteModuleResponse> DeleteModuleOutcome;
                typedef std::future<DeleteModuleOutcome> DeleteModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteModuleRequest&, DeleteModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
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
                typedef Outcome<Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstanceTypeConfigResponse> DescribeInstanceTypeConfigOutcome;
                typedef std::future<DescribeInstanceTypeConfigOutcome> DescribeInstanceTypeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceTypeConfigRequest&, DescribeInstanceTypeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
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
                typedef Outcome<Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
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
                typedef Outcome<Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleImageResponse> ModifyModuleImageOutcome;
                typedef std::future<ModifyModuleImageOutcome> ModifyModuleImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleImageRequest&, ModifyModuleImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleImageAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNameResponse> ModifyModuleNameOutcome;
                typedef std::future<ModifyModuleNameOutcome> ModifyModuleNameOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNameRequest&, ModifyModuleNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyModuleNetworkResponse> ModifyModuleNetworkOutcome;
                typedef std::future<ModifyModuleNetworkOutcome> ModifyModuleNetworkOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNetworkRequest&, ModifyModuleNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNetworkAsyncHandler;
                typedef Outcome<Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
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
                typedef Outcome<Error, Model::ResetInstancesResponse> ResetInstancesOutcome;
                typedef std::future<ResetInstancesOutcome> ResetInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesRequest&, ResetInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetInstancesMaxBandwidthResponse> ResetInstancesMaxBandwidthOutcome;
                typedef std::future<ResetInstancesMaxBandwidthOutcome> ResetInstancesMaxBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesMaxBandwidthRequest&, ResetInstancesMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
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
将 EIP 绑定到实例（CVM）上，其本质是将 EIP 绑定到实例上主网卡的主内网 IP 上。
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
                 *弹性网卡绑定云主机
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

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
                 *创建子网
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
                 *删除镜像
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

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
                 *删除子网
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
                 *展示镜像列表
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *获取机型配置列表
                 * @param req DescribeInstanceTypeConfigRequest
                 * @return DescribeInstanceTypeConfigOutcome
                 */
                DescribeInstanceTypeConfigOutcome DescribeInstanceTypeConfig(const Model::DescribeInstanceTypeConfigRequest &request);
                void DescribeInstanceTypeConfigAsync(const Model::DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypeConfigOutcomeCallable DescribeInstanceTypeConfigCallable(const Model::DescribeInstanceTypeConfigRequest& request);

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
                 *查询子网列表
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *查询EIP异步任务执行结果
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

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
                 *修改实例的属性。
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *ModifyModuleImage
                 * @param req ModifyModuleImageRequest
                 * @return ModifyModuleImageOutcome
                 */
                ModifyModuleImageOutcome ModifyModuleImage(const Model::ModifyModuleImageRequest &request);
                void ModifyModuleImageAsync(const Model::ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleImageOutcomeCallable ModifyModuleImageCallable(const Model::ModifyModuleImageRequest& request);

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
                 *修改子网属性
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

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
                 *创建ECM实例
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

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

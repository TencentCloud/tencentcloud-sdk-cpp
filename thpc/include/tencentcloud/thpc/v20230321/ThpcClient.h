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

#ifndef TENCENTCLOUD_THPC_V20230321_THPCCLIENT_H_
#define TENCENTCLOUD_THPC_V20230321_THPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/thpc/v20230321/model/AddClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20230321/model/AddClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20230321/model/AddNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/AddNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/AddQueueRequest.h>
#include <tencentcloud/thpc/v20230321/model/AddQueueResponse.h>
#include <tencentcloud/thpc/v20230321/model/AttachNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/AttachNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/BindClusterVpcRequest.h>
#include <tencentcloud/thpc/v20230321/model/BindClusterVpcResponse.h>
#include <tencentcloud/thpc/v20230321/model/CreateClusterRequest.h>
#include <tencentcloud/thpc/v20230321/model/CreateClusterResponse.h>
#include <tencentcloud/thpc/v20230321/model/CreateScheduledActionRequest.h>
#include <tencentcloud/thpc/v20230321/model/CreateScheduledActionResponse.h>
#include <tencentcloud/thpc/v20230321/model/CreateWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/CreateWorkspacesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteJobRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteJobResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteQueueRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteQueueResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteScheduledActionRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteScheduledActionResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeAutoScalingConfigurationRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeAutoScalingConfigurationResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterActivitiesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterActivitiesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterDedicatedProxyRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterDedicatedProxyResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClustersRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClustersResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInitNodeScriptsRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInitNodeScriptsResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInstanceFamiliesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInstanceFamiliesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobSubmitInfoRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobSubmitInfoResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobsRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobsResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobsOverviewRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeJobsOverviewResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueueAutoScalingRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueueAutoScalingResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueueAutoScalingOverviewRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueueAutoScalingOverviewResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueuesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueuesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeScheduledActionsRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeScheduledActionsResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeWorkspacesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DetachNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DetachNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DisableClusterDedicatedProxyRequest.h>
#include <tencentcloud/thpc/v20230321/model/DisableClusterDedicatedProxyResponse.h>
#include <tencentcloud/thpc/v20230321/model/EnableClusterDedicatedProxyRequest.h>
#include <tencentcloud/thpc/v20230321/model/EnableClusterDedicatedProxyResponse.h>
#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCodeRequest.h>
#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCodeResponse.h>
#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCommandRequest.h>
#include <tencentcloud/thpc/v20230321/model/GenerateRegisterCommandResponse.h>
#include <tencentcloud/thpc/v20230321/model/InquirePriceCreateWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/InquirePriceCreateWorkspacesResponse.h>
#include <tencentcloud/thpc/v20230321/model/InquirePriceModifyWorkspacesChargeTypeRequest.h>
#include <tencentcloud/thpc/v20230321/model/InquirePriceModifyWorkspacesChargeTypeResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyClusterDeletionProtectionRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyClusterDeletionProtectionResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyInitNodeScriptsRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyInitNodeScriptsResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyNodeAttributeRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyNodeAttributeResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyScheduledActionRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyScheduledActionResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesAttributeRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesAttributeResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesChargeTypeRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesChargeTypeResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesRenewFlagRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesRenewFlagResponse.h>
#include <tencentcloud/thpc/v20230321/model/SetAutoScalingConfigurationRequest.h>
#include <tencentcloud/thpc/v20230321/model/SetAutoScalingConfigurationResponse.h>
#include <tencentcloud/thpc/v20230321/model/SetQueueAutoScalingRequest.h>
#include <tencentcloud/thpc/v20230321/model/SetQueueAutoScalingResponse.h>
#include <tencentcloud/thpc/v20230321/model/SubmitJobRequest.h>
#include <tencentcloud/thpc/v20230321/model/SubmitJobResponse.h>
#include <tencentcloud/thpc/v20230321/model/TerminateJobRequest.h>
#include <tencentcloud/thpc/v20230321/model/TerminateJobResponse.h>
#include <tencentcloud/thpc/v20230321/model/TerminateWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/TerminateWorkspacesResponse.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            class ThpcClient : public AbstractClient
            {
            public:
                ThpcClient(const Credential &credential, const std::string &region);
                ThpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddClusterStorageOptionResponse> AddClusterStorageOptionOutcome;
                typedef std::future<AddClusterStorageOptionOutcome> AddClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::AddClusterStorageOptionRequest&, AddClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNodesResponse> AddNodesOutcome;
                typedef std::future<AddNodesOutcome> AddNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::AddNodesRequest&, AddNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddQueueResponse> AddQueueOutcome;
                typedef std::future<AddQueueOutcome> AddQueueOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::AddQueueRequest&, AddQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachNodesResponse> AttachNodesOutcome;
                typedef std::future<AttachNodesOutcome> AttachNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::AttachNodesRequest&, AttachNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::BindClusterVpcResponse> BindClusterVpcOutcome;
                typedef std::future<BindClusterVpcOutcome> BindClusterVpcOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::BindClusterVpcRequest&, BindClusterVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindClusterVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScheduledActionResponse> CreateScheduledActionOutcome;
                typedef std::future<CreateScheduledActionOutcome> CreateScheduledActionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateScheduledActionRequest&, CreateScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspacesResponse> CreateWorkspacesOutcome;
                typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateWorkspacesRequest&, CreateWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterStorageOptionResponse> DeleteClusterStorageOptionOutcome;
                typedef std::future<DeleteClusterStorageOptionOutcome> DeleteClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterStorageOptionRequest&, DeleteClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteJobResponse> DeleteJobOutcome;
                typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteJobRequest&, DeleteJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodesResponse> DeleteNodesOutcome;
                typedef std::future<DeleteNodesOutcome> DeleteNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteNodesRequest&, DeleteNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQueueResponse> DeleteQueueOutcome;
                typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteQueueRequest&, DeleteQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScheduledActionResponse> DeleteScheduledActionOutcome;
                typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteScheduledActionRequest&, DeleteScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingConfigurationResponse> DescribeAutoScalingConfigurationOutcome;
                typedef std::future<DescribeAutoScalingConfigurationOutcome> DescribeAutoScalingConfigurationOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeAutoScalingConfigurationRequest&, DescribeAutoScalingConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterActivitiesResponse> DescribeClusterActivitiesOutcome;
                typedef std::future<DescribeClusterActivitiesOutcome> DescribeClusterActivitiesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterActivitiesRequest&, DescribeClusterActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDedicatedProxyResponse> DescribeClusterDedicatedProxyOutcome;
                typedef std::future<DescribeClusterDedicatedProxyOutcome> DescribeClusterDedicatedProxyOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterDedicatedProxyRequest&, DescribeClusterDedicatedProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDedicatedProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStorageOptionResponse> DescribeClusterStorageOptionOutcome;
                typedef std::future<DescribeClusterStorageOptionOutcome> DescribeClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterStorageOptionRequest&, DescribeClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInitNodeScriptsResponse> DescribeInitNodeScriptsOutcome;
                typedef std::future<DescribeInitNodeScriptsOutcome> DescribeInitNodeScriptsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeInitNodeScriptsRequest&, DescribeInitNodeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInitNodeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceFamiliesResponse> DescribeInstanceFamiliesOutcome;
                typedef std::future<DescribeInstanceFamiliesOutcome> DescribeInstanceFamiliesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeInstanceFamiliesRequest&, DescribeInstanceFamiliesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceFamiliesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobSubmitInfoResponse> DescribeJobSubmitInfoOutcome;
                typedef std::future<DescribeJobSubmitInfoOutcome> DescribeJobSubmitInfoOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeJobSubmitInfoRequest&, DescribeJobSubmitInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobSubmitInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsResponse> DescribeJobsOutcome;
                typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeJobsRequest&, DescribeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobsOverviewResponse> DescribeJobsOverviewOutcome;
                typedef std::future<DescribeJobsOverviewOutcome> DescribeJobsOverviewOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeJobsOverviewRequest&, DescribeJobsOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobsOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodesResponse> DescribeNodesOutcome;
                typedef std::future<DescribeNodesOutcome> DescribeNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeNodesRequest&, DescribeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueueAutoScalingResponse> DescribeQueueAutoScalingOutcome;
                typedef std::future<DescribeQueueAutoScalingOutcome> DescribeQueueAutoScalingOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeQueueAutoScalingRequest&, DescribeQueueAutoScalingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueueAutoScalingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueueAutoScalingOverviewResponse> DescribeQueueAutoScalingOverviewOutcome;
                typedef std::future<DescribeQueueAutoScalingOverviewOutcome> DescribeQueueAutoScalingOverviewOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeQueueAutoScalingOverviewRequest&, DescribeQueueAutoScalingOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueueAutoScalingOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueuesResponse> DescribeQueuesOutcome;
                typedef std::future<DescribeQueuesOutcome> DescribeQueuesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeQueuesRequest&, DescribeQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScheduledActionsResponse> DescribeScheduledActionsOutcome;
                typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeScheduledActionsRequest&, DescribeScheduledActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduledActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspacesResponse> DescribeWorkspacesOutcome;
                typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeWorkspacesRequest&, DescribeWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachNodesResponse> DetachNodesOutcome;
                typedef std::future<DetachNodesOutcome> DetachNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DetachNodesRequest&, DetachNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClusterDedicatedProxyResponse> DisableClusterDedicatedProxyOutcome;
                typedef std::future<DisableClusterDedicatedProxyOutcome> DisableClusterDedicatedProxyOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DisableClusterDedicatedProxyRequest&, DisableClusterDedicatedProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClusterDedicatedProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterDedicatedProxyResponse> EnableClusterDedicatedProxyOutcome;
                typedef std::future<EnableClusterDedicatedProxyOutcome> EnableClusterDedicatedProxyOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::EnableClusterDedicatedProxyRequest&, EnableClusterDedicatedProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterDedicatedProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateRegisterCodeResponse> GenerateRegisterCodeOutcome;
                typedef std::future<GenerateRegisterCodeOutcome> GenerateRegisterCodeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::GenerateRegisterCodeRequest&, GenerateRegisterCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateRegisterCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateRegisterCommandResponse> GenerateRegisterCommandOutcome;
                typedef std::future<GenerateRegisterCommandOutcome> GenerateRegisterCommandOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::GenerateRegisterCommandRequest&, GenerateRegisterCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateRegisterCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateWorkspacesResponse> InquirePriceCreateWorkspacesOutcome;
                typedef std::future<InquirePriceCreateWorkspacesOutcome> InquirePriceCreateWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::InquirePriceCreateWorkspacesRequest&, InquirePriceCreateWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyWorkspacesChargeTypeResponse> InquirePriceModifyWorkspacesChargeTypeOutcome;
                typedef std::future<InquirePriceModifyWorkspacesChargeTypeOutcome> InquirePriceModifyWorkspacesChargeTypeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::InquirePriceModifyWorkspacesChargeTypeRequest&, InquirePriceModifyWorkspacesChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyWorkspacesChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterDeletionProtectionResponse> ModifyClusterDeletionProtectionOutcome;
                typedef std::future<ModifyClusterDeletionProtectionOutcome> ModifyClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyClusterDeletionProtectionRequest&, ModifyClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInitNodeScriptsResponse> ModifyInitNodeScriptsOutcome;
                typedef std::future<ModifyInitNodeScriptsOutcome> ModifyInitNodeScriptsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyInitNodeScriptsRequest&, ModifyInitNodeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInitNodeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodeAttributeResponse> ModifyNodeAttributeOutcome;
                typedef std::future<ModifyNodeAttributeOutcome> ModifyNodeAttributeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyNodeAttributeRequest&, ModifyNodeAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodeAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyScheduledActionResponse> ModifyScheduledActionOutcome;
                typedef std::future<ModifyScheduledActionOutcome> ModifyScheduledActionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyScheduledActionRequest&, ModifyScheduledActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScheduledActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspacesAttributeResponse> ModifyWorkspacesAttributeOutcome;
                typedef std::future<ModifyWorkspacesAttributeOutcome> ModifyWorkspacesAttributeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyWorkspacesAttributeRequest&, ModifyWorkspacesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspacesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspacesChargeTypeResponse> ModifyWorkspacesChargeTypeOutcome;
                typedef std::future<ModifyWorkspacesChargeTypeOutcome> ModifyWorkspacesChargeTypeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyWorkspacesChargeTypeRequest&, ModifyWorkspacesChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspacesChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspacesRenewFlagResponse> ModifyWorkspacesRenewFlagOutcome;
                typedef std::future<ModifyWorkspacesRenewFlagOutcome> ModifyWorkspacesRenewFlagOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyWorkspacesRenewFlagRequest&, ModifyWorkspacesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspacesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoScalingConfigurationResponse> SetAutoScalingConfigurationOutcome;
                typedef std::future<SetAutoScalingConfigurationOutcome> SetAutoScalingConfigurationOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::SetAutoScalingConfigurationRequest&, SetAutoScalingConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScalingConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::SetQueueAutoScalingResponse> SetQueueAutoScalingOutcome;
                typedef std::future<SetQueueAutoScalingOutcome> SetQueueAutoScalingOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::SetQueueAutoScalingRequest&, SetQueueAutoScalingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetQueueAutoScalingAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitJobResponse> SubmitJobOutcome;
                typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::SubmitJobRequest&, SubmitJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateJobResponse> TerminateJobOutcome;
                typedef std::future<TerminateJobOutcome> TerminateJobOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::TerminateJobRequest&, TerminateJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateWorkspacesResponse> TerminateWorkspacesOutcome;
                typedef std::future<TerminateWorkspacesOutcome> TerminateWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::TerminateWorkspacesRequest&, TerminateWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateWorkspacesAsyncHandler;



                /**
                 *本接口（AddClusterStorageOption）用于添加集群存储选项信息。
                 * @param req AddClusterStorageOptionRequest
                 * @return AddClusterStorageOptionOutcome
                 */
                AddClusterStorageOptionOutcome AddClusterStorageOption(const Model::AddClusterStorageOptionRequest &request);
                void AddClusterStorageOptionAsync(const Model::AddClusterStorageOptionRequest& request, const AddClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClusterStorageOptionOutcomeCallable AddClusterStorageOptionCallable(const Model::AddClusterStorageOptionRequest& request);

                /**
                 *本接口(AddNodes)用于添加一个或者多个计算节点或者登录节点到指定集群。
                 * @param req AddNodesRequest
                 * @return AddNodesOutcome
                 */
                AddNodesOutcome AddNodes(const Model::AddNodesRequest &request);
                void AddNodesAsync(const Model::AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNodesOutcomeCallable AddNodesCallable(const Model::AddNodesRequest& request);

                /**
                 *本接口(AddQueue)用于添加队列到指定集群。
* 本接口为目前只支持SchedulerType为SLURM的集群。
* 单个集群中队列数量上限为10个。
                 * @param req AddQueueRequest
                 * @return AddQueueOutcome
                 */
                AddQueueOutcome AddQueue(const Model::AddQueueRequest &request);
                void AddQueueAsync(const Model::AddQueueRequest& request, const AddQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddQueueOutcomeCallable AddQueueCallable(const Model::AddQueueRequest& request);

                /**
                 *本接口 (AttachNodes) 用于绑定一个或者多个计算节点指定资源到指定集群中。
                 * @param req AttachNodesRequest
                 * @return AttachNodesOutcome
                 */
                AttachNodesOutcome AttachNodes(const Model::AttachNodesRequest &request);
                void AttachNodesAsync(const Model::AttachNodesRequest& request, const AttachNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNodesOutcomeCallable AttachNodesCallable(const Model::AttachNodesRequest& request);

                /**
                 *本接口 (BindClusterVpc) 用于为IDC集群绑定VPC和子网。

* 绑定VPC后，集群可在该VPC内开启专线/VPN代理。
* VpcId和SubnetId为必填参数，且子网必须属于指定的VPC。
* 若集群已开通代理，需先关闭代理（DisableClusterDedicatedProxy）再变更VPC绑定。
                 * @param req BindClusterVpcRequest
                 * @return BindClusterVpcOutcome
                 */
                BindClusterVpcOutcome BindClusterVpc(const Model::BindClusterVpcRequest &request);
                void BindClusterVpcAsync(const Model::BindClusterVpcRequest& request, const BindClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindClusterVpcOutcomeCallable BindClusterVpcCallable(const Model::BindClusterVpcRequest& request);

                /**
                 *本接口 (CreateCluster) 用于创建并启动集群。

* 本接口为异步接口， 当创建集群请求下发成功后会返回一个集群`ID`和一个`RequestId`，此时创建集群操作并未立即完成。在此期间集群的状态将会处于“PENDING”或者“INITING”，集群创建结果可以通过调用 [DescribeClusters](https://cloud.tencent.com/document/product/1527/72100)  接口查询，如果集群状态(ClusterStatus)变为“RUNNING(运行中)”，则代表集群创建成功，“ INIT_FAILED”代表集群创建失败。
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *为指定集群队列创建定时伸缩任务，按计划时间自动调整队列的节点数量。
                 * @param req CreateScheduledActionRequest
                 * @return CreateScheduledActionOutcome
                 */
                CreateScheduledActionOutcome CreateScheduledAction(const Model::CreateScheduledActionRequest &request);
                void CreateScheduledActionAsync(const Model::CreateScheduledActionRequest& request, const CreateScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScheduledActionOutcomeCallable CreateScheduledActionCallable(const Model::CreateScheduledActionRequest& request);

                /**
                 *本接口 (CreateWorkspaces) 用于创建工作空间。
                 * @param req CreateWorkspacesRequest
                 * @return CreateWorkspacesOutcome
                 */
                CreateWorkspacesOutcome CreateWorkspaces(const Model::CreateWorkspacesRequest &request);
                void CreateWorkspacesAsync(const Model::CreateWorkspacesRequest& request, const CreateWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspacesOutcomeCallable CreateWorkspacesCallable(const Model::CreateWorkspacesRequest& request);

                /**
                 *本接口（DeleteCluster）用于删除一个指定的集群。
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *本接口 (DeleteClusterStorageOption) 用于删除集群存储选项信息。
                 * @param req DeleteClusterStorageOptionRequest
                 * @return DeleteClusterStorageOptionOutcome
                 */
                DeleteClusterStorageOptionOutcome DeleteClusterStorageOption(const Model::DeleteClusterStorageOptionRequest &request);
                void DeleteClusterStorageOptionAsync(const Model::DeleteClusterStorageOptionRequest& request, const DeleteClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterStorageOptionOutcomeCallable DeleteClusterStorageOptionCallable(const Model::DeleteClusterStorageOptionRequest& request);

                /**
                 *本接口 (DeleteJob) 用于删除一个作业任务。
                 * @param req DeleteJobRequest
                 * @return DeleteJobOutcome
                 */
                DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest &request);
                void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request);

                /**
                 *本接口(DeleteNodes)用于删除指定集群中一个或者多个计算节点或者登录节点。
                 * @param req DeleteNodesRequest
                 * @return DeleteNodesOutcome
                 */
                DeleteNodesOutcome DeleteNodes(const Model::DeleteNodesRequest &request);
                void DeleteNodesAsync(const Model::DeleteNodesRequest& request, const DeleteNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNodesOutcomeCallable DeleteNodesCallable(const Model::DeleteNodesRequest& request);

                /**
                 *本接口(DeleteQueue)用于从指定集群删除队列。
* 本接口为目前只支持SchedulerType为SLURM的集群。

* 删除队列时，需要保证队列内不存在节点。
                 * @param req DeleteQueueRequest
                 * @return DeleteQueueOutcome
                 */
                DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest &request);
                void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request);

                /**
                 *删除指定的定时伸缩任务。
                 * @param req DeleteScheduledActionRequest
                 * @return DeleteScheduledActionOutcome
                 */
                DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest &request);
                void DeleteScheduledActionAsync(const Model::DeleteScheduledActionRequest& request, const DeleteScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const Model::DeleteScheduledActionRequest& request);

                /**
                 *本接口(DescribeAutoScalingConfiguration)用于查询集群弹性伸缩配置信息。本接口仅适用于弹性伸缩类型为THPC_AS的集群。
                 * @param req DescribeAutoScalingConfigurationRequest
                 * @return DescribeAutoScalingConfigurationOutcome
                 */
                DescribeAutoScalingConfigurationOutcome DescribeAutoScalingConfiguration(const Model::DescribeAutoScalingConfigurationRequest &request);
                void DescribeAutoScalingConfigurationAsync(const Model::DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoScalingConfigurationOutcomeCallable DescribeAutoScalingConfigurationCallable(const Model::DescribeAutoScalingConfigurationRequest& request);

                /**
                 *本接口（DescribeClusterActivities）用于查询集群活动历史记录列表。
                 * @param req DescribeClusterActivitiesRequest
                 * @return DescribeClusterActivitiesOutcome
                 */
                DescribeClusterActivitiesOutcome DescribeClusterActivities(const Model::DescribeClusterActivitiesRequest &request);
                void DescribeClusterActivitiesAsync(const Model::DescribeClusterActivitiesRequest& request, const DescribeClusterActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterActivitiesOutcomeCallable DescribeClusterActivitiesCallable(const Model::DescribeClusterActivitiesRequest& request);

                /**
                 *本接口 (DescribeClusterDedicatedProxy) 用于查询IDC集群专线/VPN代理的状态。

* 返回终端节点（EndPoint）的当前状态，包括是否就绪、VIP地址等信息。
* 若代理未开通，EndPointReady返回false，EndPointStatus为UNKNOWN。
                 * @param req DescribeClusterDedicatedProxyRequest
                 * @return DescribeClusterDedicatedProxyOutcome
                 */
                DescribeClusterDedicatedProxyOutcome DescribeClusterDedicatedProxy(const Model::DescribeClusterDedicatedProxyRequest &request);
                void DescribeClusterDedicatedProxyAsync(const Model::DescribeClusterDedicatedProxyRequest& request, const DescribeClusterDedicatedProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDedicatedProxyOutcomeCallable DescribeClusterDedicatedProxyCallable(const Model::DescribeClusterDedicatedProxyRequest& request);

                /**
                 *本接口 (DescribeClusterStorageOption) 用于查询集群存储选项信息。
                 * @param req DescribeClusterStorageOptionRequest
                 * @return DescribeClusterStorageOptionOutcome
                 */
                DescribeClusterStorageOptionOutcome DescribeClusterStorageOption(const Model::DescribeClusterStorageOptionRequest &request);
                void DescribeClusterStorageOptionAsync(const Model::DescribeClusterStorageOptionRequest& request, const DescribeClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterStorageOptionOutcomeCallable DescribeClusterStorageOptionCallable(const Model::DescribeClusterStorageOptionRequest& request);

                /**
                 *本接口（DescribeClusters）用于查询集群列表。
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *本接口 (DescribeInitNodeScripts) 用于查询节点初始化脚本列表。
                 * @param req DescribeInitNodeScriptsRequest
                 * @return DescribeInitNodeScriptsOutcome
                 */
                DescribeInitNodeScriptsOutcome DescribeInitNodeScripts(const Model::DescribeInitNodeScriptsRequest &request);
                void DescribeInitNodeScriptsAsync(const Model::DescribeInitNodeScriptsRequest& request, const DescribeInitNodeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInitNodeScriptsOutcomeCallable DescribeInitNodeScriptsCallable(const Model::DescribeInitNodeScriptsRequest& request);

                /**
                 *查询指定集群可用的机型族列表，用于弹性伸缩配置时选择机型族。
                 * @param req DescribeInstanceFamiliesRequest
                 * @return DescribeInstanceFamiliesOutcome
                 */
                DescribeInstanceFamiliesOutcome DescribeInstanceFamilies(const Model::DescribeInstanceFamiliesRequest &request);
                void DescribeInstanceFamiliesAsync(const Model::DescribeInstanceFamiliesRequest& request, const DescribeInstanceFamiliesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceFamiliesOutcomeCallable DescribeInstanceFamiliesCallable(const Model::DescribeInstanceFamiliesRequest& request);

                /**
                 *本接口用于查询作业的提交信息。
                 * @param req DescribeJobSubmitInfoRequest
                 * @return DescribeJobSubmitInfoOutcome
                 */
                DescribeJobSubmitInfoOutcome DescribeJobSubmitInfo(const Model::DescribeJobSubmitInfoRequest &request);
                void DescribeJobSubmitInfoAsync(const Model::DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobSubmitInfoOutcomeCallable DescribeJobSubmitInfoCallable(const Model::DescribeJobSubmitInfoRequest& request);

                /**
                 *本接口 (DescribeJobs) 用于查询作业任务列表信息。
                 * @param req DescribeJobsRequest
                 * @return DescribeJobsOutcome
                 */
                DescribeJobsOutcome DescribeJobs(const Model::DescribeJobsRequest &request);
                void DescribeJobsAsync(const Model::DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOutcomeCallable DescribeJobsCallable(const Model::DescribeJobsRequest& request);

                /**
                 *本接口 (DescribeJobs) 用于查询作业任务列表信息。
                 * @param req DescribeJobsOverviewRequest
                 * @return DescribeJobsOverviewOutcome
                 */
                DescribeJobsOverviewOutcome DescribeJobsOverview(const Model::DescribeJobsOverviewRequest &request);
                void DescribeJobsOverviewAsync(const Model::DescribeJobsOverviewRequest& request, const DescribeJobsOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobsOverviewOutcomeCallable DescribeJobsOverviewCallable(const Model::DescribeJobsOverviewRequest& request);

                /**
                 *本接口 (DescribeNodes) 用于查询指定集群节点概览信息列表。
                 * @param req DescribeNodesRequest
                 * @return DescribeNodesOutcome
                 */
                DescribeNodesOutcome DescribeNodes(const Model::DescribeNodesRequest &request);
                void DescribeNodesAsync(const Model::DescribeNodesRequest& request, const DescribeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodesOutcomeCallable DescribeNodesCallable(const Model::DescribeNodesRequest& request);

                /**
                 *查询指定集群的队列弹性伸缩配置信息。
                 * @param req DescribeQueueAutoScalingRequest
                 * @return DescribeQueueAutoScalingOutcome
                 */
                DescribeQueueAutoScalingOutcome DescribeQueueAutoScaling(const Model::DescribeQueueAutoScalingRequest &request);
                void DescribeQueueAutoScalingAsync(const Model::DescribeQueueAutoScalingRequest& request, const DescribeQueueAutoScalingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueueAutoScalingOutcomeCallable DescribeQueueAutoScalingCallable(const Model::DescribeQueueAutoScalingRequest& request);

                /**
                 *查询指定集群的队列弹性伸缩概览信息，包括期望容量、当前容量、当前动态节点数、有效定时任务数等。
                 * @param req DescribeQueueAutoScalingOverviewRequest
                 * @return DescribeQueueAutoScalingOverviewOutcome
                 */
                DescribeQueueAutoScalingOverviewOutcome DescribeQueueAutoScalingOverview(const Model::DescribeQueueAutoScalingOverviewRequest &request);
                void DescribeQueueAutoScalingOverviewAsync(const Model::DescribeQueueAutoScalingOverviewRequest& request, const DescribeQueueAutoScalingOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueueAutoScalingOverviewOutcomeCallable DescribeQueueAutoScalingOverviewCallable(const Model::DescribeQueueAutoScalingOverviewRequest& request);

                /**
                 *本接口(DescribeQueues)用于查询指定集群队列概览信息列表。
                 * @param req DescribeQueuesRequest
                 * @return DescribeQueuesOutcome
                 */
                DescribeQueuesOutcome DescribeQueues(const Model::DescribeQueuesRequest &request);
                void DescribeQueuesAsync(const Model::DescribeQueuesRequest& request, const DescribeQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueuesOutcomeCallable DescribeQueuesCallable(const Model::DescribeQueuesRequest& request);

                /**
                 *查询指定集群队列的定时伸缩任务列表。
                 * @param req DescribeScheduledActionsRequest
                 * @return DescribeScheduledActionsOutcome
                 */
                DescribeScheduledActionsOutcome DescribeScheduledActions(const Model::DescribeScheduledActionsRequest &request);
                void DescribeScheduledActionsAsync(const Model::DescribeScheduledActionsRequest& request, const DescribeScheduledActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScheduledActionsOutcomeCallable DescribeScheduledActionsCallable(const Model::DescribeScheduledActionsRequest& request);

                /**
                 *本接口（DescribeWorkspaces）用于查询工作空间列表。
                 * @param req DescribeWorkspacesRequest
                 * @return DescribeWorkspacesOutcome
                 */
                DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest &request);
                void DescribeWorkspacesAsync(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const Model::DescribeWorkspacesRequest& request);

                /**
                 *本接口 (DetachNodes) 用于将一个或者多个计算节点从集群中移除，但是不销毁指定计算资源。
                 * @param req DetachNodesRequest
                 * @return DetachNodesOutcome
                 */
                DetachNodesOutcome DetachNodes(const Model::DetachNodesRequest &request);
                void DetachNodesAsync(const Model::DetachNodesRequest& request, const DetachNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNodesOutcomeCallable DetachNodesCallable(const Model::DetachNodesRequest& request);

                /**
                 *本接口 (DisableClusterDedicatedProxy) 用于关闭IDC集群的专线/VPN代理。

* 关闭后，系统将删除VPC终端节点（EndPoint），断开IDC集群与云上VPC的网络连接。
* 若代理未开通，调用将返回ProxyNotEnabled错误。
* 操作不可逆，关闭后需重新调用EnableClusterDedicatedProxy开启。
                 * @param req DisableClusterDedicatedProxyRequest
                 * @return DisableClusterDedicatedProxyOutcome
                 */
                DisableClusterDedicatedProxyOutcome DisableClusterDedicatedProxy(const Model::DisableClusterDedicatedProxyRequest &request);
                void DisableClusterDedicatedProxyAsync(const Model::DisableClusterDedicatedProxyRequest& request, const DisableClusterDedicatedProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClusterDedicatedProxyOutcomeCallable DisableClusterDedicatedProxyCallable(const Model::DisableClusterDedicatedProxyRequest& request);

                /**
                 *本接口 (EnableClusterDedicatedProxy) 用于开启IDC集群的专线/VPN代理。

* 开启后，系统将自动创建VPC终端节点（EndPoint），实现IDC集群与云上VPC的网络互通。
* 若代理已开通，重复调用将幂等返回已有EndPoint信息。
* SubnetId与VpcId需同时指定或同时不指定。若不指定，则使用集群已绑定的VPC和子网。
                 * @param req EnableClusterDedicatedProxyRequest
                 * @return EnableClusterDedicatedProxyOutcome
                 */
                EnableClusterDedicatedProxyOutcome EnableClusterDedicatedProxy(const Model::EnableClusterDedicatedProxyRequest &request);
                void EnableClusterDedicatedProxyAsync(const Model::EnableClusterDedicatedProxyRequest& request, const EnableClusterDedicatedProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClusterDedicatedProxyOutcomeCallable EnableClusterDedicatedProxyCallable(const Model::EnableClusterDedicatedProxyRequest& request);

                /**
                 *本接口(GenerateRegisterCode)用于为队列创建一个注册码，注册码用于IDC机器的注册纳管。
                 * @param req GenerateRegisterCodeRequest
                 * @return GenerateRegisterCodeOutcome
                 */
                GenerateRegisterCodeOutcome GenerateRegisterCode(const Model::GenerateRegisterCodeRequest &request);
                void GenerateRegisterCodeAsync(const Model::GenerateRegisterCodeRequest& request, const GenerateRegisterCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateRegisterCodeOutcomeCallable GenerateRegisterCodeCallable(const Model::GenerateRegisterCodeRequest& request);

                /**
                 *本接口 (GenerateRegisterCommand) 用于生成IDC集群的节点注册命令。

* 返回的注册命令可直接在IDC机器上以root身份执行，将该机器纳管进指定的IDC集群。
* 当<code>Proxy=true</code>时，系统会先确保集群专线代理就绪（自动开启终端节点并轮询至ACTIVE），再签发注册码并渲染带代理VIP的注册命令；若在超时窗口内代理仍未就绪，将返回<code>FailedOperation.ProxyNotReady</code>。
* 当<code>Proxy=false</code>时，IDC机器需可直连集群，直接签发注册码并渲染注册命令。
* VpcId与SubnetId需同时指定或同时不指定；仅当<code>Proxy=true</code>且集群未绑定VPC时二者必填。当<code>Proxy=false</code>时二者不生效，若仍传入将返回<code>InvalidParameterValue.ParametersNotSupported</code>。
* 若集群此前已开启专线代理并绑定了VPC/子网，本次传入的VpcId/SubnetId与已绑定值不一致时，将返回<code>UnsupportedOperation.VpcAlreadyBound</code>（不支持改绑）。
* 仅支持IDC类型集群，对非IDC集群调用将返回<code>InvalidParameterValue.ParametersNotSupported</code>。
                 * @param req GenerateRegisterCommandRequest
                 * @return GenerateRegisterCommandOutcome
                 */
                GenerateRegisterCommandOutcome GenerateRegisterCommand(const Model::GenerateRegisterCommandRequest &request);
                void GenerateRegisterCommandAsync(const Model::GenerateRegisterCommandRequest& request, const GenerateRegisterCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateRegisterCommandOutcomeCallable GenerateRegisterCommandCallable(const Model::GenerateRegisterCommandRequest& request);

                /**
                 *本接口(InquirePriceCreateWorkspaces)用于创建实例询价。
                 * @param req InquirePriceCreateWorkspacesRequest
                 * @return InquirePriceCreateWorkspacesOutcome
                 */
                InquirePriceCreateWorkspacesOutcome InquirePriceCreateWorkspaces(const Model::InquirePriceCreateWorkspacesRequest &request);
                void InquirePriceCreateWorkspacesAsync(const Model::InquirePriceCreateWorkspacesRequest& request, const InquirePriceCreateWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateWorkspacesOutcomeCallable InquirePriceCreateWorkspacesCallable(const Model::InquirePriceCreateWorkspacesRequest& request);

                /**
                 *查询按量计费工作空间转换为包年包月的价格。不会创建订单或变更资源。
                 * @param req InquirePriceModifyWorkspacesChargeTypeRequest
                 * @return InquirePriceModifyWorkspacesChargeTypeOutcome
                 */
                InquirePriceModifyWorkspacesChargeTypeOutcome InquirePriceModifyWorkspacesChargeType(const Model::InquirePriceModifyWorkspacesChargeTypeRequest &request);
                void InquirePriceModifyWorkspacesChargeTypeAsync(const Model::InquirePriceModifyWorkspacesChargeTypeRequest& request, const InquirePriceModifyWorkspacesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyWorkspacesChargeTypeOutcomeCallable InquirePriceModifyWorkspacesChargeTypeCallable(const Model::InquirePriceModifyWorkspacesChargeTypeRequest& request);

                /**
                 *修改集群删除保护状态
                 * @param req ModifyClusterDeletionProtectionRequest
                 * @return ModifyClusterDeletionProtectionOutcome
                 */
                ModifyClusterDeletionProtectionOutcome ModifyClusterDeletionProtection(const Model::ModifyClusterDeletionProtectionRequest &request);
                void ModifyClusterDeletionProtectionAsync(const Model::ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterDeletionProtectionOutcomeCallable ModifyClusterDeletionProtectionCallable(const Model::ModifyClusterDeletionProtectionRequest& request);

                /**
                 *本接口 (ModifyInitNodeScripts) 用于修改节点初始化脚本。
                 * @param req ModifyInitNodeScriptsRequest
                 * @return ModifyInitNodeScriptsOutcome
                 */
                ModifyInitNodeScriptsOutcome ModifyInitNodeScripts(const Model::ModifyInitNodeScriptsRequest &request);
                void ModifyInitNodeScriptsAsync(const Model::ModifyInitNodeScriptsRequest& request, const ModifyInitNodeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInitNodeScriptsOutcomeCallable ModifyInitNodeScriptsCallable(const Model::ModifyInitNodeScriptsRequest& request);

                /**
                 *本接口用于修改节点属性
                 * @param req ModifyNodeAttributeRequest
                 * @return ModifyNodeAttributeOutcome
                 */
                ModifyNodeAttributeOutcome ModifyNodeAttribute(const Model::ModifyNodeAttributeRequest &request);
                void ModifyNodeAttributeAsync(const Model::ModifyNodeAttributeRequest& request, const ModifyNodeAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodeAttributeOutcomeCallable ModifyNodeAttributeCallable(const Model::ModifyNodeAttributeRequest& request);

                /**
                 *修改指定的定时伸缩任务配置。
                 * @param req ModifyScheduledActionRequest
                 * @return ModifyScheduledActionOutcome
                 */
                ModifyScheduledActionOutcome ModifyScheduledAction(const Model::ModifyScheduledActionRequest &request);
                void ModifyScheduledActionAsync(const Model::ModifyScheduledActionRequest& request, const ModifyScheduledActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyScheduledActionOutcomeCallable ModifyScheduledActionCallable(const Model::ModifyScheduledActionRequest& request);

                /**
                 *本接口 (ModifyWorkspacesAttribute) 用于修改工作空间的属性（目前只支持修改工作空间的名称）。
                 * @param req ModifyWorkspacesAttributeRequest
                 * @return ModifyWorkspacesAttributeOutcome
                 */
                ModifyWorkspacesAttributeOutcome ModifyWorkspacesAttribute(const Model::ModifyWorkspacesAttributeRequest &request);
                void ModifyWorkspacesAttributeAsync(const Model::ModifyWorkspacesAttributeRequest& request, const ModifyWorkspacesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspacesAttributeOutcomeCallable ModifyWorkspacesAttributeCallable(const Model::ModifyWorkspacesAttributeRequest& request);

                /**
                 *正式提交按量计费工作空间转包年包月订单。仅支持 ONLINE 且计费模式为 POSTPAID_BY_HOUR 的工作空间。
                 * @param req ModifyWorkspacesChargeTypeRequest
                 * @return ModifyWorkspacesChargeTypeOutcome
                 */
                ModifyWorkspacesChargeTypeOutcome ModifyWorkspacesChargeType(const Model::ModifyWorkspacesChargeTypeRequest &request);
                void ModifyWorkspacesChargeTypeAsync(const Model::ModifyWorkspacesChargeTypeRequest& request, const ModifyWorkspacesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspacesChargeTypeOutcomeCallable ModifyWorkspacesChargeTypeCallable(const Model::ModifyWorkspacesChargeTypeRequest& request);

                /**
                 *本接口 (ModifyWorkspacesAttribute) 用于修改工作空间的属性（目前只支持修改工作空间的名称）。
                 * @param req ModifyWorkspacesRenewFlagRequest
                 * @return ModifyWorkspacesRenewFlagOutcome
                 */
                ModifyWorkspacesRenewFlagOutcome ModifyWorkspacesRenewFlag(const Model::ModifyWorkspacesRenewFlagRequest &request);
                void ModifyWorkspacesRenewFlagAsync(const Model::ModifyWorkspacesRenewFlagRequest& request, const ModifyWorkspacesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspacesRenewFlagOutcomeCallable ModifyWorkspacesRenewFlagCallable(const Model::ModifyWorkspacesRenewFlagRequest& request);

                /**
                 *本接口(SetAutoScalingConfiguration)用于为集群设置集群弹性伸缩配置信息。
                 * @param req SetAutoScalingConfigurationRequest
                 * @return SetAutoScalingConfigurationOutcome
                 */
                SetAutoScalingConfigurationOutcome SetAutoScalingConfiguration(const Model::SetAutoScalingConfigurationRequest &request);
                void SetAutoScalingConfigurationAsync(const Model::SetAutoScalingConfigurationRequest& request, const SetAutoScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoScalingConfigurationOutcomeCallable SetAutoScalingConfigurationCallable(const Model::SetAutoScalingConfigurationRequest& request);

                /**
                 *为指定集群的队列配置弹性伸缩策略，包括伸缩容量、扩容方式等。
                 * @param req SetQueueAutoScalingRequest
                 * @return SetQueueAutoScalingOutcome
                 */
                SetQueueAutoScalingOutcome SetQueueAutoScaling(const Model::SetQueueAutoScalingRequest &request);
                void SetQueueAutoScalingAsync(const Model::SetQueueAutoScalingRequest& request, const SetQueueAutoScalingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetQueueAutoScalingOutcomeCallable SetQueueAutoScalingCallable(const Model::SetQueueAutoScalingRequest& request);

                /**
                 *本接口 (SubmitJob) 用于提交一个作业任务。
                 * @param req SubmitJobRequest
                 * @return SubmitJobOutcome
                 */
                SubmitJobOutcome SubmitJob(const Model::SubmitJobRequest &request);
                void SubmitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitJobOutcomeCallable SubmitJobCallable(const Model::SubmitJobRequest& request);

                /**
                 *本接口 (TerminateJob) 用于终止一个作业任务。
                 * @param req TerminateJobRequest
                 * @return TerminateJobOutcome
                 */
                TerminateJobOutcome TerminateJob(const Model::TerminateJobRequest &request);
                void TerminateJobAsync(const Model::TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateJobOutcomeCallable TerminateJobCallable(const Model::TerminateJobRequest& request);

                /**
                 *本接口 (TerminateWorkspaces) 用于主动退还工作空间。
                 * @param req TerminateWorkspacesRequest
                 * @return TerminateWorkspacesOutcome
                 */
                TerminateWorkspacesOutcome TerminateWorkspaces(const Model::TerminateWorkspacesRequest &request);
                void TerminateWorkspacesAsync(const Model::TerminateWorkspacesRequest& request, const TerminateWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateWorkspacesOutcomeCallable TerminateWorkspacesCallable(const Model::TerminateWorkspacesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_THPCCLIENT_H_

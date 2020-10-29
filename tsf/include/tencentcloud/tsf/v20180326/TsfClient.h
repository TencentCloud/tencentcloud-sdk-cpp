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

#ifndef TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_
#define TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tsf/v20180326/model/AddClusterInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/AddClusterInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/AddInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/AddInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/ContinueRunFailedTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/ContinueRunFailedTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreatePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateServerlessGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateServerlessGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteServerlessGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteServerlessGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployServerlessGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployServerlessGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiVersionsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApiVersionsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBasicResourceUsageRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeBasicResourceUsageResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleaseLogsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleaseLogsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleasesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigReleasesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigSummaryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigSummaryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFlowLastBatchStateRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeFlowLastBatchStateResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLaneRulesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLaneRulesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLanesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeLanesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMsApiListRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMsApiListResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePodInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePodInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleaseLogsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleaseLogsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleasesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigReleasesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigSummaryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigSummaryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePublicConfigsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeReleasedConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeReleasedConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoriesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoriesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeRepositoryResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeServerlessGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeServerlessGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeServerlessGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeServerlessGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskLastStatusRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeTaskLastStatusResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/DisableTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/EnableTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskFlowRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExecuteTaskFlowResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRuleRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyLaneRuleResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskFlowBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/RedoTaskFlowBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleaseConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/ReleasePublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/ReleasePublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/RevocationConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RevocationConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RevocationPublicConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RevocationPublicConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/RollbackConfigRequest.h>
#include <tencentcloud/tsf/v20180326/model/RollbackConfigResponse.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/ShrinkInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/StartContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StartContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StartGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StartGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskExecuteRequest.h>
#include <tencentcloud/tsf/v20180326/model/StopTaskExecuteResponse.h>
#include <tencentcloud/tsf/v20180326/model/TerminateTaskFlowBatchRequest.h>
#include <tencentcloud/tsf/v20180326/model/TerminateTaskFlowBatchResponse.h>
#include <tencentcloud/tsf/v20180326/model/UpdateRepositoryRequest.h>
#include <tencentcloud/tsf/v20180326/model/UpdateRepositoryResponse.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            class TsfClient : public AbstractClient
            {
            public:
                TsfClient(const Credential &credential, const std::string &region);
                TsfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddClusterInstancesResponse> AddClusterInstancesOutcome;
                typedef std::future<AddClusterInstancesOutcome> AddClusterInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AddClusterInstancesRequest&, AddClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::AddInstancesResponse> AddInstancesOutcome;
                typedef std::future<AddInstancesOutcome> AddInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AddInstancesRequest&, AddInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddInstancesAsyncHandler;
                typedef Outcome<Error, Model::ContinueRunFailedTaskBatchResponse> ContinueRunFailedTaskBatchOutcome;
                typedef std::future<ContinueRunFailedTaskBatchOutcome> ContinueRunFailedTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ContinueRunFailedTaskBatchRequest&, ContinueRunFailedTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContinueRunFailedTaskBatchAsyncHandler;
                typedef Outcome<Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Error, Model::CreateConfigResponse> CreateConfigOutcome;
                typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateConfigRequest&, CreateConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateContainGroupResponse> CreateContainGroupOutcome;
                typedef std::future<CreateContainGroupOutcome> CreateContainGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateContainGroupRequest&, CreateContainGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContainGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateLaneResponse> CreateLaneOutcome;
                typedef std::future<CreateLaneOutcome> CreateLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateLaneRequest&, CreateLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaneAsyncHandler;
                typedef Outcome<Error, Model::CreateLaneRuleResponse> CreateLaneRuleOutcome;
                typedef std::future<CreateLaneRuleOutcome> CreateLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateLaneRuleRequest&, CreateLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaneRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateMicroserviceResponse> CreateMicroserviceOutcome;
                typedef std::future<CreateMicroserviceOutcome> CreateMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateMicroserviceRequest&, CreateMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::CreatePublicConfigResponse> CreatePublicConfigOutcome;
                typedef std::future<CreatePublicConfigOutcome> CreatePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreatePublicConfigRequest&, CreatePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateRepositoryResponse> CreateRepositoryOutcome;
                typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateRepositoryRequest&, CreateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRepositoryAsyncHandler;
                typedef Outcome<Error, Model::CreateServerlessGroupResponse> CreateServerlessGroupOutcome;
                typedef std::future<CreateServerlessGroupOutcome> CreateServerlessGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateServerlessGroupRequest&, CreateServerlessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServerlessGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Error, Model::DeleteConfigResponse> DeleteConfigOutcome;
                typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteConfigRequest&, DeleteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteContainerGroupResponse> DeleteContainerGroupOutcome;
                typedef std::future<DeleteContainerGroupOutcome> DeleteContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteContainerGroupRequest&, DeleteContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageTagsResponse> DeleteImageTagsOutcome;
                typedef std::future<DeleteImageTagsOutcome> DeleteImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteImageTagsRequest&, DeleteImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageTagsAsyncHandler;
                typedef Outcome<Error, Model::DeleteLaneResponse> DeleteLaneOutcome;
                typedef std::future<DeleteLaneOutcome> DeleteLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteLaneRequest&, DeleteLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaneAsyncHandler;
                typedef Outcome<Error, Model::DeleteMicroserviceResponse> DeleteMicroserviceOutcome;
                typedef std::future<DeleteMicroserviceOutcome> DeleteMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteMicroserviceRequest&, DeleteMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeletePkgsResponse> DeletePkgsOutcome;
                typedef std::future<DeletePkgsOutcome> DeletePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePkgsRequest&, DeletePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePkgsAsyncHandler;
                typedef Outcome<Error, Model::DeletePublicConfigResponse> DeletePublicConfigOutcome;
                typedef std::future<DeletePublicConfigOutcome> DeletePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePublicConfigRequest&, DeletePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublicConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteRepositoryResponse> DeleteRepositoryOutcome;
                typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteRepositoryRequest&, DeleteRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRepositoryAsyncHandler;
                typedef Outcome<Error, Model::DeleteServerlessGroupResponse> DeleteServerlessGroupOutcome;
                typedef std::future<DeleteServerlessGroupOutcome> DeleteServerlessGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteServerlessGroupRequest&, DeleteServerlessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServerlessGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Error, Model::DeployContainerGroupResponse> DeployContainerGroupOutcome;
                typedef std::future<DeployContainerGroupOutcome> DeployContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployContainerGroupRequest&, DeployContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::DeployGroupResponse> DeployGroupOutcome;
                typedef std::future<DeployGroupOutcome> DeployGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployGroupRequest&, DeployGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployGroupAsyncHandler;
                typedef Outcome<Error, Model::DeployServerlessGroupResponse> DeployServerlessGroupOutcome;
                typedef std::future<DeployServerlessGroupOutcome> DeployServerlessGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployServerlessGroupRequest&, DeployServerlessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployServerlessGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiDetailResponse> DescribeApiDetailOutcome;
                typedef std::future<DescribeApiDetailOutcome> DescribeApiDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiDetailRequest&, DescribeApiDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiVersionsResponse> DescribeApiVersionsOutcome;
                typedef std::future<DescribeApiVersionsOutcome> DescribeApiVersionsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApiVersionsRequest&, DescribeApiVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiVersionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationAttributeResponse> DescribeApplicationAttributeOutcome;
                typedef std::future<DescribeApplicationAttributeOutcome> DescribeApplicationAttributeOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationAttributeRequest&, DescribeApplicationAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAttributeAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBasicResourceUsageResponse> DescribeBasicResourceUsageOutcome;
                typedef std::future<DescribeBasicResourceUsageOutcome> DescribeBasicResourceUsageOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeBasicResourceUsageRequest&, DescribeBasicResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicResourceUsageAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigReleaseLogsResponse> DescribeConfigReleaseLogsOutcome;
                typedef std::future<DescribeConfigReleaseLogsOutcome> DescribeConfigReleaseLogsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigReleaseLogsRequest&, DescribeConfigReleaseLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigReleaseLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigReleasesResponse> DescribeConfigReleasesOutcome;
                typedef std::future<DescribeConfigReleasesOutcome> DescribeConfigReleasesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigReleasesRequest&, DescribeConfigReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigReleasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigSummaryResponse> DescribeConfigSummaryOutcome;
                typedef std::future<DescribeConfigSummaryOutcome> DescribeConfigSummaryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigSummaryRequest&, DescribeConfigSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigSummaryAsyncHandler;
                typedef Outcome<Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeContainerGroupDetailResponse> DescribeContainerGroupDetailOutcome;
                typedef std::future<DescribeContainerGroupDetailOutcome> DescribeContainerGroupDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupDetailRequest&, DescribeContainerGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeContainerGroupsResponse> DescribeContainerGroupsOutcome;
                typedef std::future<DescribeContainerGroupsOutcome> DescribeContainerGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupsRequest&, DescribeContainerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDownloadInfoResponse> DescribeDownloadInfoOutcome;
                typedef std::future<DescribeDownloadInfoOutcome> DescribeDownloadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDownloadInfoRequest&, DescribeDownloadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowLastBatchStateResponse> DescribeFlowLastBatchStateOutcome;
                typedef std::future<DescribeFlowLastBatchStateOutcome> DescribeFlowLastBatchStateOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeFlowLastBatchStateRequest&, DescribeFlowLastBatchStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLastBatchStateAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupInstancesResponse> DescribeGroupInstancesOutcome;
                typedef std::future<DescribeGroupInstancesOutcome> DescribeGroupInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupInstancesRequest&, DescribeGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupsResponse> DescribeGroupsOutcome;
                typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupsRequest&, DescribeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageRepositoryResponse> DescribeImageRepositoryOutcome;
                typedef std::future<DescribeImageRepositoryOutcome> DescribeImageRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeImageRepositoryRequest&, DescribeImageRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRepositoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageTagsResponse> DescribeImageTagsOutcome;
                typedef std::future<DescribeImageTagsOutcome> DescribeImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeImageTagsRequest&, DescribeImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTagsAsyncHandler;
                typedef Outcome<Error, Model::DescribeLaneRulesResponse> DescribeLaneRulesOutcome;
                typedef std::future<DescribeLaneRulesOutcome> DescribeLaneRulesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeLaneRulesRequest&, DescribeLaneRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaneRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeLanesResponse> DescribeLanesOutcome;
                typedef std::future<DescribeLanesOutcome> DescribeLanesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeLanesRequest&, DescribeLanesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLanesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMicroserviceResponse> DescribeMicroserviceOutcome;
                typedef std::future<DescribeMicroserviceOutcome> DescribeMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroserviceRequest&, DescribeMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeMicroservicesResponse> DescribeMicroservicesOutcome;
                typedef std::future<DescribeMicroservicesOutcome> DescribeMicroservicesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroservicesRequest&, DescribeMicroservicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroservicesAsyncHandler;
                typedef Outcome<Error, Model::DescribeMsApiListResponse> DescribeMsApiListOutcome;
                typedef std::future<DescribeMsApiListOutcome> DescribeMsApiListOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMsApiListRequest&, DescribeMsApiListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMsApiListAsyncHandler;
                typedef Outcome<Error, Model::DescribePkgsResponse> DescribePkgsOutcome;
                typedef std::future<DescribePkgsOutcome> DescribePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePkgsRequest&, DescribePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePkgsAsyncHandler;
                typedef Outcome<Error, Model::DescribePodInstancesResponse> DescribePodInstancesOutcome;
                typedef std::future<DescribePodInstancesOutcome> DescribePodInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePodInstancesRequest&, DescribePodInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribePublicConfigResponse> DescribePublicConfigOutcome;
                typedef std::future<DescribePublicConfigOutcome> DescribePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigRequest&, DescribePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribePublicConfigReleaseLogsResponse> DescribePublicConfigReleaseLogsOutcome;
                typedef std::future<DescribePublicConfigReleaseLogsOutcome> DescribePublicConfigReleaseLogsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigReleaseLogsRequest&, DescribePublicConfigReleaseLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigReleaseLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribePublicConfigReleasesResponse> DescribePublicConfigReleasesOutcome;
                typedef std::future<DescribePublicConfigReleasesOutcome> DescribePublicConfigReleasesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigReleasesRequest&, DescribePublicConfigReleasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigReleasesAsyncHandler;
                typedef Outcome<Error, Model::DescribePublicConfigSummaryResponse> DescribePublicConfigSummaryOutcome;
                typedef std::future<DescribePublicConfigSummaryOutcome> DescribePublicConfigSummaryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigSummaryRequest&, DescribePublicConfigSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigSummaryAsyncHandler;
                typedef Outcome<Error, Model::DescribePublicConfigsResponse> DescribePublicConfigsOutcome;
                typedef std::future<DescribePublicConfigsOutcome> DescribePublicConfigsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePublicConfigsRequest&, DescribePublicConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicConfigsAsyncHandler;
                typedef Outcome<Error, Model::DescribeReleasedConfigResponse> DescribeReleasedConfigOutcome;
                typedef std::future<DescribeReleasedConfigOutcome> DescribeReleasedConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeReleasedConfigRequest&, DescribeReleasedConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReleasedConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoriesResponse> DescribeRepositoriesOutcome;
                typedef std::future<DescribeRepositoriesOutcome> DescribeRepositoriesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeRepositoriesRequest&, DescribeRepositoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRepositoryResponse> DescribeRepositoryOutcome;
                typedef std::future<DescribeRepositoryOutcome> DescribeRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeRepositoryRequest&, DescribeRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeServerlessGroupResponse> DescribeServerlessGroupOutcome;
                typedef std::future<DescribeServerlessGroupOutcome> DescribeServerlessGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeServerlessGroupRequest&, DescribeServerlessGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeServerlessGroupsResponse> DescribeServerlessGroupsOutcome;
                typedef std::future<DescribeServerlessGroupsOutcome> DescribeServerlessGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeServerlessGroupsRequest&, DescribeServerlessGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServerlessGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSimpleApplicationsResponse> DescribeSimpleApplicationsOutcome;
                typedef std::future<DescribeSimpleApplicationsOutcome> DescribeSimpleApplicationsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleApplicationsRequest&, DescribeSimpleApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleApplicationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSimpleClustersResponse> DescribeSimpleClustersOutcome;
                typedef std::future<DescribeSimpleClustersOutcome> DescribeSimpleClustersOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleClustersRequest&, DescribeSimpleClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleClustersAsyncHandler;
                typedef Outcome<Error, Model::DescribeSimpleGroupsResponse> DescribeSimpleGroupsOutcome;
                typedef std::future<DescribeSimpleGroupsOutcome> DescribeSimpleGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleGroupsRequest&, DescribeSimpleGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSimpleNamespacesResponse> DescribeSimpleNamespacesOutcome;
                typedef std::future<DescribeSimpleNamespacesOutcome> DescribeSimpleNamespacesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeSimpleNamespacesRequest&, DescribeSimpleNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleNamespacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskLastStatusResponse> DescribeTaskLastStatusOutcome;
                typedef std::future<DescribeTaskLastStatusOutcome> DescribeTaskLastStatusOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeTaskLastStatusRequest&, DescribeTaskLastStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLastStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeUploadInfoResponse> DescribeUploadInfoOutcome;
                typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUploadInfoRequest&, DescribeUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
                typedef Outcome<Error, Model::DisableTaskResponse> DisableTaskOutcome;
                typedef std::future<DisableTaskOutcome> DisableTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableTaskRequest&, DisableTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTaskAsyncHandler;
                typedef Outcome<Error, Model::DisableTaskFlowResponse> DisableTaskFlowOutcome;
                typedef std::future<DisableTaskFlowOutcome> DisableTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DisableTaskFlowRequest&, DisableTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTaskFlowAsyncHandler;
                typedef Outcome<Error, Model::EnableTaskResponse> EnableTaskOutcome;
                typedef std::future<EnableTaskOutcome> EnableTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableTaskRequest&, EnableTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTaskAsyncHandler;
                typedef Outcome<Error, Model::EnableTaskFlowResponse> EnableTaskFlowOutcome;
                typedef std::future<EnableTaskFlowOutcome> EnableTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::EnableTaskFlowRequest&, EnableTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTaskFlowAsyncHandler;
                typedef Outcome<Error, Model::ExecuteTaskResponse> ExecuteTaskOutcome;
                typedef std::future<ExecuteTaskOutcome> ExecuteTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExecuteTaskRequest&, ExecuteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskAsyncHandler;
                typedef Outcome<Error, Model::ExecuteTaskFlowResponse> ExecuteTaskFlowOutcome;
                typedef std::future<ExecuteTaskFlowOutcome> ExecuteTaskFlowOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExecuteTaskFlowRequest&, ExecuteTaskFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskFlowAsyncHandler;
                typedef Outcome<Error, Model::ExpandGroupResponse> ExpandGroupOutcome;
                typedef std::future<ExpandGroupOutcome> ExpandGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExpandGroupRequest&, ExpandGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyContainerGroupResponse> ModifyContainerGroupOutcome;
                typedef std::future<ModifyContainerGroupOutcome> ModifyContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerGroupRequest&, ModifyContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyContainerReplicasResponse> ModifyContainerReplicasOutcome;
                typedef std::future<ModifyContainerReplicasOutcome> ModifyContainerReplicasOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerReplicasRequest&, ModifyContainerReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerReplicasAsyncHandler;
                typedef Outcome<Error, Model::ModifyLaneResponse> ModifyLaneOutcome;
                typedef std::future<ModifyLaneOutcome> ModifyLaneOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyLaneRequest&, ModifyLaneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaneAsyncHandler;
                typedef Outcome<Error, Model::ModifyLaneRuleResponse> ModifyLaneRuleOutcome;
                typedef std::future<ModifyLaneRuleOutcome> ModifyLaneRuleOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyLaneRuleRequest&, ModifyLaneRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaneRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyMicroserviceResponse> ModifyMicroserviceOutcome;
                typedef std::future<ModifyMicroserviceOutcome> ModifyMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyMicroserviceRequest&, ModifyMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::ModifyUploadInfoResponse> ModifyUploadInfoOutcome;
                typedef std::future<ModifyUploadInfoOutcome> ModifyUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyUploadInfoRequest&, ModifyUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUploadInfoAsyncHandler;
                typedef Outcome<Error, Model::RedoTaskResponse> RedoTaskOutcome;
                typedef std::future<RedoTaskOutcome> RedoTaskOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskRequest&, RedoTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskAsyncHandler;
                typedef Outcome<Error, Model::RedoTaskBatchResponse> RedoTaskBatchOutcome;
                typedef std::future<RedoTaskBatchOutcome> RedoTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskBatchRequest&, RedoTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskBatchAsyncHandler;
                typedef Outcome<Error, Model::RedoTaskFlowBatchResponse> RedoTaskFlowBatchOutcome;
                typedef std::future<RedoTaskFlowBatchOutcome> RedoTaskFlowBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RedoTaskFlowBatchRequest&, RedoTaskFlowBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RedoTaskFlowBatchAsyncHandler;
                typedef Outcome<Error, Model::ReleaseConfigResponse> ReleaseConfigOutcome;
                typedef std::future<ReleaseConfigOutcome> ReleaseConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleaseConfigRequest&, ReleaseConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseConfigAsyncHandler;
                typedef Outcome<Error, Model::ReleasePublicConfigResponse> ReleasePublicConfigOutcome;
                typedef std::future<ReleasePublicConfigOutcome> ReleasePublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ReleasePublicConfigRequest&, ReleasePublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleasePublicConfigAsyncHandler;
                typedef Outcome<Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
                typedef Outcome<Error, Model::RevocationConfigResponse> RevocationConfigOutcome;
                typedef std::future<RevocationConfigOutcome> RevocationConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RevocationConfigRequest&, RevocationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevocationConfigAsyncHandler;
                typedef Outcome<Error, Model::RevocationPublicConfigResponse> RevocationPublicConfigOutcome;
                typedef std::future<RevocationPublicConfigOutcome> RevocationPublicConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RevocationPublicConfigRequest&, RevocationPublicConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevocationPublicConfigAsyncHandler;
                typedef Outcome<Error, Model::RollbackConfigResponse> RollbackConfigOutcome;
                typedef std::future<RollbackConfigOutcome> RollbackConfigOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RollbackConfigRequest&, RollbackConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackConfigAsyncHandler;
                typedef Outcome<Error, Model::ShrinkGroupResponse> ShrinkGroupOutcome;
                typedef std::future<ShrinkGroupOutcome> ShrinkGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ShrinkGroupRequest&, ShrinkGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkGroupAsyncHandler;
                typedef Outcome<Error, Model::ShrinkInstancesResponse> ShrinkInstancesOutcome;
                typedef std::future<ShrinkInstancesOutcome> ShrinkInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ShrinkInstancesRequest&, ShrinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShrinkInstancesAsyncHandler;
                typedef Outcome<Error, Model::StartContainerGroupResponse> StartContainerGroupOutcome;
                typedef std::future<StartContainerGroupOutcome> StartContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StartContainerGroupRequest&, StartContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::StartGroupResponse> StartGroupOutcome;
                typedef std::future<StartGroupOutcome> StartGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StartGroupRequest&, StartGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGroupAsyncHandler;
                typedef Outcome<Error, Model::StopContainerGroupResponse> StopContainerGroupOutcome;
                typedef std::future<StopContainerGroupOutcome> StopContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopContainerGroupRequest&, StopContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::StopGroupResponse> StopGroupOutcome;
                typedef std::future<StopGroupOutcome> StopGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopGroupRequest&, StopGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGroupAsyncHandler;
                typedef Outcome<Error, Model::StopTaskBatchResponse> StopTaskBatchOutcome;
                typedef std::future<StopTaskBatchOutcome> StopTaskBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopTaskBatchRequest&, StopTaskBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskBatchAsyncHandler;
                typedef Outcome<Error, Model::StopTaskExecuteResponse> StopTaskExecuteOutcome;
                typedef std::future<StopTaskExecuteOutcome> StopTaskExecuteOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::StopTaskExecuteRequest&, StopTaskExecuteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskExecuteAsyncHandler;
                typedef Outcome<Error, Model::TerminateTaskFlowBatchResponse> TerminateTaskFlowBatchOutcome;
                typedef std::future<TerminateTaskFlowBatchOutcome> TerminateTaskFlowBatchOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::TerminateTaskFlowBatchRequest&, TerminateTaskFlowBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTaskFlowBatchAsyncHandler;
                typedef Outcome<Error, Model::UpdateRepositoryResponse> UpdateRepositoryOutcome;
                typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::UpdateRepositoryRequest&, UpdateRepositoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRepositoryAsyncHandler;



                /**
                 *添加云主机节点至TSF集群
                 * @param req AddClusterInstancesRequest
                 * @return AddClusterInstancesOutcome
                 */
                AddClusterInstancesOutcome AddClusterInstances(const Model::AddClusterInstancesRequest &request);
                void AddClusterInstancesAsync(const Model::AddClusterInstancesRequest& request, const AddClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClusterInstancesOutcomeCallable AddClusterInstancesCallable(const Model::AddClusterInstancesRequest& request);

                /**
                 *添加云主机节点至TSF集群
                 * @param req AddInstancesRequest
                 * @return AddInstancesOutcome
                 */
                AddInstancesOutcome AddInstances(const Model::AddInstancesRequest &request);
                void AddInstancesAsync(const Model::AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddInstancesOutcomeCallable AddInstancesCallable(const Model::AddInstancesRequest& request);

                /**
                 *对执行失败的任务批次执行续跑
                 * @param req ContinueRunFailedTaskBatchRequest
                 * @return ContinueRunFailedTaskBatchOutcome
                 */
                ContinueRunFailedTaskBatchOutcome ContinueRunFailedTaskBatch(const Model::ContinueRunFailedTaskBatchRequest &request);
                void ContinueRunFailedTaskBatchAsync(const Model::ContinueRunFailedTaskBatchRequest& request, const ContinueRunFailedTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContinueRunFailedTaskBatchOutcomeCallable ContinueRunFailedTaskBatchCallable(const Model::ContinueRunFailedTaskBatchRequest& request);

                /**
                 *创建应用
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建配置项
                 * @param req CreateConfigRequest
                 * @return CreateConfigOutcome
                 */
                CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest &request);
                void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request);

                /**
                 *创建容器部署组
                 * @param req CreateContainGroupRequest
                 * @return CreateContainGroupOutcome
                 */
                CreateContainGroupOutcome CreateContainGroup(const Model::CreateContainGroupRequest &request);
                void CreateContainGroupAsync(const Model::CreateContainGroupRequest& request, const CreateContainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContainGroupOutcomeCallable CreateContainGroupCallable(const Model::CreateContainGroupRequest& request);

                /**
                 *创建虚拟机部署组
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *创建泳道
                 * @param req CreateLaneRequest
                 * @return CreateLaneOutcome
                 */
                CreateLaneOutcome CreateLane(const Model::CreateLaneRequest &request);
                void CreateLaneAsync(const Model::CreateLaneRequest& request, const CreateLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaneOutcomeCallable CreateLaneCallable(const Model::CreateLaneRequest& request);

                /**
                 *创建泳道规则
                 * @param req CreateLaneRuleRequest
                 * @return CreateLaneRuleOutcome
                 */
                CreateLaneRuleOutcome CreateLaneRule(const Model::CreateLaneRuleRequest &request);
                void CreateLaneRuleAsync(const Model::CreateLaneRuleRequest& request, const CreateLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaneRuleOutcomeCallable CreateLaneRuleCallable(const Model::CreateLaneRuleRequest& request);

                /**
                 *新增微服务
                 * @param req CreateMicroserviceRequest
                 * @return CreateMicroserviceOutcome
                 */
                CreateMicroserviceOutcome CreateMicroservice(const Model::CreateMicroserviceRequest &request);
                void CreateMicroserviceAsync(const Model::CreateMicroserviceRequest& request, const CreateMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMicroserviceOutcomeCallable CreateMicroserviceCallable(const Model::CreateMicroserviceRequest& request);

                /**
                 *创建命名空间
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *创建公共配置项
                 * @param req CreatePublicConfigRequest
                 * @return CreatePublicConfigOutcome
                 */
                CreatePublicConfigOutcome CreatePublicConfig(const Model::CreatePublicConfigRequest &request);
                void CreatePublicConfigAsync(const Model::CreatePublicConfigRequest& request, const CreatePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicConfigOutcomeCallable CreatePublicConfigCallable(const Model::CreatePublicConfigRequest& request);

                /**
                 *创建仓库
                 * @param req CreateRepositoryRequest
                 * @return CreateRepositoryOutcome
                 */
                CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest &request);
                void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request);

                /**
                 *创建Serverless部署组
                 * @param req CreateServerlessGroupRequest
                 * @return CreateServerlessGroupOutcome
                 */
                CreateServerlessGroupOutcome CreateServerlessGroup(const Model::CreateServerlessGroupRequest &request);
                void CreateServerlessGroupAsync(const Model::CreateServerlessGroupRequest& request, const CreateServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServerlessGroupOutcomeCallable CreateServerlessGroupCallable(const Model::CreateServerlessGroupRequest& request);

                /**
                 *创建任务
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *删除应用
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *删除配置项
                 * @param req DeleteConfigRequest
                 * @return DeleteConfigOutcome
                 */
                DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest &request);
                void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request);

                /**
                 *删除容器部署组
                 * @param req DeleteContainerGroupRequest
                 * @return DeleteContainerGroupOutcome
                 */
                DeleteContainerGroupOutcome DeleteContainerGroup(const Model::DeleteContainerGroupRequest &request);
                void DeleteContainerGroupAsync(const Model::DeleteContainerGroupRequest& request, const DeleteContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteContainerGroupOutcomeCallable DeleteContainerGroupCallable(const Model::DeleteContainerGroupRequest& request);

                /**
                 *删除容器部署组
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *批量删除镜像版本
                 * @param req DeleteImageTagsRequest
                 * @return DeleteImageTagsOutcome
                 */
                DeleteImageTagsOutcome DeleteImageTags(const Model::DeleteImageTagsRequest &request);
                void DeleteImageTagsAsync(const Model::DeleteImageTagsRequest& request, const DeleteImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageTagsOutcomeCallable DeleteImageTagsCallable(const Model::DeleteImageTagsRequest& request);

                /**
                 *删除泳道
                 * @param req DeleteLaneRequest
                 * @return DeleteLaneOutcome
                 */
                DeleteLaneOutcome DeleteLane(const Model::DeleteLaneRequest &request);
                void DeleteLaneAsync(const Model::DeleteLaneRequest& request, const DeleteLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaneOutcomeCallable DeleteLaneCallable(const Model::DeleteLaneRequest& request);

                /**
                 *删除微服务
                 * @param req DeleteMicroserviceRequest
                 * @return DeleteMicroserviceOutcome
                 */
                DeleteMicroserviceOutcome DeleteMicroservice(const Model::DeleteMicroserviceRequest &request);
                void DeleteMicroserviceAsync(const Model::DeleteMicroserviceRequest& request, const DeleteMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMicroserviceOutcomeCallable DeleteMicroserviceCallable(const Model::DeleteMicroserviceRequest& request);

                /**
                 *删除命名空间
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *从软件仓库批量删除程序包。
一次最多支持删除1000个包，数量超过1000，返回UpperDeleteLimit错误。
                 * @param req DeletePkgsRequest
                 * @return DeletePkgsOutcome
                 */
                DeletePkgsOutcome DeletePkgs(const Model::DeletePkgsRequest &request);
                void DeletePkgsAsync(const Model::DeletePkgsRequest& request, const DeletePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePkgsOutcomeCallable DeletePkgsCallable(const Model::DeletePkgsRequest& request);

                /**
                 *删除公共配置项
                 * @param req DeletePublicConfigRequest
                 * @return DeletePublicConfigOutcome
                 */
                DeletePublicConfigOutcome DeletePublicConfig(const Model::DeletePublicConfigRequest &request);
                void DeletePublicConfigAsync(const Model::DeletePublicConfigRequest& request, const DeletePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublicConfigOutcomeCallable DeletePublicConfigCallable(const Model::DeletePublicConfigRequest& request);

                /**
                 *删除仓库
                 * @param req DeleteRepositoryRequest
                 * @return DeleteRepositoryOutcome
                 */
                DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest &request);
                void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request);

                /**
                 *删除Serverless部署组
                 * @param req DeleteServerlessGroupRequest
                 * @return DeleteServerlessGroupOutcome
                 */
                DeleteServerlessGroupOutcome DeleteServerlessGroup(const Model::DeleteServerlessGroupRequest &request);
                void DeleteServerlessGroupAsync(const Model::DeleteServerlessGroupRequest& request, const DeleteServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServerlessGroupOutcomeCallable DeleteServerlessGroupCallable(const Model::DeleteServerlessGroupRequest& request);

                /**
                 *删除任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *部署容器应用
                 * @param req DeployContainerGroupRequest
                 * @return DeployContainerGroupOutcome
                 */
                DeployContainerGroupOutcome DeployContainerGroup(const Model::DeployContainerGroupRequest &request);
                void DeployContainerGroupAsync(const Model::DeployContainerGroupRequest& request, const DeployContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployContainerGroupOutcomeCallable DeployContainerGroupCallable(const Model::DeployContainerGroupRequest& request);

                /**
                 *部署虚拟机部署组应用
                 * @param req DeployGroupRequest
                 * @return DeployGroupOutcome
                 */
                DeployGroupOutcome DeployGroup(const Model::DeployGroupRequest &request);
                void DeployGroupAsync(const Model::DeployGroupRequest& request, const DeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployGroupOutcomeCallable DeployGroupCallable(const Model::DeployGroupRequest& request);

                /**
                 *部署Serverless应用
                 * @param req DeployServerlessGroupRequest
                 * @return DeployServerlessGroupOutcome
                 */
                DeployServerlessGroupOutcome DeployServerlessGroup(const Model::DeployServerlessGroupRequest &request);
                void DeployServerlessGroupAsync(const Model::DeployServerlessGroupRequest& request, const DeployServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployServerlessGroupOutcomeCallable DeployServerlessGroupCallable(const Model::DeployServerlessGroupRequest& request);

                /**
                 *查询API详情
                 * @param req DescribeApiDetailRequest
                 * @return DescribeApiDetailOutcome
                 */
                DescribeApiDetailOutcome DescribeApiDetail(const Model::DescribeApiDetailRequest &request);
                void DescribeApiDetailAsync(const Model::DescribeApiDetailRequest& request, const DescribeApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiDetailOutcomeCallable DescribeApiDetailCallable(const Model::DescribeApiDetailRequest& request);

                /**
                 *查询API 版本
                 * @param req DescribeApiVersionsRequest
                 * @return DescribeApiVersionsOutcome
                 */
                DescribeApiVersionsOutcome DescribeApiVersions(const Model::DescribeApiVersionsRequest &request);
                void DescribeApiVersionsAsync(const Model::DescribeApiVersionsRequest& request, const DescribeApiVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiVersionsOutcomeCallable DescribeApiVersionsCallable(const Model::DescribeApiVersionsRequest& request);

                /**
                 *获取应用详情
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *获取应用列表其它字段，如实例数量信息等
                 * @param req DescribeApplicationAttributeRequest
                 * @return DescribeApplicationAttributeOutcome
                 */
                DescribeApplicationAttributeOutcome DescribeApplicationAttribute(const Model::DescribeApplicationAttributeRequest &request);
                void DescribeApplicationAttributeAsync(const Model::DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationAttributeOutcomeCallable DescribeApplicationAttributeCallable(const Model::DescribeApplicationAttributeRequest& request);

                /**
                 *获取应用列表
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *TSF基本资源信息概览接口
                 * @param req DescribeBasicResourceUsageRequest
                 * @return DescribeBasicResourceUsageOutcome
                 */
                DescribeBasicResourceUsageOutcome DescribeBasicResourceUsage(const Model::DescribeBasicResourceUsageRequest &request);
                void DescribeBasicResourceUsageAsync(const Model::DescribeBasicResourceUsageRequest& request, const DescribeBasicResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicResourceUsageOutcomeCallable DescribeBasicResourceUsageCallable(const Model::DescribeBasicResourceUsageRequest& request);

                /**
                 *查询集群实例
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *查询配置
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *查询配置发布历史
                 * @param req DescribeConfigReleaseLogsRequest
                 * @return DescribeConfigReleaseLogsOutcome
                 */
                DescribeConfigReleaseLogsOutcome DescribeConfigReleaseLogs(const Model::DescribeConfigReleaseLogsRequest &request);
                void DescribeConfigReleaseLogsAsync(const Model::DescribeConfigReleaseLogsRequest& request, const DescribeConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigReleaseLogsOutcomeCallable DescribeConfigReleaseLogsCallable(const Model::DescribeConfigReleaseLogsRequest& request);

                /**
                 *查询配置发布信息
                 * @param req DescribeConfigReleasesRequest
                 * @return DescribeConfigReleasesOutcome
                 */
                DescribeConfigReleasesOutcome DescribeConfigReleases(const Model::DescribeConfigReleasesRequest &request);
                void DescribeConfigReleasesAsync(const Model::DescribeConfigReleasesRequest& request, const DescribeConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigReleasesOutcomeCallable DescribeConfigReleasesCallable(const Model::DescribeConfigReleasesRequest& request);

                /**
                 *查询配置汇总列表
                 * @param req DescribeConfigSummaryRequest
                 * @return DescribeConfigSummaryOutcome
                 */
                DescribeConfigSummaryOutcome DescribeConfigSummary(const Model::DescribeConfigSummaryRequest &request);
                void DescribeConfigSummaryAsync(const Model::DescribeConfigSummaryRequest& request, const DescribeConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigSummaryOutcomeCallable DescribeConfigSummaryCallable(const Model::DescribeConfigSummaryRequest& request);

                /**
                 *查询配置项列表
                 * @param req DescribeConfigsRequest
                 * @return DescribeConfigsOutcome
                 */
                DescribeConfigsOutcome DescribeConfigs(const Model::DescribeConfigsRequest &request);
                void DescribeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigsOutcomeCallable DescribeConfigsCallable(const Model::DescribeConfigsRequest& request);

                /**
                 * 容器部署组详情
                 * @param req DescribeContainerGroupDetailRequest
                 * @return DescribeContainerGroupDetailOutcome
                 */
                DescribeContainerGroupDetailOutcome DescribeContainerGroupDetail(const Model::DescribeContainerGroupDetailRequest &request);
                void DescribeContainerGroupDetailAsync(const Model::DescribeContainerGroupDetailRequest& request, const DescribeContainerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupDetailOutcomeCallable DescribeContainerGroupDetailCallable(const Model::DescribeContainerGroupDetailRequest& request);

                /**
                 *容器部署组列表
                 * @param req DescribeContainerGroupsRequest
                 * @return DescribeContainerGroupsOutcome
                 */
                DescribeContainerGroupsOutcome DescribeContainerGroups(const Model::DescribeContainerGroupsRequest &request);
                void DescribeContainerGroupsAsync(const Model::DescribeContainerGroupsRequest& request, const DescribeContainerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContainerGroupsOutcomeCallable DescribeContainerGroupsCallable(const Model::DescribeContainerGroupsRequest& request);

                /**
                 *TSF上传的程序包存放在腾讯云对象存储（COS）中，通过该API可以获取从COS下载程序包需要的信息，包括包所在的桶、存储路径、鉴权信息等，之后使用COS API（或SDK）进行下载。
COS相关文档请查阅：https://cloud.tencent.com/document/product/436
                 * @param req DescribeDownloadInfoRequest
                 * @return DescribeDownloadInfoOutcome
                 */
                DescribeDownloadInfoOutcome DescribeDownloadInfo(const Model::DescribeDownloadInfoRequest &request);
                void DescribeDownloadInfoAsync(const Model::DescribeDownloadInfoRequest& request, const DescribeDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDownloadInfoOutcomeCallable DescribeDownloadInfoCallable(const Model::DescribeDownloadInfoRequest& request);

                /**
                 *查询工作流最新一个批次的状态信息
                 * @param req DescribeFlowLastBatchStateRequest
                 * @return DescribeFlowLastBatchStateOutcome
                 */
                DescribeFlowLastBatchStateOutcome DescribeFlowLastBatchState(const Model::DescribeFlowLastBatchStateRequest &request);
                void DescribeFlowLastBatchStateAsync(const Model::DescribeFlowLastBatchStateRequest& request, const DescribeFlowLastBatchStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLastBatchStateOutcomeCallable DescribeFlowLastBatchStateCallable(const Model::DescribeFlowLastBatchStateRequest& request);

                /**
                 *查询虚拟机部署组详情
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *查询虚拟机部署组云主机列表
                 * @param req DescribeGroupInstancesRequest
                 * @return DescribeGroupInstancesOutcome
                 */
                DescribeGroupInstancesOutcome DescribeGroupInstances(const Model::DescribeGroupInstancesRequest &request);
                void DescribeGroupInstancesAsync(const Model::DescribeGroupInstancesRequest& request, const DescribeGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupInstancesOutcomeCallable DescribeGroupInstancesCallable(const Model::DescribeGroupInstancesRequest& request);

                /**
                 *获取虚拟机部署组列表
                 * @param req DescribeGroupsRequest
                 * @return DescribeGroupsOutcome
                 */
                DescribeGroupsOutcome DescribeGroups(const Model::DescribeGroupsRequest &request);
                void DescribeGroupsAsync(const Model::DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupsOutcomeCallable DescribeGroupsCallable(const Model::DescribeGroupsRequest& request);

                /**
                 *镜像仓库列表 
                 * @param req DescribeImageRepositoryRequest
                 * @return DescribeImageRepositoryOutcome
                 */
                DescribeImageRepositoryOutcome DescribeImageRepository(const Model::DescribeImageRepositoryRequest &request);
                void DescribeImageRepositoryAsync(const Model::DescribeImageRepositoryRequest& request, const DescribeImageRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRepositoryOutcomeCallable DescribeImageRepositoryCallable(const Model::DescribeImageRepositoryRequest& request);

                /**
                 *镜像版本列表
                 * @param req DescribeImageTagsRequest
                 * @return DescribeImageTagsOutcome
                 */
                DescribeImageTagsOutcome DescribeImageTags(const Model::DescribeImageTagsRequest &request);
                void DescribeImageTagsAsync(const Model::DescribeImageTagsRequest& request, const DescribeImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTagsOutcomeCallable DescribeImageTagsCallable(const Model::DescribeImageTagsRequest& request);

                /**
                 *查询泳道规则列表
                 * @param req DescribeLaneRulesRequest
                 * @return DescribeLaneRulesOutcome
                 */
                DescribeLaneRulesOutcome DescribeLaneRules(const Model::DescribeLaneRulesRequest &request);
                void DescribeLaneRulesAsync(const Model::DescribeLaneRulesRequest& request, const DescribeLaneRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaneRulesOutcomeCallable DescribeLaneRulesCallable(const Model::DescribeLaneRulesRequest& request);

                /**
                 *查询泳道列表
                 * @param req DescribeLanesRequest
                 * @return DescribeLanesOutcome
                 */
                DescribeLanesOutcome DescribeLanes(const Model::DescribeLanesRequest &request);
                void DescribeLanesAsync(const Model::DescribeLanesRequest& request, const DescribeLanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLanesOutcomeCallable DescribeLanesCallable(const Model::DescribeLanesRequest& request);

                /**
                 *查询微服务详情
                 * @param req DescribeMicroserviceRequest
                 * @return DescribeMicroserviceOutcome
                 */
                DescribeMicroserviceOutcome DescribeMicroservice(const Model::DescribeMicroserviceRequest &request);
                void DescribeMicroserviceAsync(const Model::DescribeMicroserviceRequest& request, const DescribeMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMicroserviceOutcomeCallable DescribeMicroserviceCallable(const Model::DescribeMicroserviceRequest& request);

                /**
                 *获取微服务列表
                 * @param req DescribeMicroservicesRequest
                 * @return DescribeMicroservicesOutcome
                 */
                DescribeMicroservicesOutcome DescribeMicroservices(const Model::DescribeMicroservicesRequest &request);
                void DescribeMicroservicesAsync(const Model::DescribeMicroservicesRequest& request, const DescribeMicroservicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMicroservicesOutcomeCallable DescribeMicroservicesCallable(const Model::DescribeMicroservicesRequest& request);

                /**
                 *查询服务API列表
                 * @param req DescribeMsApiListRequest
                 * @return DescribeMsApiListOutcome
                 */
                DescribeMsApiListOutcome DescribeMsApiList(const Model::DescribeMsApiListRequest &request);
                void DescribeMsApiListAsync(const Model::DescribeMsApiListRequest& request, const DescribeMsApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMsApiListOutcomeCallable DescribeMsApiListCallable(const Model::DescribeMsApiListRequest& request);

                /**
                 *无
                 * @param req DescribePkgsRequest
                 * @return DescribePkgsOutcome
                 */
                DescribePkgsOutcome DescribePkgs(const Model::DescribePkgsRequest &request);
                void DescribePkgsAsync(const Model::DescribePkgsRequest& request, const DescribePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePkgsOutcomeCallable DescribePkgsCallable(const Model::DescribePkgsRequest& request);

                /**
                 *获取部署组实例列表
                 * @param req DescribePodInstancesRequest
                 * @return DescribePodInstancesOutcome
                 */
                DescribePodInstancesOutcome DescribePodInstances(const Model::DescribePodInstancesRequest &request);
                void DescribePodInstancesAsync(const Model::DescribePodInstancesRequest& request, const DescribePodInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodInstancesOutcomeCallable DescribePodInstancesCallable(const Model::DescribePodInstancesRequest& request);

                /**
                 *查询公共配置（单条）
                 * @param req DescribePublicConfigRequest
                 * @return DescribePublicConfigOutcome
                 */
                DescribePublicConfigOutcome DescribePublicConfig(const Model::DescribePublicConfigRequest &request);
                void DescribePublicConfigAsync(const Model::DescribePublicConfigRequest& request, const DescribePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigOutcomeCallable DescribePublicConfigCallable(const Model::DescribePublicConfigRequest& request);

                /**
                 *查询公共配置发布历史
                 * @param req DescribePublicConfigReleaseLogsRequest
                 * @return DescribePublicConfigReleaseLogsOutcome
                 */
                DescribePublicConfigReleaseLogsOutcome DescribePublicConfigReleaseLogs(const Model::DescribePublicConfigReleaseLogsRequest &request);
                void DescribePublicConfigReleaseLogsAsync(const Model::DescribePublicConfigReleaseLogsRequest& request, const DescribePublicConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigReleaseLogsOutcomeCallable DescribePublicConfigReleaseLogsCallable(const Model::DescribePublicConfigReleaseLogsRequest& request);

                /**
                 *查询公共配置发布信息
                 * @param req DescribePublicConfigReleasesRequest
                 * @return DescribePublicConfigReleasesOutcome
                 */
                DescribePublicConfigReleasesOutcome DescribePublicConfigReleases(const Model::DescribePublicConfigReleasesRequest &request);
                void DescribePublicConfigReleasesAsync(const Model::DescribePublicConfigReleasesRequest& request, const DescribePublicConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigReleasesOutcomeCallable DescribePublicConfigReleasesCallable(const Model::DescribePublicConfigReleasesRequest& request);

                /**
                 *查询公共配置汇总列表
                 * @param req DescribePublicConfigSummaryRequest
                 * @return DescribePublicConfigSummaryOutcome
                 */
                DescribePublicConfigSummaryOutcome DescribePublicConfigSummary(const Model::DescribePublicConfigSummaryRequest &request);
                void DescribePublicConfigSummaryAsync(const Model::DescribePublicConfigSummaryRequest& request, const DescribePublicConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigSummaryOutcomeCallable DescribePublicConfigSummaryCallable(const Model::DescribePublicConfigSummaryRequest& request);

                /**
                 *查询公共配置项列表
                 * @param req DescribePublicConfigsRequest
                 * @return DescribePublicConfigsOutcome
                 */
                DescribePublicConfigsOutcome DescribePublicConfigs(const Model::DescribePublicConfigsRequest &request);
                void DescribePublicConfigsAsync(const Model::DescribePublicConfigsRequest& request, const DescribePublicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicConfigsOutcomeCallable DescribePublicConfigsCallable(const Model::DescribePublicConfigsRequest& request);

                /**
                 *查询group发布的配置
                 * @param req DescribeReleasedConfigRequest
                 * @return DescribeReleasedConfigOutcome
                 */
                DescribeReleasedConfigOutcome DescribeReleasedConfig(const Model::DescribeReleasedConfigRequest &request);
                void DescribeReleasedConfigAsync(const Model::DescribeReleasedConfigRequest& request, const DescribeReleasedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReleasedConfigOutcomeCallable DescribeReleasedConfigCallable(const Model::DescribeReleasedConfigRequest& request);

                /**
                 *查询仓库列表
                 * @param req DescribeRepositoriesRequest
                 * @return DescribeRepositoriesOutcome
                 */
                DescribeRepositoriesOutcome DescribeRepositories(const Model::DescribeRepositoriesRequest &request);
                void DescribeRepositoriesAsync(const Model::DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoriesOutcomeCallable DescribeRepositoriesCallable(const Model::DescribeRepositoriesRequest& request);

                /**
                 *查询仓库信息
                 * @param req DescribeRepositoryRequest
                 * @return DescribeRepositoryOutcome
                 */
                DescribeRepositoryOutcome DescribeRepository(const Model::DescribeRepositoryRequest &request);
                void DescribeRepositoryAsync(const Model::DescribeRepositoryRequest& request, const DescribeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryOutcomeCallable DescribeRepositoryCallable(const Model::DescribeRepositoryRequest& request);

                /**
                 *查询Serverless部署组明细
                 * @param req DescribeServerlessGroupRequest
                 * @return DescribeServerlessGroupOutcome
                 */
                DescribeServerlessGroupOutcome DescribeServerlessGroup(const Model::DescribeServerlessGroupRequest &request);
                void DescribeServerlessGroupAsync(const Model::DescribeServerlessGroupRequest& request, const DescribeServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessGroupOutcomeCallable DescribeServerlessGroupCallable(const Model::DescribeServerlessGroupRequest& request);

                /**
                 *查询Serverless部署组列表
                 * @param req DescribeServerlessGroupsRequest
                 * @return DescribeServerlessGroupsOutcome
                 */
                DescribeServerlessGroupsOutcome DescribeServerlessGroups(const Model::DescribeServerlessGroupsRequest &request);
                void DescribeServerlessGroupsAsync(const Model::DescribeServerlessGroupsRequest& request, const DescribeServerlessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServerlessGroupsOutcomeCallable DescribeServerlessGroupsCallable(const Model::DescribeServerlessGroupsRequest& request);

                /**
                 *查询简单应用列表
                 * @param req DescribeSimpleApplicationsRequest
                 * @return DescribeSimpleApplicationsOutcome
                 */
                DescribeSimpleApplicationsOutcome DescribeSimpleApplications(const Model::DescribeSimpleApplicationsRequest &request);
                void DescribeSimpleApplicationsAsync(const Model::DescribeSimpleApplicationsRequest& request, const DescribeSimpleApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleApplicationsOutcomeCallable DescribeSimpleApplicationsCallable(const Model::DescribeSimpleApplicationsRequest& request);

                /**
                 *查询简单集群列表
                 * @param req DescribeSimpleClustersRequest
                 * @return DescribeSimpleClustersOutcome
                 */
                DescribeSimpleClustersOutcome DescribeSimpleClusters(const Model::DescribeSimpleClustersRequest &request);
                void DescribeSimpleClustersAsync(const Model::DescribeSimpleClustersRequest& request, const DescribeSimpleClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleClustersOutcomeCallable DescribeSimpleClustersCallable(const Model::DescribeSimpleClustersRequest& request);

                /**
                 *查询简单部署组列表
                 * @param req DescribeSimpleGroupsRequest
                 * @return DescribeSimpleGroupsOutcome
                 */
                DescribeSimpleGroupsOutcome DescribeSimpleGroups(const Model::DescribeSimpleGroupsRequest &request);
                void DescribeSimpleGroupsAsync(const Model::DescribeSimpleGroupsRequest& request, const DescribeSimpleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleGroupsOutcomeCallable DescribeSimpleGroupsCallable(const Model::DescribeSimpleGroupsRequest& request);

                /**
                 *查询简单命名空间列表 
                 * @param req DescribeSimpleNamespacesRequest
                 * @return DescribeSimpleNamespacesOutcome
                 */
                DescribeSimpleNamespacesOutcome DescribeSimpleNamespaces(const Model::DescribeSimpleNamespacesRequest &request);
                void DescribeSimpleNamespacesAsync(const Model::DescribeSimpleNamespacesRequest& request, const DescribeSimpleNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleNamespacesOutcomeCallable DescribeSimpleNamespacesCallable(const Model::DescribeSimpleNamespacesRequest& request);

                /**
                 *查询任务最近一次执行状态
                 * @param req DescribeTaskLastStatusRequest
                 * @return DescribeTaskLastStatusOutcome
                 */
                DescribeTaskLastStatusOutcome DescribeTaskLastStatus(const Model::DescribeTaskLastStatusRequest &request);
                void DescribeTaskLastStatusAsync(const Model::DescribeTaskLastStatusRequest& request, const DescribeTaskLastStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLastStatusOutcomeCallable DescribeTaskLastStatusCallable(const Model::DescribeTaskLastStatusRequest& request);

                /**
                 *TSF会将软件包上传到腾讯云对象存储（COS）。调用此接口获取上传信息，如目标地域，桶，包Id，存储路径，鉴权信息等，之后请使用COS API（或SDK）进行上传。
COS相关文档请查阅：https://cloud.tencent.com/document/product/436
                 * @param req DescribeUploadInfoRequest
                 * @return DescribeUploadInfoOutcome
                 */
                DescribeUploadInfoOutcome DescribeUploadInfo(const Model::DescribeUploadInfoRequest &request);
                void DescribeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadInfoOutcomeCallable DescribeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request);

                /**
                 *停用任务
                 * @param req DisableTaskRequest
                 * @return DisableTaskOutcome
                 */
                DisableTaskOutcome DisableTask(const Model::DisableTaskRequest &request);
                void DisableTaskAsync(const Model::DisableTaskRequest& request, const DisableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTaskOutcomeCallable DisableTaskCallable(const Model::DisableTaskRequest& request);

                /**
                 *停用工作流
                 * @param req DisableTaskFlowRequest
                 * @return DisableTaskFlowOutcome
                 */
                DisableTaskFlowOutcome DisableTaskFlow(const Model::DisableTaskFlowRequest &request);
                void DisableTaskFlowAsync(const Model::DisableTaskFlowRequest& request, const DisableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTaskFlowOutcomeCallable DisableTaskFlowCallable(const Model::DisableTaskFlowRequest& request);

                /**
                 *启用任务
                 * @param req EnableTaskRequest
                 * @return EnableTaskOutcome
                 */
                EnableTaskOutcome EnableTask(const Model::EnableTaskRequest &request);
                void EnableTaskAsync(const Model::EnableTaskRequest& request, const EnableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTaskOutcomeCallable EnableTaskCallable(const Model::EnableTaskRequest& request);

                /**
                 *启用工作流
                 * @param req EnableTaskFlowRequest
                 * @return EnableTaskFlowOutcome
                 */
                EnableTaskFlowOutcome EnableTaskFlow(const Model::EnableTaskFlowRequest &request);
                void EnableTaskFlowAsync(const Model::EnableTaskFlowRequest& request, const EnableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTaskFlowOutcomeCallable EnableTaskFlowCallable(const Model::EnableTaskFlowRequest& request);

                /**
                 *执行一次任务。
                 * @param req ExecuteTaskRequest
                 * @return ExecuteTaskOutcome
                 */
                ExecuteTaskOutcome ExecuteTask(const Model::ExecuteTaskRequest &request);
                void ExecuteTaskAsync(const Model::ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskOutcomeCallable ExecuteTaskCallable(const Model::ExecuteTaskRequest& request);

                /**
                 *执行一次工作流
                 * @param req ExecuteTaskFlowRequest
                 * @return ExecuteTaskFlowOutcome
                 */
                ExecuteTaskFlowOutcome ExecuteTaskFlow(const Model::ExecuteTaskFlowRequest &request);
                void ExecuteTaskFlowAsync(const Model::ExecuteTaskFlowRequest& request, const ExecuteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskFlowOutcomeCallable ExecuteTaskFlowCallable(const Model::ExecuteTaskFlowRequest& request);

                /**
                 *虚拟机部署组添加实例
                 * @param req ExpandGroupRequest
                 * @return ExpandGroupOutcome
                 */
                ExpandGroupOutcome ExpandGroup(const Model::ExpandGroupRequest &request);
                void ExpandGroupAsync(const Model::ExpandGroupRequest& request, const ExpandGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandGroupOutcomeCallable ExpandGroupCallable(const Model::ExpandGroupRequest& request);

                /**
                 *修改容器部署组
                 * @param req ModifyContainerGroupRequest
                 * @return ModifyContainerGroupOutcome
                 */
                ModifyContainerGroupOutcome ModifyContainerGroup(const Model::ModifyContainerGroupRequest &request);
                void ModifyContainerGroupAsync(const Model::ModifyContainerGroupRequest& request, const ModifyContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContainerGroupOutcomeCallable ModifyContainerGroupCallable(const Model::ModifyContainerGroupRequest& request);

                /**
                 *修改容器部署组实例数
                 * @param req ModifyContainerReplicasRequest
                 * @return ModifyContainerReplicasOutcome
                 */
                ModifyContainerReplicasOutcome ModifyContainerReplicas(const Model::ModifyContainerReplicasRequest &request);
                void ModifyContainerReplicasAsync(const Model::ModifyContainerReplicasRequest& request, const ModifyContainerReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyContainerReplicasOutcomeCallable ModifyContainerReplicasCallable(const Model::ModifyContainerReplicasRequest& request);

                /**
                 *更新泳道信息
                 * @param req ModifyLaneRequest
                 * @return ModifyLaneOutcome
                 */
                ModifyLaneOutcome ModifyLane(const Model::ModifyLaneRequest &request);
                void ModifyLaneAsync(const Model::ModifyLaneRequest& request, const ModifyLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaneOutcomeCallable ModifyLaneCallable(const Model::ModifyLaneRequest& request);

                /**
                 *更新泳道规则
                 * @param req ModifyLaneRuleRequest
                 * @return ModifyLaneRuleOutcome
                 */
                ModifyLaneRuleOutcome ModifyLaneRule(const Model::ModifyLaneRuleRequest &request);
                void ModifyLaneRuleAsync(const Model::ModifyLaneRuleRequest& request, const ModifyLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaneRuleOutcomeCallable ModifyLaneRuleCallable(const Model::ModifyLaneRuleRequest& request);

                /**
                 *修改微服务详情
                 * @param req ModifyMicroserviceRequest
                 * @return ModifyMicroserviceOutcome
                 */
                ModifyMicroserviceOutcome ModifyMicroservice(const Model::ModifyMicroserviceRequest &request);
                void ModifyMicroserviceAsync(const Model::ModifyMicroserviceRequest& request, const ModifyMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMicroserviceOutcomeCallable ModifyMicroserviceCallable(const Model::ModifyMicroserviceRequest& request);

                /**
                 *调用该接口和COS的上传接口后，需要调用此接口更新TSF中保存的程序包状态。
调用此接口完成后，才标志上传包流程结束。
                 * @param req ModifyUploadInfoRequest
                 * @return ModifyUploadInfoOutcome
                 */
                ModifyUploadInfoOutcome ModifyUploadInfo(const Model::ModifyUploadInfoRequest &request);
                void ModifyUploadInfoAsync(const Model::ModifyUploadInfoRequest& request, const ModifyUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUploadInfoOutcomeCallable ModifyUploadInfoCallable(const Model::ModifyUploadInfoRequest& request);

                /**
                 *重新执行任务
                 * @param req RedoTaskRequest
                 * @return RedoTaskOutcome
                 */
                RedoTaskOutcome RedoTask(const Model::RedoTaskRequest &request);
                void RedoTaskAsync(const Model::RedoTaskRequest& request, const RedoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskOutcomeCallable RedoTaskCallable(const Model::RedoTaskRequest& request);

                /**
                 *重新执行任务批次
                 * @param req RedoTaskBatchRequest
                 * @return RedoTaskBatchOutcome
                 */
                RedoTaskBatchOutcome RedoTaskBatch(const Model::RedoTaskBatchRequest &request);
                void RedoTaskBatchAsync(const Model::RedoTaskBatchRequest& request, const RedoTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskBatchOutcomeCallable RedoTaskBatchCallable(const Model::RedoTaskBatchRequest& request);

                /**
                 *重新执行工作流批次
                 * @param req RedoTaskFlowBatchRequest
                 * @return RedoTaskFlowBatchOutcome
                 */
                RedoTaskFlowBatchOutcome RedoTaskFlowBatch(const Model::RedoTaskFlowBatchRequest &request);
                void RedoTaskFlowBatchAsync(const Model::RedoTaskFlowBatchRequest& request, const RedoTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RedoTaskFlowBatchOutcomeCallable RedoTaskFlowBatchCallable(const Model::RedoTaskFlowBatchRequest& request);

                /**
                 *发布配置
                 * @param req ReleaseConfigRequest
                 * @return ReleaseConfigOutcome
                 */
                ReleaseConfigOutcome ReleaseConfig(const Model::ReleaseConfigRequest &request);
                void ReleaseConfigAsync(const Model::ReleaseConfigRequest& request, const ReleaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseConfigOutcomeCallable ReleaseConfigCallable(const Model::ReleaseConfigRequest& request);

                /**
                 *发布公共配置
                 * @param req ReleasePublicConfigRequest
                 * @return ReleasePublicConfigOutcome
                 */
                ReleasePublicConfigOutcome ReleasePublicConfig(const Model::ReleasePublicConfigRequest &request);
                void ReleasePublicConfigAsync(const Model::ReleasePublicConfigRequest& request, const ReleasePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleasePublicConfigOutcomeCallable ReleasePublicConfigCallable(const Model::ReleasePublicConfigRequest& request);

                /**
                 *从 TSF 集群中批量移除云主机节点
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

                /**
                 *撤回已发布的配置
                 * @param req RevocationConfigRequest
                 * @return RevocationConfigOutcome
                 */
                RevocationConfigOutcome RevocationConfig(const Model::RevocationConfigRequest &request);
                void RevocationConfigAsync(const Model::RevocationConfigRequest& request, const RevocationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevocationConfigOutcomeCallable RevocationConfigCallable(const Model::RevocationConfigRequest& request);

                /**
                 *撤回已发布的公共配置
                 * @param req RevocationPublicConfigRequest
                 * @return RevocationPublicConfigOutcome
                 */
                RevocationPublicConfigOutcome RevocationPublicConfig(const Model::RevocationPublicConfigRequest &request);
                void RevocationPublicConfigAsync(const Model::RevocationPublicConfigRequest& request, const RevocationPublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevocationPublicConfigOutcomeCallable RevocationPublicConfigCallable(const Model::RevocationPublicConfigRequest& request);

                /**
                 *回滚配置
                 * @param req RollbackConfigRequest
                 * @return RollbackConfigOutcome
                 */
                RollbackConfigOutcome RollbackConfig(const Model::RollbackConfigRequest &request);
                void RollbackConfigAsync(const Model::RollbackConfigRequest& request, const RollbackConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackConfigOutcomeCallable RollbackConfigCallable(const Model::RollbackConfigRequest& request);

                /**
                 *下线部署组所有机器实例
                 * @param req ShrinkGroupRequest
                 * @return ShrinkGroupOutcome
                 */
                ShrinkGroupOutcome ShrinkGroup(const Model::ShrinkGroupRequest &request);
                void ShrinkGroupAsync(const Model::ShrinkGroupRequest& request, const ShrinkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShrinkGroupOutcomeCallable ShrinkGroupCallable(const Model::ShrinkGroupRequest& request);

                /**
                 *虚拟机部署组下线实例
                 * @param req ShrinkInstancesRequest
                 * @return ShrinkInstancesOutcome
                 */
                ShrinkInstancesOutcome ShrinkInstances(const Model::ShrinkInstancesRequest &request);
                void ShrinkInstancesAsync(const Model::ShrinkInstancesRequest& request, const ShrinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShrinkInstancesOutcomeCallable ShrinkInstancesCallable(const Model::ShrinkInstancesRequest& request);

                /**
                 *启动容器部署组
                 * @param req StartContainerGroupRequest
                 * @return StartContainerGroupOutcome
                 */
                StartContainerGroupOutcome StartContainerGroup(const Model::StartContainerGroupRequest &request);
                void StartContainerGroupAsync(const Model::StartContainerGroupRequest& request, const StartContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartContainerGroupOutcomeCallable StartContainerGroupCallable(const Model::StartContainerGroupRequest& request);

                /**
                 *启动分组
                 * @param req StartGroupRequest
                 * @return StartGroupOutcome
                 */
                StartGroupOutcome StartGroup(const Model::StartGroupRequest &request);
                void StartGroupAsync(const Model::StartGroupRequest& request, const StartGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGroupOutcomeCallable StartGroupCallable(const Model::StartGroupRequest& request);

                /**
                 *停止容器部署组
                 * @param req StopContainerGroupRequest
                 * @return StopContainerGroupOutcome
                 */
                StopContainerGroupOutcome StopContainerGroup(const Model::StopContainerGroupRequest &request);
                void StopContainerGroupAsync(const Model::StopContainerGroupRequest& request, const StopContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopContainerGroupOutcomeCallable StopContainerGroupCallable(const Model::StopContainerGroupRequest& request);

                /**
                 *停止虚拟机部署组
                 * @param req StopGroupRequest
                 * @return StopGroupOutcome
                 */
                StopGroupOutcome StopGroup(const Model::StopGroupRequest &request);
                void StopGroupAsync(const Model::StopGroupRequest& request, const StopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGroupOutcomeCallable StopGroupCallable(const Model::StopGroupRequest& request);

                /**
                 *停止执行中的任务批次， 非运行中的任务不可调用。
                 * @param req StopTaskBatchRequest
                 * @return StopTaskBatchOutcome
                 */
                StopTaskBatchOutcome StopTaskBatch(const Model::StopTaskBatchRequest &request);
                void StopTaskBatchAsync(const Model::StopTaskBatchRequest& request, const StopTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTaskBatchOutcomeCallable StopTaskBatchCallable(const Model::StopTaskBatchRequest& request);

                /**
                 *停止正在某个节点上执行的任务
                 * @param req StopTaskExecuteRequest
                 * @return StopTaskExecuteOutcome
                 */
                StopTaskExecuteOutcome StopTaskExecute(const Model::StopTaskExecuteRequest &request);
                void StopTaskExecuteAsync(const Model::StopTaskExecuteRequest& request, const StopTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopTaskExecuteOutcomeCallable StopTaskExecuteCallable(const Model::StopTaskExecuteRequest& request);

                /**
                 *停止一个工作流批次
                 * @param req TerminateTaskFlowBatchRequest
                 * @return TerminateTaskFlowBatchOutcome
                 */
                TerminateTaskFlowBatchOutcome TerminateTaskFlowBatch(const Model::TerminateTaskFlowBatchRequest &request);
                void TerminateTaskFlowBatchAsync(const Model::TerminateTaskFlowBatchRequest& request, const TerminateTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTaskFlowBatchOutcomeCallable TerminateTaskFlowBatchCallable(const Model::TerminateTaskFlowBatchRequest& request);

                /**
                 *更新仓库信息
                 * @param req UpdateRepositoryRequest
                 * @return UpdateRepositoryOutcome
                 */
                UpdateRepositoryOutcome UpdateRepository(const Model::UpdateRepositoryRequest &request);
                void UpdateRepositoryAsync(const Model::UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRepositoryOutcomeCallable UpdateRepositoryCallable(const Model::UpdateRepositoryRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_

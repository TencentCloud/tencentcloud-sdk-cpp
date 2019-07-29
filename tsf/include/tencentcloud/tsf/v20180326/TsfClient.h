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
#include <tencentcloud/tsf/v20180326/model/AddInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/AddInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateClusterResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateContainGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/CreateNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeleteNamespaceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeletePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DeployGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationAttributeResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupDetailResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeContainerGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeDownloadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupInstancesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeMicroservicesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribePkgsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleApplicationsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleClustersResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleGroupsResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeSimpleNamespacesResponse.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/DescribeUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ExpandGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerGroupResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyContainerReplicasResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyMicroserviceResponse.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoRequest.h>
#include <tencentcloud/tsf/v20180326/model/ModifyUploadInfoResponse.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesRequest.h>
#include <tencentcloud/tsf/v20180326/model/RemoveInstancesResponse.h>
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

                typedef Outcome<Error, Model::AddInstancesResponse> AddInstancesOutcome;
                typedef std::future<AddInstancesOutcome> AddInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::AddInstancesRequest&, AddInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Error, Model::CreateContainGroupResponse> CreateContainGroupOutcome;
                typedef std::future<CreateContainGroupOutcome> CreateContainGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateContainGroupRequest&, CreateContainGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateContainGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateMicroserviceResponse> CreateMicroserviceOutcome;
                typedef std::future<CreateMicroserviceOutcome> CreateMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateMicroserviceRequest&, CreateMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Error, Model::DeleteContainerGroupResponse> DeleteContainerGroupOutcome;
                typedef std::future<DeleteContainerGroupOutcome> DeleteContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteContainerGroupRequest&, DeleteContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteImageTagsResponse> DeleteImageTagsOutcome;
                typedef std::future<DeleteImageTagsOutcome> DeleteImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteImageTagsRequest&, DeleteImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageTagsAsyncHandler;
                typedef Outcome<Error, Model::DeleteMicroserviceResponse> DeleteMicroserviceOutcome;
                typedef std::future<DeleteMicroserviceOutcome> DeleteMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteMicroserviceRequest&, DeleteMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeletePkgsResponse> DeletePkgsOutcome;
                typedef std::future<DeletePkgsOutcome> DeletePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeletePkgsRequest&, DeletePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePkgsAsyncHandler;
                typedef Outcome<Error, Model::DeployContainerGroupResponse> DeployContainerGroupOutcome;
                typedef std::future<DeployContainerGroupOutcome> DeployContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployContainerGroupRequest&, DeployContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::DeployGroupResponse> DeployGroupOutcome;
                typedef std::future<DeployGroupOutcome> DeployGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DeployGroupRequest&, DeployGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationAttributeResponse> DescribeApplicationAttributeOutcome;
                typedef std::future<DescribeApplicationAttributeOutcome> DescribeApplicationAttributeOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationAttributeRequest&, DescribeApplicationAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAttributeAsyncHandler;
                typedef Outcome<Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeContainerGroupDetailResponse> DescribeContainerGroupDetailOutcome;
                typedef std::future<DescribeContainerGroupDetailOutcome> DescribeContainerGroupDetailOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupDetailRequest&, DescribeContainerGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeContainerGroupsResponse> DescribeContainerGroupsOutcome;
                typedef std::future<DescribeContainerGroupsOutcome> DescribeContainerGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeContainerGroupsRequest&, DescribeContainerGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDownloadInfoResponse> DescribeDownloadInfoOutcome;
                typedef std::future<DescribeDownloadInfoOutcome> DescribeDownloadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeDownloadInfoRequest&, DescribeDownloadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupInstancesResponse> DescribeGroupInstancesOutcome;
                typedef std::future<DescribeGroupInstancesOutcome> DescribeGroupInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupInstancesRequest&, DescribeGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeGroupsResponse> DescribeGroupsOutcome;
                typedef std::future<DescribeGroupsOutcome> DescribeGroupsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeGroupsRequest&, DescribeGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageTagsResponse> DescribeImageTagsOutcome;
                typedef std::future<DescribeImageTagsOutcome> DescribeImageTagsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeImageTagsRequest&, DescribeImageTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageTagsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMicroserviceResponse> DescribeMicroserviceOutcome;
                typedef std::future<DescribeMicroserviceOutcome> DescribeMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroserviceRequest&, DescribeMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeMicroservicesResponse> DescribeMicroservicesOutcome;
                typedef std::future<DescribeMicroservicesOutcome> DescribeMicroservicesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeMicroservicesRequest&, DescribeMicroservicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMicroservicesAsyncHandler;
                typedef Outcome<Error, Model::DescribePkgsResponse> DescribePkgsOutcome;
                typedef std::future<DescribePkgsOutcome> DescribePkgsOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribePkgsRequest&, DescribePkgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePkgsAsyncHandler;
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
                typedef Outcome<Error, Model::DescribeUploadInfoResponse> DescribeUploadInfoOutcome;
                typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::DescribeUploadInfoRequest&, DescribeUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
                typedef Outcome<Error, Model::ExpandGroupResponse> ExpandGroupOutcome;
                typedef std::future<ExpandGroupOutcome> ExpandGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ExpandGroupRequest&, ExpandGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyContainerGroupResponse> ModifyContainerGroupOutcome;
                typedef std::future<ModifyContainerGroupOutcome> ModifyContainerGroupOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerGroupRequest&, ModifyContainerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyContainerReplicasResponse> ModifyContainerReplicasOutcome;
                typedef std::future<ModifyContainerReplicasOutcome> ModifyContainerReplicasOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyContainerReplicasRequest&, ModifyContainerReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerReplicasAsyncHandler;
                typedef Outcome<Error, Model::ModifyMicroserviceResponse> ModifyMicroserviceOutcome;
                typedef std::future<ModifyMicroserviceOutcome> ModifyMicroserviceOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyMicroserviceRequest&, ModifyMicroserviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMicroserviceAsyncHandler;
                typedef Outcome<Error, Model::ModifyUploadInfoResponse> ModifyUploadInfoOutcome;
                typedef std::future<ModifyUploadInfoOutcome> ModifyUploadInfoOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::ModifyUploadInfoRequest&, ModifyUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUploadInfoAsyncHandler;
                typedef Outcome<Error, Model::RemoveInstancesResponse> RemoveInstancesOutcome;
                typedef std::future<RemoveInstancesOutcome> RemoveInstancesOutcomeCallable;
                typedef std::function<void(const TsfClient*, const Model::RemoveInstancesRequest&, RemoveInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveInstancesAsyncHandler;
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



                /**
                 *添加云主机节点至TSF集群
                 * @param req AddInstancesRequest
                 * @return AddInstancesOutcome
                 */
                AddInstancesOutcome AddInstances(const Model::AddInstancesRequest &request);
                void AddInstancesAsync(const Model::AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddInstancesOutcomeCallable AddInstancesCallable(const Model::AddInstancesRequest& request);

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
                 *创建容器部署组
                 * @param req CreateContainGroupRequest
                 * @return CreateContainGroupOutcome
                 */
                CreateContainGroupOutcome CreateContainGroup(const Model::CreateContainGroupRequest &request);
                void CreateContainGroupAsync(const Model::CreateContainGroupRequest& request, const CreateContainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateContainGroupOutcomeCallable CreateContainGroupCallable(const Model::CreateContainGroupRequest& request);

                /**
                 *创建容器部署组
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

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
                 *删除应用
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

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
                 *查询集群实例
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

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
                 *镜像版本列表
                 * @param req DescribeImageTagsRequest
                 * @return DescribeImageTagsOutcome
                 */
                DescribeImageTagsOutcome DescribeImageTags(const Model::DescribeImageTagsRequest &request);
                void DescribeImageTagsAsync(const Model::DescribeImageTagsRequest& request, const DescribeImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageTagsOutcomeCallable DescribeImageTagsCallable(const Model::DescribeImageTagsRequest& request);

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
                 *无
                 * @param req DescribePkgsRequest
                 * @return DescribePkgsOutcome
                 */
                DescribePkgsOutcome DescribePkgs(const Model::DescribePkgsRequest &request);
                void DescribePkgsAsync(const Model::DescribePkgsRequest& request, const DescribePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePkgsOutcomeCallable DescribePkgsCallable(const Model::DescribePkgsRequest& request);

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
                 *TSF会将软件包上传到腾讯云对象存储（COS）。调用此接口获取上传信息，如目标地域，桶，包Id，存储路径，鉴权信息等，之后请使用COS API（或SDK）进行上传。
COS相关文档请查阅：https://cloud.tencent.com/document/product/436
                 * @param req DescribeUploadInfoRequest
                 * @return DescribeUploadInfoOutcome
                 */
                DescribeUploadInfoOutcome DescribeUploadInfo(const Model::DescribeUploadInfoRequest &request);
                void DescribeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadInfoOutcomeCallable DescribeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request);

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
                 *从 TSF 集群中批量移除云主机节点
                 * @param req RemoveInstancesRequest
                 * @return RemoveInstancesOutcome
                 */
                RemoveInstancesOutcome RemoveInstances(const Model::RemoveInstancesRequest &request);
                void RemoveInstancesAsync(const Model::RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveInstancesOutcomeCallable RemoveInstancesCallable(const Model::RemoveInstancesRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_TSFCLIENT_H_

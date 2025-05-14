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
#include <tencentcloud/thpc/v20230321/model/CreateClusterRequest.h>
#include <tencentcloud/thpc/v20230321/model/CreateClusterResponse.h>
#include <tencentcloud/thpc/v20230321/model/CreateWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/CreateWorkspacesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DeleteQueueRequest.h>
#include <tencentcloud/thpc/v20230321/model/DeleteQueueResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeAutoScalingConfigurationRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeAutoScalingConfigurationResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterActivitiesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterActivitiesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClustersRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeClustersResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInitNodeScriptsRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeInitNodeScriptsResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueuesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeQueuesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DescribeWorkspacesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DescribeWorkspacesResponse.h>
#include <tencentcloud/thpc/v20230321/model/DetachNodesRequest.h>
#include <tencentcloud/thpc/v20230321/model/DetachNodesResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyInitNodeScriptsRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyInitNodeScriptsResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesAttributeRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesAttributeResponse.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesRenewFlagRequest.h>
#include <tencentcloud/thpc/v20230321/model/ModifyWorkspacesRenewFlagResponse.h>
#include <tencentcloud/thpc/v20230321/model/SetAutoScalingConfigurationRequest.h>
#include <tencentcloud/thpc/v20230321/model/SetAutoScalingConfigurationResponse.h>
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
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspacesResponse> CreateWorkspacesOutcome;
                typedef std::future<CreateWorkspacesOutcome> CreateWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateWorkspacesRequest&, CreateWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterStorageOptionResponse> DeleteClusterStorageOptionOutcome;
                typedef std::future<DeleteClusterStorageOptionOutcome> DeleteClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterStorageOptionRequest&, DeleteClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodesResponse> DeleteNodesOutcome;
                typedef std::future<DeleteNodesOutcome> DeleteNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteNodesRequest&, DeleteNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQueueResponse> DeleteQueueOutcome;
                typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteQueueRequest&, DeleteQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoScalingConfigurationResponse> DescribeAutoScalingConfigurationOutcome;
                typedef std::future<DescribeAutoScalingConfigurationOutcome> DescribeAutoScalingConfigurationOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeAutoScalingConfigurationRequest&, DescribeAutoScalingConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScalingConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterActivitiesResponse> DescribeClusterActivitiesOutcome;
                typedef std::future<DescribeClusterActivitiesOutcome> DescribeClusterActivitiesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterActivitiesRequest&, DescribeClusterActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStorageOptionResponse> DescribeClusterStorageOptionOutcome;
                typedef std::future<DescribeClusterStorageOptionOutcome> DescribeClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterStorageOptionRequest&, DescribeClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInitNodeScriptsResponse> DescribeInitNodeScriptsOutcome;
                typedef std::future<DescribeInitNodeScriptsOutcome> DescribeInitNodeScriptsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeInitNodeScriptsRequest&, DescribeInitNodeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInitNodeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodesResponse> DescribeNodesOutcome;
                typedef std::future<DescribeNodesOutcome> DescribeNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeNodesRequest&, DescribeNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueuesResponse> DescribeQueuesOutcome;
                typedef std::future<DescribeQueuesOutcome> DescribeQueuesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeQueuesRequest&, DescribeQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspacesResponse> DescribeWorkspacesOutcome;
                typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeWorkspacesRequest&, DescribeWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachNodesResponse> DetachNodesOutcome;
                typedef std::future<DetachNodesOutcome> DetachNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DetachNodesRequest&, DetachNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInitNodeScriptsResponse> ModifyInitNodeScriptsOutcome;
                typedef std::future<ModifyInitNodeScriptsOutcome> ModifyInitNodeScriptsOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyInitNodeScriptsRequest&, ModifyInitNodeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInitNodeScriptsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspacesAttributeResponse> ModifyWorkspacesAttributeOutcome;
                typedef std::future<ModifyWorkspacesAttributeOutcome> ModifyWorkspacesAttributeOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyWorkspacesAttributeRequest&, ModifyWorkspacesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspacesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspacesRenewFlagResponse> ModifyWorkspacesRenewFlagOutcome;
                typedef std::future<ModifyWorkspacesRenewFlagOutcome> ModifyWorkspacesRenewFlagOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::ModifyWorkspacesRenewFlagRequest&, ModifyWorkspacesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspacesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoScalingConfigurationResponse> SetAutoScalingConfigurationOutcome;
                typedef std::future<SetAutoScalingConfigurationOutcome> SetAutoScalingConfigurationOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::SetAutoScalingConfigurationRequest&, SetAutoScalingConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScalingConfigurationAsyncHandler;
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
                 *本接口 (CreateCluster) 用于创建并启动集群。

* 本接口为异步接口， 当创建集群请求下发成功后会返回一个集群`ID`和一个`RequestId`，此时创建集群操作并未立即完成。在此期间集群的状态将会处于“PENDING”或者“INITING”，集群创建结果可以通过调用 [DescribeClusters](https://cloud.tencent.com/document/product/1527/72100)  接口查询，如果集群状态(ClusterStatus)变为“RUNNING(运行中)”，则代表集群创建成功，“ INIT_FAILED”代表集群创建失败。
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

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
                 *本接口 (DescribeNodes) 用于查询指定集群节点概览信息列表。
                 * @param req DescribeNodesRequest
                 * @return DescribeNodesOutcome
                 */
                DescribeNodesOutcome DescribeNodes(const Model::DescribeNodesRequest &request);
                void DescribeNodesAsync(const Model::DescribeNodesRequest& request, const DescribeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodesOutcomeCallable DescribeNodesCallable(const Model::DescribeNodesRequest& request);

                /**
                 *本接口(DescribeQueues)用于查询指定集群队列概览信息列表。
                 * @param req DescribeQueuesRequest
                 * @return DescribeQueuesOutcome
                 */
                DescribeQueuesOutcome DescribeQueues(const Model::DescribeQueuesRequest &request);
                void DescribeQueuesAsync(const Model::DescribeQueuesRequest& request, const DescribeQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueuesOutcomeCallable DescribeQueuesCallable(const Model::DescribeQueuesRequest& request);

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
                 *本接口 (ModifyInitNodeScripts) 用于修改节点初始化脚本。
                 * @param req ModifyInitNodeScriptsRequest
                 * @return ModifyInitNodeScriptsOutcome
                 */
                ModifyInitNodeScriptsOutcome ModifyInitNodeScripts(const Model::ModifyInitNodeScriptsRequest &request);
                void ModifyInitNodeScriptsAsync(const Model::ModifyInitNodeScriptsRequest& request, const ModifyInitNodeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInitNodeScriptsOutcomeCallable ModifyInitNodeScriptsCallable(const Model::ModifyInitNodeScriptsRequest& request);

                /**
                 *本接口 (ModifyWorkspacesAttribute) 用于修改工作空间的属性（目前只支持修改工作空间的名称）。
                 * @param req ModifyWorkspacesAttributeRequest
                 * @return ModifyWorkspacesAttributeOutcome
                 */
                ModifyWorkspacesAttributeOutcome ModifyWorkspacesAttribute(const Model::ModifyWorkspacesAttributeRequest &request);
                void ModifyWorkspacesAttributeAsync(const Model::ModifyWorkspacesAttributeRequest& request, const ModifyWorkspacesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspacesAttributeOutcomeCallable ModifyWorkspacesAttributeCallable(const Model::ModifyWorkspacesAttributeRequest& request);

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

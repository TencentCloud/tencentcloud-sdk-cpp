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

#ifndef TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_
#define TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbdc/v20201029/model/AddNodesToDBCustomClusterRequest.h>
#include <tencentcloud/dbdc/v20201029/model/AddNodesToDBCustomClusterResponse.h>
#include <tencentcloud/dbdc/v20201029/model/CheckRoleAuthorizedRequest.h>
#include <tencentcloud/dbdc/v20201029/model/CheckRoleAuthorizedResponse.h>
#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomClusterRequest.h>
#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomClusterResponse.h>
#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomNodesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/CreateDBCustomNodesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterDetailRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterDetailResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterKubeconfigRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterKubeconfigResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterNodesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClusterNodesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClustersRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomClustersResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomImagesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomImagesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomNodesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomNodesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomTaskStatusRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBCustomTaskStatusResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeHostListRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeHostListResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceListRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceListResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstancesRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DescribeInstancesResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DestroyDBCustomClusterRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DestroyDBCustomClusterResponse.h>
#include <tencentcloud/dbdc/v20201029/model/DestroyDBCustomNodeRequest.h>
#include <tencentcloud/dbdc/v20201029/model/DestroyDBCustomNodeResponse.h>
#include <tencentcloud/dbdc/v20201029/model/IsolateDBCustomNodeRequest.h>
#include <tencentcloud/dbdc/v20201029/model/IsolateDBCustomNodeResponse.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterTagsRequest.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterTagsResponse.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomNodeTagsRequest.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomNodeTagsResponse.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/dbdc/v20201029/model/ModifyInstanceNameResponse.h>
#include <tencentcloud/dbdc/v20201029/model/RemoveNodesFromDBCustomClusterRequest.h>
#include <tencentcloud/dbdc/v20201029/model/RemoveNodesFromDBCustomClusterResponse.h>
#include <tencentcloud/dbdc/v20201029/model/RenewDBCustomNodeRequest.h>
#include <tencentcloud/dbdc/v20201029/model/RenewDBCustomNodeResponse.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            class DbdcClient : public AbstractClient
            {
            public:
                DbdcClient(const Credential &credential, const std::string &region);
                DbdcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddNodesToDBCustomClusterResponse> AddNodesToDBCustomClusterOutcome;
                typedef std::future<AddNodesToDBCustomClusterOutcome> AddNodesToDBCustomClusterOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::AddNodesToDBCustomClusterRequest&, AddNodesToDBCustomClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNodesToDBCustomClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRoleAuthorizedResponse> CheckRoleAuthorizedOutcome;
                typedef std::future<CheckRoleAuthorizedOutcome> CheckRoleAuthorizedOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::CheckRoleAuthorizedRequest&, CheckRoleAuthorizedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRoleAuthorizedAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBCustomClusterResponse> CreateDBCustomClusterOutcome;
                typedef std::future<CreateDBCustomClusterOutcome> CreateDBCustomClusterOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::CreateDBCustomClusterRequest&, CreateDBCustomClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBCustomClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBCustomNodesResponse> CreateDBCustomNodesOutcome;
                typedef std::future<CreateDBCustomNodesOutcome> CreateDBCustomNodesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::CreateDBCustomNodesRequest&, CreateDBCustomNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBCustomNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomClusterDetailResponse> DescribeDBCustomClusterDetailOutcome;
                typedef std::future<DescribeDBCustomClusterDetailOutcome> DescribeDBCustomClusterDetailOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomClusterDetailRequest&, DescribeDBCustomClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomClusterKubeconfigResponse> DescribeDBCustomClusterKubeconfigOutcome;
                typedef std::future<DescribeDBCustomClusterKubeconfigOutcome> DescribeDBCustomClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomClusterKubeconfigRequest&, DescribeDBCustomClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomClusterKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomClusterNodesResponse> DescribeDBCustomClusterNodesOutcome;
                typedef std::future<DescribeDBCustomClusterNodesOutcome> DescribeDBCustomClusterNodesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomClusterNodesRequest&, DescribeDBCustomClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomClustersResponse> DescribeDBCustomClustersOutcome;
                typedef std::future<DescribeDBCustomClustersOutcome> DescribeDBCustomClustersOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomClustersRequest&, DescribeDBCustomClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomImagesResponse> DescribeDBCustomImagesOutcome;
                typedef std::future<DescribeDBCustomImagesOutcome> DescribeDBCustomImagesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomImagesRequest&, DescribeDBCustomImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomNodesResponse> DescribeDBCustomNodesOutcome;
                typedef std::future<DescribeDBCustomNodesOutcome> DescribeDBCustomNodesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomNodesRequest&, DescribeDBCustomNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCustomTaskStatusResponse> DescribeDBCustomTaskStatusOutcome;
                typedef std::future<DescribeDBCustomTaskStatusOutcome> DescribeDBCustomTaskStatusOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBCustomTaskStatusRequest&, DescribeDBCustomTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCustomTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostListResponse> DescribeHostListOutcome;
                typedef std::future<DescribeHostListOutcome> DescribeHostListOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeHostListRequest&, DescribeHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailResponse> DescribeInstanceDetailOutcome;
                typedef std::future<DescribeInstanceDetailOutcome> DescribeInstanceDetailOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstanceDetailRequest&, DescribeInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceListResponse> DescribeInstanceListOutcome;
                typedef std::future<DescribeInstanceListOutcome> DescribeInstanceListOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstanceListRequest&, DescribeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBCustomClusterResponse> DestroyDBCustomClusterOutcome;
                typedef std::future<DestroyDBCustomClusterOutcome> DestroyDBCustomClusterOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DestroyDBCustomClusterRequest&, DestroyDBCustomClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBCustomClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDBCustomNodeResponse> DestroyDBCustomNodeOutcome;
                typedef std::future<DestroyDBCustomNodeOutcome> DestroyDBCustomNodeOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::DestroyDBCustomNodeRequest&, DestroyDBCustomNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDBCustomNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBCustomNodeResponse> IsolateDBCustomNodeOutcome;
                typedef std::future<IsolateDBCustomNodeOutcome> IsolateDBCustomNodeOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::IsolateDBCustomNodeRequest&, IsolateDBCustomNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBCustomNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBCustomClusterTagsResponse> ModifyDBCustomClusterTagsOutcome;
                typedef std::future<ModifyDBCustomClusterTagsOutcome> ModifyDBCustomClusterTagsOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::ModifyDBCustomClusterTagsRequest&, ModifyDBCustomClusterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBCustomClusterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBCustomNodeTagsResponse> ModifyDBCustomNodeTagsOutcome;
                typedef std::future<ModifyDBCustomNodeTagsOutcome> ModifyDBCustomNodeTagsOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::ModifyDBCustomNodeTagsRequest&, ModifyDBCustomNodeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBCustomNodeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNodesFromDBCustomClusterResponse> RemoveNodesFromDBCustomClusterOutcome;
                typedef std::future<RemoveNodesFromDBCustomClusterOutcome> RemoveNodesFromDBCustomClusterOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::RemoveNodesFromDBCustomClusterRequest&, RemoveNodesFromDBCustomClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodesFromDBCustomClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDBCustomNodeResponse> RenewDBCustomNodeOutcome;
                typedef std::future<RenewDBCustomNodeOutcome> RenewDBCustomNodeOutcomeCallable;
                typedef std::function<void(const DbdcClient*, const Model::RenewDBCustomNodeRequest&, RenewDBCustomNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDBCustomNodeAsyncHandler;



                /**
                 *该接口（AddNodesToDBCustomCluster）用于为 DB Custom 集群上架节点。
                 * @param req AddNodesToDBCustomClusterRequest
                 * @return AddNodesToDBCustomClusterOutcome
                 */
                AddNodesToDBCustomClusterOutcome AddNodesToDBCustomCluster(const Model::AddNodesToDBCustomClusterRequest &request);
                void AddNodesToDBCustomClusterAsync(const Model::AddNodesToDBCustomClusterRequest& request, const AddNodesToDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNodesToDBCustomClusterOutcomeCallable AddNodesToDBCustomClusterCallable(const Model::AddNodesToDBCustomClusterRequest& request);

                /**
                 *检查服务相关角色是否已创建
                 * @param req CheckRoleAuthorizedRequest
                 * @return CheckRoleAuthorizedOutcome
                 */
                CheckRoleAuthorizedOutcome CheckRoleAuthorized(const Model::CheckRoleAuthorizedRequest &request);
                void CheckRoleAuthorizedAsync(const Model::CheckRoleAuthorizedRequest& request, const CheckRoleAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRoleAuthorizedOutcomeCallable CheckRoleAuthorizedCallable(const Model::CheckRoleAuthorizedRequest& request);

                /**
                 *该接口（CreateDBCustomCluster）用于创建 DB Custom 集群。
                 * @param req CreateDBCustomClusterRequest
                 * @return CreateDBCustomClusterOutcome
                 */
                CreateDBCustomClusterOutcome CreateDBCustomCluster(const Model::CreateDBCustomClusterRequest &request);
                void CreateDBCustomClusterAsync(const Model::CreateDBCustomClusterRequest& request, const CreateDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBCustomClusterOutcomeCallable CreateDBCustomClusterCallable(const Model::CreateDBCustomClusterRequest& request);

                /**
                 *该接口（CreateDBCustomNodes）用于创建 DB Custom 节点(需支付)。
                 * @param req CreateDBCustomNodesRequest
                 * @return CreateDBCustomNodesOutcome
                 */
                CreateDBCustomNodesOutcome CreateDBCustomNodes(const Model::CreateDBCustomNodesRequest &request);
                void CreateDBCustomNodesAsync(const Model::CreateDBCustomNodesRequest& request, const CreateDBCustomNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBCustomNodesOutcomeCallable CreateDBCustomNodesCallable(const Model::CreateDBCustomNodesRequest& request);

                /**
                 *该接口(DescribeDBCustomClusterDetail) 用于查询 DB Custom 集群的详情信息。
                 * @param req DescribeDBCustomClusterDetailRequest
                 * @return DescribeDBCustomClusterDetailOutcome
                 */
                DescribeDBCustomClusterDetailOutcome DescribeDBCustomClusterDetail(const Model::DescribeDBCustomClusterDetailRequest &request);
                void DescribeDBCustomClusterDetailAsync(const Model::DescribeDBCustomClusterDetailRequest& request, const DescribeDBCustomClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomClusterDetailOutcomeCallable DescribeDBCustomClusterDetailCallable(const Model::DescribeDBCustomClusterDetailRequest& request);

                /**
                 *该接口（DescribeDBCustomClusterKubeconfig）用于查询 DB Custom 集群 Kubeconfig。
                 * @param req DescribeDBCustomClusterKubeconfigRequest
                 * @return DescribeDBCustomClusterKubeconfigOutcome
                 */
                DescribeDBCustomClusterKubeconfigOutcome DescribeDBCustomClusterKubeconfig(const Model::DescribeDBCustomClusterKubeconfigRequest &request);
                void DescribeDBCustomClusterKubeconfigAsync(const Model::DescribeDBCustomClusterKubeconfigRequest& request, const DescribeDBCustomClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomClusterKubeconfigOutcomeCallable DescribeDBCustomClusterKubeconfigCallable(const Model::DescribeDBCustomClusterKubeconfigRequest& request);

                /**
                 *该接口（DescribeDBCustomClusterNodes）用于查询 DB Custom 集群中的节点列表。
                 * @param req DescribeDBCustomClusterNodesRequest
                 * @return DescribeDBCustomClusterNodesOutcome
                 */
                DescribeDBCustomClusterNodesOutcome DescribeDBCustomClusterNodes(const Model::DescribeDBCustomClusterNodesRequest &request);
                void DescribeDBCustomClusterNodesAsync(const Model::DescribeDBCustomClusterNodesRequest& request, const DescribeDBCustomClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomClusterNodesOutcomeCallable DescribeDBCustomClusterNodesCallable(const Model::DescribeDBCustomClusterNodesRequest& request);

                /**
                 *该接口（DescribeDBCustomClusters）为DB Custom 集群列表查询接口。
                 * @param req DescribeDBCustomClustersRequest
                 * @return DescribeDBCustomClustersOutcome
                 */
                DescribeDBCustomClustersOutcome DescribeDBCustomClusters(const Model::DescribeDBCustomClustersRequest &request);
                void DescribeDBCustomClustersAsync(const Model::DescribeDBCustomClustersRequest& request, const DescribeDBCustomClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomClustersOutcomeCallable DescribeDBCustomClustersCallable(const Model::DescribeDBCustomClustersRequest& request);

                /**
                 *该接口（DescribeDBCustomImages）用于查询 DB Custom 可用的操作系统镜像列表。
                 * @param req DescribeDBCustomImagesRequest
                 * @return DescribeDBCustomImagesOutcome
                 */
                DescribeDBCustomImagesOutcome DescribeDBCustomImages(const Model::DescribeDBCustomImagesRequest &request);
                void DescribeDBCustomImagesAsync(const Model::DescribeDBCustomImagesRequest& request, const DescribeDBCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomImagesOutcomeCallable DescribeDBCustomImagesCallable(const Model::DescribeDBCustomImagesRequest& request);

                /**
                 *该接口（DescribeDBCustomNodes）用于查询 DB Custom 节点列表。
                 * @param req DescribeDBCustomNodesRequest
                 * @return DescribeDBCustomNodesOutcome
                 */
                DescribeDBCustomNodesOutcome DescribeDBCustomNodes(const Model::DescribeDBCustomNodesRequest &request);
                void DescribeDBCustomNodesAsync(const Model::DescribeDBCustomNodesRequest& request, const DescribeDBCustomNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomNodesOutcomeCallable DescribeDBCustomNodesCallable(const Model::DescribeDBCustomNodesRequest& request);

                /**
                 *该接口（DescribeDBCustomTaskStatus）用于查询 DB Custom 任务的状态。
                 * @param req DescribeDBCustomTaskStatusRequest
                 * @return DescribeDBCustomTaskStatusOutcome
                 */
                DescribeDBCustomTaskStatusOutcome DescribeDBCustomTaskStatus(const Model::DescribeDBCustomTaskStatusRequest &request);
                void DescribeDBCustomTaskStatusAsync(const Model::DescribeDBCustomTaskStatusRequest& request, const DescribeDBCustomTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCustomTaskStatusOutcomeCallable DescribeDBCustomTaskStatusCallable(const Model::DescribeDBCustomTaskStatusRequest& request);

                /**
                 *本接口用于查询独享集群内的DB实例列表
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *本接口用于查询主机列表
                 * @param req DescribeHostListRequest
                 * @return DescribeHostListOutcome
                 */
                DescribeHostListOutcome DescribeHostList(const Model::DescribeHostListRequest &request);
                void DescribeHostListAsync(const Model::DescribeHostListRequest& request, const DescribeHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostListOutcomeCallable DescribeHostListCallable(const Model::DescribeHostListRequest& request);

                /**
                 *本接口用于查询独享集群详情
                 * @param req DescribeInstanceDetailRequest
                 * @return DescribeInstanceDetailOutcome
                 */
                DescribeInstanceDetailOutcome DescribeInstanceDetail(const Model::DescribeInstanceDetailRequest &request);
                void DescribeInstanceDetailAsync(const Model::DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailOutcomeCallable DescribeInstanceDetailCallable(const Model::DescribeInstanceDetailRequest& request);

                /**
                 *本接口用于查询独享集群实例列表
                 * @param req DescribeInstanceListRequest
                 * @return DescribeInstanceListOutcome
                 */
                DescribeInstanceListOutcome DescribeInstanceList(const Model::DescribeInstanceListRequest &request);
                void DescribeInstanceListAsync(const Model::DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceListOutcomeCallable DescribeInstanceListCallable(const Model::DescribeInstanceListRequest& request);

                /**
                 *根据不同地域不同用户，获取集群列表信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *该接口（DestroyDBCustomCluster）用于销毁 DB Custom 集群。
                 * @param req DestroyDBCustomClusterRequest
                 * @return DestroyDBCustomClusterOutcome
                 */
                DestroyDBCustomClusterOutcome DestroyDBCustomCluster(const Model::DestroyDBCustomClusterRequest &request);
                void DestroyDBCustomClusterAsync(const Model::DestroyDBCustomClusterRequest& request, const DestroyDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBCustomClusterOutcomeCallable DestroyDBCustomClusterCallable(const Model::DestroyDBCustomClusterRequest& request);

                /**
                 *该接口（DestroyDBCustomNode）用于销毁 DB Custom 节点。
                 * @param req DestroyDBCustomNodeRequest
                 * @return DestroyDBCustomNodeOutcome
                 */
                DestroyDBCustomNodeOutcome DestroyDBCustomNode(const Model::DestroyDBCustomNodeRequest &request);
                void DestroyDBCustomNodeAsync(const Model::DestroyDBCustomNodeRequest& request, const DestroyDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDBCustomNodeOutcomeCallable DestroyDBCustomNodeCallable(const Model::DestroyDBCustomNodeRequest& request);

                /**
                 *该接口 (IsolateDBCustomNode) 用于隔离 DB Custom 节点。
                 * @param req IsolateDBCustomNodeRequest
                 * @return IsolateDBCustomNodeOutcome
                 */
                IsolateDBCustomNodeOutcome IsolateDBCustomNode(const Model::IsolateDBCustomNodeRequest &request);
                void IsolateDBCustomNodeAsync(const Model::IsolateDBCustomNodeRequest& request, const IsolateDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBCustomNodeOutcomeCallable IsolateDBCustomNodeCallable(const Model::IsolateDBCustomNodeRequest& request);

                /**
                 *该接口（ModifyDBCustomClusterTags）用于修改 DB Custom 集群的标签配置。
                 * @param req ModifyDBCustomClusterTagsRequest
                 * @return ModifyDBCustomClusterTagsOutcome
                 */
                ModifyDBCustomClusterTagsOutcome ModifyDBCustomClusterTags(const Model::ModifyDBCustomClusterTagsRequest &request);
                void ModifyDBCustomClusterTagsAsync(const Model::ModifyDBCustomClusterTagsRequest& request, const ModifyDBCustomClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBCustomClusterTagsOutcomeCallable ModifyDBCustomClusterTagsCallable(const Model::ModifyDBCustomClusterTagsRequest& request);

                /**
                 *该接口（ModifyDBCustomNodeTags）用于修改 DB Custom 节点的标签配置。
                 * @param req ModifyDBCustomNodeTagsRequest
                 * @return ModifyDBCustomNodeTagsOutcome
                 */
                ModifyDBCustomNodeTagsOutcome ModifyDBCustomNodeTags(const Model::ModifyDBCustomNodeTagsRequest &request);
                void ModifyDBCustomNodeTagsAsync(const Model::ModifyDBCustomNodeTagsRequest& request, const ModifyDBCustomNodeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBCustomNodeTagsOutcomeCallable ModifyDBCustomNodeTagsCallable(const Model::ModifyDBCustomNodeTagsRequest& request);

                /**
                 *本接口用于修改集群名称
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

                /**
                 *该接口（RemoveNodesFromDBCustomCluster）用于从 DB Custom 集群移除节点。
                 * @param req RemoveNodesFromDBCustomClusterRequest
                 * @return RemoveNodesFromDBCustomClusterOutcome
                 */
                RemoveNodesFromDBCustomClusterOutcome RemoveNodesFromDBCustomCluster(const Model::RemoveNodesFromDBCustomClusterRequest &request);
                void RemoveNodesFromDBCustomClusterAsync(const Model::RemoveNodesFromDBCustomClusterRequest& request, const RemoveNodesFromDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNodesFromDBCustomClusterOutcomeCallable RemoveNodesFromDBCustomClusterCallable(const Model::RemoveNodesFromDBCustomClusterRequest& request);

                /**
                 *该接口（RenewDBCustomNode）用于给 DB Custom 节点续费。
                 * @param req RenewDBCustomNodeRequest
                 * @return RenewDBCustomNodeOutcome
                 */
                RenewDBCustomNodeOutcome RenewDBCustomNode(const Model::RenewDBCustomNodeRequest &request);
                void RenewDBCustomNodeAsync(const Model::RenewDBCustomNodeRequest& request, const RenewDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDBCustomNodeOutcomeCallable RenewDBCustomNodeCallable(const Model::RenewDBCustomNodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_DBDCCLIENT_H_

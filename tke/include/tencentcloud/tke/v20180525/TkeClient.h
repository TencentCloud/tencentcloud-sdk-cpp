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

#ifndef TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
#define TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterAsGroupResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            class TkeClient : public AbstractClient
            {
            public:
                TkeClient(const Credential &credential, const std::string &region);
                TkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddExistedInstancesResponse> AddExistedInstancesOutcome;
                typedef std::future<AddExistedInstancesOutcome> AddExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddExistedInstancesRequest&, AddExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExistedInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterAsGroupResponse> CreateClusterAsGroupOutcome;
                typedef std::future<CreateClusterAsGroupOutcome> CreateClusterAsGroupOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterAsGroupRequest&, CreateClusterAsGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterInstancesResponse> CreateClusterInstancesOutcome;
                typedef std::future<CreateClusterInstancesOutcome> CreateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterInstancesRequest&, CreateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterRouteResponse> CreateClusterRouteOutcome;
                typedef std::future<CreateClusterRouteOutcome> CreateClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteRequest&, CreateClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteAsyncHandler;
                typedef Outcome<Error, Model::CreateClusterRouteTableResponse> CreateClusterRouteTableOutcome;
                typedef std::future<CreateClusterRouteTableOutcome> CreateClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteTableRequest&, CreateClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterInstancesResponse> DeleteClusterInstancesOutcome;
                typedef std::future<DeleteClusterInstancesOutcome> DeleteClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterInstancesRequest&, DeleteClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterRouteResponse> DeleteClusterRouteOutcome;
                typedef std::future<DeleteClusterRouteOutcome> DeleteClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteRequest&, DeleteClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteAsyncHandler;
                typedef Outcome<Error, Model::DeleteClusterRouteTableResponse> DeleteClusterRouteTableOutcome;
                typedef std::future<DeleteClusterRouteTableOutcome> DeleteClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteTableRequest&, DeleteClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterRouteTablesResponse> DescribeClusterRouteTablesOutcome;
                typedef std::future<DescribeClusterRouteTablesOutcome> DescribeClusterRouteTablesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRouteTablesRequest&, DescribeClusterRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRouteTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterRoutesResponse> DescribeClusterRoutesOutcome;
                typedef std::future<DescribeClusterRoutesOutcome> DescribeClusterRoutesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRoutesRequest&, DescribeClusterRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeClusterSecurityResponse> DescribeClusterSecurityOutcome;
                typedef std::future<DescribeClusterSecurityOutcome> DescribeClusterSecurityOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSecurityRequest&, DescribeClusterSecurityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSecurityAsyncHandler;
                typedef Outcome<Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Error, Model::DescribeExistedInstancesResponse> DescribeExistedInstancesOutcome;
                typedef std::future<DescribeExistedInstancesOutcome> DescribeExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExistedInstancesRequest&, DescribeExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExistedInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteTableConflictsResponse> DescribeRouteTableConflictsOutcome;
                typedef std::future<DescribeRouteTableConflictsOutcome> DescribeRouteTableConflictsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRouteTableConflictsRequest&, DescribeRouteTableConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableConflictsAsyncHandler;



                /**
                 *添加已经存在的实例到集群
                 * @param req AddExistedInstancesRequest
                 * @return AddExistedInstancesOutcome
                 */
                AddExistedInstancesOutcome AddExistedInstances(const Model::AddExistedInstancesRequest &request);
                void AddExistedInstancesAsync(const Model::AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddExistedInstancesOutcomeCallable AddExistedInstancesCallable(const Model::AddExistedInstancesRequest& request);

                /**
                 *创建集群
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *为已经存在的集群创建伸缩组
                 * @param req CreateClusterAsGroupRequest
                 * @return CreateClusterAsGroupOutcome
                 */
                CreateClusterAsGroupOutcome CreateClusterAsGroup(const Model::CreateClusterAsGroupRequest &request);
                void CreateClusterAsGroupAsync(const Model::CreateClusterAsGroupRequest& request, const CreateClusterAsGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterAsGroupOutcomeCallable CreateClusterAsGroupCallable(const Model::CreateClusterAsGroupRequest& request);

                /**
                 *扩展(新建)集群节点
                 * @param req CreateClusterInstancesRequest
                 * @return CreateClusterInstancesOutcome
                 */
                CreateClusterInstancesOutcome CreateClusterInstances(const Model::CreateClusterInstancesRequest &request);
                void CreateClusterInstancesAsync(const Model::CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterInstancesOutcomeCallable CreateClusterInstancesCallable(const Model::CreateClusterInstancesRequest& request);

                /**
                 *创建集群路由
                 * @param req CreateClusterRouteRequest
                 * @return CreateClusterRouteOutcome
                 */
                CreateClusterRouteOutcome CreateClusterRoute(const Model::CreateClusterRouteRequest &request);
                void CreateClusterRouteAsync(const Model::CreateClusterRouteRequest& request, const CreateClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterRouteOutcomeCallable CreateClusterRouteCallable(const Model::CreateClusterRouteRequest& request);

                /**
                 *创建集群路由表
                 * @param req CreateClusterRouteTableRequest
                 * @return CreateClusterRouteTableOutcome
                 */
                CreateClusterRouteTableOutcome CreateClusterRouteTable(const Model::CreateClusterRouteTableRequest &request);
                void CreateClusterRouteTableAsync(const Model::CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterRouteTableOutcomeCallable CreateClusterRouteTableCallable(const Model::CreateClusterRouteTableRequest& request);

                /**
                 *删除集群(YUNAPI V3版本)
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *删除集群中的实例
                 * @param req DeleteClusterInstancesRequest
                 * @return DeleteClusterInstancesOutcome
                 */
                DeleteClusterInstancesOutcome DeleteClusterInstances(const Model::DeleteClusterInstancesRequest &request);
                void DeleteClusterInstancesAsync(const Model::DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterInstancesOutcomeCallable DeleteClusterInstancesCallable(const Model::DeleteClusterInstancesRequest& request);

                /**
                 *删除集群路由
                 * @param req DeleteClusterRouteRequest
                 * @return DeleteClusterRouteOutcome
                 */
                DeleteClusterRouteOutcome DeleteClusterRoute(const Model::DeleteClusterRouteRequest &request);
                void DeleteClusterRouteAsync(const Model::DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteOutcomeCallable DeleteClusterRouteCallable(const Model::DeleteClusterRouteRequest& request);

                /**
                 *删除集群路由表
                 * @param req DeleteClusterRouteTableRequest
                 * @return DeleteClusterRouteTableOutcome
                 */
                DeleteClusterRouteTableOutcome DeleteClusterRouteTable(const Model::DeleteClusterRouteTableRequest &request);
                void DeleteClusterRouteTableAsync(const Model::DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteTableOutcomeCallable DeleteClusterRouteTableCallable(const Model::DeleteClusterRouteTableRequest& request);

                /**
                 * 查询集群下节点实例信息 
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *查询集群路由表
                 * @param req DescribeClusterRouteTablesRequest
                 * @return DescribeClusterRouteTablesOutcome
                 */
                DescribeClusterRouteTablesOutcome DescribeClusterRouteTables(const Model::DescribeClusterRouteTablesRequest &request);
                void DescribeClusterRouteTablesAsync(const Model::DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRouteTablesOutcomeCallable DescribeClusterRouteTablesCallable(const Model::DescribeClusterRouteTablesRequest& request);

                /**
                 *查询集群路由
                 * @param req DescribeClusterRoutesRequest
                 * @return DescribeClusterRoutesOutcome
                 */
                DescribeClusterRoutesOutcome DescribeClusterRoutes(const Model::DescribeClusterRoutesRequest &request);
                void DescribeClusterRoutesAsync(const Model::DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRoutesOutcomeCallable DescribeClusterRoutesCallable(const Model::DescribeClusterRoutesRequest& request);

                /**
                 *集群的密钥信息
                 * @param req DescribeClusterSecurityRequest
                 * @return DescribeClusterSecurityOutcome
                 */
                DescribeClusterSecurityOutcome DescribeClusterSecurity(const Model::DescribeClusterSecurityRequest &request);
                void DescribeClusterSecurityAsync(const Model::DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSecurityOutcomeCallable DescribeClusterSecurityCallable(const Model::DescribeClusterSecurityRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *查询已经存在的节点，判断是否可以加入集群
                 * @param req DescribeExistedInstancesRequest
                 * @return DescribeExistedInstancesOutcome
                 */
                DescribeExistedInstancesOutcome DescribeExistedInstances(const Model::DescribeExistedInstancesRequest &request);
                void DescribeExistedInstancesAsync(const Model::DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExistedInstancesOutcomeCallable DescribeExistedInstancesCallable(const Model::DescribeExistedInstancesRequest& request);

                /**
                 *查询路由表冲突列表
                 * @param req DescribeRouteTableConflictsRequest
                 * @return DescribeRouteTableConflictsOutcome
                 */
                DescribeRouteTableConflictsOutcome DescribeRouteTableConflicts(const Model::DescribeRouteTableConflictsRequest &request);
                void DescribeRouteTableConflictsAsync(const Model::DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableConflictsOutcomeCallable DescribeRouteTableConflictsCallable(const Model::DescribeRouteTableConflictsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_

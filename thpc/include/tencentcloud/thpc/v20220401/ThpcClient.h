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

#ifndef TENCENTCLOUD_THPC_V20220401_THPCCLIENT_H_
#define TENCENTCLOUD_THPC_V20220401_THPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/thpc/v20220401/model/AddClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20220401/model/AddClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20220401/model/AddNodesRequest.h>
#include <tencentcloud/thpc/v20220401/model/AddNodesResponse.h>
#include <tencentcloud/thpc/v20220401/model/BindAutoScalingGroupRequest.h>
#include <tencentcloud/thpc/v20220401/model/BindAutoScalingGroupResponse.h>
#include <tencentcloud/thpc/v20220401/model/CreateClusterRequest.h>
#include <tencentcloud/thpc/v20220401/model/CreateClusterResponse.h>
#include <tencentcloud/thpc/v20220401/model/DeleteClusterRequest.h>
#include <tencentcloud/thpc/v20220401/model/DeleteClusterResponse.h>
#include <tencentcloud/thpc/v20220401/model/DeleteClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20220401/model/DeleteClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20220401/model/DeleteNodesRequest.h>
#include <tencentcloud/thpc/v20220401/model/DeleteNodesResponse.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClusterActivitiesRequest.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClusterActivitiesResponse.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClusterStorageOptionRequest.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClusterStorageOptionResponse.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClustersRequest.h>
#include <tencentcloud/thpc/v20220401/model/DescribeClustersResponse.h>
#include <tencentcloud/thpc/v20220401/model/SetAutoScalingConfigurationRequest.h>
#include <tencentcloud/thpc/v20220401/model/SetAutoScalingConfigurationResponse.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
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
                typedef Outcome<Core::Error, Model::BindAutoScalingGroupResponse> BindAutoScalingGroupOutcome;
                typedef std::future<BindAutoScalingGroupOutcome> BindAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::BindAutoScalingGroupRequest&, BindAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterStorageOptionResponse> DeleteClusterStorageOptionOutcome;
                typedef std::future<DeleteClusterStorageOptionOutcome> DeleteClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterStorageOptionRequest&, DeleteClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodesResponse> DeleteNodesOutcome;
                typedef std::future<DeleteNodesOutcome> DeleteNodesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteNodesRequest&, DeleteNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterActivitiesResponse> DescribeClusterActivitiesOutcome;
                typedef std::future<DescribeClusterActivitiesOutcome> DescribeClusterActivitiesOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterActivitiesRequest&, DescribeClusterActivitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterActivitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStorageOptionResponse> DescribeClusterStorageOptionOutcome;
                typedef std::future<DescribeClusterStorageOptionOutcome> DescribeClusterStorageOptionOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClusterStorageOptionRequest&, DescribeClusterStorageOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStorageOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAutoScalingConfigurationResponse> SetAutoScalingConfigurationOutcome;
                typedef std::future<SetAutoScalingConfigurationOutcome> SetAutoScalingConfigurationOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::SetAutoScalingConfigurationRequest&, SetAutoScalingConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScalingConfigurationAsyncHandler;



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
                 *本接口(BindAutoScalingGroup)用于为集群队列绑定弹性伸缩组
                 * @param req BindAutoScalingGroupRequest
                 * @return BindAutoScalingGroupOutcome
                 */
                BindAutoScalingGroupOutcome BindAutoScalingGroup(const Model::BindAutoScalingGroupRequest &request);
                void BindAutoScalingGroupAsync(const Model::BindAutoScalingGroupRequest& request, const BindAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoScalingGroupOutcomeCallable BindAutoScalingGroupCallable(const Model::BindAutoScalingGroupRequest& request);

                /**
                 *本接口 (CreateCluster) 用于创建并启动集群。
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

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
                 *本接口(SetAutoScalingConfiguration)用于为集群设置集群弹性伸缩配置信息。
                 * @param req SetAutoScalingConfigurationRequest
                 * @return SetAutoScalingConfigurationOutcome
                 */
                SetAutoScalingConfigurationOutcome SetAutoScalingConfiguration(const Model::SetAutoScalingConfigurationRequest &request);
                void SetAutoScalingConfigurationAsync(const Model::SetAutoScalingConfigurationRequest& request, const SetAutoScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAutoScalingConfigurationOutcomeCallable SetAutoScalingConfigurationCallable(const Model::SetAutoScalingConfigurationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_THPCCLIENT_H_

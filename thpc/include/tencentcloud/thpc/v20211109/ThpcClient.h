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

#ifndef TENCENTCLOUD_THPC_V20211109_THPCCLIENT_H_
#define TENCENTCLOUD_THPC_V20211109_THPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/thpc/v20211109/model/BindAutoScalingGroupRequest.h>
#include <tencentcloud/thpc/v20211109/model/BindAutoScalingGroupResponse.h>
#include <tencentcloud/thpc/v20211109/model/CreateClusterRequest.h>
#include <tencentcloud/thpc/v20211109/model/CreateClusterResponse.h>
#include <tencentcloud/thpc/v20211109/model/DeleteClusterRequest.h>
#include <tencentcloud/thpc/v20211109/model/DeleteClusterResponse.h>
#include <tencentcloud/thpc/v20211109/model/DescribeClustersRequest.h>
#include <tencentcloud/thpc/v20211109/model/DescribeClustersResponse.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20211109
        {
            class ThpcClient : public AbstractClient
            {
            public:
                ThpcClient(const Credential &credential, const std::string &region);
                ThpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindAutoScalingGroupResponse> BindAutoScalingGroupOutcome;
                typedef std::future<BindAutoScalingGroupOutcome> BindAutoScalingGroupOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::BindAutoScalingGroupRequest&, BindAutoScalingGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoScalingGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const ThpcClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;



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
                 *本接口（DescribeClusters）用于查询集群列表。
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20211109_THPCCLIENT_H_

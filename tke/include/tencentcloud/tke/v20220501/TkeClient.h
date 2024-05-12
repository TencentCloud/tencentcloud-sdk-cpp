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

#ifndef TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_
#define TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsResponse.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolResponse.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            class TkeClient : public AbstractClient
            {
            public:
                TkeClient(const Credential &credential, const std::string &region);
                TkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateNodePoolResponse> CreateNodePoolOutcome;
                typedef std::future<CreateNodePoolOutcome> CreateNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateNodePoolRequest&, CreateNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodePoolResponse> DeleteNodePoolOutcome;
                typedef std::future<DeleteNodePoolOutcome> DeleteNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteNodePoolRequest&, DeleteNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodePoolsResponse> DescribeNodePoolsOutcome;
                typedef std::future<DescribeNodePoolsOutcome> DescribeNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeNodePoolsRequest&, DescribeNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolResponse> ModifyNodePoolOutcome;
                typedef std::future<ModifyNodePoolOutcome> ModifyNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolRequest&, ModifyNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolAsyncHandler;



                /**
                 *创建 TKE 节点池
                 * @param req CreateNodePoolRequest
                 * @return CreateNodePoolOutcome
                 */
                CreateNodePoolOutcome CreateNodePool(const Model::CreateNodePoolRequest &request);
                void CreateNodePoolAsync(const Model::CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNodePoolOutcomeCallable CreateNodePoolCallable(const Model::CreateNodePoolRequest& request);

                /**
                 *删除 TKE 节点池
                 * @param req DeleteNodePoolRequest
                 * @return DeleteNodePoolOutcome
                 */
                DeleteNodePoolOutcome DeleteNodePool(const Model::DeleteNodePoolRequest &request);
                void DeleteNodePoolAsync(const Model::DeleteNodePoolRequest& request, const DeleteNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNodePoolOutcomeCallable DeleteNodePoolCallable(const Model::DeleteNodePoolRequest& request);

                /**
                 *查询集群下节点实例信息
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *查询 TKE 节点池列表
                 * @param req DescribeNodePoolsRequest
                 * @return DescribeNodePoolsOutcome
                 */
                DescribeNodePoolsOutcome DescribeNodePools(const Model::DescribeNodePoolsRequest &request);
                void DescribeNodePoolsAsync(const Model::DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodePoolsOutcomeCallable DescribeNodePoolsCallable(const Model::DescribeNodePoolsRequest& request);

                /**
                 *更新 TKE 节点池
                 * @param req ModifyNodePoolRequest
                 * @return ModifyNodePoolOutcome
                 */
                ModifyNodePoolOutcome ModifyNodePool(const Model::ModifyNodePoolRequest &request);
                void ModifyNodePoolAsync(const Model::ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolOutcomeCallable ModifyNodePoolCallable(const Model::ModifyNodePoolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_

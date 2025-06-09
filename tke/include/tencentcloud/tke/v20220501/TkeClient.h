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
#include <tencentcloud/tke/v20220501/model/CreateHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/CreateHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteClusterMachinesRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteClusterMachinesResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPoliciesRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPoliciesResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPolicyBindingsRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPolicyBindingsResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckTemplateRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckTemplateResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsResponse.h>
#include <tencentcloud/tke/v20220501/model/ModifyHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/ModifyHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/RebootMachinesRequest.h>
#include <tencentcloud/tke/v20220501/model/RebootMachinesResponse.h>
#include <tencentcloud/tke/v20220501/model/StartMachinesRequest.h>
#include <tencentcloud/tke/v20220501/model/StartMachinesResponse.h>
#include <tencentcloud/tke/v20220501/model/StopMachinesRequest.h>
#include <tencentcloud/tke/v20220501/model/StopMachinesResponse.h>


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

                typedef Outcome<Core::Error, Model::CreateHealthCheckPolicyResponse> CreateHealthCheckPolicyOutcome;
                typedef std::future<CreateHealthCheckPolicyOutcome> CreateHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateHealthCheckPolicyRequest&, CreateHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNodePoolResponse> CreateNodePoolOutcome;
                typedef std::future<CreateNodePoolOutcome> CreateNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateNodePoolRequest&, CreateNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterMachinesResponse> DeleteClusterMachinesOutcome;
                typedef std::future<DeleteClusterMachinesOutcome> DeleteClusterMachinesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterMachinesRequest&, DeleteClusterMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHealthCheckPolicyResponse> DeleteHealthCheckPolicyOutcome;
                typedef std::future<DeleteHealthCheckPolicyOutcome> DeleteHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteHealthCheckPolicyRequest&, DeleteHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodePoolResponse> DeleteNodePoolOutcome;
                typedef std::future<DeleteNodePoolOutcome> DeleteNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteNodePoolRequest&, DeleteNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckPoliciesResponse> DescribeHealthCheckPoliciesOutcome;
                typedef std::future<DescribeHealthCheckPoliciesOutcome> DescribeHealthCheckPoliciesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckPoliciesRequest&, DescribeHealthCheckPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckPolicyBindingsResponse> DescribeHealthCheckPolicyBindingsOutcome;
                typedef std::future<DescribeHealthCheckPolicyBindingsOutcome> DescribeHealthCheckPolicyBindingsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckPolicyBindingsRequest&, DescribeHealthCheckPolicyBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckPolicyBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckTemplateResponse> DescribeHealthCheckTemplateOutcome;
                typedef std::future<DescribeHealthCheckTemplateOutcome> DescribeHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckTemplateRequest&, DescribeHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodePoolsResponse> DescribeNodePoolsOutcome;
                typedef std::future<DescribeNodePoolsOutcome> DescribeNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeNodePoolsRequest&, DescribeNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHealthCheckPolicyResponse> ModifyHealthCheckPolicyOutcome;
                typedef std::future<ModifyHealthCheckPolicyOutcome> ModifyHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyHealthCheckPolicyRequest&, ModifyHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolResponse> ModifyNodePoolOutcome;
                typedef std::future<ModifyNodePoolOutcome> ModifyNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolRequest&, ModifyNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootMachinesResponse> RebootMachinesOutcome;
                typedef std::future<RebootMachinesOutcome> RebootMachinesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RebootMachinesRequest&, RebootMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartMachinesResponse> StartMachinesOutcome;
                typedef std::future<StartMachinesOutcome> StartMachinesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::StartMachinesRequest&, StartMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopMachinesResponse> StopMachinesOutcome;
                typedef std::future<StopMachinesOutcome> StopMachinesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::StopMachinesRequest&, StopMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopMachinesAsyncHandler;



                /**
                 *创建健康检测策略
                 * @param req CreateHealthCheckPolicyRequest
                 * @return CreateHealthCheckPolicyOutcome
                 */
                CreateHealthCheckPolicyOutcome CreateHealthCheckPolicy(const Model::CreateHealthCheckPolicyRequest &request);
                void CreateHealthCheckPolicyAsync(const Model::CreateHealthCheckPolicyRequest& request, const CreateHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHealthCheckPolicyOutcomeCallable CreateHealthCheckPolicyCallable(const Model::CreateHealthCheckPolicyRequest& request);

                /**
                 *创建 TKE 节点池
                 * @param req CreateNodePoolRequest
                 * @return CreateNodePoolOutcome
                 */
                CreateNodePoolOutcome CreateNodePool(const Model::CreateNodePoolRequest &request);
                void CreateNodePoolAsync(const Model::CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNodePoolOutcomeCallable CreateNodePoolCallable(const Model::CreateNodePoolRequest& request);

                /**
                 *删除原生节点池节点
                 * @param req DeleteClusterMachinesRequest
                 * @return DeleteClusterMachinesOutcome
                 */
                DeleteClusterMachinesOutcome DeleteClusterMachines(const Model::DeleteClusterMachinesRequest &request);
                void DeleteClusterMachinesAsync(const Model::DeleteClusterMachinesRequest& request, const DeleteClusterMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterMachinesOutcomeCallable DeleteClusterMachinesCallable(const Model::DeleteClusterMachinesRequest& request);

                /**
                 *删除健康检测策略
                 * @param req DeleteHealthCheckPolicyRequest
                 * @return DeleteHealthCheckPolicyOutcome
                 */
                DeleteHealthCheckPolicyOutcome DeleteHealthCheckPolicy(const Model::DeleteHealthCheckPolicyRequest &request);
                void DeleteHealthCheckPolicyAsync(const Model::DeleteHealthCheckPolicyRequest& request, const DeleteHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHealthCheckPolicyOutcomeCallable DeleteHealthCheckPolicyCallable(const Model::DeleteHealthCheckPolicyRequest& request);

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
                 *查询健康检测策略
                 * @param req DescribeHealthCheckPoliciesRequest
                 * @return DescribeHealthCheckPoliciesOutcome
                 */
                DescribeHealthCheckPoliciesOutcome DescribeHealthCheckPolicies(const Model::DescribeHealthCheckPoliciesRequest &request);
                void DescribeHealthCheckPoliciesAsync(const Model::DescribeHealthCheckPoliciesRequest& request, const DescribeHealthCheckPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckPoliciesOutcomeCallable DescribeHealthCheckPoliciesCallable(const Model::DescribeHealthCheckPoliciesRequest& request);

                /**
                 *查询健康检测策略绑定关系
                 * @param req DescribeHealthCheckPolicyBindingsRequest
                 * @return DescribeHealthCheckPolicyBindingsOutcome
                 */
                DescribeHealthCheckPolicyBindingsOutcome DescribeHealthCheckPolicyBindings(const Model::DescribeHealthCheckPolicyBindingsRequest &request);
                void DescribeHealthCheckPolicyBindingsAsync(const Model::DescribeHealthCheckPolicyBindingsRequest& request, const DescribeHealthCheckPolicyBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckPolicyBindingsOutcomeCallable DescribeHealthCheckPolicyBindingsCallable(const Model::DescribeHealthCheckPolicyBindingsRequest& request);

                /**
                 *查询健康检测策略模板
                 * @param req DescribeHealthCheckTemplateRequest
                 * @return DescribeHealthCheckTemplateOutcome
                 */
                DescribeHealthCheckTemplateOutcome DescribeHealthCheckTemplate(const Model::DescribeHealthCheckTemplateRequest &request);
                void DescribeHealthCheckTemplateAsync(const Model::DescribeHealthCheckTemplateRequest& request, const DescribeHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckTemplateOutcomeCallable DescribeHealthCheckTemplateCallable(const Model::DescribeHealthCheckTemplateRequest& request);

                /**
                 *查询 TKE 节点池列表
                 * @param req DescribeNodePoolsRequest
                 * @return DescribeNodePoolsOutcome
                 */
                DescribeNodePoolsOutcome DescribeNodePools(const Model::DescribeNodePoolsRequest &request);
                void DescribeNodePoolsAsync(const Model::DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodePoolsOutcomeCallable DescribeNodePoolsCallable(const Model::DescribeNodePoolsRequest& request);

                /**
                 *修改健康检测策略
                 * @param req ModifyHealthCheckPolicyRequest
                 * @return ModifyHealthCheckPolicyOutcome
                 */
                ModifyHealthCheckPolicyOutcome ModifyHealthCheckPolicy(const Model::ModifyHealthCheckPolicyRequest &request);
                void ModifyHealthCheckPolicyAsync(const Model::ModifyHealthCheckPolicyRequest& request, const ModifyHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHealthCheckPolicyOutcomeCallable ModifyHealthCheckPolicyCallable(const Model::ModifyHealthCheckPolicyRequest& request);

                /**
                 *更新 TKE 节点池
                 * @param req ModifyNodePoolRequest
                 * @return ModifyNodePoolOutcome
                 */
                ModifyNodePoolOutcome ModifyNodePool(const Model::ModifyNodePoolRequest &request);
                void ModifyNodePoolAsync(const Model::ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolOutcomeCallable ModifyNodePoolCallable(const Model::ModifyNodePoolRequest& request);

                /**
                 *重启原生节点实例
                 * @param req RebootMachinesRequest
                 * @return RebootMachinesOutcome
                 */
                RebootMachinesOutcome RebootMachines(const Model::RebootMachinesRequest &request);
                void RebootMachinesAsync(const Model::RebootMachinesRequest& request, const RebootMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootMachinesOutcomeCallable RebootMachinesCallable(const Model::RebootMachinesRequest& request);

                /**
                 *本接口 (StartMachines) 用于启动一个或多个原生节点实例。

只有状态为 Stopped 的实例才可以进行此操作。
接口调用成功后，等待一分钟左右，实例会进入 Running 状态。
支持批量操作。每次请求批量实例的上限为100。
本接口为同步接口，启动实例请求发送成功后会返回一个RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeClusterInstances 接口查询，如果实例的状态为 Running，则代表启动实例操作成功。
                 * @param req StartMachinesRequest
                 * @return StartMachinesOutcome
                 */
                StartMachinesOutcome StartMachines(const Model::StartMachinesRequest &request);
                void StartMachinesAsync(const Model::StartMachinesRequest& request, const StartMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartMachinesOutcomeCallable StartMachinesCallable(const Model::StartMachinesRequest& request);

                /**
                 *本接口 (StopMachines) 用于关闭一个或多个原生节点实例。

只有状态为 Running 的实例才可以进行此操作。
接口调用成功时，实例会进入 Stopping 状态；关闭实例成功时，实例会进入 Stopped 状态。
支持强制关闭。强制关机的效果等同于关闭物理计算机的电源开关。强制关机可能会导致数据丢失或文件系统损坏，请仅在服务器不能正常关机时使用。
支持批量操作。每次请求批量实例的上限为 100。
本接口为同步接口，关闭实例请求发送成功后会返回一个RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeClusterInstances 接口查询，如果实例的状态为stopped_with_charging，则代表关闭实例操作成功。
                 * @param req StopMachinesRequest
                 * @return StopMachinesOutcome
                 */
                StopMachinesOutcome StopMachines(const Model::StopMachinesRequest &request);
                void StopMachinesAsync(const Model::StopMachinesRequest& request, const StopMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopMachinesOutcomeCallable StopMachinesCallable(const Model::StopMachinesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_

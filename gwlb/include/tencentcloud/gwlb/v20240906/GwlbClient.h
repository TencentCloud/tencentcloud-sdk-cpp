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

#ifndef TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_
#define TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/CreateTargetGroupRequest.h>
#include <tencentcloud/gwlb/v20240906/model/CreateTargetGroupResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightResponse.h>
#include <tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesResponse.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            class GwlbClient : public AbstractClient
            {
            public:
                GwlbClient(const Credential &credential, const std::string &region);
                GwlbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateTargetGroupsResponse> AssociateTargetGroupsOutcome;
                typedef std::future<AssociateTargetGroupsOutcome> AssociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::AssociateTargetGroupsRequest&, AssociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGatewayLoadBalancerResponse> CreateGatewayLoadBalancerOutcome;
                typedef std::future<CreateGatewayLoadBalancerOutcome> CreateGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::CreateGatewayLoadBalancerRequest&, CreateGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatewayLoadBalancerResponse> DeleteGatewayLoadBalancerOutcome;
                typedef std::future<DeleteGatewayLoadBalancerOutcome> DeleteGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeleteGatewayLoadBalancerRequest&, DeleteGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetGroupInstancesResponse> DeregisterTargetGroupInstancesOutcome;
                typedef std::future<DeregisterTargetGroupInstancesOutcome> DeregisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeregisterTargetGroupInstancesRequest&, DeregisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayLoadBalancersResponse> DescribeGatewayLoadBalancersOutcome;
                typedef std::future<DescribeGatewayLoadBalancersOutcome> DescribeGatewayLoadBalancersOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeGatewayLoadBalancersRequest&, DescribeGatewayLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstanceStatusResponse> DescribeTargetGroupInstanceStatusOutcome;
                typedef std::future<DescribeTargetGroupInstanceStatusOutcome> DescribeTargetGroupInstanceStatusOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupInstanceStatusRequest&, DescribeTargetGroupInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstancesResponse> DescribeTargetGroupInstancesOutcome;
                typedef std::future<DescribeTargetGroupInstancesOutcome> DescribeTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupInstancesRequest&, DescribeTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupListResponse> DescribeTargetGroupListOutcome;
                typedef std::future<DescribeTargetGroupListOutcome> DescribeTargetGroupListOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupListRequest&, DescribeTargetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateTargetGroupsResponse> DisassociateTargetGroupsOutcome;
                typedef std::future<DisassociateTargetGroupsOutcome> DisassociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DisassociateTargetGroupsRequest&, DisassociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateGatewayLoadBalancerResponse> InquirePriceCreateGatewayLoadBalancerOutcome;
                typedef std::future<InquirePriceCreateGatewayLoadBalancerOutcome> InquirePriceCreateGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::InquirePriceCreateGatewayLoadBalancerRequest&, InquirePriceCreateGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatewayLoadBalancerAttributeResponse> ModifyGatewayLoadBalancerAttributeOutcome;
                typedef std::future<ModifyGatewayLoadBalancerAttributeOutcome> ModifyGatewayLoadBalancerAttributeOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyGatewayLoadBalancerAttributeRequest&, ModifyGatewayLoadBalancerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayLoadBalancerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributeResponse> ModifyTargetGroupAttributeOutcome;
                typedef std::future<ModifyTargetGroupAttributeOutcome> ModifyTargetGroupAttributeOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyTargetGroupAttributeRequest&, ModifyTargetGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesWeightResponse> ModifyTargetGroupInstancesWeightOutcome;
                typedef std::future<ModifyTargetGroupInstancesWeightOutcome> ModifyTargetGroupInstancesWeightOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyTargetGroupInstancesWeightRequest&, ModifyTargetGroupInstancesWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetGroupInstancesResponse> RegisterTargetGroupInstancesOutcome;
                typedef std::future<RegisterTargetGroupInstancesOutcome> RegisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::RegisterTargetGroupInstancesRequest&, RegisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetGroupInstancesAsyncHandler;



                /**
                 *本接口(AssociateTargetGroups)用来将目标组绑定到负载均衡。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req AssociateTargetGroupsRequest
                 * @return AssociateTargetGroupsOutcome
                 */
                AssociateTargetGroupsOutcome AssociateTargetGroups(const Model::AssociateTargetGroupsRequest &request);
                void AssociateTargetGroupsAsync(const Model::AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateTargetGroupsOutcomeCallable AssociateTargetGroupsCallable(const Model::AssociateTargetGroupsRequest& request);

                /**
                 *本接口(CreateGatewayLoadBalancer)用来创建网关负载均衡实例。为了使用网关负载均衡服务，您必须购买一个或多个网关负载均衡实例。成功调用该接口后，会返回网关负载均衡实例的唯一 ID。
注意：单个账号在每个地域的默认购买配额为：10个。
本接口为异步接口，接口成功返回后，可使用 [DescribeTaskStatus](https://cloud.tencent.com/document/api/1782/111700) 接口查询负载均衡实例的状态。
                 * @param req CreateGatewayLoadBalancerRequest
                 * @return CreateGatewayLoadBalancerOutcome
                 */
                CreateGatewayLoadBalancerOutcome CreateGatewayLoadBalancer(const Model::CreateGatewayLoadBalancerRequest &request);
                void CreateGatewayLoadBalancerAsync(const Model::CreateGatewayLoadBalancerRequest& request, const CreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGatewayLoadBalancerOutcomeCallable CreateGatewayLoadBalancerCallable(const Model::CreateGatewayLoadBalancerRequest& request);

                /**
                 *创建目标组。
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *DeleteGatewayLoadBalancer 接口用以删除指定的一个或多个网关负载均衡实例。成功删除后，会把网关负载均衡实例与后端服务解绑。
本接口为异步接口，接口返回成功后，需以返回的 RequestId 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/api/1782/111700) 接口查询本次任务是否成功。
                 * @param req DeleteGatewayLoadBalancerRequest
                 * @return DeleteGatewayLoadBalancerOutcome
                 */
                DeleteGatewayLoadBalancerOutcome DeleteGatewayLoadBalancer(const Model::DeleteGatewayLoadBalancerRequest &request);
                void DeleteGatewayLoadBalancerAsync(const Model::DeleteGatewayLoadBalancerRequest& request, const DeleteGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatewayLoadBalancerOutcomeCallable DeleteGatewayLoadBalancerCallable(const Model::DeleteGatewayLoadBalancerRequest& request);

                /**
                 *删除目标组
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *从目标组中解绑服务器。
                 * @param req DeregisterTargetGroupInstancesRequest
                 * @return DeregisterTargetGroupInstancesOutcome
                 */
                DeregisterTargetGroupInstancesOutcome DeregisterTargetGroupInstances(const Model::DeregisterTargetGroupInstancesRequest &request);
                void DeregisterTargetGroupInstancesAsync(const Model::DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetGroupInstancesOutcomeCallable DeregisterTargetGroupInstancesCallable(const Model::DeregisterTargetGroupInstancesRequest& request);

                /**
                 *查询一个地域的网关负载均衡实例列表。
                 * @param req DescribeGatewayLoadBalancersRequest
                 * @return DescribeGatewayLoadBalancersOutcome
                 */
                DescribeGatewayLoadBalancersOutcome DescribeGatewayLoadBalancers(const Model::DescribeGatewayLoadBalancersRequest &request);
                void DescribeGatewayLoadBalancersAsync(const Model::DescribeGatewayLoadBalancersRequest& request, const DescribeGatewayLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayLoadBalancersOutcomeCallable DescribeGatewayLoadBalancersCallable(const Model::DescribeGatewayLoadBalancersRequest& request);

                /**
                 *查询目标组后端服务状态。目前仅支持网关负载均衡类型的目标组支持查询后端服务状态。
                 * @param req DescribeTargetGroupInstanceStatusRequest
                 * @return DescribeTargetGroupInstanceStatusOutcome
                 */
                DescribeTargetGroupInstanceStatusOutcome DescribeTargetGroupInstanceStatus(const Model::DescribeTargetGroupInstanceStatusRequest &request);
                void DescribeTargetGroupInstanceStatusAsync(const Model::DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstanceStatusOutcomeCallable DescribeTargetGroupInstanceStatusCallable(const Model::DescribeTargetGroupInstanceStatusRequest& request);

                /**
                 *获取目标组绑定的服务器信息。
                 * @param req DescribeTargetGroupInstancesRequest
                 * @return DescribeTargetGroupInstancesOutcome
                 */
                DescribeTargetGroupInstancesOutcome DescribeTargetGroupInstances(const Model::DescribeTargetGroupInstancesRequest &request);
                void DescribeTargetGroupInstancesAsync(const Model::DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstancesOutcomeCallable DescribeTargetGroupInstancesCallable(const Model::DescribeTargetGroupInstancesRequest& request);

                /**
                 *获取目标组列表
                 * @param req DescribeTargetGroupListRequest
                 * @return DescribeTargetGroupListOutcome
                 */
                DescribeTargetGroupListOutcome DescribeTargetGroupList(const Model::DescribeTargetGroupListRequest &request);
                void DescribeTargetGroupListAsync(const Model::DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupListOutcomeCallable DescribeTargetGroupListCallable(const Model::DescribeTargetGroupListRequest& request);

                /**
                 *查询目标组信息
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *本接口用于查询异步任务的执行状态，对于非查询类的接口（创建/删除负载均衡实例等），在接口调用成功后，都需要使用本接口查询任务最终是否执行成功。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *解除负载均衡和目标组的关联关系。
本接口为异步接口，本接口返回成功后需以返回的 RequestID 为入参，调用 [DescribeTaskStatus](https://cloud.tencent.com/document/product/214/30683) 接口查询本次任务是否成功。
                 * @param req DisassociateTargetGroupsRequest
                 * @return DisassociateTargetGroupsOutcome
                 */
                DisassociateTargetGroupsOutcome DisassociateTargetGroups(const Model::DisassociateTargetGroupsRequest &request);
                void DisassociateTargetGroupsAsync(const Model::DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateTargetGroupsOutcomeCallable DisassociateTargetGroupsCallable(const Model::DisassociateTargetGroupsRequest& request);

                /**
                 *InquirePriceCreateGatewayLoadBalancer接口查询创建网关负载均衡的价格。
                 * @param req InquirePriceCreateGatewayLoadBalancerRequest
                 * @return InquirePriceCreateGatewayLoadBalancerOutcome
                 */
                InquirePriceCreateGatewayLoadBalancerOutcome InquirePriceCreateGatewayLoadBalancer(const Model::InquirePriceCreateGatewayLoadBalancerRequest &request);
                void InquirePriceCreateGatewayLoadBalancerAsync(const Model::InquirePriceCreateGatewayLoadBalancerRequest& request, const InquirePriceCreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateGatewayLoadBalancerOutcomeCallable InquirePriceCreateGatewayLoadBalancerCallable(const Model::InquirePriceCreateGatewayLoadBalancerRequest& request);

                /**
                 *ModifyGatewayLoadBalancerAttribute 接口用于修改负载均衡实例的属性。支持修改负载均衡实例的名称、带宽上限。
                 * @param req ModifyGatewayLoadBalancerAttributeRequest
                 * @return ModifyGatewayLoadBalancerAttributeOutcome
                 */
                ModifyGatewayLoadBalancerAttributeOutcome ModifyGatewayLoadBalancerAttribute(const Model::ModifyGatewayLoadBalancerAttributeRequest &request);
                void ModifyGatewayLoadBalancerAttributeAsync(const Model::ModifyGatewayLoadBalancerAttributeRequest& request, const ModifyGatewayLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatewayLoadBalancerAttributeOutcomeCallable ModifyGatewayLoadBalancerAttributeCallable(const Model::ModifyGatewayLoadBalancerAttributeRequest& request);

                /**
                 *修改目标组的名称、健康探测等属性。
                 * @param req ModifyTargetGroupAttributeRequest
                 * @return ModifyTargetGroupAttributeOutcome
                 */
                ModifyTargetGroupAttributeOutcome ModifyTargetGroupAttribute(const Model::ModifyTargetGroupAttributeRequest &request);
                void ModifyTargetGroupAttributeAsync(const Model::ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributeOutcomeCallable ModifyTargetGroupAttributeCallable(const Model::ModifyTargetGroupAttributeRequest& request);

                /**
                 *修改目标组的服务器权重。
                 * @param req ModifyTargetGroupInstancesWeightRequest
                 * @return ModifyTargetGroupInstancesWeightOutcome
                 */
                ModifyTargetGroupInstancesWeightOutcome ModifyTargetGroupInstancesWeight(const Model::ModifyTargetGroupInstancesWeightRequest &request);
                void ModifyTargetGroupInstancesWeightAsync(const Model::ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesWeightOutcomeCallable ModifyTargetGroupInstancesWeightCallable(const Model::ModifyTargetGroupInstancesWeightRequest& request);

                /**
                 *注册服务器到目标组。
                 * @param req RegisterTargetGroupInstancesRequest
                 * @return RegisterTargetGroupInstancesOutcome
                 */
                RegisterTargetGroupInstancesOutcome RegisterTargetGroupInstances(const Model::RegisterTargetGroupInstancesRequest &request);
                void RegisterTargetGroupInstancesAsync(const Model::RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetGroupInstancesOutcomeCallable RegisterTargetGroupInstancesCallable(const Model::RegisterTargetGroupInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_

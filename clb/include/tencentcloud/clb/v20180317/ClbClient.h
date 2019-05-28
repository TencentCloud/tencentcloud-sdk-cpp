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

#ifndef TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_
#define TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/AutoRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/CreateRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/DeleteRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/DeregisterTargetsFromClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBByInstanceIdResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBHealthStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeClassicalLBTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeListenersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/clb/v20180317/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteRequest.h>
#include <tencentcloud/clb/v20180317/model/ManualRewriteResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyDomainResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyListenerResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyRuleResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetPortResponse.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsResponse.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBRequest.h>
#include <tencentcloud/clb/v20180317/model/RegisterTargetsWithClassicalLBResponse.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/clb/v20180317/model/SetLoadBalancerSecurityGroupsResponse.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            class ClbClient : public AbstractClient
            {
            public:
                ClbClient(const Credential &credential, const std::string &region);
                ClbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AutoRewriteResponse> AutoRewriteOutcome;
                typedef std::future<AutoRewriteOutcome> AutoRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::AutoRewriteRequest&, AutoRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AutoRewriteAsyncHandler;
                typedef Outcome<Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Error, Model::DeleteRewriteResponse> DeleteRewriteOutcome;
                typedef std::future<DeleteRewriteOutcome> DeleteRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRewriteRequest&, DeleteRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRewriteAsyncHandler;
                typedef Outcome<Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Error, Model::DeregisterTargetsResponse> DeregisterTargetsOutcome;
                typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsRequest&, DeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsAsyncHandler;
                typedef Outcome<Error, Model::DeregisterTargetsFromClassicalLBResponse> DeregisterTargetsFromClassicalLBOutcome;
                typedef std::future<DeregisterTargetsFromClassicalLBOutcome> DeregisterTargetsFromClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DeregisterTargetsFromClassicalLBRequest&, DeregisterTargetsFromClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetsFromClassicalLBAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicalLBByInstanceIdResponse> DescribeClassicalLBByInstanceIdOutcome;
                typedef std::future<DescribeClassicalLBByInstanceIdOutcome> DescribeClassicalLBByInstanceIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBByInstanceIdRequest&, DescribeClassicalLBByInstanceIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBByInstanceIdAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicalLBHealthStatusResponse> DescribeClassicalLBHealthStatusOutcome;
                typedef std::future<DescribeClassicalLBHealthStatusOutcome> DescribeClassicalLBHealthStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBHealthStatusRequest&, DescribeClassicalLBHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBHealthStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicalLBListenersResponse> DescribeClassicalLBListenersOutcome;
                typedef std::future<DescribeClassicalLBListenersOutcome> DescribeClassicalLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBListenersRequest&, DescribeClassicalLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBListenersAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicalLBTargetsResponse> DescribeClassicalLBTargetsOutcome;
                typedef std::future<DescribeClassicalLBTargetsOutcome> DescribeClassicalLBTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBTargetsRequest&, DescribeClassicalLBTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBTargetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Error, Model::DescribeRewriteResponse> DescribeRewriteOutcome;
                typedef std::future<DescribeRewriteOutcome> DescribeRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeRewriteRequest&, DescribeRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRewriteAsyncHandler;
                typedef Outcome<Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::ManualRewriteResponse> ManualRewriteOutcome;
                typedef std::future<ManualRewriteOutcome> ManualRewriteOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ManualRewriteRequest&, ManualRewriteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManualRewriteAsyncHandler;
                typedef Outcome<Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Error, Model::RegisterTargetsResponse> RegisterTargetsOutcome;
                typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsRequest&, RegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsAsyncHandler;
                typedef Outcome<Error, Model::RegisterTargetsWithClassicalLBResponse> RegisterTargetsWithClassicalLBOutcome;
                typedef std::future<RegisterTargetsWithClassicalLBOutcome> RegisterTargetsWithClassicalLBOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::RegisterTargetsWithClassicalLBRequest&, RegisterTargetsWithClassicalLBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetsWithClassicalLBAsyncHandler;
                typedef Outcome<Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;



                /**
                 *系统自动为已存在的HTTPS:443监听器创建HTTP监听器进行转发，默认使用80端口。创建成功后可以通过HTTP:80地址自动跳转为HTTPS:443地址进行访问。
                 * @param req AutoRewriteRequest
                 * @return AutoRewriteOutcome
                 */
                AutoRewriteOutcome AutoRewrite(const Model::AutoRewriteRequest &request);
                void AutoRewriteAsync(const Model::AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AutoRewriteOutcomeCallable AutoRewriteCallable(const Model::AutoRewriteRequest& request);

                /**
                 *BatchModifyTargetWeight接口用于批量修改监听器绑定的后端机器的转发权重，当前接口只支持应用型HTTP/HTTPS监听器。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *在一个负载均衡实例下创建监听器。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *CreateLoadBalancer 接口用来创建负载均衡实例。为了使用负载均衡服务，您必须要购买一个或者多个负载均衡实例。通过成功调用该接口，会返回负载均衡实例的唯一 ID。用户可以购买的负载均衡实例类型分为：公网（应用型）、内网（应用型）。可以参考产品说明的产品类型。
本接口成功返回后，可使用查询负载均衡实例列表接口DescribeLoadBalancers查询负载均衡实例的状态，以确定是否创建成功。
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *CreateRule 接口用于在一个已存在的应用型负载均衡七层监听器下创建转发规则，七层监听器中，后端机器必须绑定到规则上而非监听器上。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *本接口用来删除应用型（四层和七层）负载均衡实例下的监听器。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *DeleteLoadBalancer 接口用来删除用户指定的一个负载均衡实例。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *DeleteRewrite 接口支持删除指定转发规则之间的重定向关系。
                 * @param req DeleteRewriteRequest
                 * @return DeleteRewriteOutcome
                 */
                DeleteRewriteOutcome DeleteRewrite(const Model::DeleteRewriteRequest &request);
                void DeleteRewriteAsync(const Model::DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRewriteOutcomeCallable DeleteRewriteCallable(const Model::DeleteRewriteRequest& request);

                /**
                 *DeleteRule 接口用来删除应用型负载均衡实例七层监听器下的转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *DeregisterTargets 接口用来将一台或多台后端机器从应用型负载均衡的监听器上解绑，对于四层监听器（TCP、UDP），只需指定监听器ID即可，对于七层监听器（HTTP、HTTPS），还需通过LocationId或者Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req DeregisterTargetsRequest
                 * @return DeregisterTargetsOutcome
                 */
                DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest &request);
                void DeregisterTargetsAsync(const Model::DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const Model::DeregisterTargetsRequest& request);

                /**
                 *DeregisterTargetsFromClassicalLB用于解绑后端服务器
                 * @param req DeregisterTargetsFromClassicalLBRequest
                 * @return DeregisterTargetsFromClassicalLBOutcome
                 */
                DeregisterTargetsFromClassicalLBOutcome DeregisterTargetsFromClassicalLB(const Model::DeregisterTargetsFromClassicalLBRequest &request);
                void DeregisterTargetsFromClassicalLBAsync(const Model::DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetsFromClassicalLBOutcomeCallable DeregisterTargetsFromClassicalLBCallable(const Model::DeregisterTargetsFromClassicalLBRequest& request);

                /**
                 *DescribeClassicalLBByInstanceId用于通过后端实例ID获取传统型负载均衡ID列表
                 * @param req DescribeClassicalLBByInstanceIdRequest
                 * @return DescribeClassicalLBByInstanceIdOutcome
                 */
                DescribeClassicalLBByInstanceIdOutcome DescribeClassicalLBByInstanceId(const Model::DescribeClassicalLBByInstanceIdRequest &request);
                void DescribeClassicalLBByInstanceIdAsync(const Model::DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBByInstanceIdOutcomeCallable DescribeClassicalLBByInstanceIdCallable(const Model::DescribeClassicalLBByInstanceIdRequest& request);

                /**
                 *DescribeClassicalLBHealthStatus用于获取传统型负载均衡后端的健康状态
                 * @param req DescribeClassicalLBHealthStatusRequest
                 * @return DescribeClassicalLBHealthStatusOutcome
                 */
                DescribeClassicalLBHealthStatusOutcome DescribeClassicalLBHealthStatus(const Model::DescribeClassicalLBHealthStatusRequest &request);
                void DescribeClassicalLBHealthStatusAsync(const Model::DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBHealthStatusOutcomeCallable DescribeClassicalLBHealthStatusCallable(const Model::DescribeClassicalLBHealthStatusRequest& request);

                /**
                 *DescribeClassicalLBListeners用于获取传统型负载均衡信息
                 * @param req DescribeClassicalLBListenersRequest
                 * @return DescribeClassicalLBListenersOutcome
                 */
                DescribeClassicalLBListenersOutcome DescribeClassicalLBListeners(const Model::DescribeClassicalLBListenersRequest &request);
                void DescribeClassicalLBListenersAsync(const Model::DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBListenersOutcomeCallable DescribeClassicalLBListenersCallable(const Model::DescribeClassicalLBListenersRequest& request);

                /**
                 *DescribeClassicalLBTargets用于获取传统型负载均衡绑定的后端服务
                 * @param req DescribeClassicalLBTargetsRequest
                 * @return DescribeClassicalLBTargetsOutcome
                 */
                DescribeClassicalLBTargetsOutcome DescribeClassicalLBTargets(const Model::DescribeClassicalLBTargetsRequest &request);
                void DescribeClassicalLBTargetsAsync(const Model::DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBTargetsOutcomeCallable DescribeClassicalLBTargetsCallable(const Model::DescribeClassicalLBTargetsRequest& request);

                /**
                 *DescribeListeners 接口可根据负载均衡器 ID，监听器的协议或者端口作为过滤条件获取监听器列表。如果不指定任何过滤条件，默认返该负载均衡器下的默认数据长度（20 个）的监听器。
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *查询负载均衡实例列表

                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *DescribeRewrite 接口可根据负载均衡实例ID，查询一个负载均衡实例下转发规则的重定向关系。如果不指定监听器ID或转发规则ID，则返回该负载均衡实例下的所有重定向关系。
                 * @param req DescribeRewriteRequest
                 * @return DescribeRewriteOutcome
                 */
                DescribeRewriteOutcome DescribeRewrite(const Model::DescribeRewriteRequest &request);
                void DescribeRewriteAsync(const Model::DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRewriteOutcomeCallable DescribeRewriteCallable(const Model::DescribeRewriteRequest& request);

                /**
                 *DescribeTargetHealth 接口用来获取应用型负载均衡后端的健康检查结果。
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *DescribeTargets 接口用来查询应用型负载均衡实例的某些监听器后端绑定的机器列表。
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *本接口用于查询异步执行任务的状态，对于非查询类的接口（创建/删除负载均衡实例、监听器、规则以及绑定或解绑后端机器等），在调用成功后都需要使用本接口查询任务是否最终执行成功。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *用户手动配置原访问地址和重定向地址，系统自动将原访问地址的请求重定向至对应路径的目的地址。同一域名下可以配置多条路径作为重定向策略，实现http/https之间请求的自动跳转。
                 * @param req ManualRewriteRequest
                 * @return ManualRewriteOutcome
                 */
                ManualRewriteOutcome ManualRewrite(const Model::ManualRewriteRequest &request);
                void ManualRewriteAsync(const Model::ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManualRewriteOutcomeCallable ManualRewriteCallable(const Model::ManualRewriteRequest& request);

                /**
                 *ModifyDomain接口用来修改应用型负载均衡七层监听器下的域名。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *ModifyListener接口用来修改应用型负载均衡监听器的属性，包括监听器名称、健康检查参数、证书信息、转发策略等。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *修改负载均衡实例的属性，支持修改负载均衡实例的名称、设置负载均衡的跨域属性。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *ModifyRule 接口用来修改应用型负载均衡七层监听器下的转发规则的各项属性，包括转发路径、健康检查属性、转发策略等。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *ModifyTargetPort接口用于修改监听器绑定的后端云服务器的端口。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *ModifyTargetWeight 接口用于修改监听器绑定的后端机器的转发权重。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *RegisterTargets 接口用来将一台或多台后端机器注册到应用型负载均衡的监听器，对于四层监听器（TCP、UDP），只需指定监听器ID即可，对于七层监听器（HTTP、HTTPS），还需通过LocationId或者Domain+Url指定转发规则。
本接口为异步接口，本接口返回成功后需以返回的RequestID为入参，调用DescribeTaskStatus接口查询本次任务是否成功。
                 * @param req RegisterTargetsRequest
                 * @return RegisterTargetsOutcome
                 */
                RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest &request);
                void RegisterTargetsAsync(const Model::RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsOutcomeCallable RegisterTargetsCallable(const Model::RegisterTargetsRequest& request);

                /**
                 *RegisterTargetsWithClassicalLB用于绑定后端服务到传统型负载均衡
                 * @param req RegisterTargetsWithClassicalLBRequest
                 * @return RegisterTargetsWithClassicalLBOutcome
                 */
                RegisterTargetsWithClassicalLBOutcome RegisterTargetsWithClassicalLB(const Model::RegisterTargetsWithClassicalLBRequest &request);
                void RegisterTargetsWithClassicalLBAsync(const Model::RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetsWithClassicalLBOutcomeCallable RegisterTargetsWithClassicalLBCallable(const Model::RegisterTargetsWithClassicalLBRequest& request);

                /**
                 *SetLoadBalancerSecurityGroups 接口支持对一个负载均衡实例执行设置（绑定、解绑）安全组操作，查询一个负载均衡实例目前已绑定的安全组，可使用 DescribeLoadBalancers 接口。
绑定操作时，入参需要传入负载均衡实例要绑定的所有安全组（已绑定的+新增绑定的）。
解绑操作时，入参需要传入负载均衡实例执行解绑后所绑定的所有安全组；如果要解绑所有安全组，可传入空数组。
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_CLBCLIENT_H_

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

#ifndef TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_
#define TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/CreateEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayRoutesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayServicesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeOneCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayCanaryRuleResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayRouteRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceResponse.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitRequest.h>
#include <tencentcloud/tse/v20201207/model/ModifyCloudNativeAPIGatewayServiceRateLimitResponse.h>
#include <tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessRequest.h>
#include <tencentcloud/tse/v20201207/model/UpdateEngineInternetAccessResponse.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            class TseClient : public AbstractClient
            {
            public:
                TseClient(const Credential &credential, const std::string &region);
                TseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayCanaryRuleResponse> CreateCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayCanaryRuleOutcome> CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest&, CreateCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayRouteResponse> CreateCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayRouteOutcome> CreateCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayRouteRequest&, CreateCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayRouteRateLimitResponse> CreateCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayRouteRateLimitOutcome> CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest&, CreateCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayServiceResponse> CreateCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayServiceOutcome> CreateCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayServiceRequest&, CreateCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayServiceRateLimitResponse> CreateCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayServiceRateLimitOutcome> CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest&, CreateCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEngineResponse> CreateEngineOutcome;
                typedef std::future<CreateEngineOutcome> CreateEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateEngineRequest&, CreateEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayCanaryRuleResponse> DeleteCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayCanaryRuleOutcome> DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest&, DeleteCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayRouteResponse> DeleteCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayRouteOutcome> DeleteCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayRouteRequest&, DeleteCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayRouteRateLimitResponse> DeleteCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome> DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest&, DeleteCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayServiceResponse> DeleteCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayServiceOutcome> DeleteCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayServiceRequest&, DeleteCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayServiceRateLimitResponse> DeleteCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome> DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest&, DeleteCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEngineResponse> DeleteEngineOutcome;
                typedef std::future<DeleteEngineOutcome> DeleteEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteEngineRequest&, DeleteEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayCanaryRulesResponse> DescribeCloudNativeAPIGatewayCanaryRulesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayCanaryRulesOutcome> DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest&, DescribeCloudNativeAPIGatewayCanaryRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayNodesResponse> DescribeCloudNativeAPIGatewayNodesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayNodesOutcome> DescribeCloudNativeAPIGatewayNodesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayNodesRequest&, DescribeCloudNativeAPIGatewayNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayRouteRateLimitResponse> DescribeCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome> DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest&, DescribeCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayRoutesResponse> DescribeCloudNativeAPIGatewayRoutesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayRoutesOutcome> DescribeCloudNativeAPIGatewayRoutesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayRoutesRequest&, DescribeCloudNativeAPIGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayServiceRateLimitResponse> DescribeCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome> DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest&, DescribeCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayServicesResponse> DescribeCloudNativeAPIGatewayServicesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayServicesOutcome> DescribeCloudNativeAPIGatewayServicesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayServicesRequest&, DescribeCloudNativeAPIGatewayServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosReplicasResponse> DescribeNacosReplicasOutcome;
                typedef std::future<DescribeNacosReplicasOutcome> DescribeNacosReplicasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosReplicasRequest&, DescribeNacosReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosServerInterfacesResponse> DescribeNacosServerInterfacesOutcome;
                typedef std::future<DescribeNacosServerInterfacesOutcome> DescribeNacosServerInterfacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosServerInterfacesRequest&, DescribeNacosServerInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosServerInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOneCloudNativeAPIGatewayServiceResponse> DescribeOneCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<DescribeOneCloudNativeAPIGatewayServiceOutcome> DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeOneCloudNativeAPIGatewayServiceRequest&, DescribeOneCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOneCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSREInstanceAccessAddressResponse> DescribeSREInstanceAccessAddressOutcome;
                typedef std::future<DescribeSREInstanceAccessAddressOutcome> DescribeSREInstanceAccessAddressOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeSREInstanceAccessAddressRequest&, DescribeSREInstanceAccessAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSREInstanceAccessAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSREInstancesResponse> DescribeSREInstancesOutcome;
                typedef std::future<DescribeSREInstancesOutcome> DescribeSREInstancesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeSREInstancesRequest&, DescribeSREInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSREInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZookeeperReplicasResponse> DescribeZookeeperReplicasOutcome;
                typedef std::future<DescribeZookeeperReplicasOutcome> DescribeZookeeperReplicasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeZookeeperReplicasRequest&, DescribeZookeeperReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZookeeperReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZookeeperServerInterfacesResponse> DescribeZookeeperServerInterfacesOutcome;
                typedef std::future<DescribeZookeeperServerInterfacesOutcome> DescribeZookeeperServerInterfacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeZookeeperServerInterfacesRequest&, DescribeZookeeperServerInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZookeeperServerInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayCanaryRuleResponse> ModifyCloudNativeAPIGatewayCanaryRuleOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayCanaryRuleOutcome> ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest&, ModifyCloudNativeAPIGatewayCanaryRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayRouteResponse> ModifyCloudNativeAPIGatewayRouteOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayRouteOutcome> ModifyCloudNativeAPIGatewayRouteOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayRouteRequest&, ModifyCloudNativeAPIGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayRouteRateLimitResponse> ModifyCloudNativeAPIGatewayRouteRateLimitOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome> ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest&, ModifyCloudNativeAPIGatewayRouteRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayServiceResponse> ModifyCloudNativeAPIGatewayServiceOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayServiceOutcome> ModifyCloudNativeAPIGatewayServiceOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayServiceRequest&, ModifyCloudNativeAPIGatewayServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayServiceRateLimitResponse> ModifyCloudNativeAPIGatewayServiceRateLimitOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome> ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest&, ModifyCloudNativeAPIGatewayServiceRateLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEngineInternetAccessResponse> UpdateEngineInternetAccessOutcome;
                typedef std::future<UpdateEngineInternetAccessOutcome> UpdateEngineInternetAccessOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateEngineInternetAccessRequest&, UpdateEngineInternetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEngineInternetAccessAsyncHandler;



                /**
                 *创建云原生网关的灰度规则
                 * @param req CreateCloudNativeAPIGatewayCanaryRuleRequest
                 * @return CreateCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                CreateCloudNativeAPIGatewayCanaryRuleOutcome CreateCloudNativeAPIGatewayCanaryRule(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest &request);
                void CreateCloudNativeAPIGatewayCanaryRuleAsync(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable CreateCloudNativeAPIGatewayCanaryRuleCallable(const Model::CreateCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *创建云原生网关路由
                 * @param req CreateCloudNativeAPIGatewayRouteRequest
                 * @return CreateCloudNativeAPIGatewayRouteOutcome
                 */
                CreateCloudNativeAPIGatewayRouteOutcome CreateCloudNativeAPIGatewayRoute(const Model::CreateCloudNativeAPIGatewayRouteRequest &request);
                void CreateCloudNativeAPIGatewayRouteAsync(const Model::CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayRouteOutcomeCallable CreateCloudNativeAPIGatewayRouteCallable(const Model::CreateCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *创建云原生网关限流插件(路由)
                 * @param req CreateCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return CreateCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                CreateCloudNativeAPIGatewayRouteRateLimitOutcome CreateCloudNativeAPIGatewayRouteRateLimit(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void CreateCloudNativeAPIGatewayRouteRateLimitAsync(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable CreateCloudNativeAPIGatewayRouteRateLimitCallable(const Model::CreateCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *创建云原生网关服务
                 * @param req CreateCloudNativeAPIGatewayServiceRequest
                 * @return CreateCloudNativeAPIGatewayServiceOutcome
                 */
                CreateCloudNativeAPIGatewayServiceOutcome CreateCloudNativeAPIGatewayService(const Model::CreateCloudNativeAPIGatewayServiceRequest &request);
                void CreateCloudNativeAPIGatewayServiceAsync(const Model::CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayServiceOutcomeCallable CreateCloudNativeAPIGatewayServiceCallable(const Model::CreateCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *创建云原生网关限流插件(服务)
                 * @param req CreateCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return CreateCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                CreateCloudNativeAPIGatewayServiceRateLimitOutcome CreateCloudNativeAPIGatewayServiceRateLimit(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void CreateCloudNativeAPIGatewayServiceRateLimitAsync(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable CreateCloudNativeAPIGatewayServiceRateLimitCallable(const Model::CreateCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *创建引擎实例
                 * @param req CreateEngineRequest
                 * @return CreateEngineOutcome
                 */
                CreateEngineOutcome CreateEngine(const Model::CreateEngineRequest &request);
                void CreateEngineAsync(const Model::CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEngineOutcomeCallable CreateEngineCallable(const Model::CreateEngineRequest& request);

                /**
                 *删除云原生网关的灰度规则
                 * @param req DeleteCloudNativeAPIGatewayCanaryRuleRequest
                 * @return DeleteCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                DeleteCloudNativeAPIGatewayCanaryRuleOutcome DeleteCloudNativeAPIGatewayCanaryRule(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest &request);
                void DeleteCloudNativeAPIGatewayCanaryRuleAsync(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable DeleteCloudNativeAPIGatewayCanaryRuleCallable(const Model::DeleteCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *删除云原生网关路由
                 * @param req DeleteCloudNativeAPIGatewayRouteRequest
                 * @return DeleteCloudNativeAPIGatewayRouteOutcome
                 */
                DeleteCloudNativeAPIGatewayRouteOutcome DeleteCloudNativeAPIGatewayRoute(const Model::DeleteCloudNativeAPIGatewayRouteRequest &request);
                void DeleteCloudNativeAPIGatewayRouteAsync(const Model::DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayRouteOutcomeCallable DeleteCloudNativeAPIGatewayRouteCallable(const Model::DeleteCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *删除云原生网关的限流插件(路由)
                 * @param req DeleteCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                DeleteCloudNativeAPIGatewayRouteRateLimitOutcome DeleteCloudNativeAPIGatewayRouteRateLimit(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const Model::DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *删除云原生网关服务
                 * @param req DeleteCloudNativeAPIGatewayServiceRequest
                 * @return DeleteCloudNativeAPIGatewayServiceOutcome
                 */
                DeleteCloudNativeAPIGatewayServiceOutcome DeleteCloudNativeAPIGatewayService(const Model::DeleteCloudNativeAPIGatewayServiceRequest &request);
                void DeleteCloudNativeAPIGatewayServiceAsync(const Model::DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayServiceOutcomeCallable DeleteCloudNativeAPIGatewayServiceCallable(const Model::DeleteCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *删除云原生网关的限流插件(服务)
                 * @param req DeleteCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                DeleteCloudNativeAPIGatewayServiceRateLimitOutcome DeleteCloudNativeAPIGatewayServiceRateLimit(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const Model::DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *删除引擎实例
                 * @param req DeleteEngineRequest
                 * @return DeleteEngineOutcome
                 */
                DeleteEngineOutcome DeleteEngine(const Model::DeleteEngineRequest &request);
                void DeleteEngineAsync(const Model::DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEngineOutcomeCallable DeleteEngineCallable(const Model::DeleteEngineRequest& request);

                /**
                 *查询云原生网关灰度规则列表
                 * @param req DescribeCloudNativeAPIGatewayCanaryRulesRequest
                 * @return DescribeCloudNativeAPIGatewayCanaryRulesOutcome
                 */
                DescribeCloudNativeAPIGatewayCanaryRulesOutcome DescribeCloudNativeAPIGatewayCanaryRules(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest &request);
                void DescribeCloudNativeAPIGatewayCanaryRulesAsync(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable DescribeCloudNativeAPIGatewayCanaryRulesCallable(const Model::DescribeCloudNativeAPIGatewayCanaryRulesRequest& request);

                /**
                 *获取云原生网关节点列表
                 * @param req DescribeCloudNativeAPIGatewayNodesRequest
                 * @return DescribeCloudNativeAPIGatewayNodesOutcome
                 */
                DescribeCloudNativeAPIGatewayNodesOutcome DescribeCloudNativeAPIGatewayNodes(const Model::DescribeCloudNativeAPIGatewayNodesRequest &request);
                void DescribeCloudNativeAPIGatewayNodesAsync(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayNodesOutcomeCallable DescribeCloudNativeAPIGatewayNodesCallable(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request);

                /**
                 *查询云原生网关的限流插件(路由)
                 * @param req DescribeCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                DescribeCloudNativeAPIGatewayRouteRateLimitOutcome DescribeCloudNativeAPIGatewayRouteRateLimit(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const Model::DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *查询云原生网关路由列表
                 * @param req DescribeCloudNativeAPIGatewayRoutesRequest
                 * @return DescribeCloudNativeAPIGatewayRoutesOutcome
                 */
                DescribeCloudNativeAPIGatewayRoutesOutcome DescribeCloudNativeAPIGatewayRoutes(const Model::DescribeCloudNativeAPIGatewayRoutesRequest &request);
                void DescribeCloudNativeAPIGatewayRoutesAsync(const Model::DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayRoutesOutcomeCallable DescribeCloudNativeAPIGatewayRoutesCallable(const Model::DescribeCloudNativeAPIGatewayRoutesRequest& request);

                /**
                 *查询云原生网关的限流插件(服务)
                 * @param req DescribeCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                DescribeCloudNativeAPIGatewayServiceRateLimitOutcome DescribeCloudNativeAPIGatewayServiceRateLimit(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const Model::DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *查询云原生网关服务列表
                 * @param req DescribeCloudNativeAPIGatewayServicesRequest
                 * @return DescribeCloudNativeAPIGatewayServicesOutcome
                 */
                DescribeCloudNativeAPIGatewayServicesOutcome DescribeCloudNativeAPIGatewayServices(const Model::DescribeCloudNativeAPIGatewayServicesRequest &request);
                void DescribeCloudNativeAPIGatewayServicesAsync(const Model::DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayServicesOutcomeCallable DescribeCloudNativeAPIGatewayServicesCallable(const Model::DescribeCloudNativeAPIGatewayServicesRequest& request);

                /**
                 *查询Nacos类型引擎实例副本信息
                 * @param req DescribeNacosReplicasRequest
                 * @return DescribeNacosReplicasOutcome
                 */
                DescribeNacosReplicasOutcome DescribeNacosReplicas(const Model::DescribeNacosReplicasRequest &request);
                void DescribeNacosReplicasAsync(const Model::DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNacosReplicasOutcomeCallable DescribeNacosReplicasCallable(const Model::DescribeNacosReplicasRequest& request);

                /**
                 *查询nacos服务接口列表
                 * @param req DescribeNacosServerInterfacesRequest
                 * @return DescribeNacosServerInterfacesOutcome
                 */
                DescribeNacosServerInterfacesOutcome DescribeNacosServerInterfaces(const Model::DescribeNacosServerInterfacesRequest &request);
                void DescribeNacosServerInterfacesAsync(const Model::DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNacosServerInterfacesOutcomeCallable DescribeNacosServerInterfacesCallable(const Model::DescribeNacosServerInterfacesRequest& request);

                /**
                 *获取云原生网关服务详情
                 * @param req DescribeOneCloudNativeAPIGatewayServiceRequest
                 * @return DescribeOneCloudNativeAPIGatewayServiceOutcome
                 */
                DescribeOneCloudNativeAPIGatewayServiceOutcome DescribeOneCloudNativeAPIGatewayService(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest &request);
                void DescribeOneCloudNativeAPIGatewayServiceAsync(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable DescribeOneCloudNativeAPIGatewayServiceCallable(const Model::DescribeOneCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *查询引擎实例访问地址
                 * @param req DescribeSREInstanceAccessAddressRequest
                 * @return DescribeSREInstanceAccessAddressOutcome
                 */
                DescribeSREInstanceAccessAddressOutcome DescribeSREInstanceAccessAddress(const Model::DescribeSREInstanceAccessAddressRequest &request);
                void DescribeSREInstanceAccessAddressAsync(const Model::DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSREInstanceAccessAddressOutcomeCallable DescribeSREInstanceAccessAddressCallable(const Model::DescribeSREInstanceAccessAddressRequest& request);

                /**
                 *用于查询引擎实例列表
                 * @param req DescribeSREInstancesRequest
                 * @return DescribeSREInstancesOutcome
                 */
                DescribeSREInstancesOutcome DescribeSREInstances(const Model::DescribeSREInstancesRequest &request);
                void DescribeSREInstancesAsync(const Model::DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSREInstancesOutcomeCallable DescribeSREInstancesCallable(const Model::DescribeSREInstancesRequest& request);

                /**
                 *查询Zookeeper类型注册引擎实例副本信息
                 * @param req DescribeZookeeperReplicasRequest
                 * @return DescribeZookeeperReplicasOutcome
                 */
                DescribeZookeeperReplicasOutcome DescribeZookeeperReplicas(const Model::DescribeZookeeperReplicasRequest &request);
                void DescribeZookeeperReplicasAsync(const Model::DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZookeeperReplicasOutcomeCallable DescribeZookeeperReplicasCallable(const Model::DescribeZookeeperReplicasRequest& request);

                /**
                 *查询zookeeper服务接口列表
                 * @param req DescribeZookeeperServerInterfacesRequest
                 * @return DescribeZookeeperServerInterfacesOutcome
                 */
                DescribeZookeeperServerInterfacesOutcome DescribeZookeeperServerInterfaces(const Model::DescribeZookeeperServerInterfacesRequest &request);
                void DescribeZookeeperServerInterfacesAsync(const Model::DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZookeeperServerInterfacesOutcomeCallable DescribeZookeeperServerInterfacesCallable(const Model::DescribeZookeeperServerInterfacesRequest& request);

                /**
                 *修改云原生网关的灰度规则
                 * @param req ModifyCloudNativeAPIGatewayCanaryRuleRequest
                 * @return ModifyCloudNativeAPIGatewayCanaryRuleOutcome
                 */
                ModifyCloudNativeAPIGatewayCanaryRuleOutcome ModifyCloudNativeAPIGatewayCanaryRule(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest &request);
                void ModifyCloudNativeAPIGatewayCanaryRuleAsync(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable ModifyCloudNativeAPIGatewayCanaryRuleCallable(const Model::ModifyCloudNativeAPIGatewayCanaryRuleRequest& request);

                /**
                 *修改云原生网关路由
                 * @param req ModifyCloudNativeAPIGatewayRouteRequest
                 * @return ModifyCloudNativeAPIGatewayRouteOutcome
                 */
                ModifyCloudNativeAPIGatewayRouteOutcome ModifyCloudNativeAPIGatewayRoute(const Model::ModifyCloudNativeAPIGatewayRouteRequest &request);
                void ModifyCloudNativeAPIGatewayRouteAsync(const Model::ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayRouteOutcomeCallable ModifyCloudNativeAPIGatewayRouteCallable(const Model::ModifyCloudNativeAPIGatewayRouteRequest& request);

                /**
                 *修改云原生网关限流插件(路由)
                 * @param req ModifyCloudNativeAPIGatewayRouteRateLimitRequest
                 * @return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome
                 */
                ModifyCloudNativeAPIGatewayRouteRateLimitOutcome ModifyCloudNativeAPIGatewayRouteRateLimit(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request);
                void ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const Model::ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request);

                /**
                 *修改云原生网关服务
                 * @param req ModifyCloudNativeAPIGatewayServiceRequest
                 * @return ModifyCloudNativeAPIGatewayServiceOutcome
                 */
                ModifyCloudNativeAPIGatewayServiceOutcome ModifyCloudNativeAPIGatewayService(const Model::ModifyCloudNativeAPIGatewayServiceRequest &request);
                void ModifyCloudNativeAPIGatewayServiceAsync(const Model::ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayServiceOutcomeCallable ModifyCloudNativeAPIGatewayServiceCallable(const Model::ModifyCloudNativeAPIGatewayServiceRequest& request);

                /**
                 *修改云原生网关限流插件(服务)
                 * @param req ModifyCloudNativeAPIGatewayServiceRateLimitRequest
                 * @return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome
                 */
                ModifyCloudNativeAPIGatewayServiceRateLimitOutcome ModifyCloudNativeAPIGatewayServiceRateLimit(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request);
                void ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const Model::ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request);

                /**
                 *修改引擎公网访问配置
                 * @param req UpdateEngineInternetAccessRequest
                 * @return UpdateEngineInternetAccessOutcome
                 */
                UpdateEngineInternetAccessOutcome UpdateEngineInternetAccess(const Model::UpdateEngineInternetAccessRequest &request);
                void UpdateEngineInternetAccessAsync(const Model::UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEngineInternetAccessOutcomeCallable UpdateEngineInternetAccessCallable(const Model::UpdateEngineInternetAccessRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_TSECLIENT_H_

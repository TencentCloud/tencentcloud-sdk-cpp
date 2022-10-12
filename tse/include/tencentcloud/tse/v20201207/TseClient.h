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
#include <tencentcloud/tse/v20201207/model/CreateEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/CreateEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineRequest.h>
#include <tencentcloud/tse/v20201207/model/DeleteEngineResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayNodesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeNacosServerInterfacesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstanceAccessAddressResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeSREInstancesResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperReplicasResponse.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesRequest.h>
#include <tencentcloud/tse/v20201207/model/DescribeZookeeperServerInterfacesResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateEngineResponse> CreateEngineOutcome;
                typedef std::future<CreateEngineOutcome> CreateEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::CreateEngineRequest&, CreateEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEngineResponse> DeleteEngineOutcome;
                typedef std::future<DeleteEngineOutcome> DeleteEngineOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DeleteEngineRequest&, DeleteEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayNodesResponse> DescribeCloudNativeAPIGatewayNodesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayNodesOutcome> DescribeCloudNativeAPIGatewayNodesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeCloudNativeAPIGatewayNodesRequest&, DescribeCloudNativeAPIGatewayNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosReplicasResponse> DescribeNacosReplicasOutcome;
                typedef std::future<DescribeNacosReplicasOutcome> DescribeNacosReplicasOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosReplicasRequest&, DescribeNacosReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNacosServerInterfacesResponse> DescribeNacosServerInterfacesOutcome;
                typedef std::future<DescribeNacosServerInterfacesOutcome> DescribeNacosServerInterfacesOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::DescribeNacosServerInterfacesRequest&, DescribeNacosServerInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNacosServerInterfacesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::UpdateEngineInternetAccessResponse> UpdateEngineInternetAccessOutcome;
                typedef std::future<UpdateEngineInternetAccessOutcome> UpdateEngineInternetAccessOutcomeCallable;
                typedef std::function<void(const TseClient*, const Model::UpdateEngineInternetAccessRequest&, UpdateEngineInternetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEngineInternetAccessAsyncHandler;



                /**
                 *创建引擎实例
                 * @param req CreateEngineRequest
                 * @return CreateEngineOutcome
                 */
                CreateEngineOutcome CreateEngine(const Model::CreateEngineRequest &request);
                void CreateEngineAsync(const Model::CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEngineOutcomeCallable CreateEngineCallable(const Model::CreateEngineRequest& request);

                /**
                 *删除引擎实例
                 * @param req DeleteEngineRequest
                 * @return DeleteEngineOutcome
                 */
                DeleteEngineOutcome DeleteEngine(const Model::DeleteEngineRequest &request);
                void DeleteEngineAsync(const Model::DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEngineOutcomeCallable DeleteEngineCallable(const Model::DeleteEngineRequest& request);

                /**
                 *获取云原生网关节点列表
                 * @param req DescribeCloudNativeAPIGatewayNodesRequest
                 * @return DescribeCloudNativeAPIGatewayNodesOutcome
                 */
                DescribeCloudNativeAPIGatewayNodesOutcome DescribeCloudNativeAPIGatewayNodes(const Model::DescribeCloudNativeAPIGatewayNodesRequest &request);
                void DescribeCloudNativeAPIGatewayNodesAsync(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayNodesOutcomeCallable DescribeCloudNativeAPIGatewayNodesCallable(const Model::DescribeCloudNativeAPIGatewayNodesRequest& request);

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

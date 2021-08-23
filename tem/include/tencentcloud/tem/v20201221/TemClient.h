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

#ifndef TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenRequest.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenResponse.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenV2Request.h>
#include <tencentcloud/tem/v20201221/model/CreateCosTokenV2Response.h>
#include <tencentcloud/tem/v20201221/model/CreateNamespaceRequest.h>
#include <tencentcloud/tem/v20201221/model/CreateNamespaceResponse.h>
#include <tencentcloud/tem/v20201221/model/CreateResourceRequest.h>
#include <tencentcloud/tem/v20201221/model/CreateResourceResponse.h>
#include <tencentcloud/tem/v20201221/model/CreateServiceV2Request.h>
#include <tencentcloud/tem/v20201221/model/CreateServiceV2Response.h>
#include <tencentcloud/tem/v20201221/model/DeleteIngressRequest.h>
#include <tencentcloud/tem/v20201221/model/DeleteIngressResponse.h>
#include <tencentcloud/tem/v20201221/model/DeployServiceV2Request.h>
#include <tencentcloud/tem/v20201221/model/DeployServiceV2Response.h>
#include <tencentcloud/tem/v20201221/model/DescribeIngressRequest.h>
#include <tencentcloud/tem/v20201221/model/DescribeIngressResponse.h>
#include <tencentcloud/tem/v20201221/model/DescribeIngressesRequest.h>
#include <tencentcloud/tem/v20201221/model/DescribeIngressesResponse.h>
#include <tencentcloud/tem/v20201221/model/DescribeNamespacesRequest.h>
#include <tencentcloud/tem/v20201221/model/DescribeNamespacesResponse.h>
#include <tencentcloud/tem/v20201221/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/tem/v20201221/model/DescribeRelatedIngressesResponse.h>
#include <tencentcloud/tem/v20201221/model/DescribeServiceRunPodListV2Request.h>
#include <tencentcloud/tem/v20201221/model/DescribeServiceRunPodListV2Response.h>
#include <tencentcloud/tem/v20201221/model/GenerateDownloadUrlRequest.h>
#include <tencentcloud/tem/v20201221/model/GenerateDownloadUrlResponse.h>
#include <tencentcloud/tem/v20201221/model/ModifyIngressRequest.h>
#include <tencentcloud/tem/v20201221/model/ModifyIngressResponse.h>
#include <tencentcloud/tem/v20201221/model/ModifyNamespaceRequest.h>
#include <tencentcloud/tem/v20201221/model/ModifyNamespaceResponse.h>
#include <tencentcloud/tem/v20201221/model/ModifyServiceInfoRequest.h>
#include <tencentcloud/tem/v20201221/model/ModifyServiceInfoResponse.h>
#include <tencentcloud/tem/v20201221/model/RestartServiceRunPodRequest.h>
#include <tencentcloud/tem/v20201221/model/RestartServiceRunPodResponse.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            class TemClient : public AbstractClient
            {
            public:
                TemClient(const Credential &credential, const std::string &region);
                TemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCosTokenResponse> CreateCosTokenOutcome;
                typedef std::future<CreateCosTokenOutcome> CreateCosTokenOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenRequest&, CreateCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosTokenV2Response> CreateCosTokenV2Outcome;
                typedef std::future<CreateCosTokenV2Outcome> CreateCosTokenV2OutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenV2Request&, CreateCosTokenV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceV2Response> CreateServiceV2Outcome;
                typedef std::future<CreateServiceV2Outcome> CreateServiceV2OutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateServiceV2Request&, CreateServiceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIngressResponse> DeleteIngressOutcome;
                typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteIngressRequest&, DeleteIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployServiceV2Response> DeployServiceV2Outcome;
                typedef std::future<DeployServiceV2Outcome> DeployServiceV2OutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeployServiceV2Request&, DeployServiceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployServiceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressResponse> DescribeIngressOutcome;
                typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressRequest&, DescribeIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressesResponse> DescribeIngressesOutcome;
                typedef std::future<DescribeIngressesOutcome> DescribeIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressesRequest&, DescribeIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNamespacesResponse> DescribeNamespacesOutcome;
                typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeNamespacesRequest&, DescribeNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedIngressesResponse> DescribeRelatedIngressesOutcome;
                typedef std::future<DescribeRelatedIngressesOutcome> DescribeRelatedIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeRelatedIngressesRequest&, DescribeRelatedIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceRunPodListV2Response> DescribeServiceRunPodListV2Outcome;
                typedef std::future<DescribeServiceRunPodListV2Outcome> DescribeServiceRunPodListV2OutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeServiceRunPodListV2Request&, DescribeServiceRunPodListV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceRunPodListV2AsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateDownloadUrlResponse> GenerateDownloadUrlOutcome;
                typedef std::future<GenerateDownloadUrlOutcome> GenerateDownloadUrlOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::GenerateDownloadUrlRequest&, GenerateDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIngressResponse> ModifyIngressOutcome;
                typedef std::future<ModifyIngressOutcome> ModifyIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyIngressRequest&, ModifyIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNamespaceResponse> ModifyNamespaceOutcome;
                typedef std::future<ModifyNamespaceOutcome> ModifyNamespaceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyNamespaceRequest&, ModifyNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNamespaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceInfoResponse> ModifyServiceInfoOutcome;
                typedef std::future<ModifyServiceInfoOutcome> ModifyServiceInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyServiceInfoRequest&, ModifyServiceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartServiceRunPodResponse> RestartServiceRunPodOutcome;
                typedef std::future<RestartServiceRunPodOutcome> RestartServiceRunPodOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RestartServiceRunPodRequest&, RestartServiceRunPodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartServiceRunPodAsyncHandler;



                /**
                 *生成Cos临时秘钥
                 * @param req CreateCosTokenRequest
                 * @return CreateCosTokenOutcome
                 */
                CreateCosTokenOutcome CreateCosToken(const Model::CreateCosTokenRequest &request);
                void CreateCosTokenAsync(const Model::CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosTokenOutcomeCallable CreateCosTokenCallable(const Model::CreateCosTokenRequest& request);

                /**
                 *生成Cos临时秘钥
                 * @param req CreateCosTokenV2Request
                 * @return CreateCosTokenV2Outcome
                 */
                CreateCosTokenV2Outcome CreateCosTokenV2(const Model::CreateCosTokenV2Request &request);
                void CreateCosTokenV2Async(const Model::CreateCosTokenV2Request& request, const CreateCosTokenV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosTokenV2OutcomeCallable CreateCosTokenV2Callable(const Model::CreateCosTokenV2Request& request);

                /**
                 *创建环境
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *绑定云资源
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

                /**
                 *创建服务
                 * @param req CreateServiceV2Request
                 * @return CreateServiceV2Outcome
                 */
                CreateServiceV2Outcome CreateServiceV2(const Model::CreateServiceV2Request &request);
                void CreateServiceV2Async(const Model::CreateServiceV2Request& request, const CreateServiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceV2OutcomeCallable CreateServiceV2Callable(const Model::CreateServiceV2Request& request);

                /**
                 *删除 Ingress 规则
                 * @param req DeleteIngressRequest
                 * @return DeleteIngressOutcome
                 */
                DeleteIngressOutcome DeleteIngress(const Model::DeleteIngressRequest &request);
                void DeleteIngressAsync(const Model::DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIngressOutcomeCallable DeleteIngressCallable(const Model::DeleteIngressRequest& request);

                /**
                 *服务部署
                 * @param req DeployServiceV2Request
                 * @return DeployServiceV2Outcome
                 */
                DeployServiceV2Outcome DeployServiceV2(const Model::DeployServiceV2Request &request);
                void DeployServiceV2Async(const Model::DeployServiceV2Request& request, const DeployServiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployServiceV2OutcomeCallable DeployServiceV2Callable(const Model::DeployServiceV2Request& request);

                /**
                 *查询 Ingress 规则
                 * @param req DescribeIngressRequest
                 * @return DescribeIngressOutcome
                 */
                DescribeIngressOutcome DescribeIngress(const Model::DescribeIngressRequest &request);
                void DescribeIngressAsync(const Model::DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIngressOutcomeCallable DescribeIngressCallable(const Model::DescribeIngressRequest& request);

                /**
                 *查询 Ingress 规则列表
                 * @param req DescribeIngressesRequest
                 * @return DescribeIngressesOutcome
                 */
                DescribeIngressesOutcome DescribeIngresses(const Model::DescribeIngressesRequest &request);
                void DescribeIngressesAsync(const Model::DescribeIngressesRequest& request, const DescribeIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIngressesOutcomeCallable DescribeIngressesCallable(const Model::DescribeIngressesRequest& request);

                /**
                 *获取租户环境列表
                 * @param req DescribeNamespacesRequest
                 * @return DescribeNamespacesOutcome
                 */
                DescribeNamespacesOutcome DescribeNamespaces(const Model::DescribeNamespacesRequest &request);
                void DescribeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNamespacesOutcomeCallable DescribeNamespacesCallable(const Model::DescribeNamespacesRequest& request);

                /**
                 *查询服务关联的 Ingress 规则列表
                 * @param req DescribeRelatedIngressesRequest
                 * @return DescribeRelatedIngressesOutcome
                 */
                DescribeRelatedIngressesOutcome DescribeRelatedIngresses(const Model::DescribeRelatedIngressesRequest &request);
                void DescribeRelatedIngressesAsync(const Model::DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedIngressesOutcomeCallable DescribeRelatedIngressesCallable(const Model::DescribeRelatedIngressesRequest& request);

                /**
                 *获取服务下面运行pod列表
                 * @param req DescribeServiceRunPodListV2Request
                 * @return DescribeServiceRunPodListV2Outcome
                 */
                DescribeServiceRunPodListV2Outcome DescribeServiceRunPodListV2(const Model::DescribeServiceRunPodListV2Request &request);
                void DescribeServiceRunPodListV2Async(const Model::DescribeServiceRunPodListV2Request& request, const DescribeServiceRunPodListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceRunPodListV2OutcomeCallable DescribeServiceRunPodListV2Callable(const Model::DescribeServiceRunPodListV2Request& request);

                /**
                 *生成包预签名下载链接
                 * @param req GenerateDownloadUrlRequest
                 * @return GenerateDownloadUrlOutcome
                 */
                GenerateDownloadUrlOutcome GenerateDownloadUrl(const Model::GenerateDownloadUrlRequest &request);
                void GenerateDownloadUrlAsync(const Model::GenerateDownloadUrlRequest& request, const GenerateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateDownloadUrlOutcomeCallable GenerateDownloadUrlCallable(const Model::GenerateDownloadUrlRequest& request);

                /**
                 *创建或者更新 Ingress 规则
                 * @param req ModifyIngressRequest
                 * @return ModifyIngressOutcome
                 */
                ModifyIngressOutcome ModifyIngress(const Model::ModifyIngressRequest &request);
                void ModifyIngressAsync(const Model::ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIngressOutcomeCallable ModifyIngressCallable(const Model::ModifyIngressRequest& request);

                /**
                 *编辑环境
                 * @param req ModifyNamespaceRequest
                 * @return ModifyNamespaceOutcome
                 */
                ModifyNamespaceOutcome ModifyNamespace(const Model::ModifyNamespaceRequest &request);
                void ModifyNamespaceAsync(const Model::ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNamespaceOutcomeCallable ModifyNamespaceCallable(const Model::ModifyNamespaceRequest& request);

                /**
                 *修改服务基本信息
                 * @param req ModifyServiceInfoRequest
                 * @return ModifyServiceInfoOutcome
                 */
                ModifyServiceInfoOutcome ModifyServiceInfo(const Model::ModifyServiceInfoRequest &request);
                void ModifyServiceInfoAsync(const Model::ModifyServiceInfoRequest& request, const ModifyServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceInfoOutcomeCallable ModifyServiceInfoCallable(const Model::ModifyServiceInfoRequest& request);

                /**
                 *重启实例
                 * @param req RestartServiceRunPodRequest
                 * @return RestartServiceRunPodOutcome
                 */
                RestartServiceRunPodOutcome RestartServiceRunPod(const Model::RestartServiceRunPodRequest &request);
                void RestartServiceRunPodAsync(const Model::RestartServiceRunPodRequest& request, const RestartServiceRunPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartServiceRunPodOutcomeCallable RestartServiceRunPodCallable(const Model::RestartServiceRunPodRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_TEMCLIENT_H_

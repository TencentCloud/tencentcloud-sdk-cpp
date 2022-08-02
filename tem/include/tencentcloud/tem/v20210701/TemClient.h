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

#ifndef TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_
#define TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateCosTokenResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceRequest.h>
#include <tencentcloud/tem/v20210701/model/CreateResourceResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DeleteIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/DeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationInfoRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationInfoResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationPodsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsStatusRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeApplicationsStatusResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeDeployApplicationDetailRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeDeployApplicationDetailResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentStatusRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentStatusResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesResponse.h>
#include <tencentcloud/tem/v20210701/model/DestroyEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/DestroyEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlRequest.h>
#include <tencentcloud/tem/v20210701/model/GenerateApplicationPackageDownloadUrlResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationInfoResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationReplicasRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyApplicationReplicasResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyEnvironmentResponse.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressRequest.h>
#include <tencentcloud/tem/v20210701/model/ModifyIngressResponse.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationPodRequest.h>
#include <tencentcloud/tem/v20210701/model/RestartApplicationPodResponse.h>
#include <tencentcloud/tem/v20210701/model/ResumeDeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/ResumeDeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/RevertDeployApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/RevertDeployApplicationResponse.h>
#include <tencentcloud/tem/v20210701/model/RollingUpdateApplicationByVersionRequest.h>
#include <tencentcloud/tem/v20210701/model/RollingUpdateApplicationByVersionResponse.h>
#include <tencentcloud/tem/v20210701/model/StopApplicationRequest.h>
#include <tencentcloud/tem/v20210701/model/StopApplicationResponse.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            class TemClient : public AbstractClient
            {
            public:
                TemClient(const Credential &credential, const std::string &region);
                TemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCosTokenResponse> CreateCosTokenOutcome;
                typedef std::future<CreateCosTokenOutcome> CreateCosTokenOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateCosTokenRequest&, CreateCosTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCosTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvironmentResponse> CreateEnvironmentOutcome;
                typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateEnvironmentRequest&, CreateEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourceResponse> CreateResourceOutcome;
                typedef std::future<CreateResourceOutcome> CreateResourceOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::CreateResourceRequest&, CreateResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIngressResponse> DeleteIngressOutcome;
                typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeleteIngressRequest&, DeleteIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployApplicationResponse> DeployApplicationOutcome;
                typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DeployApplicationRequest&, DeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationInfoResponse> DescribeApplicationInfoOutcome;
                typedef std::future<DescribeApplicationInfoOutcome> DescribeApplicationInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationInfoRequest&, DescribeApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationPodsResponse> DescribeApplicationPodsOutcome;
                typedef std::future<DescribeApplicationPodsOutcome> DescribeApplicationPodsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationPodsRequest&, DescribeApplicationPodsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationPodsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsResponse> DescribeApplicationsOutcome;
                typedef std::future<DescribeApplicationsOutcome> DescribeApplicationsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationsRequest&, DescribeApplicationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationsStatusResponse> DescribeApplicationsStatusOutcome;
                typedef std::future<DescribeApplicationsStatusOutcome> DescribeApplicationsStatusOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeApplicationsStatusRequest&, DescribeApplicationsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployApplicationDetailResponse> DescribeDeployApplicationDetailOutcome;
                typedef std::future<DescribeDeployApplicationDetailOutcome> DescribeDeployApplicationDetailOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeDeployApplicationDetailRequest&, DescribeDeployApplicationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployApplicationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentStatusResponse> DescribeEnvironmentStatusOutcome;
                typedef std::future<DescribeEnvironmentStatusOutcome> DescribeEnvironmentStatusOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentStatusRequest&, DescribeEnvironmentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressResponse> DescribeIngressOutcome;
                typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressRequest&, DescribeIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIngressesResponse> DescribeIngressesOutcome;
                typedef std::future<DescribeIngressesOutcome> DescribeIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeIngressesRequest&, DescribeIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRelatedIngressesResponse> DescribeRelatedIngressesOutcome;
                typedef std::future<DescribeRelatedIngressesOutcome> DescribeRelatedIngressesOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DescribeRelatedIngressesRequest&, DescribeRelatedIngressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRelatedIngressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyEnvironmentResponse> DestroyEnvironmentOutcome;
                typedef std::future<DestroyEnvironmentOutcome> DestroyEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::DestroyEnvironmentRequest&, DestroyEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateApplicationPackageDownloadUrlResponse> GenerateApplicationPackageDownloadUrlOutcome;
                typedef std::future<GenerateApplicationPackageDownloadUrlOutcome> GenerateApplicationPackageDownloadUrlOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::GenerateApplicationPackageDownloadUrlRequest&, GenerateApplicationPackageDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateApplicationPackageDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationInfoResponse> ModifyApplicationInfoOutcome;
                typedef std::future<ModifyApplicationInfoOutcome> ModifyApplicationInfoOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationInfoRequest&, ModifyApplicationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationReplicasResponse> ModifyApplicationReplicasOutcome;
                typedef std::future<ModifyApplicationReplicasOutcome> ModifyApplicationReplicasOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyApplicationReplicasRequest&, ModifyApplicationReplicasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationReplicasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvironmentResponse> ModifyEnvironmentOutcome;
                typedef std::future<ModifyEnvironmentOutcome> ModifyEnvironmentOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyEnvironmentRequest&, ModifyEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvironmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIngressResponse> ModifyIngressOutcome;
                typedef std::future<ModifyIngressOutcome> ModifyIngressOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ModifyIngressRequest&, ModifyIngressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIngressAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartApplicationResponse> RestartApplicationOutcome;
                typedef std::future<RestartApplicationOutcome> RestartApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RestartApplicationRequest&, RestartApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartApplicationPodResponse> RestartApplicationPodOutcome;
                typedef std::future<RestartApplicationPodOutcome> RestartApplicationPodOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RestartApplicationPodRequest&, RestartApplicationPodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationPodAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeDeployApplicationResponse> ResumeDeployApplicationOutcome;
                typedef std::future<ResumeDeployApplicationOutcome> ResumeDeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::ResumeDeployApplicationRequest&, ResumeDeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDeployApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RevertDeployApplicationResponse> RevertDeployApplicationOutcome;
                typedef std::future<RevertDeployApplicationOutcome> RevertDeployApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RevertDeployApplicationRequest&, RevertDeployApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertDeployApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RollingUpdateApplicationByVersionResponse> RollingUpdateApplicationByVersionOutcome;
                typedef std::future<RollingUpdateApplicationByVersionOutcome> RollingUpdateApplicationByVersionOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::RollingUpdateApplicationByVersionRequest&, RollingUpdateApplicationByVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollingUpdateApplicationByVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::StopApplicationResponse> StopApplicationOutcome;
                typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
                typedef std::function<void(const TemClient*, const Model::StopApplicationRequest&, StopApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopApplicationAsyncHandler;



                /**
                 *创建应用
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *生成Cos临时秘钥
                 * @param req CreateCosTokenRequest
                 * @return CreateCosTokenOutcome
                 */
                CreateCosTokenOutcome CreateCosToken(const Model::CreateCosTokenRequest &request);
                void CreateCosTokenAsync(const Model::CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCosTokenOutcomeCallable CreateCosTokenCallable(const Model::CreateCosTokenRequest& request);

                /**
                 *创建环境
                 * @param req CreateEnvironmentRequest
                 * @return CreateEnvironmentOutcome
                 */
                CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest &request);
                void CreateEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const Model::CreateEnvironmentRequest& request);

                /**
                 *绑定云资源
                 * @param req CreateResourceRequest
                 * @return CreateResourceOutcome
                 */
                CreateResourceOutcome CreateResource(const Model::CreateResourceRequest &request);
                void CreateResourceAsync(const Model::CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourceOutcomeCallable CreateResourceCallable(const Model::CreateResourceRequest& request);

                /**
                 *服务删除
  - 停止当前运行服务
  - 删除服务相关资源
  - 删除服务
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *删除 Ingress 规则
                 * @param req DeleteIngressRequest
                 * @return DeleteIngressOutcome
                 */
                DeleteIngressOutcome DeleteIngress(const Model::DeleteIngressRequest &request);
                void DeleteIngressAsync(const Model::DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIngressOutcomeCallable DeleteIngressCallable(const Model::DeleteIngressRequest& request);

                /**
                 *应用部署
                 * @param req DeployApplicationRequest
                 * @return DeployApplicationOutcome
                 */
                DeployApplicationOutcome DeployApplication(const Model::DeployApplicationRequest &request);
                void DeployApplicationAsync(const Model::DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployApplicationOutcomeCallable DeployApplicationCallable(const Model::DeployApplicationRequest& request);

                /**
                 *服务基本信息查看
                 * @param req DescribeApplicationInfoRequest
                 * @return DescribeApplicationInfoOutcome
                 */
                DescribeApplicationInfoOutcome DescribeApplicationInfo(const Model::DescribeApplicationInfoRequest &request);
                void DescribeApplicationInfoAsync(const Model::DescribeApplicationInfoRequest& request, const DescribeApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationInfoOutcomeCallable DescribeApplicationInfoCallable(const Model::DescribeApplicationInfoRequest& request);

                /**
                 *获取应用实例列表
                 * @param req DescribeApplicationPodsRequest
                 * @return DescribeApplicationPodsOutcome
                 */
                DescribeApplicationPodsOutcome DescribeApplicationPods(const Model::DescribeApplicationPodsRequest &request);
                void DescribeApplicationPodsAsync(const Model::DescribeApplicationPodsRequest& request, const DescribeApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationPodsOutcomeCallable DescribeApplicationPodsCallable(const Model::DescribeApplicationPodsRequest& request);

                /**
                 *获取运行服务列表
                 * @param req DescribeApplicationsRequest
                 * @return DescribeApplicationsOutcome
                 */
                DescribeApplicationsOutcome DescribeApplications(const Model::DescribeApplicationsRequest &request);
                void DescribeApplicationsAsync(const Model::DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsOutcomeCallable DescribeApplicationsCallable(const Model::DescribeApplicationsRequest& request);

                /**
                 *单环境下所有应用状态查看
                 * @param req DescribeApplicationsStatusRequest
                 * @return DescribeApplicationsStatusOutcome
                 */
                DescribeApplicationsStatusOutcome DescribeApplicationsStatus(const Model::DescribeApplicationsStatusRequest &request);
                void DescribeApplicationsStatusAsync(const Model::DescribeApplicationsStatusRequest& request, const DescribeApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationsStatusOutcomeCallable DescribeApplicationsStatusCallable(const Model::DescribeApplicationsStatusRequest& request);

                /**
                 *获取分批发布详情
                 * @param req DescribeDeployApplicationDetailRequest
                 * @return DescribeDeployApplicationDetailOutcome
                 */
                DescribeDeployApplicationDetailOutcome DescribeDeployApplicationDetail(const Model::DescribeDeployApplicationDetailRequest &request);
                void DescribeDeployApplicationDetailAsync(const Model::DescribeDeployApplicationDetailRequest& request, const DescribeDeployApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployApplicationDetailOutcomeCallable DescribeDeployApplicationDetailCallable(const Model::DescribeDeployApplicationDetailRequest& request);

                /**
                 *获取环境状态
                 * @param req DescribeEnvironmentStatusRequest
                 * @return DescribeEnvironmentStatusOutcome
                 */
                DescribeEnvironmentStatusOutcome DescribeEnvironmentStatus(const Model::DescribeEnvironmentStatusRequest &request);
                void DescribeEnvironmentStatusAsync(const Model::DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentStatusOutcomeCallable DescribeEnvironmentStatusCallable(const Model::DescribeEnvironmentStatusRequest& request);

                /**
                 *获取租户环境列表
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

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
                 *查询应用关联的 Ingress 规则列表
                 * @param req DescribeRelatedIngressesRequest
                 * @return DescribeRelatedIngressesOutcome
                 */
                DescribeRelatedIngressesOutcome DescribeRelatedIngresses(const Model::DescribeRelatedIngressesRequest &request);
                void DescribeRelatedIngressesAsync(const Model::DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRelatedIngressesOutcomeCallable DescribeRelatedIngressesCallable(const Model::DescribeRelatedIngressesRequest& request);

                /**
                 *销毁命名空间
                 * @param req DestroyEnvironmentRequest
                 * @return DestroyEnvironmentOutcome
                 */
                DestroyEnvironmentOutcome DestroyEnvironment(const Model::DestroyEnvironmentRequest &request);
                void DestroyEnvironmentAsync(const Model::DestroyEnvironmentRequest& request, const DestroyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyEnvironmentOutcomeCallable DestroyEnvironmentCallable(const Model::DestroyEnvironmentRequest& request);

                /**
                 *生成应用程序包预签名下载链接
                 * @param req GenerateApplicationPackageDownloadUrlRequest
                 * @return GenerateApplicationPackageDownloadUrlOutcome
                 */
                GenerateApplicationPackageDownloadUrlOutcome GenerateApplicationPackageDownloadUrl(const Model::GenerateApplicationPackageDownloadUrlRequest &request);
                void GenerateApplicationPackageDownloadUrlAsync(const Model::GenerateApplicationPackageDownloadUrlRequest& request, const GenerateApplicationPackageDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateApplicationPackageDownloadUrlOutcomeCallable GenerateApplicationPackageDownloadUrlCallable(const Model::GenerateApplicationPackageDownloadUrlRequest& request);

                /**
                 *修改应用基本信息
                 * @param req ModifyApplicationInfoRequest
                 * @return ModifyApplicationInfoOutcome
                 */
                ModifyApplicationInfoOutcome ModifyApplicationInfo(const Model::ModifyApplicationInfoRequest &request);
                void ModifyApplicationInfoAsync(const Model::ModifyApplicationInfoRequest& request, const ModifyApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationInfoOutcomeCallable ModifyApplicationInfoCallable(const Model::ModifyApplicationInfoRequest& request);

                /**
                 *修改应用实例数量
                 * @param req ModifyApplicationReplicasRequest
                 * @return ModifyApplicationReplicasOutcome
                 */
                ModifyApplicationReplicasOutcome ModifyApplicationReplicas(const Model::ModifyApplicationReplicasRequest &request);
                void ModifyApplicationReplicasAsync(const Model::ModifyApplicationReplicasRequest& request, const ModifyApplicationReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationReplicasOutcomeCallable ModifyApplicationReplicasCallable(const Model::ModifyApplicationReplicasRequest& request);

                /**
                 *编辑环境
                 * @param req ModifyEnvironmentRequest
                 * @return ModifyEnvironmentOutcome
                 */
                ModifyEnvironmentOutcome ModifyEnvironment(const Model::ModifyEnvironmentRequest &request);
                void ModifyEnvironmentAsync(const Model::ModifyEnvironmentRequest& request, const ModifyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvironmentOutcomeCallable ModifyEnvironmentCallable(const Model::ModifyEnvironmentRequest& request);

                /**
                 *创建或者更新 Ingress 规则
                 * @param req ModifyIngressRequest
                 * @return ModifyIngressOutcome
                 */
                ModifyIngressOutcome ModifyIngress(const Model::ModifyIngressRequest &request);
                void ModifyIngressAsync(const Model::ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIngressOutcomeCallable ModifyIngressCallable(const Model::ModifyIngressRequest& request);

                /**
                 *服务重启
                 * @param req RestartApplicationRequest
                 * @return RestartApplicationOutcome
                 */
                RestartApplicationOutcome RestartApplication(const Model::RestartApplicationRequest &request);
                void RestartApplicationAsync(const Model::RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartApplicationOutcomeCallable RestartApplicationCallable(const Model::RestartApplicationRequest& request);

                /**
                 *重启应用实例
                 * @param req RestartApplicationPodRequest
                 * @return RestartApplicationPodOutcome
                 */
                RestartApplicationPodOutcome RestartApplicationPod(const Model::RestartApplicationPodRequest &request);
                void RestartApplicationPodAsync(const Model::RestartApplicationPodRequest& request, const RestartApplicationPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartApplicationPodOutcomeCallable RestartApplicationPodCallable(const Model::RestartApplicationPodRequest& request);

                /**
                 *开始下一批次发布
                 * @param req ResumeDeployApplicationRequest
                 * @return ResumeDeployApplicationOutcome
                 */
                ResumeDeployApplicationOutcome ResumeDeployApplication(const Model::ResumeDeployApplicationRequest &request);
                void ResumeDeployApplicationAsync(const Model::ResumeDeployApplicationRequest& request, const ResumeDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeDeployApplicationOutcomeCallable ResumeDeployApplicationCallable(const Model::ResumeDeployApplicationRequest& request);

                /**
                 *回滚分批发布
                 * @param req RevertDeployApplicationRequest
                 * @return RevertDeployApplicationOutcome
                 */
                RevertDeployApplicationOutcome RevertDeployApplication(const Model::RevertDeployApplicationRequest &request);
                void RevertDeployApplicationAsync(const Model::RevertDeployApplicationRequest& request, const RevertDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevertDeployApplicationOutcomeCallable RevertDeployApplicationCallable(const Model::RevertDeployApplicationRequest& request);

                /**
                 *更新应用部署版本
                 * @param req RollingUpdateApplicationByVersionRequest
                 * @return RollingUpdateApplicationByVersionOutcome
                 */
                RollingUpdateApplicationByVersionOutcome RollingUpdateApplicationByVersion(const Model::RollingUpdateApplicationByVersionRequest &request);
                void RollingUpdateApplicationByVersionAsync(const Model::RollingUpdateApplicationByVersionRequest& request, const RollingUpdateApplicationByVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollingUpdateApplicationByVersionOutcomeCallable RollingUpdateApplicationByVersionCallable(const Model::RollingUpdateApplicationByVersionRequest& request);

                /**
                 *服务停止
                 * @param req StopApplicationRequest
                 * @return StopApplicationOutcome
                 */
                StopApplicationOutcome StopApplication(const Model::StopApplicationRequest &request);
                void StopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopApplicationOutcomeCallable StopApplicationCallable(const Model::StopApplicationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_TEMCLIENT_H_

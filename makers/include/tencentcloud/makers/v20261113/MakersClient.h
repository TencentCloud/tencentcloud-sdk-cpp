/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MAKERSCLIENT_H_
#define TENCENTCLOUD_MAKERS_V20261113_MAKERSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/makers/v20261113/model/BlockProjectRequest.h>
#include <tencentcloud/makers/v20261113/model/BlockProjectResponse.h>
#include <tencentcloud/makers/v20261113/model/CreateDeploymentRequest.h>
#include <tencentcloud/makers/v20261113/model/CreateDeploymentResponse.h>
#include <tencentcloud/makers/v20261113/model/CreateProjectRequest.h>
#include <tencentcloud/makers/v20261113/model/CreateProjectResponse.h>
#include <tencentcloud/makers/v20261113/model/CreateZoneCustomDomainRequest.h>
#include <tencentcloud/makers/v20261113/model/CreateZoneCustomDomainResponse.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectRequest.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectResponse.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectCustomDomainsRequest.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectCustomDomainsResponse.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectEnvsRequest.h>
#include <tencentcloud/makers/v20261113/model/DeleteProjectEnvsResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeCosTempTokenRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeCosTempTokenResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeDeploymentLogRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeDeploymentLogResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeDeploymentsRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeDeploymentsResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeProjectEnvsRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeProjectEnvsResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeProjectsRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeProjectsResponse.h>
#include <tencentcloud/makers/v20261113/model/DescribeZoneCustomDomainsRequest.h>
#include <tencentcloud/makers/v20261113/model/DescribeZoneCustomDomainsResponse.h>
#include <tencentcloud/makers/v20261113/model/ModifyProjectRequest.h>
#include <tencentcloud/makers/v20261113/model/ModifyProjectResponse.h>
#include <tencentcloud/makers/v20261113/model/ModifyProjectEnvsRequest.h>
#include <tencentcloud/makers/v20261113/model/ModifyProjectEnvsResponse.h>
#include <tencentcloud/makers/v20261113/model/ModifyZoneCustomDomainEnvRequest.h>
#include <tencentcloud/makers/v20261113/model/ModifyZoneCustomDomainEnvResponse.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            class MakersClient : public AbstractClient
            {
            public:
                MakersClient(const Credential &credential, const std::string &region);
                MakersClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BlockProjectResponse> BlockProjectOutcome;
                typedef std::future<BlockProjectOutcome> BlockProjectOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::BlockProjectRequest&, BlockProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BlockProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeploymentResponse> CreateDeploymentOutcome;
                typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::CreateDeploymentRequest&, CreateDeploymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeploymentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneCustomDomainResponse> CreateZoneCustomDomainOutcome;
                typedef std::future<CreateZoneCustomDomainOutcome> CreateZoneCustomDomainOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::CreateZoneCustomDomainRequest&, CreateZoneCustomDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneCustomDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectCustomDomainsResponse> DeleteProjectCustomDomainsOutcome;
                typedef std::future<DeleteProjectCustomDomainsOutcome> DeleteProjectCustomDomainsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DeleteProjectCustomDomainsRequest&, DeleteProjectCustomDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectCustomDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectEnvsResponse> DeleteProjectEnvsOutcome;
                typedef std::future<DeleteProjectEnvsOutcome> DeleteProjectEnvsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DeleteProjectEnvsRequest&, DeleteProjectEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCosTempTokenResponse> DescribeCosTempTokenOutcome;
                typedef std::future<DescribeCosTempTokenOutcome> DescribeCosTempTokenOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeCosTempTokenRequest&, DescribeCosTempTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCosTempTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeploymentLogResponse> DescribeDeploymentLogOutcome;
                typedef std::future<DescribeDeploymentLogOutcome> DescribeDeploymentLogOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeDeploymentLogRequest&, DescribeDeploymentLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeploymentsResponse> DescribeDeploymentsOutcome;
                typedef std::future<DescribeDeploymentsOutcome> DescribeDeploymentsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeDeploymentsRequest&, DescribeDeploymentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectEnvsResponse> DescribeProjectEnvsOutcome;
                typedef std::future<DescribeProjectEnvsOutcome> DescribeProjectEnvsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeProjectEnvsRequest&, DescribeProjectEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneCustomDomainsResponse> DescribeZoneCustomDomainsOutcome;
                typedef std::future<DescribeZoneCustomDomainsOutcome> DescribeZoneCustomDomainsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::DescribeZoneCustomDomainsRequest&, DescribeZoneCustomDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneCustomDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectEnvsResponse> ModifyProjectEnvsOutcome;
                typedef std::future<ModifyProjectEnvsOutcome> ModifyProjectEnvsOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::ModifyProjectEnvsRequest&, ModifyProjectEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneCustomDomainEnvResponse> ModifyZoneCustomDomainEnvOutcome;
                typedef std::future<ModifyZoneCustomDomainEnvOutcome> ModifyZoneCustomDomainEnvOutcomeCallable;
                typedef std::function<void(const MakersClient*, const Model::ModifyZoneCustomDomainEnvRequest&, ModifyZoneCustomDomainEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneCustomDomainEnvAsyncHandler;



                /**
                 *封禁或解封当前账号指定站点下的项目及域名。Status 支持 Ban或Normal。
                 * @param req BlockProjectRequest
                 * @return BlockProjectOutcome
                 */
                BlockProjectOutcome BlockProject(const Model::BlockProjectRequest &request);
                void BlockProjectAsync(const Model::BlockProjectRequest& request, const BlockProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BlockProjectOutcomeCallable BlockProjectCallable(const Model::BlockProjectRequest& request);

                /**
                 *创建部署。上传制品时 ViaMeta 和 Provider 传 Upload，TempBucketPath 传已上传对象的路径。
                 * @param req CreateDeploymentRequest
                 * @return CreateDeploymentOutcome
                 */
                CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest &request);
                void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request);

                /**
                 *创建项目。上传制品时 Provider 传 Upload，Channel 传 Custom。
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *把一个自定义域名绑到项目的指定环境。
                 * @param req CreateZoneCustomDomainRequest
                 * @return CreateZoneCustomDomainOutcome
                 */
                CreateZoneCustomDomainOutcome CreateZoneCustomDomain(const Model::CreateZoneCustomDomainRequest &request);
                void CreateZoneCustomDomainAsync(const Model::CreateZoneCustomDomainRequest& request, const CreateZoneCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneCustomDomainOutcomeCallable CreateZoneCustomDomainCallable(const Model::CreateZoneCustomDomainRequest& request);

                /**
                 *删除项目。进行中的构建会阻止删除。
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *按域名解绑项目的自定义域名。
                 * @param req DeleteProjectCustomDomainsRequest
                 * @return DeleteProjectCustomDomainsOutcome
                 */
                DeleteProjectCustomDomainsOutcome DeleteProjectCustomDomains(const Model::DeleteProjectCustomDomainsRequest &request);
                void DeleteProjectCustomDomainsAsync(const Model::DeleteProjectCustomDomainsRequest& request, const DeleteProjectCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectCustomDomainsOutcomeCallable DeleteProjectCustomDomainsCallable(const Model::DeleteProjectCustomDomainsRequest& request);

                /**
                 *按 EnvVars 删除环境变量。按 Id 或 Key 匹配。Value 必填但不参与匹配，可传任意值。
                 * @param req DeleteProjectEnvsRequest
                 * @return DeleteProjectEnvsOutcome
                 */
                DeleteProjectEnvsOutcome DeleteProjectEnvs(const Model::DeleteProjectEnvsRequest &request);
                void DeleteProjectEnvsAsync(const Model::DeleteProjectEnvsRequest& request, const DeleteProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectEnvsOutcomeCallable DeleteProjectEnvsCallable(const Model::DeleteProjectEnvsRequest& request);

                /**
                 *获取上传制品用的 COS 桶、地域、目标路径和临时密钥。
                 * @param req DescribeCosTempTokenRequest
                 * @return DescribeCosTempTokenOutcome
                 */
                DescribeCosTempTokenOutcome DescribeCosTempToken(const Model::DescribeCosTempTokenRequest &request);
                void DescribeCosTempTokenAsync(const Model::DescribeCosTempTokenRequest& request, const DescribeCosTempTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCosTempTokenOutcomeCallable DescribeCosTempTokenCallable(const Model::DescribeCosTempTokenRequest& request);

                /**
                 *返回构建日志的访问地址。
                 * @param req DescribeDeploymentLogRequest
                 * @return DescribeDeploymentLogOutcome
                 */
                DescribeDeploymentLogOutcome DescribeDeploymentLog(const Model::DescribeDeploymentLogRequest &request);
                void DescribeDeploymentLogAsync(const Model::DescribeDeploymentLogRequest& request, const DescribeDeploymentLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeploymentLogOutcomeCallable DescribeDeploymentLogCallable(const Model::DescribeDeploymentLogRequest& request);

                /**
                 *查询项目的部署记录。
                 * @param req DescribeDeploymentsRequest
                 * @return DescribeDeploymentsOutcome
                 */
                DescribeDeploymentsOutcome DescribeDeployments(const Model::DescribeDeploymentsRequest &request);
                void DescribeDeploymentsAsync(const Model::DescribeDeploymentsRequest& request, const DescribeDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeploymentsOutcomeCallable DescribeDeploymentsCallable(const Model::DescribeDeploymentsRequest& request);

                /**
                 *查询项目下的环境，含内置 Production、Preview 和自定义环境。
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *查询项目环境变量。不传 Env 时返回全部作用域。
                 * @param req DescribeProjectEnvsRequest
                 * @return DescribeProjectEnvsOutcome
                 */
                DescribeProjectEnvsOutcome DescribeProjectEnvs(const Model::DescribeProjectEnvsRequest &request);
                void DescribeProjectEnvsAsync(const Model::DescribeProjectEnvsRequest& request, const DescribeProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectEnvsOutcomeCallable DescribeProjectEnvsCallable(const Model::DescribeProjectEnvsRequest& request);

                /**
                 *分页查询站点下的项目。Offset 是页码偏移，后端按 Offset * Limit 跳过。
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *查询项目在站点下的自定义域名和预设域名。
                 * @param req DescribeZoneCustomDomainsRequest
                 * @return DescribeZoneCustomDomainsOutcome
                 */
                DescribeZoneCustomDomainsOutcome DescribeZoneCustomDomains(const Model::DescribeZoneCustomDomainsRequest &request);
                void DescribeZoneCustomDomainsAsync(const Model::DescribeZoneCustomDomainsRequest& request, const DescribeZoneCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneCustomDomainsOutcomeCallable DescribeZoneCustomDomainsCallable(const Model::DescribeZoneCustomDomainsRequest& request);

                /**
                 *修改项目名称和构建配置。未传的字段保持原值。
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *按传入的 EnvVars 写入环境变量。
                 * @param req ModifyProjectEnvsRequest
                 * @return ModifyProjectEnvsOutcome
                 */
                ModifyProjectEnvsOutcome ModifyProjectEnvs(const Model::ModifyProjectEnvsRequest &request);
                void ModifyProjectEnvsAsync(const Model::ModifyProjectEnvsRequest& request, const ModifyProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectEnvsOutcomeCallable ModifyProjectEnvsCallable(const Model::ModifyProjectEnvsRequest& request);

                /**
                 *把已绑定的自定义域名切到另一个环境。
                 * @param req ModifyZoneCustomDomainEnvRequest
                 * @return ModifyZoneCustomDomainEnvOutcome
                 */
                ModifyZoneCustomDomainEnvOutcome ModifyZoneCustomDomainEnv(const Model::ModifyZoneCustomDomainEnvRequest &request);
                void ModifyZoneCustomDomainEnvAsync(const Model::ModifyZoneCustomDomainEnvRequest& request, const ModifyZoneCustomDomainEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneCustomDomainEnvOutcomeCallable ModifyZoneCustomDomainEnvCallable(const Model::ModifyZoneCustomDomainEnvRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MAKERSCLIENT_H_

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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_CLOUDSTUDIOCLIENT_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_CLOUDSTUDIOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateCustomizeTemplatesRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateCustomizeTemplatesResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByAgentRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByAgentResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByTemplateRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByTemplateResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByVersionControlRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/CreateWorkspaceByVersionControlResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DeleteCustomizeTemplatesByIdRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DeleteCustomizeTemplatesByIdResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesByIdRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesByIdResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesPresetsRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeCustomizeTemplatesPresetsResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceEnvListRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceEnvListResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceNameExistRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceNameExistResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusListRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/DescribeWorkspaceStatusListResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplateVersionControlRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplateVersionControlResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesFullByIdRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesFullByIdResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesPartByIdRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyCustomizeTemplatesPartByIdResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyWorkspaceAttributesRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/ModifyWorkspaceAttributesResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/RecoverWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/RecoverWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/RemoveWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/RemoveWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/RunWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/RunWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20210524/model/StopWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20210524/model/StopWorkspaceResponse.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            class CloudstudioClient : public AbstractClient
            {
            public:
                CloudstudioClient(const Credential &credential, const std::string &region);
                CloudstudioClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCustomizeTemplatesResponse> CreateCustomizeTemplatesOutcome;
                typedef std::future<CreateCustomizeTemplatesOutcome> CreateCustomizeTemplatesOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateCustomizeTemplatesRequest&, CreateCustomizeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomizeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceByAgentResponse> CreateWorkspaceByAgentOutcome;
                typedef std::future<CreateWorkspaceByAgentOutcome> CreateWorkspaceByAgentOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateWorkspaceByAgentRequest&, CreateWorkspaceByAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceByAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceByTemplateResponse> CreateWorkspaceByTemplateOutcome;
                typedef std::future<CreateWorkspaceByTemplateOutcome> CreateWorkspaceByTemplateOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateWorkspaceByTemplateRequest&, CreateWorkspaceByTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceByTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceByVersionControlResponse> CreateWorkspaceByVersionControlOutcome;
                typedef std::future<CreateWorkspaceByVersionControlOutcome> CreateWorkspaceByVersionControlOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateWorkspaceByVersionControlRequest&, CreateWorkspaceByVersionControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceByVersionControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomizeTemplatesByIdResponse> DeleteCustomizeTemplatesByIdOutcome;
                typedef std::future<DeleteCustomizeTemplatesByIdOutcome> DeleteCustomizeTemplatesByIdOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DeleteCustomizeTemplatesByIdRequest&, DeleteCustomizeTemplatesByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizeTemplatesByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizeTemplatesResponse> DescribeCustomizeTemplatesOutcome;
                typedef std::future<DescribeCustomizeTemplatesOutcome> DescribeCustomizeTemplatesOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeCustomizeTemplatesRequest&, DescribeCustomizeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizeTemplatesByIdResponse> DescribeCustomizeTemplatesByIdOutcome;
                typedef std::future<DescribeCustomizeTemplatesByIdOutcome> DescribeCustomizeTemplatesByIdOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeCustomizeTemplatesByIdRequest&, DescribeCustomizeTemplatesByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeTemplatesByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizeTemplatesPresetsResponse> DescribeCustomizeTemplatesPresetsOutcome;
                typedef std::future<DescribeCustomizeTemplatesPresetsOutcome> DescribeCustomizeTemplatesPresetsOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeCustomizeTemplatesPresetsRequest&, DescribeCustomizeTemplatesPresetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizeTemplatesPresetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceEnvListResponse> DescribeWorkspaceEnvListOutcome;
                typedef std::future<DescribeWorkspaceEnvListOutcome> DescribeWorkspaceEnvListOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeWorkspaceEnvListRequest&, DescribeWorkspaceEnvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceEnvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceNameExistResponse> DescribeWorkspaceNameExistOutcome;
                typedef std::future<DescribeWorkspaceNameExistOutcome> DescribeWorkspaceNameExistOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeWorkspaceNameExistRequest&, DescribeWorkspaceNameExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceNameExistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceStatusResponse> DescribeWorkspaceStatusOutcome;
                typedef std::future<DescribeWorkspaceStatusOutcome> DescribeWorkspaceStatusOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeWorkspaceStatusRequest&, DescribeWorkspaceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceStatusListResponse> DescribeWorkspaceStatusListOutcome;
                typedef std::future<DescribeWorkspaceStatusListOutcome> DescribeWorkspaceStatusListOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeWorkspaceStatusListRequest&, DescribeWorkspaceStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizeTemplateVersionControlResponse> ModifyCustomizeTemplateVersionControlOutcome;
                typedef std::future<ModifyCustomizeTemplateVersionControlOutcome> ModifyCustomizeTemplateVersionControlOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::ModifyCustomizeTemplateVersionControlRequest&, ModifyCustomizeTemplateVersionControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizeTemplateVersionControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizeTemplatesFullByIdResponse> ModifyCustomizeTemplatesFullByIdOutcome;
                typedef std::future<ModifyCustomizeTemplatesFullByIdOutcome> ModifyCustomizeTemplatesFullByIdOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::ModifyCustomizeTemplatesFullByIdRequest&, ModifyCustomizeTemplatesFullByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizeTemplatesFullByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizeTemplatesPartByIdResponse> ModifyCustomizeTemplatesPartByIdOutcome;
                typedef std::future<ModifyCustomizeTemplatesPartByIdOutcome> ModifyCustomizeTemplatesPartByIdOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::ModifyCustomizeTemplatesPartByIdRequest&, ModifyCustomizeTemplatesPartByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizeTemplatesPartByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspaceAttributesResponse> ModifyWorkspaceAttributesOutcome;
                typedef std::future<ModifyWorkspaceAttributesOutcome> ModifyWorkspaceAttributesOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::ModifyWorkspaceAttributesRequest&, ModifyWorkspaceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspaceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverWorkspaceResponse> RecoverWorkspaceOutcome;
                typedef std::future<RecoverWorkspaceOutcome> RecoverWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::RecoverWorkspaceRequest&, RecoverWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveWorkspaceResponse> RemoveWorkspaceOutcome;
                typedef std::future<RemoveWorkspaceOutcome> RemoveWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::RemoveWorkspaceRequest&, RemoveWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunWorkspaceResponse> RunWorkspaceOutcome;
                typedef std::future<RunWorkspaceOutcome> RunWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::RunWorkspaceRequest&, RunWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopWorkspaceResponse> StopWorkspaceOutcome;
                typedef std::future<StopWorkspaceOutcome> StopWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::StopWorkspaceRequest&, StopWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopWorkspaceAsyncHandler;



                /**
                 *添加自定义模板
                 * @param req CreateCustomizeTemplatesRequest
                 * @return CreateCustomizeTemplatesOutcome
                 */
                CreateCustomizeTemplatesOutcome CreateCustomizeTemplates(const Model::CreateCustomizeTemplatesRequest &request);
                void CreateCustomizeTemplatesAsync(const Model::CreateCustomizeTemplatesRequest& request, const CreateCustomizeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomizeTemplatesOutcomeCallable CreateCustomizeTemplatesCallable(const Model::CreateCustomizeTemplatesRequest& request);

                /**
                 *云服务器方式创建工作空间
                 * @param req CreateWorkspaceByAgentRequest
                 * @return CreateWorkspaceByAgentOutcome
                 */
                CreateWorkspaceByAgentOutcome CreateWorkspaceByAgent(const Model::CreateWorkspaceByAgentRequest &request);
                void CreateWorkspaceByAgentAsync(const Model::CreateWorkspaceByAgentRequest& request, const CreateWorkspaceByAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceByAgentOutcomeCallable CreateWorkspaceByAgentCallable(const Model::CreateWorkspaceByAgentRequest& request);

                /**
                 *快速开始, 基于模板创建工作空间
                 * @param req CreateWorkspaceByTemplateRequest
                 * @return CreateWorkspaceByTemplateOutcome
                 */
                CreateWorkspaceByTemplateOutcome CreateWorkspaceByTemplate(const Model::CreateWorkspaceByTemplateRequest &request);
                void CreateWorkspaceByTemplateAsync(const Model::CreateWorkspaceByTemplateRequest& request, const CreateWorkspaceByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceByTemplateOutcomeCallable CreateWorkspaceByTemplateCallable(const Model::CreateWorkspaceByTemplateRequest& request);

                /**
                 *根据模板创建工作空间
                 * @param req CreateWorkspaceByVersionControlRequest
                 * @return CreateWorkspaceByVersionControlOutcome
                 */
                CreateWorkspaceByVersionControlOutcome CreateWorkspaceByVersionControl(const Model::CreateWorkspaceByVersionControlRequest &request);
                void CreateWorkspaceByVersionControlAsync(const Model::CreateWorkspaceByVersionControlRequest& request, const CreateWorkspaceByVersionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceByVersionControlOutcomeCallable CreateWorkspaceByVersionControlCallable(const Model::CreateWorkspaceByVersionControlRequest& request);

                /**
                 *删除自定义模板
                 * @param req DeleteCustomizeTemplatesByIdRequest
                 * @return DeleteCustomizeTemplatesByIdOutcome
                 */
                DeleteCustomizeTemplatesByIdOutcome DeleteCustomizeTemplatesById(const Model::DeleteCustomizeTemplatesByIdRequest &request);
                void DeleteCustomizeTemplatesByIdAsync(const Model::DeleteCustomizeTemplatesByIdRequest& request, const DeleteCustomizeTemplatesByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomizeTemplatesByIdOutcomeCallable DeleteCustomizeTemplatesByIdCallable(const Model::DeleteCustomizeTemplatesByIdRequest& request);

                /**
                 *获取所有模板列表
                 * @param req DescribeCustomizeTemplatesRequest
                 * @return DescribeCustomizeTemplatesOutcome
                 */
                DescribeCustomizeTemplatesOutcome DescribeCustomizeTemplates(const Model::DescribeCustomizeTemplatesRequest &request);
                void DescribeCustomizeTemplatesAsync(const Model::DescribeCustomizeTemplatesRequest& request, const DescribeCustomizeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizeTemplatesOutcomeCallable DescribeCustomizeTemplatesCallable(const Model::DescribeCustomizeTemplatesRequest& request);

                /**
                 *获取特定模板信息
                 * @param req DescribeCustomizeTemplatesByIdRequest
                 * @return DescribeCustomizeTemplatesByIdOutcome
                 */
                DescribeCustomizeTemplatesByIdOutcome DescribeCustomizeTemplatesById(const Model::DescribeCustomizeTemplatesByIdRequest &request);
                void DescribeCustomizeTemplatesByIdAsync(const Model::DescribeCustomizeTemplatesByIdRequest& request, const DescribeCustomizeTemplatesByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizeTemplatesByIdOutcomeCallable DescribeCustomizeTemplatesByIdCallable(const Model::DescribeCustomizeTemplatesByIdRequest& request);

                /**
                 *获取创建模板的预置参数
                 * @param req DescribeCustomizeTemplatesPresetsRequest
                 * @return DescribeCustomizeTemplatesPresetsOutcome
                 */
                DescribeCustomizeTemplatesPresetsOutcome DescribeCustomizeTemplatesPresets(const Model::DescribeCustomizeTemplatesPresetsRequest &request);
                void DescribeCustomizeTemplatesPresetsAsync(const Model::DescribeCustomizeTemplatesPresetsRequest& request, const DescribeCustomizeTemplatesPresetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizeTemplatesPresetsOutcomeCallable DescribeCustomizeTemplatesPresetsCallable(const Model::DescribeCustomizeTemplatesPresetsRequest& request);

                /**
                 *环境列表接口返回信息
                 * @param req DescribeWorkspaceEnvListRequest
                 * @return DescribeWorkspaceEnvListOutcome
                 */
                DescribeWorkspaceEnvListOutcome DescribeWorkspaceEnvList(const Model::DescribeWorkspaceEnvListRequest &request);
                void DescribeWorkspaceEnvListAsync(const Model::DescribeWorkspaceEnvListRequest& request, const DescribeWorkspaceEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceEnvListOutcomeCallable DescribeWorkspaceEnvListCallable(const Model::DescribeWorkspaceEnvListRequest& request);

                /**
                 *检查工作空间是否存在
                 * @param req DescribeWorkspaceNameExistRequest
                 * @return DescribeWorkspaceNameExistOutcome
                 */
                DescribeWorkspaceNameExistOutcome DescribeWorkspaceNameExist(const Model::DescribeWorkspaceNameExistRequest &request);
                void DescribeWorkspaceNameExistAsync(const Model::DescribeWorkspaceNameExistRequest& request, const DescribeWorkspaceNameExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceNameExistOutcomeCallable DescribeWorkspaceNameExistCallable(const Model::DescribeWorkspaceNameExistRequest& request);

                /**
                 *获取工作空间元信息
                 * @param req DescribeWorkspaceStatusRequest
                 * @return DescribeWorkspaceStatusOutcome
                 */
                DescribeWorkspaceStatusOutcome DescribeWorkspaceStatus(const Model::DescribeWorkspaceStatusRequest &request);
                void DescribeWorkspaceStatusAsync(const Model::DescribeWorkspaceStatusRequest& request, const DescribeWorkspaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceStatusOutcomeCallable DescribeWorkspaceStatusCallable(const Model::DescribeWorkspaceStatusRequest& request);

                /**
                 *获取用户工作空间列表
                 * @param req DescribeWorkspaceStatusListRequest
                 * @return DescribeWorkspaceStatusListOutcome
                 */
                DescribeWorkspaceStatusListOutcome DescribeWorkspaceStatusList(const Model::DescribeWorkspaceStatusListRequest &request);
                void DescribeWorkspaceStatusListAsync(const Model::DescribeWorkspaceStatusListRequest& request, const DescribeWorkspaceStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceStatusListOutcomeCallable DescribeWorkspaceStatusListCallable(const Model::DescribeWorkspaceStatusListRequest& request);

                /**
                 *修改模板默认代码仓库
                 * @param req ModifyCustomizeTemplateVersionControlRequest
                 * @return ModifyCustomizeTemplateVersionControlOutcome
                 */
                ModifyCustomizeTemplateVersionControlOutcome ModifyCustomizeTemplateVersionControl(const Model::ModifyCustomizeTemplateVersionControlRequest &request);
                void ModifyCustomizeTemplateVersionControlAsync(const Model::ModifyCustomizeTemplateVersionControlRequest& request, const ModifyCustomizeTemplateVersionControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizeTemplateVersionControlOutcomeCallable ModifyCustomizeTemplateVersionControlCallable(const Model::ModifyCustomizeTemplateVersionControlRequest& request);

                /**
                 *全量修改自定义模板，不忽略空
                 * @param req ModifyCustomizeTemplatesFullByIdRequest
                 * @return ModifyCustomizeTemplatesFullByIdOutcome
                 */
                ModifyCustomizeTemplatesFullByIdOutcome ModifyCustomizeTemplatesFullById(const Model::ModifyCustomizeTemplatesFullByIdRequest &request);
                void ModifyCustomizeTemplatesFullByIdAsync(const Model::ModifyCustomizeTemplatesFullByIdRequest& request, const ModifyCustomizeTemplatesFullByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizeTemplatesFullByIdOutcomeCallable ModifyCustomizeTemplatesFullByIdCallable(const Model::ModifyCustomizeTemplatesFullByIdRequest& request);

                /**
                 *全量修改自定义模板，忽略空
                 * @param req ModifyCustomizeTemplatesPartByIdRequest
                 * @return ModifyCustomizeTemplatesPartByIdOutcome
                 */
                ModifyCustomizeTemplatesPartByIdOutcome ModifyCustomizeTemplatesPartById(const Model::ModifyCustomizeTemplatesPartByIdRequest &request);
                void ModifyCustomizeTemplatesPartByIdAsync(const Model::ModifyCustomizeTemplatesPartByIdRequest& request, const ModifyCustomizeTemplatesPartByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizeTemplatesPartByIdOutcomeCallable ModifyCustomizeTemplatesPartByIdCallable(const Model::ModifyCustomizeTemplatesPartByIdRequest& request);

                /**
                 *修改工作空间的名称和描述
                 * @param req ModifyWorkspaceAttributesRequest
                 * @return ModifyWorkspaceAttributesOutcome
                 */
                ModifyWorkspaceAttributesOutcome ModifyWorkspaceAttributes(const Model::ModifyWorkspaceAttributesRequest &request);
                void ModifyWorkspaceAttributesAsync(const Model::ModifyWorkspaceAttributesRequest& request, const ModifyWorkspaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspaceAttributesOutcomeCallable ModifyWorkspaceAttributesCallable(const Model::ModifyWorkspaceAttributesRequest& request);

                /**
                 *恢复工作空间

                 * @param req RecoverWorkspaceRequest
                 * @return RecoverWorkspaceOutcome
                 */
                RecoverWorkspaceOutcome RecoverWorkspace(const Model::RecoverWorkspaceRequest &request);
                void RecoverWorkspaceAsync(const Model::RecoverWorkspaceRequest& request, const RecoverWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverWorkspaceOutcomeCallable RecoverWorkspaceCallable(const Model::RecoverWorkspaceRequest& request);

                /**
                 *删除工作空间
                 * @param req RemoveWorkspaceRequest
                 * @return RemoveWorkspaceOutcome
                 */
                RemoveWorkspaceOutcome RemoveWorkspace(const Model::RemoveWorkspaceRequest &request);
                void RemoveWorkspaceAsync(const Model::RemoveWorkspaceRequest& request, const RemoveWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveWorkspaceOutcomeCallable RemoveWorkspaceCallable(const Model::RemoveWorkspaceRequest& request);

                /**
                 *运行空间
                 * @param req RunWorkspaceRequest
                 * @return RunWorkspaceOutcome
                 */
                RunWorkspaceOutcome RunWorkspace(const Model::RunWorkspaceRequest &request);
                void RunWorkspaceAsync(const Model::RunWorkspaceRequest& request, const RunWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunWorkspaceOutcomeCallable RunWorkspaceCallable(const Model::RunWorkspaceRequest& request);

                /**
                 *停止运行空间
                 * @param req StopWorkspaceRequest
                 * @return StopWorkspaceOutcome
                 */
                StopWorkspaceOutcome StopWorkspace(const Model::StopWorkspaceRequest &request);
                void StopWorkspaceAsync(const Model::StopWorkspaceRequest& request, const StopWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopWorkspaceOutcomeCallable StopWorkspaceCallable(const Model::StopWorkspaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_CLOUDSTUDIOCLIENT_H_

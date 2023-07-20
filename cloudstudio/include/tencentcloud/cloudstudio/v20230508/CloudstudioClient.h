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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_CLOUDSTUDIOCLIENT_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_CLOUDSTUDIOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceTokenRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/CreateWorkspaceTokenResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeConfigRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeConfigResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeImagesRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeImagesResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeWorkspacesRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/DescribeWorkspacesResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/ModifyWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/ModifyWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/RemoveWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/RemoveWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/RunWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/RunWorkspaceResponse.h>
#include <tencentcloud/cloudstudio/v20230508/model/StopWorkspaceRequest.h>
#include <tencentcloud/cloudstudio/v20230508/model/StopWorkspaceResponse.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            class CloudstudioClient : public AbstractClient
            {
            public:
                CloudstudioClient(const Credential &credential, const std::string &region);
                CloudstudioClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateWorkspaceResponse> CreateWorkspaceOutcome;
                typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateWorkspaceRequest&, CreateWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWorkspaceTokenResponse> CreateWorkspaceTokenOutcome;
                typedef std::future<CreateWorkspaceTokenOutcome> CreateWorkspaceTokenOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::CreateWorkspaceTokenRequest&, CreateWorkspaceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWorkspaceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspacesResponse> DescribeWorkspacesOutcome;
                typedef std::future<DescribeWorkspacesOutcome> DescribeWorkspacesOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::DescribeWorkspacesRequest&, DescribeWorkspacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWorkspaceResponse> ModifyWorkspaceOutcome;
                typedef std::future<ModifyWorkspaceOutcome> ModifyWorkspaceOutcomeCallable;
                typedef std::function<void(const CloudstudioClient*, const Model::ModifyWorkspaceRequest&, ModifyWorkspaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWorkspaceAsyncHandler;
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
                 *创建工作空间
                 * @param req CreateWorkspaceRequest
                 * @return CreateWorkspaceOutcome
                 */
                CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest &request);
                void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request);

                /**
                 *创建工作空间临时访问凭证，重复调用会创建新的 Token，旧的 Token 将会自动失效
                 * @param req CreateWorkspaceTokenRequest
                 * @return CreateWorkspaceTokenOutcome
                 */
                CreateWorkspaceTokenOutcome CreateWorkspaceToken(const Model::CreateWorkspaceTokenRequest &request);
                void CreateWorkspaceTokenAsync(const Model::CreateWorkspaceTokenRequest& request, const CreateWorkspaceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWorkspaceTokenOutcomeCallable CreateWorkspaceTokenCallable(const Model::CreateWorkspaceTokenRequest& request);

                /**
                 *获取用户配置
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *获取基础镜像列表
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *获取用户工作空间列表
                 * @param req DescribeWorkspacesRequest
                 * @return DescribeWorkspacesOutcome
                 */
                DescribeWorkspacesOutcome DescribeWorkspaces(const Model::DescribeWorkspacesRequest &request);
                void DescribeWorkspacesAsync(const Model::DescribeWorkspacesRequest& request, const DescribeWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspacesOutcomeCallable DescribeWorkspacesCallable(const Model::DescribeWorkspacesRequest& request);

                /**
                 *修改工作空间
                 * @param req ModifyWorkspaceRequest
                 * @return ModifyWorkspaceOutcome
                 */
                ModifyWorkspaceOutcome ModifyWorkspace(const Model::ModifyWorkspaceRequest &request);
                void ModifyWorkspaceAsync(const Model::ModifyWorkspaceRequest& request, const ModifyWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWorkspaceOutcomeCallable ModifyWorkspaceCallable(const Model::ModifyWorkspaceRequest& request);

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

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_CLOUDSTUDIOCLIENT_H_

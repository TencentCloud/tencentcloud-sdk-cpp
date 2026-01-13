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

#ifndef TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_
#define TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenRequest.h>
#include <tencentcloud/ags/v20250920/model/AcquireSandboxInstanceTokenResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateAPIKeyRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateAPIKeyResponse.h>
#include <tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskRequest.h>
#include <tencentcloud/ags/v20250920/model/CreatePreCacheImageTaskResponse.h>
#include <tencentcloud/ags/v20250920/model/CreateSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/CreateSandboxToolResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteAPIKeyRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteAPIKeyResponse.h>
#include <tencentcloud/ags/v20250920/model/DeleteSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/DeleteSandboxToolResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeAPIKeyListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeAPIKeyListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribePreCacheImageTaskResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxInstanceListResponse.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxToolListRequest.h>
#include <tencentcloud/ags/v20250920/model/DescribeSandboxToolListResponse.h>
#include <tencentcloud/ags/v20250920/model/StartSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/StartSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/StopSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/StopSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxInstanceRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxInstanceResponse.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxToolRequest.h>
#include <tencentcloud/ags/v20250920/model/UpdateSandboxToolResponse.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            class AgsClient : public AbstractClient
            {
            public:
                AgsClient(const Credential &credential, const std::string &region);
                AgsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcquireSandboxInstanceTokenResponse> AcquireSandboxInstanceTokenOutcome;
                typedef std::future<AcquireSandboxInstanceTokenOutcome> AcquireSandboxInstanceTokenOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::AcquireSandboxInstanceTokenRequest&, AcquireSandboxInstanceTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireSandboxInstanceTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAPIKeyResponse> CreateAPIKeyOutcome;
                typedef std::future<CreateAPIKeyOutcome> CreateAPIKeyOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateAPIKeyRequest&, CreateAPIKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAPIKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePreCacheImageTaskResponse> CreatePreCacheImageTaskOutcome;
                typedef std::future<CreatePreCacheImageTaskOutcome> CreatePreCacheImageTaskOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreatePreCacheImageTaskRequest&, CreatePreCacheImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePreCacheImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxToolResponse> CreateSandboxToolOutcome;
                typedef std::future<CreateSandboxToolOutcome> CreateSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::CreateSandboxToolRequest&, CreateSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxToolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAPIKeyResponse> DeleteAPIKeyOutcome;
                typedef std::future<DeleteAPIKeyOutcome> DeleteAPIKeyOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteAPIKeyRequest&, DeleteAPIKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAPIKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxToolResponse> DeleteSandboxToolOutcome;
                typedef std::future<DeleteSandboxToolOutcome> DeleteSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DeleteSandboxToolRequest&, DeleteSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxToolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPIKeyListResponse> DescribeAPIKeyListOutcome;
                typedef std::future<DescribeAPIKeyListOutcome> DescribeAPIKeyListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeAPIKeyListRequest&, DescribeAPIKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPIKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreCacheImageTaskResponse> DescribePreCacheImageTaskOutcome;
                typedef std::future<DescribePreCacheImageTaskOutcome> DescribePreCacheImageTaskOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribePreCacheImageTaskRequest&, DescribePreCacheImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreCacheImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxInstanceListResponse> DescribeSandboxInstanceListOutcome;
                typedef std::future<DescribeSandboxInstanceListOutcome> DescribeSandboxInstanceListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSandboxInstanceListRequest&, DescribeSandboxInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxToolListResponse> DescribeSandboxToolListOutcome;
                typedef std::future<DescribeSandboxToolListOutcome> DescribeSandboxToolListOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::DescribeSandboxToolListRequest&, DescribeSandboxToolListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxToolListAsyncHandler;
                typedef Outcome<Core::Error, Model::StartSandboxInstanceResponse> StartSandboxInstanceOutcome;
                typedef std::future<StartSandboxInstanceOutcome> StartSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::StartSandboxInstanceRequest&, StartSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSandboxInstanceResponse> StopSandboxInstanceOutcome;
                typedef std::future<StopSandboxInstanceOutcome> StopSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::StopSandboxInstanceRequest&, StopSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSandboxInstanceResponse> UpdateSandboxInstanceOutcome;
                typedef std::future<UpdateSandboxInstanceOutcome> UpdateSandboxInstanceOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateSandboxInstanceRequest&, UpdateSandboxInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSandboxInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSandboxToolResponse> UpdateSandboxToolOutcome;
                typedef std::future<UpdateSandboxToolOutcome> UpdateSandboxToolOutcomeCallable;
                typedef std::function<void(const AgsClient*, const Model::UpdateSandboxToolRequest&, UpdateSandboxToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSandboxToolAsyncHandler;



                /**
                 *获取访问沙箱工具时所需要使用的访问Token，创建沙箱实例后需调用此接口获取沙箱实例访问Token。
此Token可用于调用代码沙箱实例执行代码，或浏览器沙箱实例进行浏览器操作等。
                 * @param req AcquireSandboxInstanceTokenRequest
                 * @return AcquireSandboxInstanceTokenOutcome
                 */
                AcquireSandboxInstanceTokenOutcome AcquireSandboxInstanceToken(const Model::AcquireSandboxInstanceTokenRequest &request);
                void AcquireSandboxInstanceTokenAsync(const Model::AcquireSandboxInstanceTokenRequest& request, const AcquireSandboxInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireSandboxInstanceTokenOutcomeCallable AcquireSandboxInstanceTokenCallable(const Model::AcquireSandboxInstanceTokenRequest& request);

                /**
                 *创建新的API密钥，用于调用Agent Sandbox接口。相较于腾讯云Secret ID Secret Key支持调用所有接口使用，仅有部分接口支持使用API密钥调用。
                 * @param req CreateAPIKeyRequest
                 * @return CreateAPIKeyOutcome
                 */
                CreateAPIKeyOutcome CreateAPIKey(const Model::CreateAPIKeyRequest &request);
                void CreateAPIKeyAsync(const Model::CreateAPIKeyRequest& request, const CreateAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAPIKeyOutcomeCallable CreateAPIKeyCallable(const Model::CreateAPIKeyRequest& request);

                /**
                 *创建镜像预热任务
                 * @param req CreatePreCacheImageTaskRequest
                 * @return CreatePreCacheImageTaskOutcome
                 */
                CreatePreCacheImageTaskOutcome CreatePreCacheImageTask(const Model::CreatePreCacheImageTaskRequest &request);
                void CreatePreCacheImageTaskAsync(const Model::CreatePreCacheImageTaskRequest& request, const CreatePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePreCacheImageTaskOutcomeCallable CreatePreCacheImageTaskCallable(const Model::CreatePreCacheImageTaskRequest& request);

                /**
                 *创建沙箱工具
                 * @param req CreateSandboxToolRequest
                 * @return CreateSandboxToolOutcome
                 */
                CreateSandboxToolOutcome CreateSandboxTool(const Model::CreateSandboxToolRequest &request);
                void CreateSandboxToolAsync(const Model::CreateSandboxToolRequest& request, const CreateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxToolOutcomeCallable CreateSandboxToolCallable(const Model::CreateSandboxToolRequest& request);

                /**
                 *删除API密钥。注意区别于腾讯云Secret ID Secret Key，本接口删除的是Agent Sandbox专用API key。
                 * @param req DeleteAPIKeyRequest
                 * @return DeleteAPIKeyOutcome
                 */
                DeleteAPIKeyOutcome DeleteAPIKey(const Model::DeleteAPIKeyRequest &request);
                void DeleteAPIKeyAsync(const Model::DeleteAPIKeyRequest& request, const DeleteAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAPIKeyOutcomeCallable DeleteAPIKeyCallable(const Model::DeleteAPIKeyRequest& request);

                /**
                 *删除沙箱工具
                 * @param req DeleteSandboxToolRequest
                 * @return DeleteSandboxToolOutcome
                 */
                DeleteSandboxToolOutcome DeleteSandboxTool(const Model::DeleteSandboxToolRequest &request);
                void DeleteSandboxToolAsync(const Model::DeleteSandboxToolRequest& request, const DeleteSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxToolOutcomeCallable DeleteSandboxToolCallable(const Model::DeleteSandboxToolRequest& request);

                /**
                 *获取API密钥列表，包含API密钥简略信息，包含名称、创建时间等。
                 * @param req DescribeAPIKeyListRequest
                 * @return DescribeAPIKeyListOutcome
                 */
                DescribeAPIKeyListOutcome DescribeAPIKeyList(const Model::DescribeAPIKeyListRequest &request);
                void DescribeAPIKeyListAsync(const Model::DescribeAPIKeyListRequest& request, const DescribeAPIKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPIKeyListOutcomeCallable DescribeAPIKeyListCallable(const Model::DescribeAPIKeyListRequest& request);

                /**
                 *查询镜像预热任务信息
                 * @param req DescribePreCacheImageTaskRequest
                 * @return DescribePreCacheImageTaskOutcome
                 */
                DescribePreCacheImageTaskOutcome DescribePreCacheImageTask(const Model::DescribePreCacheImageTaskRequest &request);
                void DescribePreCacheImageTaskAsync(const Model::DescribePreCacheImageTaskRequest& request, const DescribePreCacheImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreCacheImageTaskOutcomeCallable DescribePreCacheImageTaskCallable(const Model::DescribePreCacheImageTaskRequest& request);

                /**
                 *查询沙箱实例列表
                 * @param req DescribeSandboxInstanceListRequest
                 * @return DescribeSandboxInstanceListOutcome
                 */
                DescribeSandboxInstanceListOutcome DescribeSandboxInstanceList(const Model::DescribeSandboxInstanceListRequest &request);
                void DescribeSandboxInstanceListAsync(const Model::DescribeSandboxInstanceListRequest& request, const DescribeSandboxInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxInstanceListOutcomeCallable DescribeSandboxInstanceListCallable(const Model::DescribeSandboxInstanceListRequest& request);

                /**
                 *查询沙箱工具列表
                 * @param req DescribeSandboxToolListRequest
                 * @return DescribeSandboxToolListOutcome
                 */
                DescribeSandboxToolListOutcome DescribeSandboxToolList(const Model::DescribeSandboxToolListRequest &request);
                void DescribeSandboxToolListAsync(const Model::DescribeSandboxToolListRequest& request, const DescribeSandboxToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxToolListOutcomeCallable DescribeSandboxToolListCallable(const Model::DescribeSandboxToolListRequest& request);

                /**
                 *启动沙箱实例
                 * @param req StartSandboxInstanceRequest
                 * @return StartSandboxInstanceOutcome
                 */
                StartSandboxInstanceOutcome StartSandboxInstance(const Model::StartSandboxInstanceRequest &request);
                void StartSandboxInstanceAsync(const Model::StartSandboxInstanceRequest& request, const StartSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartSandboxInstanceOutcomeCallable StartSandboxInstanceCallable(const Model::StartSandboxInstanceRequest& request);

                /**
                 *停止沙箱实例
                 * @param req StopSandboxInstanceRequest
                 * @return StopSandboxInstanceOutcome
                 */
                StopSandboxInstanceOutcome StopSandboxInstance(const Model::StopSandboxInstanceRequest &request);
                void StopSandboxInstanceAsync(const Model::StopSandboxInstanceRequest& request, const StopSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSandboxInstanceOutcomeCallable StopSandboxInstanceCallable(const Model::StopSandboxInstanceRequest& request);

                /**
                 *更新沙箱实例
                 * @param req UpdateSandboxInstanceRequest
                 * @return UpdateSandboxInstanceOutcome
                 */
                UpdateSandboxInstanceOutcome UpdateSandboxInstance(const Model::UpdateSandboxInstanceRequest &request);
                void UpdateSandboxInstanceAsync(const Model::UpdateSandboxInstanceRequest& request, const UpdateSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSandboxInstanceOutcomeCallable UpdateSandboxInstanceCallable(const Model::UpdateSandboxInstanceRequest& request);

                /**
                 *更新沙箱工具
                 * @param req UpdateSandboxToolRequest
                 * @return UpdateSandboxToolOutcome
                 */
                UpdateSandboxToolOutcome UpdateSandboxTool(const Model::UpdateSandboxToolRequest &request);
                void UpdateSandboxToolAsync(const Model::UpdateSandboxToolRequest& request, const UpdateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSandboxToolOutcomeCallable UpdateSandboxToolCallable(const Model::UpdateSandboxToolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_AGSCLIENT_H_

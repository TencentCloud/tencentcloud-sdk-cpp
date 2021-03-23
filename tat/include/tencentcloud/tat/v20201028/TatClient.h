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

#ifndef TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_
#define TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tat/v20201028/model/CreateCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/CreateCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/DeleteCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeAutomationAgentStatusResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeCommandsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeCommandsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationTasksRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationTasksResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeInvocationsResponse.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegionsRequest.h>
#include <tencentcloud/tat/v20201028/model/DescribeRegionsResponse.h>
#include <tencentcloud/tat/v20201028/model/InvokeCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/InvokeCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/ModifyCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/ModifyCommandResponse.h>
#include <tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentRequest.h>
#include <tencentcloud/tat/v20201028/model/PreviewReplacedCommandContentResponse.h>
#include <tencentcloud/tat/v20201028/model/RunCommandRequest.h>
#include <tencentcloud/tat/v20201028/model/RunCommandResponse.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            class TatClient : public AbstractClient
            {
            public:
                TatClient(const Credential &credential, const std::string &region);
                TatClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateCommandResponse> CreateCommandOutcome;
                typedef std::future<CreateCommandOutcome> CreateCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::CreateCommandRequest&, CreateCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCommandAsyncHandler;
                typedef Outcome<Error, Model::DeleteCommandResponse> DeleteCommandOutcome;
                typedef std::future<DeleteCommandOutcome> DeleteCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DeleteCommandRequest&, DeleteCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCommandAsyncHandler;
                typedef Outcome<Error, Model::DescribeAutomationAgentStatusResponse> DescribeAutomationAgentStatusOutcome;
                typedef std::future<DescribeAutomationAgentStatusOutcome> DescribeAutomationAgentStatusOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeAutomationAgentStatusRequest&, DescribeAutomationAgentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutomationAgentStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeCommandsResponse> DescribeCommandsOutcome;
                typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeCommandsRequest&, DescribeCommandsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCommandsAsyncHandler;
                typedef Outcome<Error, Model::DescribeInvocationTasksResponse> DescribeInvocationTasksOutcome;
                typedef std::future<DescribeInvocationTasksOutcome> DescribeInvocationTasksOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvocationTasksRequest&, DescribeInvocationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeInvocationsResponse> DescribeInvocationsOutcome;
                typedef std::future<DescribeInvocationsOutcome> DescribeInvocationsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeInvocationsRequest&, DescribeInvocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInvocationsAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Error, Model::InvokeCommandResponse> InvokeCommandOutcome;
                typedef std::future<InvokeCommandOutcome> InvokeCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::InvokeCommandRequest&, InvokeCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeCommandAsyncHandler;
                typedef Outcome<Error, Model::ModifyCommandResponse> ModifyCommandOutcome;
                typedef std::future<ModifyCommandOutcome> ModifyCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::ModifyCommandRequest&, ModifyCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCommandAsyncHandler;
                typedef Outcome<Error, Model::PreviewReplacedCommandContentResponse> PreviewReplacedCommandContentOutcome;
                typedef std::future<PreviewReplacedCommandContentOutcome> PreviewReplacedCommandContentOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::PreviewReplacedCommandContentRequest&, PreviewReplacedCommandContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PreviewReplacedCommandContentAsyncHandler;
                typedef Outcome<Error, Model::RunCommandResponse> RunCommandOutcome;
                typedef std::future<RunCommandOutcome> RunCommandOutcomeCallable;
                typedef std::function<void(const TatClient*, const Model::RunCommandRequest&, RunCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandAsyncHandler;



                /**
                 *此接口用于创建命令。
                 * @param req CreateCommandRequest
                 * @return CreateCommandOutcome
                 */
                CreateCommandOutcome CreateCommand(const Model::CreateCommandRequest &request);
                void CreateCommandAsync(const Model::CreateCommandRequest& request, const CreateCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCommandOutcomeCallable CreateCommandCallable(const Model::CreateCommandRequest& request);

                /**
                 *此接口用于删除命令。
                 * @param req DeleteCommandRequest
                 * @return DeleteCommandOutcome
                 */
                DeleteCommandOutcome DeleteCommand(const Model::DeleteCommandRequest &request);
                void DeleteCommandAsync(const Model::DeleteCommandRequest& request, const DeleteCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCommandOutcomeCallable DeleteCommandCallable(const Model::DeleteCommandRequest& request);

                /**
                 *此接口用于查询自动化助手客户端的状态。
                 * @param req DescribeAutomationAgentStatusRequest
                 * @return DescribeAutomationAgentStatusOutcome
                 */
                DescribeAutomationAgentStatusOutcome DescribeAutomationAgentStatus(const Model::DescribeAutomationAgentStatusRequest &request);
                void DescribeAutomationAgentStatusAsync(const Model::DescribeAutomationAgentStatusRequest& request, const DescribeAutomationAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutomationAgentStatusOutcomeCallable DescribeAutomationAgentStatusCallable(const Model::DescribeAutomationAgentStatusRequest& request);

                /**
                 *此接口用于查询命令详情。
                 * @param req DescribeCommandsRequest
                 * @return DescribeCommandsOutcome
                 */
                DescribeCommandsOutcome DescribeCommands(const Model::DescribeCommandsRequest &request);
                void DescribeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCommandsOutcomeCallable DescribeCommandsCallable(const Model::DescribeCommandsRequest& request);

                /**
                 *此接口用于查询执行任务详情。
                 * @param req DescribeInvocationTasksRequest
                 * @return DescribeInvocationTasksOutcome
                 */
                DescribeInvocationTasksOutcome DescribeInvocationTasks(const Model::DescribeInvocationTasksRequest &request);
                void DescribeInvocationTasksAsync(const Model::DescribeInvocationTasksRequest& request, const DescribeInvocationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationTasksOutcomeCallable DescribeInvocationTasksCallable(const Model::DescribeInvocationTasksRequest& request);

                /**
                 *此接口用于查询执行活动详情。
                 * @param req DescribeInvocationsRequest
                 * @return DescribeInvocationsOutcome
                 */
                DescribeInvocationsOutcome DescribeInvocations(const Model::DescribeInvocationsRequest &request);
                void DescribeInvocationsAsync(const Model::DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInvocationsOutcomeCallable DescribeInvocationsCallable(const Model::DescribeInvocationsRequest& request);

                /**
                 *此接口用于查询地域列表
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *在指定的实例上触发命令，调用成功返回执行活动ID（inv-xxxxxxxx），每个执行活动内部有一个或多个执行任务（invt-xxxxxxxx），每个执行任务代表命令在一台 CVM 或一台 Lighthouse 上的执行记录。

* 如果指定实例未安装 agent，或 agent 不在线，返回失败
* 如果命令类型与 agent 运行环境不符，返回失败
* 指定的实例需要处于 VPC 网络
* 指定的实例需要处于 RUNNING 状态
* 不可同时指定 CVM 和 Lighthouse
                 * @param req InvokeCommandRequest
                 * @return InvokeCommandOutcome
                 */
                InvokeCommandOutcome InvokeCommand(const Model::InvokeCommandRequest &request);
                void InvokeCommandAsync(const Model::InvokeCommandRequest& request, const InvokeCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeCommandOutcomeCallable InvokeCommandCallable(const Model::InvokeCommandRequest& request);

                /**
                 *此接口用于修改命令。
                 * @param req ModifyCommandRequest
                 * @return ModifyCommandOutcome
                 */
                ModifyCommandOutcome ModifyCommand(const Model::ModifyCommandRequest &request);
                void ModifyCommandAsync(const Model::ModifyCommandRequest& request, const ModifyCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCommandOutcomeCallable ModifyCommandCallable(const Model::ModifyCommandRequest& request);

                /**
                 *此接口用于预览自定义参数替换后的命令内容。不会触发真实执行。
                 * @param req PreviewReplacedCommandContentRequest
                 * @return PreviewReplacedCommandContentOutcome
                 */
                PreviewReplacedCommandContentOutcome PreviewReplacedCommandContent(const Model::PreviewReplacedCommandContentRequest &request);
                void PreviewReplacedCommandContentAsync(const Model::PreviewReplacedCommandContentRequest& request, const PreviewReplacedCommandContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PreviewReplacedCommandContentOutcomeCallable PreviewReplacedCommandContentCallable(const Model::PreviewReplacedCommandContentRequest& request);

                /**
                 *执行命令，调用成功返回执行活动ID（inv-xxxxxxxx），每个执行活动内部有一个或多个执行任务（invt-xxxxxxxx），每个执行任务代表命令在一台 CVM 或一台 Lighthouse 上的执行记录。

* 如果指定实例未安装 agent，或 agent 不在线，返回失败
* 如果命令类型与 agent 运行环境不符，返回失败
* 指定的实例需要处于 VPC 网络
* 指定的实例需要处于 `RUNNING` 状态
* 不可同时指定 CVM 和 Lighthouse
                 * @param req RunCommandRequest
                 * @return RunCommandOutcome
                 */
                RunCommandOutcome RunCommand(const Model::RunCommandRequest &request);
                void RunCommandAsync(const Model::RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunCommandOutcomeCallable RunCommandCallable(const Model::RunCommandRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_TATCLIENT_H_

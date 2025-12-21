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

#ifndef TENCENTCLOUD_TDAI_V20250717_TDAICLIENT_H_
#define TENCENTCLOUD_TDAI_V20250717_TDAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdai/v20250717/model/ContinueAgentWorkRequest.h>
#include <tencentcloud/tdai/v20250717/model/ContinueAgentWorkResponse.h>
#include <tencentcloud/tdai/v20250717/model/CreateAgentInstanceRequest.h>
#include <tencentcloud/tdai/v20250717/model/CreateAgentInstanceResponse.h>
#include <tencentcloud/tdai/v20250717/model/CreateChatCompletionRequest.h>
#include <tencentcloud/tdai/v20250717/model/CreateChatCompletionResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentDutyTaskDetailRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentDutyTaskDetailResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentDutyTasksRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentDutyTasksResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentInstanceRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentInstanceResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentInstancesRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentInstancesResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentsRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeAgentsResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeChatDetailRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeChatDetailResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeChatsRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeChatsResponse.h>
#include <tencentcloud/tdai/v20250717/model/DescribeReportUrlRequest.h>
#include <tencentcloud/tdai/v20250717/model/DescribeReportUrlResponse.h>
#include <tencentcloud/tdai/v20250717/model/IsolateAgentInstanceRequest.h>
#include <tencentcloud/tdai/v20250717/model/IsolateAgentInstanceResponse.h>
#include <tencentcloud/tdai/v20250717/model/ModifyAgentInstanceParametersRequest.h>
#include <tencentcloud/tdai/v20250717/model/ModifyAgentInstanceParametersResponse.h>
#include <tencentcloud/tdai/v20250717/model/ModifyChatTitleRequest.h>
#include <tencentcloud/tdai/v20250717/model/ModifyChatTitleResponse.h>
#include <tencentcloud/tdai/v20250717/model/PauseAgentWorkRequest.h>
#include <tencentcloud/tdai/v20250717/model/PauseAgentWorkResponse.h>
#include <tencentcloud/tdai/v20250717/model/RecoverAgentInstanceRequest.h>
#include <tencentcloud/tdai/v20250717/model/RecoverAgentInstanceResponse.h>
#include <tencentcloud/tdai/v20250717/model/RemoveChatRequest.h>
#include <tencentcloud/tdai/v20250717/model/RemoveChatResponse.h>
#include <tencentcloud/tdai/v20250717/model/StartAgentTaskRequest.h>
#include <tencentcloud/tdai/v20250717/model/StartAgentTaskResponse.h>
#include <tencentcloud/tdai/v20250717/model/TerminateAgentInstanceRequest.h>
#include <tencentcloud/tdai/v20250717/model/TerminateAgentInstanceResponse.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            class TdaiClient : public AbstractClient
            {
            public:
                TdaiClient(const Credential &credential, const std::string &region);
                TdaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ContinueAgentWorkResponse> ContinueAgentWorkOutcome;
                typedef std::future<ContinueAgentWorkOutcome> ContinueAgentWorkOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::ContinueAgentWorkRequest&, ContinueAgentWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContinueAgentWorkAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentInstanceResponse> CreateAgentInstanceOutcome;
                typedef std::future<CreateAgentInstanceOutcome> CreateAgentInstanceOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::CreateAgentInstanceRequest&, CreateAgentInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChatCompletionResponse> CreateChatCompletionOutcome;
                typedef std::future<CreateChatCompletionOutcome> CreateChatCompletionOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::CreateChatCompletionRequest&, CreateChatCompletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChatCompletionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDutyTaskDetailResponse> DescribeAgentDutyTaskDetailOutcome;
                typedef std::future<DescribeAgentDutyTaskDetailOutcome> DescribeAgentDutyTaskDetailOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeAgentDutyTaskDetailRequest&, DescribeAgentDutyTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDutyTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentDutyTasksResponse> DescribeAgentDutyTasksOutcome;
                typedef std::future<DescribeAgentDutyTasksOutcome> DescribeAgentDutyTasksOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeAgentDutyTasksRequest&, DescribeAgentDutyTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentDutyTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstanceResponse> DescribeAgentInstanceOutcome;
                typedef std::future<DescribeAgentInstanceOutcome> DescribeAgentInstanceOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeAgentInstanceRequest&, DescribeAgentInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstancesResponse> DescribeAgentInstancesOutcome;
                typedef std::future<DescribeAgentInstancesOutcome> DescribeAgentInstancesOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeAgentInstancesRequest&, DescribeAgentInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentsResponse> DescribeAgentsOutcome;
                typedef std::future<DescribeAgentsOutcome> DescribeAgentsOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeAgentsRequest&, DescribeAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChatDetailResponse> DescribeChatDetailOutcome;
                typedef std::future<DescribeChatDetailOutcome> DescribeChatDetailOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeChatDetailRequest&, DescribeChatDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChatDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChatsResponse> DescribeChatsOutcome;
                typedef std::future<DescribeChatsOutcome> DescribeChatsOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeChatsRequest&, DescribeChatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportUrlResponse> DescribeReportUrlOutcome;
                typedef std::future<DescribeReportUrlOutcome> DescribeReportUrlOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::DescribeReportUrlRequest&, DescribeReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateAgentInstanceResponse> IsolateAgentInstanceOutcome;
                typedef std::future<IsolateAgentInstanceOutcome> IsolateAgentInstanceOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::IsolateAgentInstanceRequest&, IsolateAgentInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateAgentInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentInstanceParametersResponse> ModifyAgentInstanceParametersOutcome;
                typedef std::future<ModifyAgentInstanceParametersOutcome> ModifyAgentInstanceParametersOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::ModifyAgentInstanceParametersRequest&, ModifyAgentInstanceParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentInstanceParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChatTitleResponse> ModifyChatTitleOutcome;
                typedef std::future<ModifyChatTitleOutcome> ModifyChatTitleOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::ModifyChatTitleRequest&, ModifyChatTitleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChatTitleAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseAgentWorkResponse> PauseAgentWorkOutcome;
                typedef std::future<PauseAgentWorkOutcome> PauseAgentWorkOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::PauseAgentWorkRequest&, PauseAgentWorkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseAgentWorkAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverAgentInstanceResponse> RecoverAgentInstanceOutcome;
                typedef std::future<RecoverAgentInstanceOutcome> RecoverAgentInstanceOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::RecoverAgentInstanceRequest&, RecoverAgentInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverAgentInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveChatResponse> RemoveChatOutcome;
                typedef std::future<RemoveChatOutcome> RemoveChatOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::RemoveChatRequest&, RemoveChatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveChatAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAgentTaskResponse> StartAgentTaskOutcome;
                typedef std::future<StartAgentTaskOutcome> StartAgentTaskOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::StartAgentTaskRequest&, StartAgentTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAgentTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateAgentInstanceResponse> TerminateAgentInstanceOutcome;
                typedef std::future<TerminateAgentInstanceOutcome> TerminateAgentInstanceOutcomeCallable;
                typedef std::function<void(const TdaiClient*, const Model::TerminateAgentInstanceRequest&, TerminateAgentInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateAgentInstanceAsyncHandler;



                /**
                 *本接口（ContinueAgentWork）用于重启智能体实例的值守任务，通常在用户需要重启时使用。
                 * @param req ContinueAgentWorkRequest
                 * @return ContinueAgentWorkOutcome
                 */
                ContinueAgentWorkOutcome ContinueAgentWork(const Model::ContinueAgentWorkRequest &request);
                void ContinueAgentWorkAsync(const Model::ContinueAgentWorkRequest& request, const ContinueAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContinueAgentWorkOutcomeCallable ContinueAgentWorkCallable(const Model::ContinueAgentWorkRequest& request);

                /**
                 *本接口（CreateAgentInstance）用于创建一个智能体实例，通常在用户购买一个智能体实例时使用。
                 * @param req CreateAgentInstanceRequest
                 * @return CreateAgentInstanceOutcome
                 */
                CreateAgentInstanceOutcome CreateAgentInstance(const Model::CreateAgentInstanceRequest &request);
                void CreateAgentInstanceAsync(const Model::CreateAgentInstanceRequest& request, const CreateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentInstanceOutcomeCallable CreateAgentInstanceCallable(const Model::CreateAgentInstanceRequest& request);

                /**
                 *用于创建一次会话的SSE接口
                 * @param req CreateChatCompletionRequest
                 * @return CreateChatCompletionOutcome
                 */
                CreateChatCompletionOutcome CreateChatCompletion(const Model::CreateChatCompletionRequest &request);
                void CreateChatCompletionAsync(const Model::CreateChatCompletionRequest& request, const CreateChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChatCompletionOutcomeCallable CreateChatCompletionCallable(const Model::CreateChatCompletionRequest& request);

                /**
                 *查询智能体值守任务详情
                 * @param req DescribeAgentDutyTaskDetailRequest
                 * @return DescribeAgentDutyTaskDetailOutcome
                 */
                DescribeAgentDutyTaskDetailOutcome DescribeAgentDutyTaskDetail(const Model::DescribeAgentDutyTaskDetailRequest &request);
                void DescribeAgentDutyTaskDetailAsync(const Model::DescribeAgentDutyTaskDetailRequest& request, const DescribeAgentDutyTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDutyTaskDetailOutcomeCallable DescribeAgentDutyTaskDetailCallable(const Model::DescribeAgentDutyTaskDetailRequest& request);

                /**
                 *查询智能体值守任务列表
                 * @param req DescribeAgentDutyTasksRequest
                 * @return DescribeAgentDutyTasksOutcome
                 */
                DescribeAgentDutyTasksOutcome DescribeAgentDutyTasks(const Model::DescribeAgentDutyTasksRequest &request);
                void DescribeAgentDutyTasksAsync(const Model::DescribeAgentDutyTasksRequest& request, const DescribeAgentDutyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentDutyTasksOutcomeCallable DescribeAgentDutyTasksCallable(const Model::DescribeAgentDutyTasksRequest& request);

                /**
                 *本接口（DescribeAgentInstance）用于查询智能体实例详情，通常在用户查询所购买的所有智能体实例详情时使用。
                 * @param req DescribeAgentInstanceRequest
                 * @return DescribeAgentInstanceOutcome
                 */
                DescribeAgentInstanceOutcome DescribeAgentInstance(const Model::DescribeAgentInstanceRequest &request);
                void DescribeAgentInstanceAsync(const Model::DescribeAgentInstanceRequest& request, const DescribeAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstanceOutcomeCallable DescribeAgentInstanceCallable(const Model::DescribeAgentInstanceRequest& request);

                /**
                 *本接口（DescribeAgentInstances）用于查询智能体实例列表，通常在用户查询所购买的所有智能体列表。
                 * @param req DescribeAgentInstancesRequest
                 * @return DescribeAgentInstancesOutcome
                 */
                DescribeAgentInstancesOutcome DescribeAgentInstances(const Model::DescribeAgentInstancesRequest &request);
                void DescribeAgentInstancesAsync(const Model::DescribeAgentInstancesRequest& request, const DescribeAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstancesOutcomeCallable DescribeAgentInstancesCallable(const Model::DescribeAgentInstancesRequest& request);

                /**
                 *本接口（DescribeAgents）用于查询智能体列表，通常在用户查询所购买的所有智能体列表。
                 * @param req DescribeAgentsRequest
                 * @return DescribeAgentsOutcome
                 */
                DescribeAgentsOutcome DescribeAgents(const Model::DescribeAgentsRequest &request);
                void DescribeAgentsAsync(const Model::DescribeAgentsRequest& request, const DescribeAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentsOutcomeCallable DescribeAgentsCallable(const Model::DescribeAgentsRequest& request);

                /**
                 *本接口（DescribeChatDetail）用于查询对话详情，通常在用户查询会话的历史记录时使用。
                 * @param req DescribeChatDetailRequest
                 * @return DescribeChatDetailOutcome
                 */
                DescribeChatDetailOutcome DescribeChatDetail(const Model::DescribeChatDetailRequest &request);
                void DescribeChatDetailAsync(const Model::DescribeChatDetailRequest& request, const DescribeChatDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChatDetailOutcomeCallable DescribeChatDetailCallable(const Model::DescribeChatDetailRequest& request);

                /**
                 *本接口（DescribeChats）用于查询对话列表，通常在用户查询会话列表时使用。
                 * @param req DescribeChatsRequest
                 * @return DescribeChatsOutcome
                 */
                DescribeChatsOutcome DescribeChats(const Model::DescribeChatsRequest &request);
                void DescribeChatsAsync(const Model::DescribeChatsRequest& request, const DescribeChatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChatsOutcomeCallable DescribeChatsCallable(const Model::DescribeChatsRequest& request);

                /**
                 *智能体报告地址生成并下载
                 * @param req DescribeReportUrlRequest
                 * @return DescribeReportUrlOutcome
                 */
                DescribeReportUrlOutcome DescribeReportUrl(const Model::DescribeReportUrlRequest &request);
                void DescribeReportUrlAsync(const Model::DescribeReportUrlRequest& request, const DescribeReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportUrlOutcomeCallable DescribeReportUrlCallable(const Model::DescribeReportUrlRequest& request);

                /**
                 *本接口（IsolateAgentInstance）用于隔离智能体实例，通常在用户需要隔离智能体实例时使用。
                 * @param req IsolateAgentInstanceRequest
                 * @return IsolateAgentInstanceOutcome
                 */
                IsolateAgentInstanceOutcome IsolateAgentInstance(const Model::IsolateAgentInstanceRequest &request);
                void IsolateAgentInstanceAsync(const Model::IsolateAgentInstanceRequest& request, const IsolateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateAgentInstanceOutcomeCallable IsolateAgentInstanceCallable(const Model::IsolateAgentInstanceRequest& request);

                /**
                 *本接口（ModifyAgentInstanceParameters）用于修改智能体实例的参数列表，通常在用户需要配置智能体实例时使用。
                 * @param req ModifyAgentInstanceParametersRequest
                 * @return ModifyAgentInstanceParametersOutcome
                 */
                ModifyAgentInstanceParametersOutcome ModifyAgentInstanceParameters(const Model::ModifyAgentInstanceParametersRequest &request);
                void ModifyAgentInstanceParametersAsync(const Model::ModifyAgentInstanceParametersRequest& request, const ModifyAgentInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentInstanceParametersOutcomeCallable ModifyAgentInstanceParametersCallable(const Model::ModifyAgentInstanceParametersRequest& request);

                /**
                 *本接口（ModifyChatTitle）用于修改会话标题，通常在用户修改会话标题时使用。
                 * @param req ModifyChatTitleRequest
                 * @return ModifyChatTitleOutcome
                 */
                ModifyChatTitleOutcome ModifyChatTitle(const Model::ModifyChatTitleRequest &request);
                void ModifyChatTitleAsync(const Model::ModifyChatTitleRequest& request, const ModifyChatTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChatTitleOutcomeCallable ModifyChatTitleCallable(const Model::ModifyChatTitleRequest& request);

                /**
                 *本接口（PauseAgentWork）用于暂停智能体实例的值守任务，通常在用户需要暂停时使用。
                 * @param req PauseAgentWorkRequest
                 * @return PauseAgentWorkOutcome
                 */
                PauseAgentWorkOutcome PauseAgentWork(const Model::PauseAgentWorkRequest &request);
                void PauseAgentWorkAsync(const Model::PauseAgentWorkRequest& request, const PauseAgentWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseAgentWorkOutcomeCallable PauseAgentWorkCallable(const Model::PauseAgentWorkRequest& request);

                /**
                 *本接口（RecoverAgentInstance）用于解隔离智能体实例，通常在用户需要解隔离智能体实例时使用。
                 * @param req RecoverAgentInstanceRequest
                 * @return RecoverAgentInstanceOutcome
                 */
                RecoverAgentInstanceOutcome RecoverAgentInstance(const Model::RecoverAgentInstanceRequest &request);
                void RecoverAgentInstanceAsync(const Model::RecoverAgentInstanceRequest& request, const RecoverAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverAgentInstanceOutcomeCallable RecoverAgentInstanceCallable(const Model::RecoverAgentInstanceRequest& request);

                /**
                 *本接口（RemoveChat）用于删除会话，通常在用户删除会话时使用。
                 * @param req RemoveChatRequest
                 * @return RemoveChatOutcome
                 */
                RemoveChatOutcome RemoveChat(const Model::RemoveChatRequest &request);
                void RemoveChatAsync(const Model::RemoveChatRequest& request, const RemoveChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveChatOutcomeCallable RemoveChatCallable(const Model::RemoveChatRequest& request);

                /**
                 *该接口用于启动一个智能体的任务
                 * @param req StartAgentTaskRequest
                 * @return StartAgentTaskOutcome
                 */
                StartAgentTaskOutcome StartAgentTask(const Model::StartAgentTaskRequest &request);
                void StartAgentTaskAsync(const Model::StartAgentTaskRequest& request, const StartAgentTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAgentTaskOutcomeCallable StartAgentTaskCallable(const Model::StartAgentTaskRequest& request);

                /**
                 *本接口（TerminateAgentInstance）用于下线智能体实例，通常在用户需要下线智能体实例时使用。
                 * @param req TerminateAgentInstanceRequest
                 * @return TerminateAgentInstanceOutcome
                 */
                TerminateAgentInstanceOutcome TerminateAgentInstance(const Model::TerminateAgentInstanceRequest &request);
                void TerminateAgentInstanceAsync(const Model::TerminateAgentInstanceRequest& request, const TerminateAgentInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateAgentInstanceOutcomeCallable TerminateAgentInstanceCallable(const Model::TerminateAgentInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_TDAICLIENT_H_

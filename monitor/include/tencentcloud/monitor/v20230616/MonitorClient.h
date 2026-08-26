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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20230616/model/CancelAIWorkbenchChatRequest.h>
#include <tencentcloud/monitor/v20230616/model/CancelAIWorkbenchChatResponse.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/CreateNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateNoticeContentTmplResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteNoticeContentTmplsRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteNoticeContentTmplsResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchArtifactRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchArtifactResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchExecutionRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchExecutionResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinTaskListRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinTaskListResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSessionRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSessionResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSkillRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSkillResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeNoticeContentTmplResponse.h>
#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLRequest.h>
#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchAgentsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchAgentsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchArtifactsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchArtifactsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchExecutionsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchExecutionsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMCPsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMCPsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMessagesRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMessagesResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceInstancesRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceInstancesResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceMapsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceMapsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSessionsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSessionsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSkillsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSkillsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchTasksRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchTasksResponse.h>
#include <tencentcloud/monitor/v20230616/model/ModifyNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/ModifyNoticeContentTmplResponse.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchSREDigitalTwinTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchSREDigitalTwinTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/UpdateAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/UpdateAIWorkbenchAgentResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelAIWorkbenchChatResponse> CancelAIWorkbenchChatOutcome;
                typedef std::future<CancelAIWorkbenchChatOutcome> CancelAIWorkbenchChatOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CancelAIWorkbenchChatRequest&, CancelAIWorkbenchChatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAIWorkbenchChatAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIWorkbenchAgentResponse> CreateAIWorkbenchAgentOutcome;
                typedef std::future<CreateAIWorkbenchAgentOutcome> CreateAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAIWorkbenchAgentRequest&, CreateAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIWorkbenchTaskResponse> CreateAIWorkbenchTaskOutcome;
                typedef std::future<CreateAIWorkbenchTaskOutcome> CreateAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAIWorkbenchTaskRequest&, CreateAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNoticeContentTmplResponse> CreateNoticeContentTmplOutcome;
                typedef std::future<CreateNoticeContentTmplOutcome> CreateNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateNoticeContentTmplRequest&, CreateNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoticeContentTmplAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIWorkbenchAgentResponse> DeleteAIWorkbenchAgentOutcome;
                typedef std::future<DeleteAIWorkbenchAgentOutcome> DeleteAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAIWorkbenchAgentRequest&, DeleteAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIWorkbenchTaskResponse> DeleteAIWorkbenchTaskOutcome;
                typedef std::future<DeleteAIWorkbenchTaskOutcome> DeleteAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAIWorkbenchTaskRequest&, DeleteAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNoticeContentTmplsResponse> DeleteNoticeContentTmplsOutcome;
                typedef std::future<DeleteNoticeContentTmplsOutcome> DeleteNoticeContentTmplsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteNoticeContentTmplsRequest&, DeleteNoticeContentTmplsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoticeContentTmplsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchAgentResponse> DescribeAIWorkbenchAgentOutcome;
                typedef std::future<DescribeAIWorkbenchAgentOutcome> DescribeAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchAgentRequest&, DescribeAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchArtifactResponse> DescribeAIWorkbenchArtifactOutcome;
                typedef std::future<DescribeAIWorkbenchArtifactOutcome> DescribeAIWorkbenchArtifactOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchArtifactRequest&, DescribeAIWorkbenchArtifactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchArtifactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchExecutionResponse> DescribeAIWorkbenchExecutionOutcome;
                typedef std::future<DescribeAIWorkbenchExecutionOutcome> DescribeAIWorkbenchExecutionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchExecutionRequest&, DescribeAIWorkbenchExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSREDigitalTwinTaskListResponse> DescribeAIWorkbenchSREDigitalTwinTaskListOutcome;
                typedef std::future<DescribeAIWorkbenchSREDigitalTwinTaskListOutcome> DescribeAIWorkbenchSREDigitalTwinTaskListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSREDigitalTwinTaskListRequest&, DescribeAIWorkbenchSREDigitalTwinTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSREDigitalTwinTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailResponse> DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome;
                typedef std::future<DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome> DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest&, DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSREDigitalTwinWorkLogListResponse> DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome;
                typedef std::future<DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome> DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest&, DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSREDigitalTwinWorkLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSessionResponse> DescribeAIWorkbenchSessionOutcome;
                typedef std::future<DescribeAIWorkbenchSessionOutcome> DescribeAIWorkbenchSessionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSessionRequest&, DescribeAIWorkbenchSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSkillResponse> DescribeAIWorkbenchSkillOutcome;
                typedef std::future<DescribeAIWorkbenchSkillOutcome> DescribeAIWorkbenchSkillOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSkillRequest&, DescribeAIWorkbenchSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNotifyHistoriesResponse> DescribeAlarmNotifyHistoriesOutcome;
                typedef std::future<DescribeAlarmNotifyHistoriesOutcome> DescribeAlarmNotifyHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNotifyHistoriesRequest&, DescribeAlarmNotifyHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNotifyHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoticeContentTmplResponse> DescribeNoticeContentTmplOutcome;
                typedef std::future<DescribeNoticeContentTmplOutcome> DescribeNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeNoticeContentTmplRequest&, DescribeNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeContentTmplAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAIWorkbenchArtifactDownloadURLResponse> GetAIWorkbenchArtifactDownloadURLOutcome;
                typedef std::future<GetAIWorkbenchArtifactDownloadURLOutcome> GetAIWorkbenchArtifactDownloadURLOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetAIWorkbenchArtifactDownloadURLRequest&, GetAIWorkbenchArtifactDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAIWorkbenchArtifactDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchAgentsResponse> ListAIWorkbenchAgentsOutcome;
                typedef std::future<ListAIWorkbenchAgentsOutcome> ListAIWorkbenchAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchAgentsRequest&, ListAIWorkbenchAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchArtifactsResponse> ListAIWorkbenchArtifactsOutcome;
                typedef std::future<ListAIWorkbenchArtifactsOutcome> ListAIWorkbenchArtifactsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchArtifactsRequest&, ListAIWorkbenchArtifactsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchArtifactsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchExecutionsResponse> ListAIWorkbenchExecutionsOutcome;
                typedef std::future<ListAIWorkbenchExecutionsOutcome> ListAIWorkbenchExecutionsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchExecutionsRequest&, ListAIWorkbenchExecutionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchExecutionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchMCPsResponse> ListAIWorkbenchMCPsOutcome;
                typedef std::future<ListAIWorkbenchMCPsOutcome> ListAIWorkbenchMCPsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchMCPsRequest&, ListAIWorkbenchMCPsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchMCPsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchMessagesResponse> ListAIWorkbenchMessagesOutcome;
                typedef std::future<ListAIWorkbenchMessagesOutcome> ListAIWorkbenchMessagesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchMessagesRequest&, ListAIWorkbenchMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchResourceInstancesResponse> ListAIWorkbenchResourceInstancesOutcome;
                typedef std::future<ListAIWorkbenchResourceInstancesOutcome> ListAIWorkbenchResourceInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchResourceInstancesRequest&, ListAIWorkbenchResourceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchResourceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchResourceMapsResponse> ListAIWorkbenchResourceMapsOutcome;
                typedef std::future<ListAIWorkbenchResourceMapsOutcome> ListAIWorkbenchResourceMapsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchResourceMapsRequest&, ListAIWorkbenchResourceMapsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchResourceMapsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchSessionsResponse> ListAIWorkbenchSessionsOutcome;
                typedef std::future<ListAIWorkbenchSessionsOutcome> ListAIWorkbenchSessionsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchSessionsRequest&, ListAIWorkbenchSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchSkillsResponse> ListAIWorkbenchSkillsOutcome;
                typedef std::future<ListAIWorkbenchSkillsOutcome> ListAIWorkbenchSkillsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchSkillsRequest&, ListAIWorkbenchSkillsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchSkillsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchTasksResponse> ListAIWorkbenchTasksOutcome;
                typedef std::future<ListAIWorkbenchTasksOutcome> ListAIWorkbenchTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchTasksRequest&, ListAIWorkbenchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNoticeContentTmplResponse> ModifyNoticeContentTmplOutcome;
                typedef std::future<ModifyNoticeContentTmplOutcome> ModifyNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyNoticeContentTmplRequest&, ModifyNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeContentTmplAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerAIWorkbenchSREDigitalTwinTaskResponse> TriggerAIWorkbenchSREDigitalTwinTaskOutcome;
                typedef std::future<TriggerAIWorkbenchSREDigitalTwinTaskOutcome> TriggerAIWorkbenchSREDigitalTwinTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::TriggerAIWorkbenchSREDigitalTwinTaskRequest&, TriggerAIWorkbenchSREDigitalTwinTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerAIWorkbenchSREDigitalTwinTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerAIWorkbenchTaskResponse> TriggerAIWorkbenchTaskOutcome;
                typedef std::future<TriggerAIWorkbenchTaskOutcome> TriggerAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::TriggerAIWorkbenchTaskRequest&, TriggerAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAIWorkbenchAgentResponse> UpdateAIWorkbenchAgentOutcome;
                typedef std::future<UpdateAIWorkbenchAgentOutcome> UpdateAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAIWorkbenchAgentRequest&, UpdateAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAIWorkbenchAgentAsyncHandler;



                /**
                 *取消对话执行
                 * @param req CancelAIWorkbenchChatRequest
                 * @return CancelAIWorkbenchChatOutcome
                 */
                CancelAIWorkbenchChatOutcome CancelAIWorkbenchChat(const Model::CancelAIWorkbenchChatRequest &request);
                void CancelAIWorkbenchChatAsync(const Model::CancelAIWorkbenchChatRequest& request, const CancelAIWorkbenchChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAIWorkbenchChatOutcomeCallable CancelAIWorkbenchChatCallable(const Model::CancelAIWorkbenchChatRequest& request);

                /**
                 *创建 Agent
                 * @param req CreateAIWorkbenchAgentRequest
                 * @return CreateAIWorkbenchAgentOutcome
                 */
                CreateAIWorkbenchAgentOutcome CreateAIWorkbenchAgent(const Model::CreateAIWorkbenchAgentRequest &request);
                void CreateAIWorkbenchAgentAsync(const Model::CreateAIWorkbenchAgentRequest& request, const CreateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIWorkbenchAgentOutcomeCallable CreateAIWorkbenchAgentCallable(const Model::CreateAIWorkbenchAgentRequest& request);

                /**
                 *创建任务
                 * @param req CreateAIWorkbenchTaskRequest
                 * @return CreateAIWorkbenchTaskOutcome
                 */
                CreateAIWorkbenchTaskOutcome CreateAIWorkbenchTask(const Model::CreateAIWorkbenchTaskRequest &request);
                void CreateAIWorkbenchTaskAsync(const Model::CreateAIWorkbenchTaskRequest& request, const CreateAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIWorkbenchTaskOutcomeCallable CreateAIWorkbenchTaskCallable(const Model::CreateAIWorkbenchTaskRequest& request);

                /**
                 *创建自定义通知内容模板
                 * @param req CreateNoticeContentTmplRequest
                 * @return CreateNoticeContentTmplOutcome
                 */
                CreateNoticeContentTmplOutcome CreateNoticeContentTmpl(const Model::CreateNoticeContentTmplRequest &request);
                void CreateNoticeContentTmplAsync(const Model::CreateNoticeContentTmplRequest& request, const CreateNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNoticeContentTmplOutcomeCallable CreateNoticeContentTmplCallable(const Model::CreateNoticeContentTmplRequest& request);

                /**
                 *删除 Agent
                 * @param req DeleteAIWorkbenchAgentRequest
                 * @return DeleteAIWorkbenchAgentOutcome
                 */
                DeleteAIWorkbenchAgentOutcome DeleteAIWorkbenchAgent(const Model::DeleteAIWorkbenchAgentRequest &request);
                void DeleteAIWorkbenchAgentAsync(const Model::DeleteAIWorkbenchAgentRequest& request, const DeleteAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIWorkbenchAgentOutcomeCallable DeleteAIWorkbenchAgentCallable(const Model::DeleteAIWorkbenchAgentRequest& request);

                /**
                 *删除任务
                 * @param req DeleteAIWorkbenchTaskRequest
                 * @return DeleteAIWorkbenchTaskOutcome
                 */
                DeleteAIWorkbenchTaskOutcome DeleteAIWorkbenchTask(const Model::DeleteAIWorkbenchTaskRequest &request);
                void DeleteAIWorkbenchTaskAsync(const Model::DeleteAIWorkbenchTaskRequest& request, const DeleteAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIWorkbenchTaskOutcomeCallable DeleteAIWorkbenchTaskCallable(const Model::DeleteAIWorkbenchTaskRequest& request);

                /**
                 *删除通知内容模板
                 * @param req DeleteNoticeContentTmplsRequest
                 * @return DeleteNoticeContentTmplsOutcome
                 */
                DeleteNoticeContentTmplsOutcome DeleteNoticeContentTmpls(const Model::DeleteNoticeContentTmplsRequest &request);
                void DeleteNoticeContentTmplsAsync(const Model::DeleteNoticeContentTmplsRequest& request, const DeleteNoticeContentTmplsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNoticeContentTmplsOutcomeCallable DeleteNoticeContentTmplsCallable(const Model::DeleteNoticeContentTmplsRequest& request);

                /**
                 *查询 Agent 详情
                 * @param req DescribeAIWorkbenchAgentRequest
                 * @return DescribeAIWorkbenchAgentOutcome
                 */
                DescribeAIWorkbenchAgentOutcome DescribeAIWorkbenchAgent(const Model::DescribeAIWorkbenchAgentRequest &request);
                void DescribeAIWorkbenchAgentAsync(const Model::DescribeAIWorkbenchAgentRequest& request, const DescribeAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchAgentOutcomeCallable DescribeAIWorkbenchAgentCallable(const Model::DescribeAIWorkbenchAgentRequest& request);

                /**
                 *查询制品详情
                 * @param req DescribeAIWorkbenchArtifactRequest
                 * @return DescribeAIWorkbenchArtifactOutcome
                 */
                DescribeAIWorkbenchArtifactOutcome DescribeAIWorkbenchArtifact(const Model::DescribeAIWorkbenchArtifactRequest &request);
                void DescribeAIWorkbenchArtifactAsync(const Model::DescribeAIWorkbenchArtifactRequest& request, const DescribeAIWorkbenchArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchArtifactOutcomeCallable DescribeAIWorkbenchArtifactCallable(const Model::DescribeAIWorkbenchArtifactRequest& request);

                /**
                 *查询执行详情
                 * @param req DescribeAIWorkbenchExecutionRequest
                 * @return DescribeAIWorkbenchExecutionOutcome
                 */
                DescribeAIWorkbenchExecutionOutcome DescribeAIWorkbenchExecution(const Model::DescribeAIWorkbenchExecutionRequest &request);
                void DescribeAIWorkbenchExecutionAsync(const Model::DescribeAIWorkbenchExecutionRequest& request, const DescribeAIWorkbenchExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchExecutionOutcomeCallable DescribeAIWorkbenchExecutionCallable(const Model::DescribeAIWorkbenchExecutionRequest& request);

                /**
                 *查询AI工作台SRE数字分身任务列表
                 * @param req DescribeAIWorkbenchSREDigitalTwinTaskListRequest
                 * @return DescribeAIWorkbenchSREDigitalTwinTaskListOutcome
                 */
                DescribeAIWorkbenchSREDigitalTwinTaskListOutcome DescribeAIWorkbenchSREDigitalTwinTaskList(const Model::DescribeAIWorkbenchSREDigitalTwinTaskListRequest &request);
                void DescribeAIWorkbenchSREDigitalTwinTaskListAsync(const Model::DescribeAIWorkbenchSREDigitalTwinTaskListRequest& request, const DescribeAIWorkbenchSREDigitalTwinTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSREDigitalTwinTaskListOutcomeCallable DescribeAIWorkbenchSREDigitalTwinTaskListCallable(const Model::DescribeAIWorkbenchSREDigitalTwinTaskListRequest& request);

                /**
                 *查询AI工作台SRE数字分身工作日志详细信息
                 * @param req DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest
                 * @return DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome
                 */
                DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcome DescribeAIWorkbenchSREDigitalTwinWorkLogDetail(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest &request);
                void DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsync(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSREDigitalTwinWorkLogDetailOutcomeCallable DescribeAIWorkbenchSREDigitalTwinWorkLogDetailCallable(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogDetailRequest& request);

                /**
                 *查询AI工作台SRE数字分身任务工作日志列表
                 * @param req DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest
                 * @return DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome
                 */
                DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcome DescribeAIWorkbenchSREDigitalTwinWorkLogList(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest &request);
                void DescribeAIWorkbenchSREDigitalTwinWorkLogListAsync(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest& request, const DescribeAIWorkbenchSREDigitalTwinWorkLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSREDigitalTwinWorkLogListOutcomeCallable DescribeAIWorkbenchSREDigitalTwinWorkLogListCallable(const Model::DescribeAIWorkbenchSREDigitalTwinWorkLogListRequest& request);

                /**
                 *查询会话详情
                 * @param req DescribeAIWorkbenchSessionRequest
                 * @return DescribeAIWorkbenchSessionOutcome
                 */
                DescribeAIWorkbenchSessionOutcome DescribeAIWorkbenchSession(const Model::DescribeAIWorkbenchSessionRequest &request);
                void DescribeAIWorkbenchSessionAsync(const Model::DescribeAIWorkbenchSessionRequest& request, const DescribeAIWorkbenchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSessionOutcomeCallable DescribeAIWorkbenchSessionCallable(const Model::DescribeAIWorkbenchSessionRequest& request);

                /**
                 *查询技能详情
                 * @param req DescribeAIWorkbenchSkillRequest
                 * @return DescribeAIWorkbenchSkillOutcome
                 */
                DescribeAIWorkbenchSkillOutcome DescribeAIWorkbenchSkill(const Model::DescribeAIWorkbenchSkillRequest &request);
                void DescribeAIWorkbenchSkillAsync(const Model::DescribeAIWorkbenchSkillRequest& request, const DescribeAIWorkbenchSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSkillOutcomeCallable DescribeAIWorkbenchSkillCallable(const Model::DescribeAIWorkbenchSkillRequest& request);

                /**
                 *按需查询告警的通知历史
                 * @param req DescribeAlarmNotifyHistoriesRequest
                 * @return DescribeAlarmNotifyHistoriesOutcome
                 */
                DescribeAlarmNotifyHistoriesOutcome DescribeAlarmNotifyHistories(const Model::DescribeAlarmNotifyHistoriesRequest &request);
                void DescribeAlarmNotifyHistoriesAsync(const Model::DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNotifyHistoriesOutcomeCallable DescribeAlarmNotifyHistoriesCallable(const Model::DescribeAlarmNotifyHistoriesRequest& request);

                /**
                 *根据查询条件获取自定义通知内容模板，若所有查询条件空，则获取账号下所有模板
                 * @param req DescribeNoticeContentTmplRequest
                 * @return DescribeNoticeContentTmplOutcome
                 */
                DescribeNoticeContentTmplOutcome DescribeNoticeContentTmpl(const Model::DescribeNoticeContentTmplRequest &request);
                void DescribeNoticeContentTmplAsync(const Model::DescribeNoticeContentTmplRequest& request, const DescribeNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoticeContentTmplOutcomeCallable DescribeNoticeContentTmplCallable(const Model::DescribeNoticeContentTmplRequest& request);

                /**
                 *获取AI工作台制品的下载地址
                 * @param req GetAIWorkbenchArtifactDownloadURLRequest
                 * @return GetAIWorkbenchArtifactDownloadURLOutcome
                 */
                GetAIWorkbenchArtifactDownloadURLOutcome GetAIWorkbenchArtifactDownloadURL(const Model::GetAIWorkbenchArtifactDownloadURLRequest &request);
                void GetAIWorkbenchArtifactDownloadURLAsync(const Model::GetAIWorkbenchArtifactDownloadURLRequest& request, const GetAIWorkbenchArtifactDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAIWorkbenchArtifactDownloadURLOutcomeCallable GetAIWorkbenchArtifactDownloadURLCallable(const Model::GetAIWorkbenchArtifactDownloadURLRequest& request);

                /**
                 *查询 Agent 列表
                 * @param req ListAIWorkbenchAgentsRequest
                 * @return ListAIWorkbenchAgentsOutcome
                 */
                ListAIWorkbenchAgentsOutcome ListAIWorkbenchAgents(const Model::ListAIWorkbenchAgentsRequest &request);
                void ListAIWorkbenchAgentsAsync(const Model::ListAIWorkbenchAgentsRequest& request, const ListAIWorkbenchAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchAgentsOutcomeCallable ListAIWorkbenchAgentsCallable(const Model::ListAIWorkbenchAgentsRequest& request);

                /**
                 *查询产物列表
                 * @param req ListAIWorkbenchArtifactsRequest
                 * @return ListAIWorkbenchArtifactsOutcome
                 */
                ListAIWorkbenchArtifactsOutcome ListAIWorkbenchArtifacts(const Model::ListAIWorkbenchArtifactsRequest &request);
                void ListAIWorkbenchArtifactsAsync(const Model::ListAIWorkbenchArtifactsRequest& request, const ListAIWorkbenchArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchArtifactsOutcomeCallable ListAIWorkbenchArtifactsCallable(const Model::ListAIWorkbenchArtifactsRequest& request);

                /**
                 *查询执行列表
                 * @param req ListAIWorkbenchExecutionsRequest
                 * @return ListAIWorkbenchExecutionsOutcome
                 */
                ListAIWorkbenchExecutionsOutcome ListAIWorkbenchExecutions(const Model::ListAIWorkbenchExecutionsRequest &request);
                void ListAIWorkbenchExecutionsAsync(const Model::ListAIWorkbenchExecutionsRequest& request, const ListAIWorkbenchExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchExecutionsOutcomeCallable ListAIWorkbenchExecutionsCallable(const Model::ListAIWorkbenchExecutionsRequest& request);

                /**
                 *查询 MCP 列表
                 * @param req ListAIWorkbenchMCPsRequest
                 * @return ListAIWorkbenchMCPsOutcome
                 */
                ListAIWorkbenchMCPsOutcome ListAIWorkbenchMCPs(const Model::ListAIWorkbenchMCPsRequest &request);
                void ListAIWorkbenchMCPsAsync(const Model::ListAIWorkbenchMCPsRequest& request, const ListAIWorkbenchMCPsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchMCPsOutcomeCallable ListAIWorkbenchMCPsCallable(const Model::ListAIWorkbenchMCPsRequest& request);

                /**
                 *查询消息列表
                 * @param req ListAIWorkbenchMessagesRequest
                 * @return ListAIWorkbenchMessagesOutcome
                 */
                ListAIWorkbenchMessagesOutcome ListAIWorkbenchMessages(const Model::ListAIWorkbenchMessagesRequest &request);
                void ListAIWorkbenchMessagesAsync(const Model::ListAIWorkbenchMessagesRequest& request, const ListAIWorkbenchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchMessagesOutcomeCallable ListAIWorkbenchMessagesCallable(const Model::ListAIWorkbenchMessagesRequest& request);

                /**
                 *列出资源实例
                 * @param req ListAIWorkbenchResourceInstancesRequest
                 * @return ListAIWorkbenchResourceInstancesOutcome
                 */
                ListAIWorkbenchResourceInstancesOutcome ListAIWorkbenchResourceInstances(const Model::ListAIWorkbenchResourceInstancesRequest &request);
                void ListAIWorkbenchResourceInstancesAsync(const Model::ListAIWorkbenchResourceInstancesRequest& request, const ListAIWorkbenchResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchResourceInstancesOutcomeCallable ListAIWorkbenchResourceInstancesCallable(const Model::ListAIWorkbenchResourceInstancesRequest& request);

                /**
                 *查询资源地图列表
                 * @param req ListAIWorkbenchResourceMapsRequest
                 * @return ListAIWorkbenchResourceMapsOutcome
                 */
                ListAIWorkbenchResourceMapsOutcome ListAIWorkbenchResourceMaps(const Model::ListAIWorkbenchResourceMapsRequest &request);
                void ListAIWorkbenchResourceMapsAsync(const Model::ListAIWorkbenchResourceMapsRequest& request, const ListAIWorkbenchResourceMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchResourceMapsOutcomeCallable ListAIWorkbenchResourceMapsCallable(const Model::ListAIWorkbenchResourceMapsRequest& request);

                /**
                 *查询会话列表
                 * @param req ListAIWorkbenchSessionsRequest
                 * @return ListAIWorkbenchSessionsOutcome
                 */
                ListAIWorkbenchSessionsOutcome ListAIWorkbenchSessions(const Model::ListAIWorkbenchSessionsRequest &request);
                void ListAIWorkbenchSessionsAsync(const Model::ListAIWorkbenchSessionsRequest& request, const ListAIWorkbenchSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchSessionsOutcomeCallable ListAIWorkbenchSessionsCallable(const Model::ListAIWorkbenchSessionsRequest& request);

                /**
                 *查询技能列表
                 * @param req ListAIWorkbenchSkillsRequest
                 * @return ListAIWorkbenchSkillsOutcome
                 */
                ListAIWorkbenchSkillsOutcome ListAIWorkbenchSkills(const Model::ListAIWorkbenchSkillsRequest &request);
                void ListAIWorkbenchSkillsAsync(const Model::ListAIWorkbenchSkillsRequest& request, const ListAIWorkbenchSkillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchSkillsOutcomeCallable ListAIWorkbenchSkillsCallable(const Model::ListAIWorkbenchSkillsRequest& request);

                /**
                 *查询任务列表
                 * @param req ListAIWorkbenchTasksRequest
                 * @return ListAIWorkbenchTasksOutcome
                 */
                ListAIWorkbenchTasksOutcome ListAIWorkbenchTasks(const Model::ListAIWorkbenchTasksRequest &request);
                void ListAIWorkbenchTasksAsync(const Model::ListAIWorkbenchTasksRequest& request, const ListAIWorkbenchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchTasksOutcomeCallable ListAIWorkbenchTasksCallable(const Model::ListAIWorkbenchTasksRequest& request);

                /**
                 *修改通知内容模板
                 * @param req ModifyNoticeContentTmplRequest
                 * @return ModifyNoticeContentTmplOutcome
                 */
                ModifyNoticeContentTmplOutcome ModifyNoticeContentTmpl(const Model::ModifyNoticeContentTmplRequest &request);
                void ModifyNoticeContentTmplAsync(const Model::ModifyNoticeContentTmplRequest& request, const ModifyNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNoticeContentTmplOutcomeCallable ModifyNoticeContentTmplCallable(const Model::ModifyNoticeContentTmplRequest& request);

                /**
                 *触发数字分身任务请求
                 * @param req TriggerAIWorkbenchSREDigitalTwinTaskRequest
                 * @return TriggerAIWorkbenchSREDigitalTwinTaskOutcome
                 */
                TriggerAIWorkbenchSREDigitalTwinTaskOutcome TriggerAIWorkbenchSREDigitalTwinTask(const Model::TriggerAIWorkbenchSREDigitalTwinTaskRequest &request);
                void TriggerAIWorkbenchSREDigitalTwinTaskAsync(const Model::TriggerAIWorkbenchSREDigitalTwinTaskRequest& request, const TriggerAIWorkbenchSREDigitalTwinTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerAIWorkbenchSREDigitalTwinTaskOutcomeCallable TriggerAIWorkbenchSREDigitalTwinTaskCallable(const Model::TriggerAIWorkbenchSREDigitalTwinTaskRequest& request);

                /**
                 *手动触发任务
                 * @param req TriggerAIWorkbenchTaskRequest
                 * @return TriggerAIWorkbenchTaskOutcome
                 */
                TriggerAIWorkbenchTaskOutcome TriggerAIWorkbenchTask(const Model::TriggerAIWorkbenchTaskRequest &request);
                void TriggerAIWorkbenchTaskAsync(const Model::TriggerAIWorkbenchTaskRequest& request, const TriggerAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerAIWorkbenchTaskOutcomeCallable TriggerAIWorkbenchTaskCallable(const Model::TriggerAIWorkbenchTaskRequest& request);

                /**
                 *更新 Agent
                 * @param req UpdateAIWorkbenchAgentRequest
                 * @return UpdateAIWorkbenchAgentOutcome
                 */
                UpdateAIWorkbenchAgentOutcome UpdateAIWorkbenchAgent(const Model::UpdateAIWorkbenchAgentRequest &request);
                void UpdateAIWorkbenchAgentAsync(const Model::UpdateAIWorkbenchAgentRequest& request, const UpdateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAIWorkbenchAgentOutcomeCallable UpdateAIWorkbenchAgentCallable(const Model::UpdateAIWorkbenchAgentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_

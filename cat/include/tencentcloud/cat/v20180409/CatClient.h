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

#ifndef TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_
#define TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cat/v20180409/model/BindAlarmPolicyRequest.h>
#include <tencentcloud/cat/v20180409/model/BindAlarmPolicyResponse.h>
#include <tencentcloud/cat/v20180409/model/CreateAgentGroupRequest.h>
#include <tencentcloud/cat/v20180409/model/CreateAgentGroupResponse.h>
#include <tencentcloud/cat/v20180409/model/CreateTaskExRequest.h>
#include <tencentcloud/cat/v20180409/model/CreateTaskExResponse.h>
#include <tencentcloud/cat/v20180409/model/DeleteAgentGroupRequest.h>
#include <tencentcloud/cat/v20180409/model/DeleteAgentGroupResponse.h>
#include <tencentcloud/cat/v20180409/model/DeleteTasksRequest.h>
#include <tencentcloud/cat/v20180409/model/DeleteTasksResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeAgentGroupsRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeAgentGroupsResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeAgentsRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeAgentsResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmTopicRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmTopicResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmsRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmsResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmsByTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeAlarmsByTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeCatLogsRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeCatLogsResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeTasksByTypeRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeTasksByTypeResponse.h>
#include <tencentcloud/cat/v20180409/model/DescribeUserLimitRequest.h>
#include <tencentcloud/cat/v20180409/model/DescribeUserLimitResponse.h>
#include <tencentcloud/cat/v20180409/model/GetAvailRatioHistoryRequest.h>
#include <tencentcloud/cat/v20180409/model/GetAvailRatioHistoryResponse.h>
#include <tencentcloud/cat/v20180409/model/GetDailyAvailRatioRequest.h>
#include <tencentcloud/cat/v20180409/model/GetDailyAvailRatioResponse.h>
#include <tencentcloud/cat/v20180409/model/GetRealAvailRatioRequest.h>
#include <tencentcloud/cat/v20180409/model/GetRealAvailRatioResponse.h>
#include <tencentcloud/cat/v20180409/model/GetRespTimeTrendExRequest.h>
#include <tencentcloud/cat/v20180409/model/GetRespTimeTrendExResponse.h>
#include <tencentcloud/cat/v20180409/model/GetResultSummaryRequest.h>
#include <tencentcloud/cat/v20180409/model/GetResultSummaryResponse.h>
#include <tencentcloud/cat/v20180409/model/GetReturnCodeHistoryRequest.h>
#include <tencentcloud/cat/v20180409/model/GetReturnCodeHistoryResponse.h>
#include <tencentcloud/cat/v20180409/model/GetReturnCodeInfoRequest.h>
#include <tencentcloud/cat/v20180409/model/GetReturnCodeInfoResponse.h>
#include <tencentcloud/cat/v20180409/model/GetTaskTotalNumberRequest.h>
#include <tencentcloud/cat/v20180409/model/GetTaskTotalNumberResponse.h>
#include <tencentcloud/cat/v20180409/model/ModifyAgentGroupRequest.h>
#include <tencentcloud/cat/v20180409/model/ModifyAgentGroupResponse.h>
#include <tencentcloud/cat/v20180409/model/ModifyTaskExRequest.h>
#include <tencentcloud/cat/v20180409/model/ModifyTaskExResponse.h>
#include <tencentcloud/cat/v20180409/model/PauseTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/PauseTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/RunTaskRequest.h>
#include <tencentcloud/cat/v20180409/model/RunTaskResponse.h>
#include <tencentcloud/cat/v20180409/model/VerifyResultRequest.h>
#include <tencentcloud/cat/v20180409/model/VerifyResultResponse.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            class CatClient : public AbstractClient
            {
            public:
                CatClient(const Credential &credential, const std::string &region);
                CatClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindAlarmPolicyResponse> BindAlarmPolicyOutcome;
                typedef std::future<BindAlarmPolicyOutcome> BindAlarmPolicyOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::BindAlarmPolicyRequest&, BindAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentGroupResponse> CreateAgentGroupOutcome;
                typedef std::future<CreateAgentGroupOutcome> CreateAgentGroupOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::CreateAgentGroupRequest&, CreateAgentGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskExResponse> CreateTaskExOutcome;
                typedef std::future<CreateTaskExOutcome> CreateTaskExOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::CreateTaskExRequest&, CreateTaskExOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskExAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentGroupResponse> DeleteAgentGroupOutcome;
                typedef std::future<DeleteAgentGroupOutcome> DeleteAgentGroupOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DeleteAgentGroupRequest&, DeleteAgentGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTasksResponse> DeleteTasksOutcome;
                typedef std::future<DeleteTasksOutcome> DeleteTasksOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DeleteTasksRequest&, DeleteTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentGroupsResponse> DescribeAgentGroupsOutcome;
                typedef std::future<DescribeAgentGroupsOutcome> DescribeAgentGroupsOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeAgentGroupsRequest&, DescribeAgentGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentsResponse> DescribeAgentsOutcome;
                typedef std::future<DescribeAgentsOutcome> DescribeAgentsOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeAgentsRequest&, DescribeAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmTopicResponse> DescribeAlarmTopicOutcome;
                typedef std::future<DescribeAlarmTopicOutcome> DescribeAlarmTopicOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeAlarmTopicRequest&, DescribeAlarmTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmsResponse> DescribeAlarmsOutcome;
                typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeAlarmsRequest&, DescribeAlarmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmsByTaskResponse> DescribeAlarmsByTaskOutcome;
                typedef std::future<DescribeAlarmsByTaskOutcome> DescribeAlarmsByTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeAlarmsByTaskRequest&, DescribeAlarmsByTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsByTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCatLogsResponse> DescribeCatLogsOutcome;
                typedef std::future<DescribeCatLogsOutcome> DescribeCatLogsOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeCatLogsRequest&, DescribeCatLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCatLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTasksByTypeResponse> DescribeTasksByTypeOutcome;
                typedef std::future<DescribeTasksByTypeOutcome> DescribeTasksByTypeOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeTasksByTypeRequest&, DescribeTasksByTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksByTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserLimitResponse> DescribeUserLimitOutcome;
                typedef std::future<DescribeUserLimitOutcome> DescribeUserLimitOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::DescribeUserLimitRequest&, DescribeUserLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAvailRatioHistoryResponse> GetAvailRatioHistoryOutcome;
                typedef std::future<GetAvailRatioHistoryOutcome> GetAvailRatioHistoryOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetAvailRatioHistoryRequest&, GetAvailRatioHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAvailRatioHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDailyAvailRatioResponse> GetDailyAvailRatioOutcome;
                typedef std::future<GetDailyAvailRatioOutcome> GetDailyAvailRatioOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetDailyAvailRatioRequest&, GetDailyAvailRatioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDailyAvailRatioAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRealAvailRatioResponse> GetRealAvailRatioOutcome;
                typedef std::future<GetRealAvailRatioOutcome> GetRealAvailRatioOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetRealAvailRatioRequest&, GetRealAvailRatioOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRealAvailRatioAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRespTimeTrendExResponse> GetRespTimeTrendExOutcome;
                typedef std::future<GetRespTimeTrendExOutcome> GetRespTimeTrendExOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetRespTimeTrendExRequest&, GetRespTimeTrendExOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRespTimeTrendExAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResultSummaryResponse> GetResultSummaryOutcome;
                typedef std::future<GetResultSummaryOutcome> GetResultSummaryOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetResultSummaryRequest&, GetResultSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResultSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetReturnCodeHistoryResponse> GetReturnCodeHistoryOutcome;
                typedef std::future<GetReturnCodeHistoryOutcome> GetReturnCodeHistoryOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetReturnCodeHistoryRequest&, GetReturnCodeHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetReturnCodeHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetReturnCodeInfoResponse> GetReturnCodeInfoOutcome;
                typedef std::future<GetReturnCodeInfoOutcome> GetReturnCodeInfoOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetReturnCodeInfoRequest&, GetReturnCodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetReturnCodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskTotalNumberResponse> GetTaskTotalNumberOutcome;
                typedef std::future<GetTaskTotalNumberOutcome> GetTaskTotalNumberOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::GetTaskTotalNumberRequest&, GetTaskTotalNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskTotalNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentGroupResponse> ModifyAgentGroupOutcome;
                typedef std::future<ModifyAgentGroupOutcome> ModifyAgentGroupOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::ModifyAgentGroupRequest&, ModifyAgentGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskExResponse> ModifyTaskExOutcome;
                typedef std::future<ModifyTaskExOutcome> ModifyTaskExOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::ModifyTaskExRequest&, ModifyTaskExOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskExAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseTaskResponse> PauseTaskOutcome;
                typedef std::future<PauseTaskOutcome> PauseTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::PauseTaskRequest&, PauseTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::RunTaskResponse> RunTaskOutcome;
                typedef std::future<RunTaskOutcome> RunTaskOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::RunTaskRequest&, RunTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyResultResponse> VerifyResultOutcome;
                typedef std::future<VerifyResultOutcome> VerifyResultOutcomeCallable;
                typedef std::function<void(const CatClient*, const Model::VerifyResultRequest&, VerifyResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyResultAsyncHandler;



                /**
                 *绑定拨测任务和告警策略组
                 * @param req BindAlarmPolicyRequest
                 * @return BindAlarmPolicyOutcome
                 */
                BindAlarmPolicyOutcome BindAlarmPolicy(const Model::BindAlarmPolicyRequest &request);
                void BindAlarmPolicyAsync(const Model::BindAlarmPolicyRequest& request, const BindAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAlarmPolicyOutcomeCallable BindAlarmPolicyCallable(const Model::BindAlarmPolicyRequest& request);

                /**
                 *添加拨测分组
                 * @param req CreateAgentGroupRequest
                 * @return CreateAgentGroupOutcome
                 */
                CreateAgentGroupOutcome CreateAgentGroup(const Model::CreateAgentGroupRequest &request);
                void CreateAgentGroupAsync(const Model::CreateAgentGroupRequest& request, const CreateAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentGroupOutcomeCallable CreateAgentGroupCallable(const Model::CreateAgentGroupRequest& request);

                /**
                 *创建拨测任务(扩展)
                 * @param req CreateTaskExRequest
                 * @return CreateTaskExOutcome
                 */
                CreateTaskExOutcome CreateTaskEx(const Model::CreateTaskExRequest &request);
                void CreateTaskExAsync(const Model::CreateTaskExRequest& request, const CreateTaskExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskExOutcomeCallable CreateTaskExCallable(const Model::CreateTaskExRequest& request);

                /**
                 *删除拨测分组
                 * @param req DeleteAgentGroupRequest
                 * @return DeleteAgentGroupOutcome
                 */
                DeleteAgentGroupOutcome DeleteAgentGroup(const Model::DeleteAgentGroupRequest &request);
                void DeleteAgentGroupAsync(const Model::DeleteAgentGroupRequest& request, const DeleteAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentGroupOutcomeCallable DeleteAgentGroupCallable(const Model::DeleteAgentGroupRequest& request);

                /**
                 *删除多个拨测任务
                 * @param req DeleteTasksRequest
                 * @return DeleteTasksOutcome
                 */
                DeleteTasksOutcome DeleteTasks(const Model::DeleteTasksRequest &request);
                void DeleteTasksAsync(const Model::DeleteTasksRequest& request, const DeleteTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTasksOutcomeCallable DeleteTasksCallable(const Model::DeleteTasksRequest& request);

                /**
                 *查询拨测分组列表
                 * @param req DescribeAgentGroupsRequest
                 * @return DescribeAgentGroupsOutcome
                 */
                DescribeAgentGroupsOutcome DescribeAgentGroups(const Model::DescribeAgentGroupsRequest &request);
                void DescribeAgentGroupsAsync(const Model::DescribeAgentGroupsRequest& request, const DescribeAgentGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentGroupsOutcomeCallable DescribeAgentGroupsCallable(const Model::DescribeAgentGroupsRequest& request);

                /**
                 *查询本用户可选的拨测点列表
                 * @param req DescribeAgentsRequest
                 * @return DescribeAgentsOutcome
                 */
                DescribeAgentsOutcome DescribeAgents(const Model::DescribeAgentsRequest &request);
                void DescribeAgentsAsync(const Model::DescribeAgentsRequest& request, const DescribeAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentsOutcomeCallable DescribeAgentsCallable(const Model::DescribeAgentsRequest& request);

                /**
                 *查询用户的告警主题列表
                 * @param req DescribeAlarmTopicRequest
                 * @return DescribeAlarmTopicOutcome
                 */
                DescribeAlarmTopicOutcome DescribeAlarmTopic(const Model::DescribeAlarmTopicRequest &request);
                void DescribeAlarmTopicAsync(const Model::DescribeAlarmTopicRequest& request, const DescribeAlarmTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmTopicOutcomeCallable DescribeAlarmTopicCallable(const Model::DescribeAlarmTopicRequest& request);

                /**
                 *查询拨测告警列表
                 * @param req DescribeAlarmsRequest
                 * @return DescribeAlarmsOutcome
                 */
                DescribeAlarmsOutcome DescribeAlarms(const Model::DescribeAlarmsRequest &request);
                void DescribeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsOutcomeCallable DescribeAlarmsCallable(const Model::DescribeAlarmsRequest& request);

                /**
                 *按任务查询拨测告警列表
                 * @param req DescribeAlarmsByTaskRequest
                 * @return DescribeAlarmsByTaskOutcome
                 */
                DescribeAlarmsByTaskOutcome DescribeAlarmsByTask(const Model::DescribeAlarmsByTaskRequest &request);
                void DescribeAlarmsByTaskAsync(const Model::DescribeAlarmsByTaskRequest& request, const DescribeAlarmsByTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmsByTaskOutcomeCallable DescribeAlarmsByTaskCallable(const Model::DescribeAlarmsByTaskRequest& request);

                /**
                 *查询拨测流水
                 * @param req DescribeCatLogsRequest
                 * @return DescribeCatLogsOutcome
                 */
                DescribeCatLogsOutcome DescribeCatLogs(const Model::DescribeCatLogsRequest &request);
                void DescribeCatLogsAsync(const Model::DescribeCatLogsRequest& request, const DescribeCatLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCatLogsOutcomeCallable DescribeCatLogsCallable(const Model::DescribeCatLogsRequest& request);

                /**
                 *查询拨测任务信息
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *按类型查询拨测任务列表
                 * @param req DescribeTasksByTypeRequest
                 * @return DescribeTasksByTypeOutcome
                 */
                DescribeTasksByTypeOutcome DescribeTasksByType(const Model::DescribeTasksByTypeRequest &request);
                void DescribeTasksByTypeAsync(const Model::DescribeTasksByTypeRequest& request, const DescribeTasksByTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksByTypeOutcomeCallable DescribeTasksByTypeCallable(const Model::DescribeTasksByTypeRequest& request);

                /**
                 *获取用户可用资源限制
                 * @param req DescribeUserLimitRequest
                 * @return DescribeUserLimitOutcome
                 */
                DescribeUserLimitOutcome DescribeUserLimit(const Model::DescribeUserLimitRequest &request);
                void DescribeUserLimitAsync(const Model::DescribeUserLimitRequest& request, const DescribeUserLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserLimitOutcomeCallable DescribeUserLimitCallable(const Model::DescribeUserLimitRequest& request);

                /**
                 *获取指定时刻的可用率地图信息
                 * @param req GetAvailRatioHistoryRequest
                 * @return GetAvailRatioHistoryOutcome
                 */
                GetAvailRatioHistoryOutcome GetAvailRatioHistory(const Model::GetAvailRatioHistoryRequest &request);
                void GetAvailRatioHistoryAsync(const Model::GetAvailRatioHistoryRequest& request, const GetAvailRatioHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAvailRatioHistoryOutcomeCallable GetAvailRatioHistoryCallable(const Model::GetAvailRatioHistoryRequest& request);

                /**
                 *获取一天的整体可用率信息
                 * @param req GetDailyAvailRatioRequest
                 * @return GetDailyAvailRatioOutcome
                 */
                GetDailyAvailRatioOutcome GetDailyAvailRatio(const Model::GetDailyAvailRatioRequest &request);
                void GetDailyAvailRatioAsync(const Model::GetDailyAvailRatioRequest& request, const GetDailyAvailRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDailyAvailRatioOutcomeCallable GetDailyAvailRatioCallable(const Model::GetDailyAvailRatioRequest& request);

                /**
                 *获取实时可用率信息
                 * @param req GetRealAvailRatioRequest
                 * @return GetRealAvailRatioOutcome
                 */
                GetRealAvailRatioOutcome GetRealAvailRatio(const Model::GetRealAvailRatioRequest &request);
                void GetRealAvailRatioAsync(const Model::GetRealAvailRatioRequest& request, const GetRealAvailRatioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRealAvailRatioOutcomeCallable GetRealAvailRatioCallable(const Model::GetRealAvailRatioRequest& request);

                /**
                 *查询拨测任务的走势数据
                 * @param req GetRespTimeTrendExRequest
                 * @return GetRespTimeTrendExOutcome
                 */
                GetRespTimeTrendExOutcome GetRespTimeTrendEx(const Model::GetRespTimeTrendExRequest &request);
                void GetRespTimeTrendExAsync(const Model::GetRespTimeTrendExRequest& request, const GetRespTimeTrendExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRespTimeTrendExOutcomeCallable GetRespTimeTrendExCallable(const Model::GetRespTimeTrendExRequest& request);

                /**
                 *获取任务列表的实时数据
                 * @param req GetResultSummaryRequest
                 * @return GetResultSummaryOutcome
                 */
                GetResultSummaryOutcome GetResultSummary(const Model::GetResultSummaryRequest &request);
                void GetResultSummaryAsync(const Model::GetResultSummaryRequest& request, const GetResultSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResultSummaryOutcomeCallable GetResultSummaryCallable(const Model::GetResultSummaryRequest& request);

                /**
                 *查询拨测任务的历史返回码信息
                 * @param req GetReturnCodeHistoryRequest
                 * @return GetReturnCodeHistoryOutcome
                 */
                GetReturnCodeHistoryOutcome GetReturnCodeHistory(const Model::GetReturnCodeHistoryRequest &request);
                void GetReturnCodeHistoryAsync(const Model::GetReturnCodeHistoryRequest& request, const GetReturnCodeHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetReturnCodeHistoryOutcomeCallable GetReturnCodeHistoryCallable(const Model::GetReturnCodeHistoryRequest& request);

                /**
                 *查询拨测任务的返回码统计信息
                 * @param req GetReturnCodeInfoRequest
                 * @return GetReturnCodeInfoOutcome
                 */
                GetReturnCodeInfoOutcome GetReturnCodeInfo(const Model::GetReturnCodeInfoRequest &request);
                void GetReturnCodeInfoAsync(const Model::GetReturnCodeInfoRequest& request, const GetReturnCodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetReturnCodeInfoOutcomeCallable GetReturnCodeInfoCallable(const Model::GetReturnCodeInfoRequest& request);

                /**
                 *获取AppId下的拨测任务总数
                 * @param req GetTaskTotalNumberRequest
                 * @return GetTaskTotalNumberOutcome
                 */
                GetTaskTotalNumberOutcome GetTaskTotalNumber(const Model::GetTaskTotalNumberRequest &request);
                void GetTaskTotalNumberAsync(const Model::GetTaskTotalNumberRequest& request, const GetTaskTotalNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskTotalNumberOutcomeCallable GetTaskTotalNumberCallable(const Model::GetTaskTotalNumberRequest& request);

                /**
                 *修改拨测分组
                 * @param req ModifyAgentGroupRequest
                 * @return ModifyAgentGroupOutcome
                 */
                ModifyAgentGroupOutcome ModifyAgentGroup(const Model::ModifyAgentGroupRequest &request);
                void ModifyAgentGroupAsync(const Model::ModifyAgentGroupRequest& request, const ModifyAgentGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentGroupOutcomeCallable ModifyAgentGroupCallable(const Model::ModifyAgentGroupRequest& request);

                /**
                 *修改拨测任务(扩展)
                 * @param req ModifyTaskExRequest
                 * @return ModifyTaskExOutcome
                 */
                ModifyTaskExOutcome ModifyTaskEx(const Model::ModifyTaskExRequest &request);
                void ModifyTaskExAsync(const Model::ModifyTaskExRequest& request, const ModifyTaskExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskExOutcomeCallable ModifyTaskExCallable(const Model::ModifyTaskExRequest& request);

                /**
                 *暂停拨测任务
                 * @param req PauseTaskRequest
                 * @return PauseTaskOutcome
                 */
                PauseTaskOutcome PauseTask(const Model::PauseTaskRequest &request);
                void PauseTaskAsync(const Model::PauseTaskRequest& request, const PauseTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseTaskOutcomeCallable PauseTaskCallable(const Model::PauseTaskRequest& request);

                /**
                 *运行拨测任务
                 * @param req RunTaskRequest
                 * @return RunTaskOutcome
                 */
                RunTaskOutcome RunTask(const Model::RunTaskRequest &request);
                void RunTaskAsync(const Model::RunTaskRequest& request, const RunTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunTaskOutcomeCallable RunTaskCallable(const Model::RunTaskRequest& request);

                /**
                 *验证拨测任务，结果验证查询（验证成功的，才建议创建拨测任务）
                 * @param req VerifyResultRequest
                 * @return VerifyResultOutcome
                 */
                VerifyResultOutcome VerifyResult(const Model::VerifyResultRequest &request);
                void VerifyResultAsync(const Model::VerifyResultRequest& request, const VerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyResultOutcomeCallable VerifyResultCallable(const Model::VerifyResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_CATCLIENT_H_

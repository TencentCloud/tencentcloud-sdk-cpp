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

#ifndef TENCENTCLOUD_CFG_V20210820_CFGCLIENT_H_
#define TENCENTCLOUD_CFG_V20210820_CFGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromActionRequest.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromActionResponse.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromMultiActionRequest.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromMultiActionResponse.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateRequest.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateResponse.h>
#include <tencentcloud/cfg/v20210820/model/DeleteTaskRequest.h>
#include <tencentcloud/cfg/v20210820/model/DeleteTaskResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeActionFieldConfigListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeActionFieldConfigListResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeActionLibraryListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeActionLibraryListResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeObjectTypeListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeObjectTypeListResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskListResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskPolicyTriggerLogRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskPolicyTriggerLogResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTemplateRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTemplateResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTemplateListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTemplateListResponse.h>
#include <tencentcloud/cfg/v20210820/model/ExecuteTaskRequest.h>
#include <tencentcloud/cfg/v20210820/model/ExecuteTaskResponse.h>
#include <tencentcloud/cfg/v20210820/model/ExecuteTaskInstanceRequest.h>
#include <tencentcloud/cfg/v20210820/model/ExecuteTaskInstanceResponse.h>
#include <tencentcloud/cfg/v20210820/model/ModifyTaskRunStatusRequest.h>
#include <tencentcloud/cfg/v20210820/model/ModifyTaskRunStatusResponse.h>
#include <tencentcloud/cfg/v20210820/model/TriggerPolicyRequest.h>
#include <tencentcloud/cfg/v20210820/model/TriggerPolicyResponse.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            class CfgClient : public AbstractClient
            {
            public:
                CfgClient(const Credential &credential, const std::string &region);
                CfgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateTaskFromActionResponse> CreateTaskFromActionOutcome;
                typedef std::future<CreateTaskFromActionOutcome> CreateTaskFromActionOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::CreateTaskFromActionRequest&, CreateTaskFromActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFromActionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFromMultiActionResponse> CreateTaskFromMultiActionOutcome;
                typedef std::future<CreateTaskFromMultiActionOutcome> CreateTaskFromMultiActionOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::CreateTaskFromMultiActionRequest&, CreateTaskFromMultiActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFromMultiActionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTaskFromTemplateResponse> CreateTaskFromTemplateOutcome;
                typedef std::future<CreateTaskFromTemplateOutcome> CreateTaskFromTemplateOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::CreateTaskFromTemplateRequest&, CreateTaskFromTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFromTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActionFieldConfigListResponse> DescribeActionFieldConfigListOutcome;
                typedef std::future<DescribeActionFieldConfigListOutcome> DescribeActionFieldConfigListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeActionFieldConfigListRequest&, DescribeActionFieldConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionFieldConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActionLibraryListResponse> DescribeActionLibraryListOutcome;
                typedef std::future<DescribeActionLibraryListOutcome> DescribeActionLibraryListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeActionLibraryListRequest&, DescribeActionLibraryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActionLibraryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeObjectTypeListResponse> DescribeObjectTypeListOutcome;
                typedef std::future<DescribeObjectTypeListOutcome> DescribeObjectTypeListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeObjectTypeListRequest&, DescribeObjectTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeObjectTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskExecuteLogsResponse> DescribeTaskExecuteLogsOutcome;
                typedef std::future<DescribeTaskExecuteLogsOutcome> DescribeTaskExecuteLogsOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskExecuteLogsRequest&, DescribeTaskExecuteLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskExecuteLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskListResponse> DescribeTaskListOutcome;
                typedef std::future<DescribeTaskListOutcome> DescribeTaskListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskListRequest&, DescribeTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskPolicyTriggerLogResponse> DescribeTaskPolicyTriggerLogOutcome;
                typedef std::future<DescribeTaskPolicyTriggerLogOutcome> DescribeTaskPolicyTriggerLogOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskPolicyTriggerLogRequest&, DescribeTaskPolicyTriggerLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskPolicyTriggerLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateResponse> DescribeTemplateOutcome;
                typedef std::future<DescribeTemplateOutcome> DescribeTemplateOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTemplateRequest&, DescribeTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplateListResponse> DescribeTemplateListOutcome;
                typedef std::future<DescribeTemplateListOutcome> DescribeTemplateListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTemplateListRequest&, DescribeTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteTaskResponse> ExecuteTaskOutcome;
                typedef std::future<ExecuteTaskOutcome> ExecuteTaskOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::ExecuteTaskRequest&, ExecuteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteTaskInstanceResponse> ExecuteTaskInstanceOutcome;
                typedef std::future<ExecuteTaskInstanceOutcome> ExecuteTaskInstanceOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::ExecuteTaskInstanceRequest&, ExecuteTaskInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteTaskInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTaskRunStatusResponse> ModifyTaskRunStatusOutcome;
                typedef std::future<ModifyTaskRunStatusOutcome> ModifyTaskRunStatusOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::ModifyTaskRunStatusRequest&, ModifyTaskRunStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTaskRunStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerPolicyResponse> TriggerPolicyOutcome;
                typedef std::future<TriggerPolicyOutcome> TriggerPolicyOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::TriggerPolicyRequest&, TriggerPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerPolicyAsyncHandler;



                /**
                 *从动作创建演练
                 * @param req CreateTaskFromActionRequest
                 * @return CreateTaskFromActionOutcome
                 */
                CreateTaskFromActionOutcome CreateTaskFromAction(const Model::CreateTaskFromActionRequest &request);
                void CreateTaskFromActionAsync(const Model::CreateTaskFromActionRequest& request, const CreateTaskFromActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFromActionOutcomeCallable CreateTaskFromActionCallable(const Model::CreateTaskFromActionRequest& request);

                /**
                 *以多个动作创建演练
                 * @param req CreateTaskFromMultiActionRequest
                 * @return CreateTaskFromMultiActionOutcome
                 */
                CreateTaskFromMultiActionOutcome CreateTaskFromMultiAction(const Model::CreateTaskFromMultiActionRequest &request);
                void CreateTaskFromMultiActionAsync(const Model::CreateTaskFromMultiActionRequest& request, const CreateTaskFromMultiActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFromMultiActionOutcomeCallable CreateTaskFromMultiActionCallable(const Model::CreateTaskFromMultiActionRequest& request);

                /**
                 *从经验库创建演练
                 * @param req CreateTaskFromTemplateRequest
                 * @return CreateTaskFromTemplateOutcome
                 */
                CreateTaskFromTemplateOutcome CreateTaskFromTemplate(const Model::CreateTaskFromTemplateRequest &request);
                void CreateTaskFromTemplateAsync(const Model::CreateTaskFromTemplateRequest& request, const CreateTaskFromTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFromTemplateOutcomeCallable CreateTaskFromTemplateCallable(const Model::CreateTaskFromTemplateRequest& request);

                /**
                 *删除任务
                 * @param req DeleteTaskRequest
                 * @return DeleteTaskOutcome
                 */
                DeleteTaskOutcome DeleteTask(const Model::DeleteTaskRequest &request);
                void DeleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTaskOutcomeCallable DeleteTaskCallable(const Model::DeleteTaskRequest& request);

                /**
                 *根据动作ID获取动作栏位动态配置参数信息，里面包含动作自有和通用两部分参数。
                 * @param req DescribeActionFieldConfigListRequest
                 * @return DescribeActionFieldConfigListOutcome
                 */
                DescribeActionFieldConfigListOutcome DescribeActionFieldConfigList(const Model::DescribeActionFieldConfigListRequest &request);
                void DescribeActionFieldConfigListAsync(const Model::DescribeActionFieldConfigListRequest& request, const DescribeActionFieldConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActionFieldConfigListOutcomeCallable DescribeActionFieldConfigListCallable(const Model::DescribeActionFieldConfigListRequest& request);

                /**
                 *获取混沌演练平台的动作库列表
                 * @param req DescribeActionLibraryListRequest
                 * @return DescribeActionLibraryListOutcome
                 */
                DescribeActionLibraryListOutcome DescribeActionLibraryList(const Model::DescribeActionLibraryListRequest &request);
                void DescribeActionLibraryListAsync(const Model::DescribeActionLibraryListRequest& request, const DescribeActionLibraryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActionLibraryListOutcomeCallable DescribeActionLibraryListCallable(const Model::DescribeActionLibraryListRequest& request);

                /**
                 *查询对象类型列表
                 * @param req DescribeObjectTypeListRequest
                 * @return DescribeObjectTypeListOutcome
                 */
                DescribeObjectTypeListOutcome DescribeObjectTypeList(const Model::DescribeObjectTypeListRequest &request);
                void DescribeObjectTypeListAsync(const Model::DescribeObjectTypeListRequest& request, const DescribeObjectTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeObjectTypeListOutcomeCallable DescribeObjectTypeListCallable(const Model::DescribeObjectTypeListRequest& request);

                /**
                 *查询任务
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *获取演练过程中的所有日志
                 * @param req DescribeTaskExecuteLogsRequest
                 * @return DescribeTaskExecuteLogsOutcome
                 */
                DescribeTaskExecuteLogsOutcome DescribeTaskExecuteLogs(const Model::DescribeTaskExecuteLogsRequest &request);
                void DescribeTaskExecuteLogsAsync(const Model::DescribeTaskExecuteLogsRequest& request, const DescribeTaskExecuteLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskExecuteLogsOutcomeCallable DescribeTaskExecuteLogsCallable(const Model::DescribeTaskExecuteLogsRequest& request);

                /**
                 *查询任务列表
                 * @param req DescribeTaskListRequest
                 * @return DescribeTaskListOutcome
                 */
                DescribeTaskListOutcome DescribeTaskList(const Model::DescribeTaskListRequest &request);
                void DescribeTaskListAsync(const Model::DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskListOutcomeCallable DescribeTaskListCallable(const Model::DescribeTaskListRequest& request);

                /**
                 *获取护栏触发日志
                 * @param req DescribeTaskPolicyTriggerLogRequest
                 * @return DescribeTaskPolicyTriggerLogOutcome
                 */
                DescribeTaskPolicyTriggerLogOutcome DescribeTaskPolicyTriggerLog(const Model::DescribeTaskPolicyTriggerLogRequest &request);
                void DescribeTaskPolicyTriggerLogAsync(const Model::DescribeTaskPolicyTriggerLogRequest& request, const DescribeTaskPolicyTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskPolicyTriggerLogOutcomeCallable DescribeTaskPolicyTriggerLogCallable(const Model::DescribeTaskPolicyTriggerLogRequest& request);

                /**
                 *查询经验库
                 * @param req DescribeTemplateRequest
                 * @return DescribeTemplateOutcome
                 */
                DescribeTemplateOutcome DescribeTemplate(const Model::DescribeTemplateRequest &request);
                void DescribeTemplateAsync(const Model::DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateOutcomeCallable DescribeTemplateCallable(const Model::DescribeTemplateRequest& request);

                /**
                 *查询经验库列表
                 * @param req DescribeTemplateListRequest
                 * @return DescribeTemplateListOutcome
                 */
                DescribeTemplateListOutcome DescribeTemplateList(const Model::DescribeTemplateListRequest &request);
                void DescribeTemplateListAsync(const Model::DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplateListOutcomeCallable DescribeTemplateListCallable(const Model::DescribeTemplateListRequest& request);

                /**
                 *执行任务
                 * @param req ExecuteTaskRequest
                 * @return ExecuteTaskOutcome
                 */
                ExecuteTaskOutcome ExecuteTask(const Model::ExecuteTaskRequest &request);
                void ExecuteTaskAsync(const Model::ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskOutcomeCallable ExecuteTaskCallable(const Model::ExecuteTaskRequest& request);

                /**
                 *触发混沌演练任务的动作，对于实例进行演练操作
                 * @param req ExecuteTaskInstanceRequest
                 * @return ExecuteTaskInstanceOutcome
                 */
                ExecuteTaskInstanceOutcome ExecuteTaskInstance(const Model::ExecuteTaskInstanceRequest &request);
                void ExecuteTaskInstanceAsync(const Model::ExecuteTaskInstanceRequest& request, const ExecuteTaskInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteTaskInstanceOutcomeCallable ExecuteTaskInstanceCallable(const Model::ExecuteTaskInstanceRequest& request);

                /**
                 *修改任务运行状态
                 * @param req ModifyTaskRunStatusRequest
                 * @return ModifyTaskRunStatusOutcome
                 */
                ModifyTaskRunStatusOutcome ModifyTaskRunStatus(const Model::ModifyTaskRunStatusRequest &request);
                void ModifyTaskRunStatusAsync(const Model::ModifyTaskRunStatusRequest& request, const ModifyTaskRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTaskRunStatusOutcomeCallable ModifyTaskRunStatusCallable(const Model::ModifyTaskRunStatusRequest& request);

                /**
                 *用于触发混沌演练护栏（类型为触发和恢复2种）
                 * @param req TriggerPolicyRequest
                 * @return TriggerPolicyOutcome
                 */
                TriggerPolicyOutcome TriggerPolicy(const Model::TriggerPolicyRequest &request);
                void TriggerPolicyAsync(const Model::TriggerPolicyRequest& request, const TriggerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerPolicyOutcomeCallable TriggerPolicyCallable(const Model::TriggerPolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_CFGCLIENT_H_

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
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateRequest.h>
#include <tencentcloud/cfg/v20210820/model/CreateTaskFromTemplateResponse.h>
#include <tencentcloud/cfg/v20210820/model/DeleteTaskRequest.h>
#include <tencentcloud/cfg/v20210820/model/DeleteTaskResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskExecuteLogsResponse.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskListRequest.h>
#include <tencentcloud/cfg/v20210820/model/DescribeTaskListResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateTaskFromTemplateResponse> CreateTaskFromTemplateOutcome;
                typedef std::future<CreateTaskFromTemplateOutcome> CreateTaskFromTemplateOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::CreateTaskFromTemplateRequest&, CreateTaskFromTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFromTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTaskResponse> DeleteTaskOutcome;
                typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DeleteTaskRequest&, DeleteTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskExecuteLogsResponse> DescribeTaskExecuteLogsOutcome;
                typedef std::future<DescribeTaskExecuteLogsOutcome> DescribeTaskExecuteLogsOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskExecuteLogsRequest&, DescribeTaskExecuteLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskExecuteLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskListResponse> DescribeTaskListOutcome;
                typedef std::future<DescribeTaskListOutcome> DescribeTaskListOutcomeCallable;
                typedef std::function<void(const CfgClient*, const Model::DescribeTaskListRequest&, DescribeTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskListAsyncHandler;
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

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_CFGCLIENT_H_

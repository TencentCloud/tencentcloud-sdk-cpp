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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询任务运行列表返回参数
                */
                class ListTriggerTaskRunBrief : public AbstractModel
                {
                public:
                    ListTriggerTaskRunBrief();
                    ~ListTriggerTaskRunBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionId 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionId() const;

                    /**
                     * 设置任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionId 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionId(const std::string& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowId 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowExecutionId() const;

                    /**
                     * 设置工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionId 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionId(const std::string& _workflowExecutionId);

                    /**
                     * 判断参数 WorkflowExecutionId 是否已赋值
                     * @return WorkflowExecutionId 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionIdHasBeenSet() const;

                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitTime 等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWaitTime() const;

                    /**
                     * 设置等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitTime 等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitTime(const std::string& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteUserUin 运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteUserUin() const;

                    /**
                     * 设置运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeUserUin 运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteUserUin(const std::string& _executeUserUin);

                    /**
                     * 判断参数 ExecuteUserUin 是否已赋值
                     * @return ExecuteUserUin 是否已赋值
                     * 
                     */
                    bool ExecuteUserUinHasBeenSet() const;

                    /**
                     * 获取计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTime() const;

                    /**
                     * 设置计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTime 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTime(const std::string& _scheduleTime);

                    /**
                     * 判断参数 ScheduleTime 是否已赋值
                     * @return ScheduleTime 是否已赋值
                     * 
                     */
                    bool ScheduleTimeHasBeenSet() const;

                    /**
                     * 获取运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                    /**
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTime 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionTime() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTime 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTime(const std::string& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取系统自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryTimes 系统自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryTimes() const;

                    /**
                     * 设置系统自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryTimes 系统自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryTimes(const int64_t& _retryTimes);

                    /**
                     * 判断参数 RetryTimes 是否已赋值
                     * @return RetryTimes 是否已赋值
                     * 
                     */
                    bool RetryTimesHasBeenSet() const;

                    /**
                     * 获取错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodeStr 错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCodeStr() const;

                    /**
                     * 设置错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodeStr 错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodeStr(const std::string& _errorCodeStr);

                    /**
                     * 判断参数 ErrorCodeStr 是否已赋值
                     * @return ErrorCodeStr 是否已赋值
                     * 
                     */
                    bool ErrorCodeStrHasBeenSet() const;

                    /**
                     * 获取任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取用户手动重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerunTimes 用户手动重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRerunTimes() const;

                    /**
                     * 设置用户手动重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerunTimes 用户手动重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerunTimes(const int64_t& _rerunTimes);

                    /**
                     * 判断参数 RerunTimes 是否已赋值
                     * @return RerunTimes 是否已赋值
                     * 
                     */
                    bool RerunTimesHasBeenSet() const;

                    /**
                     * 获取任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskExecutionState 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskExecutionState() const;

                    /**
                     * 设置任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskExecutionState 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskExecutionState(const std::string& _taskExecutionState);

                    /**
                     * 判断参数 TaskExecutionState 是否已赋值
                     * @return TaskExecutionState 是否已赋值
                     * 
                     */
                    bool TaskExecutionStateHasBeenSet() const;

                    /**
                     * 获取是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatestExecution 是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLatestExecution() const;

                    /**
                     * 设置是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatestExecution 是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLatestExecution(const bool& _isLatestExecution);

                    /**
                     * 判断参数 IsLatestExecution 是否已赋值
                     * @return IsLatestExecution 是否已赋值
                     * 
                     */
                    bool IsLatestExecutionHasBeenSet() const;

                private:

                    /**
                     * 任务运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 工作流ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 工作流运行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowExecutionId;
                    bool m_workflowExecutionIdHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 触发类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 等待时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * 运行账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeUserUin;
                    bool m_executeUserUinHasBeenSet;

                    /**
                     * 计划调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTime;
                    bool m_scheduleTimeHasBeenSet;

                    /**
                     * 运行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 运行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 系统自动重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryTimes;
                    bool m_retryTimesHasBeenSet;

                    /**
                     * 错误码描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCodeStr;
                    bool m_errorCodeStrHasBeenSet;

                    /**
                     * 任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 用户手动重跑次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rerunTimes;
                    bool m_rerunTimesHasBeenSet;

                    /**
                     * 任务运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskExecutionState;
                    bool m_taskExecutionStateHasBeenSet;

                    /**
                     * 是否是最新一次运行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLatestExecution;
                    bool m_isLatestExecutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERTASKRUNBRIEF_H_

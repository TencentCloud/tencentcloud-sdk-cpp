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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TASKRECORD_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TASKRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TaskRule.h>
#include <tencentcloud/tsf/v20180326/model/AdvanceSettings.h>
#include <tencentcloud/tsf/v20180326/model/ShardArgument.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 任务定义
                */
                class TaskRecord : public AbstractModel
                {
                public:
                    TaskRecord();
                    ~TaskRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
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
                     * 获取任务类型
                     * @return TaskType 任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param _taskType 任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取执行类型
                     * @return ExecuteType 执行类型
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置执行类型
                     * @param _executeType 执行类型
                     * 
                     */
                    void SetExecuteType(const std::string& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取任务内容，长度限制65535字节
                     * @return TaskContent 任务内容，长度限制65535字节
                     * 
                     */
                    std::string GetTaskContent() const;

                    /**
                     * 设置任务内容，长度限制65535字节
                     * @param _taskContent 任务内容，长度限制65535字节
                     * 
                     */
                    void SetTaskContent(const std::string& _taskContent);

                    /**
                     * 判断参数 TaskContent 是否已赋值
                     * @return TaskContent 是否已赋值
                     * 
                     */
                    bool TaskContentHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取超时时间
                     * @return TimeOut 超时时间
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置超时时间
                     * @param _timeOut 超时时间
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取重试次数
                     * @return RetryCount 重试次数
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置重试次数
                     * @param _retryCount 重试次数
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取重试间隔
                     * @return RetryInterval 重试间隔
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔
                     * @param _retryInterval 重试间隔
                     * 
                     */
                    void SetRetryInterval(const int64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取触发规则
                     * @return TaskRule 触发规则
                     * 
                     */
                    TaskRule GetTaskRule() const;

                    /**
                     * 设置触发规则
                     * @param _taskRule 触发规则
                     * 
                     */
                    void SetTaskRule(const TaskRule& _taskRule);

                    /**
                     * 判断参数 TaskRule 是否已赋值
                     * @return TaskRule 是否已赋值
                     * 
                     */
                    bool TaskRuleHasBeenSet() const;

                    /**
                     * 获取是否启用任务,ENABLED/DISABLED
                     * @return TaskState 是否启用任务,ENABLED/DISABLED
                     * 
                     */
                    std::string GetTaskState() const;

                    /**
                     * 设置是否启用任务,ENABLED/DISABLED
                     * @param _taskState 是否启用任务,ENABLED/DISABLED
                     * 
                     */
                    void SetTaskState(const std::string& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     * 
                     */
                    bool TaskStateHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取判断任务成功的操作符
                     * @return SuccessOperator 判断任务成功的操作符
                     * 
                     */
                    std::string GetSuccessOperator() const;

                    /**
                     * 设置判断任务成功的操作符
                     * @param _successOperator 判断任务成功的操作符
                     * 
                     */
                    void SetSuccessOperator(const std::string& _successOperator);

                    /**
                     * 判断参数 SuccessOperator 是否已赋值
                     * @return SuccessOperator 是否已赋值
                     * 
                     */
                    bool SuccessOperatorHasBeenSet() const;

                    /**
                     * 获取判断任务成功的阈值
                     * @return SuccessRatio 判断任务成功的阈值
                     * 
                     */
                    int64_t GetSuccessRatio() const;

                    /**
                     * 设置判断任务成功的阈值
                     * @param _successRatio 判断任务成功的阈值
                     * 
                     */
                    void SetSuccessRatio(const int64_t& _successRatio);

                    /**
                     * 判断参数 SuccessRatio 是否已赋值
                     * @return SuccessRatio 是否已赋值
                     * 
                     */
                    bool SuccessRatioHasBeenSet() const;

                    /**
                     * 获取分片数量
                     * @return ShardCount 分片数量
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置分片数量
                     * @param _shardCount 分片数量
                     * 
                     */
                    void SetShardCount(const int64_t& _shardCount);

                    /**
                     * 判断参数 ShardCount 是否已赋值
                     * @return ShardCount 是否已赋值
                     * 
                     */
                    bool ShardCountHasBeenSet() const;

                    /**
                     * 获取高级设置
                     * @return AdvanceSettings 高级设置
                     * 
                     */
                    AdvanceSettings GetAdvanceSettings() const;

                    /**
                     * 设置高级设置
                     * @param _advanceSettings 高级设置
                     * 
                     */
                    void SetAdvanceSettings(const AdvanceSettings& _advanceSettings);

                    /**
                     * 判断参数 AdvanceSettings 是否已赋值
                     * @return AdvanceSettings 是否已赋值
                     * 
                     */
                    bool AdvanceSettingsHasBeenSet() const;

                    /**
                     * 获取分片参数
                     * @return ShardArguments 分片参数
                     * 
                     */
                    std::vector<ShardArgument> GetShardArguments() const;

                    /**
                     * 设置分片参数
                     * @param _shardArguments 分片参数
                     * 
                     */
                    void SetShardArguments(const std::vector<ShardArgument>& _shardArguments);

                    /**
                     * 判断参数 ShardArguments 是否已赋值
                     * @return ShardArguments 是否已赋值
                     * 
                     */
                    bool ShardArgumentsHasBeenSet() const;

                    /**
                     * 获取所属工作流ID
                     * @return BelongFlowIds 所属工作流ID
                     * 
                     */
                    std::vector<std::string> GetBelongFlowIds() const;

                    /**
                     * 设置所属工作流ID
                     * @param _belongFlowIds 所属工作流ID
                     * 
                     */
                    void SetBelongFlowIds(const std::vector<std::string>& _belongFlowIds);

                    /**
                     * 判断参数 BelongFlowIds 是否已赋值
                     * @return BelongFlowIds 是否已赋值
                     * 
                     */
                    bool BelongFlowIdsHasBeenSet() const;

                    /**
                     * 获取任务历史ID
                     * @return TaskLogId 任务历史ID
                     * 
                     */
                    std::string GetTaskLogId() const;

                    /**
                     * 设置任务历史ID
                     * @param _taskLogId 任务历史ID
                     * 
                     */
                    void SetTaskLogId(const std::string& _taskLogId);

                    /**
                     * 判断参数 TaskLogId 是否已赋值
                     * @return TaskLogId 是否已赋值
                     * 
                     */
                    bool TaskLogIdHasBeenSet() const;

                    /**
                     * 获取触发类型
                     * @return TriggerType 触发类型
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置触发类型
                     * @param _triggerType 触发类型
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
                     * 获取任务参数，长度限制10000个字符
                     * @return TaskArgument 任务参数，长度限制10000个字符
                     * 
                     */
                    std::string GetTaskArgument() const;

                    /**
                     * 设置任务参数，长度限制10000个字符
                     * @param _taskArgument 任务参数，长度限制10000个字符
                     * 
                     */
                    void SetTaskArgument(const std::string& _taskArgument);

                    /**
                     * 判断参数 TaskArgument 是否已赋值
                     * @return TaskArgument 是否已赋值
                     * 
                     */
                    bool TaskArgumentHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 执行类型
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 任务内容，长度限制65535字节
                     */
                    std::string m_taskContent;
                    bool m_taskContentHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 超时时间
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 重试次数
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * 重试间隔
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 触发规则
                     */
                    TaskRule m_taskRule;
                    bool m_taskRuleHasBeenSet;

                    /**
                     * 是否启用任务,ENABLED/DISABLED
                     */
                    std::string m_taskState;
                    bool m_taskStateHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 判断任务成功的操作符
                     */
                    std::string m_successOperator;
                    bool m_successOperatorHasBeenSet;

                    /**
                     * 判断任务成功的阈值
                     */
                    int64_t m_successRatio;
                    bool m_successRatioHasBeenSet;

                    /**
                     * 分片数量
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 高级设置
                     */
                    AdvanceSettings m_advanceSettings;
                    bool m_advanceSettingsHasBeenSet;

                    /**
                     * 分片参数
                     */
                    std::vector<ShardArgument> m_shardArguments;
                    bool m_shardArgumentsHasBeenSet;

                    /**
                     * 所属工作流ID
                     */
                    std::vector<std::string> m_belongFlowIds;
                    bool m_belongFlowIdsHasBeenSet;

                    /**
                     * 任务历史ID
                     */
                    std::string m_taskLogId;
                    bool m_taskLogIdHasBeenSet;

                    /**
                     * 触发类型
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 任务参数，长度限制10000个字符
                     */
                    std::string m_taskArgument;
                    bool m_taskArgumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TASKRECORD_H_

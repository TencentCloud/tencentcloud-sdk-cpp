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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/TaskRule.h>
#include <tencentcloud/tsf/v20180326/model/ShardArgument.h>
#include <tencentcloud/tsf/v20180326/model/AdvanceSettings.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateTask请求参数结构体
                */
                class CreateTaskRequest : public AbstractModel
                {
                public:
                    CreateTaskRequest();
                    ~CreateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称，任务长度64字符
                     * @return TaskName 任务名称，任务长度64字符
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，任务长度64字符
                     * @param _taskName 任务名称，任务长度64字符
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
                     * 获取任务内容，长度限制65536个字节
                     * @return TaskContent 任务内容，长度限制65536个字节
                     * 
                     */
                    std::string GetTaskContent() const;

                    /**
                     * 设置任务内容，长度限制65536个字节
                     * @param _taskContent 任务内容，长度限制65536个字节
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
                     * 获取执行类型，unicast/broadcast
                     * @return ExecuteType 执行类型，unicast/broadcast
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置执行类型，unicast/broadcast
                     * @param _executeType 执行类型，unicast/broadcast
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
                     * 获取任务类型,java
                     * @return TaskType 任务类型,java
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型,java
                     * @param _taskType 任务类型,java
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
                     * 获取任务超时时间， 时间单位 ms
                     * @return TimeOut 任务超时时间， 时间单位 ms
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置任务超时时间， 时间单位 ms
                     * @param _timeOut 任务超时时间， 时间单位 ms
                     * 
                     */
                    void SetTimeOut(const uint64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
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
                     * 获取重试次数，0 <= RetryCount<= 10
                     * @return RetryCount 重试次数，0 <= RetryCount<= 10
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置重试次数，0 <= RetryCount<= 10
                     * @param _retryCount 重试次数，0 <= RetryCount<= 10
                     * 
                     */
                    void SetRetryCount(const uint64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取重试间隔， 0 <= RetryInterval <= 600000， 时间单位 ms
                     * @return RetryInterval 重试间隔， 0 <= RetryInterval <= 600000， 时间单位 ms
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔， 0 <= RetryInterval <= 600000， 时间单位 ms
                     * @param _retryInterval 重试间隔， 0 <= RetryInterval <= 600000， 时间单位 ms
                     * 
                     */
                    void SetRetryInterval(const uint64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

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
                     * 获取判断任务成功率的阈值，如100
                     * @return SuccessRatio 判断任务成功率的阈值，如100
                     * 
                     */
                    std::string GetSuccessRatio() const;

                    /**
                     * 设置判断任务成功率的阈值，如100
                     * @param _successRatio 判断任务成功率的阈值，如100
                     * 
                     */
                    void SetSuccessRatio(const std::string& _successRatio);

                    /**
                     * 判断参数 SuccessRatio 是否已赋值
                     * @return SuccessRatio 是否已赋值
                     * 
                     */
                    bool SuccessRatioHasBeenSet() const;

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

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 任务名称，任务长度64字符
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务内容，长度限制65536个字节
                     */
                    std::string m_taskContent;
                    bool m_taskContentHasBeenSet;

                    /**
                     * 执行类型，unicast/broadcast
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 任务类型,java
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务超时时间， 时间单位 ms
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 触发规则
                     */
                    TaskRule m_taskRule;
                    bool m_taskRuleHasBeenSet;

                    /**
                     * 重试次数，0 <= RetryCount<= 10
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * 重试间隔， 0 <= RetryInterval <= 600000， 时间单位 ms
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 分片数量
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 分片参数
                     */
                    std::vector<ShardArgument> m_shardArguments;
                    bool m_shardArgumentsHasBeenSet;

                    /**
                     * 判断任务成功的操作符
                     */
                    std::string m_successOperator;
                    bool m_successOperatorHasBeenSet;

                    /**
                     * 判断任务成功率的阈值，如100
                     */
                    std::string m_successRatio;
                    bool m_successRatioHasBeenSet;

                    /**
                     * 高级设置
                     */
                    AdvanceSettings m_advanceSettings;
                    bool m_advanceSettingsHasBeenSet;

                    /**
                     * 任务参数，长度限制10000个字符
                     */
                    std::string m_taskArgument;
                    bool m_taskArgumentHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATETASKREQUEST_H_

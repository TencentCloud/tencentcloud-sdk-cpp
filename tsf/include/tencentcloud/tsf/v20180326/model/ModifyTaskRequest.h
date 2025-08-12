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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYTASKREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYTASKREQUEST_H_

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
                * ModifyTask请求参数结构体
                */
                class ModifyTaskRequest : public AbstractModel
                {
                public:
                    ModifyTaskRequest();
                    ~ModifyTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID。在任务管理列表页面第一列查看任务ID。
                     * @return TaskId 任务ID。在任务管理列表页面第一列查看任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID。在任务管理列表页面第一列查看任务ID。
                     * @param _taskId 任务ID。在任务管理列表页面第一列查看任务ID。
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
                     * 获取任务名称，长度限制为64字符。在任务管理列表页面第一列或是任务基本信息页查看任务名称。
                     * @return TaskName 任务名称，长度限制为64字符。在任务管理列表页面第一列或是任务基本信息页查看任务名称。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称，长度限制为64字符。在任务管理列表页面第一列或是任务基本信息页查看任务名称。
                     * @param _taskName 任务名称，长度限制为64字符。在任务管理列表页面第一列或是任务基本信息页查看任务名称。
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
                     * 获取任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * @return TaskType 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     * @param _taskType 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
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
                     * 获取任务内容，长度限制为 65536 字节
                     * @return TaskContent 任务内容，长度限制为 65536 字节
                     * 
                     */
                    std::string GetTaskContent() const;

                    /**
                     * 设置任务内容，长度限制为 65536 字节
                     * @param _taskContent 任务内容，长度限制为 65536 字节
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
                     * 获取任务执行方式，枚举值。unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * @return ExecuteType 任务执行方式，枚举值。unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * 
                     */
                    std::string GetExecuteType() const;

                    /**
                     * 设置任务执行方式，枚举值。unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     * @param _executeType 任务执行方式，枚举值。unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
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
                     * 获取超时时间，取值大于0，单位：毫秒（ms）
                     * @return TimeOut 超时时间，取值大于0，单位：毫秒（ms）
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置超时时间，取值大于0，单位：毫秒（ms）
                     * @param _timeOut 超时时间，取值大于0，单位：毫秒（ms）
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
                     * 获取部署组ID。在[应用管理](https://console.cloud.tencent.com/tsf/app?rid=1)，点击应用ID进入应用部署页查看部署组ID。
                     * @return GroupId 部署组ID。在[应用管理](https://console.cloud.tencent.com/tsf/app?rid=1)，点击应用ID进入应用部署页查看部署组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID。在[应用管理](https://console.cloud.tencent.com/tsf/app?rid=1)，点击应用ID进入应用部署页查看部署组ID。
                     * @param _groupId 部署组ID。在[应用管理](https://console.cloud.tencent.com/tsf/app?rid=1)，点击应用ID进入应用部署页查看部署组ID。
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
                     * 获取分片数量，取值范围2~1000
                     * @return ShardCount 分片数量，取值范围2~1000
                     * 
                     */
                    int64_t GetShardCount() const;

                    /**
                     * 设置分片数量，取值范围2~1000
                     * @param _shardCount 分片数量，取值范围2~1000
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
                     * 获取判断任务成功的操作符 GT/GTE
                     * @return SuccessOperator 判断任务成功的操作符 GT/GTE
                     * 
                     */
                    std::string GetSuccessOperator() const;

                    /**
                     * 设置判断任务成功的操作符 GT/GTE
                     * @param _successOperator 判断任务成功的操作符 GT/GTE
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
                     * 获取判断任务成功率的阈值，取值范围：1-100，单位：百分比（%）
                     * @return SuccessRatio 判断任务成功率的阈值，取值范围：1-100，单位：百分比（%）
                     * 
                     */
                    int64_t GetSuccessRatio() const;

                    /**
                     * 设置判断任务成功率的阈值，取值范围：1-100，单位：百分比（%）
                     * @param _successRatio 判断任务成功率的阈值，取值范围：1-100，单位：百分比（%）
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
                     * 获取重试次数，取值范围 0 - 10，单位：次
                     * @return RetryCount 重试次数，取值范围 0 - 10，单位：次
                     * 
                     */
                    uint64_t GetRetryCount() const;

                    /**
                     * 设置重试次数，取值范围 0 - 10，单位：次
                     * @param _retryCount 重试次数，取值范围 0 - 10，单位：次
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
                     * 获取重试间隔，取值范围 0-600，单位：秒（s）
                     * @return RetryInterval 重试间隔，取值范围 0-600，单位：秒（s）
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔，取值范围 0-600，单位：秒（s）
                     * @param _retryInterval 重试间隔，取值范围 0-600，单位：秒（s）
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
                     * 获取数据集列表。
                     * @return ProgramIdList 数据集列表。
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置数据集列表。
                     * @param _programIdList 数据集列表。
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
                     * 任务ID。在任务管理列表页面第一列查看任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称，长度限制为64字符。在任务管理列表页面第一列或是任务基本信息页查看任务名称。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务类型。当前只支持一种任务类型。枚举值，java：Java类任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务内容，长度限制为 65536 字节
                     */
                    std::string m_taskContent;
                    bool m_taskContentHasBeenSet;

                    /**
                     * 任务执行方式，枚举值。unicast：随机单节点执行，broadcast：广播执行，shard：分片执行
                     */
                    std::string m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 触发规则
                     */
                    TaskRule m_taskRule;
                    bool m_taskRuleHasBeenSet;

                    /**
                     * 超时时间，取值大于0，单位：毫秒（ms）
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 部署组ID。在[应用管理](https://console.cloud.tencent.com/tsf/app?rid=1)，点击应用ID进入应用部署页查看部署组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分片数量，取值范围2~1000
                     */
                    int64_t m_shardCount;
                    bool m_shardCountHasBeenSet;

                    /**
                     * 分片参数
                     */
                    std::vector<ShardArgument> m_shardArguments;
                    bool m_shardArgumentsHasBeenSet;

                    /**
                     * 高级设置
                     */
                    AdvanceSettings m_advanceSettings;
                    bool m_advanceSettingsHasBeenSet;

                    /**
                     * 判断任务成功的操作符 GT/GTE
                     */
                    std::string m_successOperator;
                    bool m_successOperatorHasBeenSet;

                    /**
                     * 判断任务成功率的阈值，取值范围：1-100，单位：百分比（%）
                     */
                    int64_t m_successRatio;
                    bool m_successRatioHasBeenSet;

                    /**
                     * 重试次数，取值范围 0 - 10，单位：次
                     */
                    uint64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * 重试间隔，取值范围 0-600，单位：秒（s）
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 任务参数，长度限制10000个字符
                     */
                    std::string m_taskArgument;
                    bool m_taskArgumentHasBeenSet;

                    /**
                     * 数据集列表。
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYTASKREQUEST_H_

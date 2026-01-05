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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyTriggerTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/OutTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务调度配置信息
                */
                class TriggerTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    TriggerTaskSchedulerConfiguration();
                    ~TriggerTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上游依赖数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamDependencyConfigList 上游依赖数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DependencyTriggerTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置上游依赖数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamDependencyConfigList 上游依赖数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamDependencyConfigList(const std::vector<DependencyTriggerTaskBrief>& _upstreamDependencyConfigList);

                    /**
                     * 判断参数 UpstreamDependencyConfigList 是否已赋值
                     * @return UpstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool UpstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunPriorityType 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runPriorityType 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunPriorityType(const int64_t& _runPriorityType);

                    /**
                     * 判断参数 RunPriorityType 是否已赋值
                     * @return RunPriorityType 是否已赋值
                     * 
                     */
                    bool RunPriorityTypeHasBeenSet() const;

                    /**
                     * 获取重试策略 重试等待时间,单位分钟: 默认: 5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryWaitMinute 重试策略 重试等待时间,单位分钟: 默认: 5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置重试策略 重试等待时间,单位分钟: 默认: 5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retryWaitMinute 重试策略 重试等待时间,单位分钟: 默认: 5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetryWaitMinute(const int64_t& _retryWaitMinute);

                    /**
                     * 判断参数 RetryWaitMinute 是否已赋值
                     * @return RetryWaitMinute 是否已赋值
                     * 
                     */
                    bool RetryWaitMinuteHasBeenSet() const;

                    /**
                     * 获取重试策略 最大尝试次数, 默认: 4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetryNumber 重试策略 最大尝试次数, 默认: 4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置重试策略 最大尝试次数, 默认: 4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetryNumber 重试策略 最大尝试次数, 默认: 4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetryNumber(const int64_t& _maxRetryNumber);

                    /**
                     * 判断参数 MaxRetryNumber 是否已赋值
                     * @return MaxRetryNumber 是否已赋值
                     * 
                     */
                    bool MaxRetryNumberHasBeenSet() const;

                    /**
                     * 获取超时处理策略 运行耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionTTLMinute 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置超时处理策略 运行耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionTTLMinute 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionTTLMinute(const int64_t& _executionTTLMinute);

                    /**
                     * 判断参数 ExecutionTTLMinute 是否已赋值
                     * @return ExecutionTTLMinute 是否已赋值
                     * 
                     */
                    bool ExecutionTTLMinuteHasBeenSet() const;

                    /**
                     * 获取超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaitExecutionTotalTTLMinute 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waitExecutionTotalTTLMinute 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute);

                    /**
                     * 判断参数 WaitExecutionTotalTTLMinute 是否已赋值
                     * @return WaitExecutionTotalTTLMinute 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLMinuteHasBeenSet() const;

                    /**
                     * 获取重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowRedoType 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowRedoType 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取输出参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskOutList 输出参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置输出参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskOutList 输出参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTaskOutList(const std::vector<OutTaskParameter>& _paramTaskOutList);

                    /**
                     * 判断参数 ParamTaskOutList 是否已赋值
                     * @return ParamTaskOutList 是否已赋值
                     * 
                     */
                    bool ParamTaskOutListHasBeenSet() const;

                    /**
                     * 获取输入参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamTaskInList 输入参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置输入参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramTaskInList 输入参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamTaskInList(const std::vector<InTaskParameter>& _paramTaskInList);

                    /**
                     * 判断参数 ParamTaskInList 是否已赋值
                     * @return ParamTaskInList 是否已赋值
                     * 
                     */
                    bool ParamTaskInListHasBeenSet() const;

                    /**
                     * 获取产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutputRegistryList 产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutputRegistryList 产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOutputRegistryList(const std::vector<TaskDataRegistry>& _taskOutputRegistryList);

                    /**
                     * 判断参数 TaskOutputRegistryList 是否已赋值
                     * @return TaskOutputRegistryList 是否已赋值
                     * 
                     */
                    bool TaskOutputRegistryListHasBeenSet() const;

                private:

                    /**
                     * 上游依赖数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DependencyTriggerTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * 任务调度优先级 运行优先级 4高 5中 6低 , 默认:6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * 重试策略 重试等待时间,单位分钟: 默认: 5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * 重试策略 最大尝试次数, 默认: 4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * 超时处理策略 运行耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * 超时处理策略 等待总时长耗时超时（单位：分钟）默认为 -1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * 重跑&补录配置, 默认为 ALL; , ALL 运行成功或失败后皆可重跑或补录, FAILURE 运行成功后不可重跑或补录，运行失败后可重跑或补录, NONE 运行成功或失败后皆不可重跑或补录;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * 输出参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * 输入参数数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * 产出登记
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_

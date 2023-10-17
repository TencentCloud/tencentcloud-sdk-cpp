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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 离线任务新增参数
                */
                class OfflineTaskAddParam : public AbstractModel
                {
                public:
                    OfflineTaskAddParam();
                    ~OfflineTaskAddParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return WorkflowName 名称
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置名称
                     * @param _workflowName 名称
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
                     * 获取依赖
                     * @return DependencyWorkflow 依赖
                     * 
                     */
                    std::string GetDependencyWorkflow() const;

                    /**
                     * 设置依赖
                     * @param _dependencyWorkflow 依赖
                     * 
                     */
                    void SetDependencyWorkflow(const std::string& _dependencyWorkflow);

                    /**
                     * 判断参数 DependencyWorkflow 是否已赋值
                     * @return DependencyWorkflow 是否已赋值
                     * 
                     */
                    bool DependencyWorkflowHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取周期
                     * @return CycleType 周期
                     * 
                     */
                    uint64_t GetCycleType() const;

                    /**
                     * 设置周期
                     * @param _cycleType 周期
                     * 
                     */
                    void SetCycleType(const uint64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取周期间隔
                     * @return CycleStep 周期间隔
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置周期间隔
                     * @param _cycleStep 周期间隔
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取延迟时间
                     * @return DelayTime 延迟时间
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延迟时间
                     * @param _delayTime 延迟时间
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取crontab
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabExpression crontab
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCrontabExpression() const;

                    /**
                     * 设置crontab
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crontabExpression crontab
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrontabExpression(const std::string& _crontabExpression);

                    /**
                     * 判断参数 CrontabExpression 是否已赋值
                     * @return CrontabExpression 是否已赋值
                     * 
                     */
                    bool CrontabExpressionHasBeenSet() const;

                    /**
                     * 获取重试等待
                     * @return RetryWait 重试等待
                     * 
                     */
                    uint64_t GetRetryWait() const;

                    /**
                     * 设置重试等待
                     * @param _retryWait 重试等待
                     * 
                     */
                    void SetRetryWait(const uint64_t& _retryWait);

                    /**
                     * 判断参数 RetryWait 是否已赋值
                     * @return RetryWait 是否已赋值
                     * 
                     */
                    bool RetryWaitHasBeenSet() const;

                    /**
                     * 获取是否可以重试
                     * @return Retriable 是否可以重试
                     * 
                     */
                    uint64_t GetRetriable() const;

                    /**
                     * 设置是否可以重试
                     * @param _retriable 是否可以重试
                     * 
                     */
                    void SetRetriable(const uint64_t& _retriable);

                    /**
                     * 判断参数 Retriable 是否已赋值
                     * @return Retriable 是否已赋值
                     * 
                     */
                    bool RetriableHasBeenSet() const;

                    /**
                     * 获取重试限制
                     * @return TryLimit 重试限制
                     * 
                     */
                    uint64_t GetTryLimit() const;

                    /**
                     * 设置重试限制
                     * @param _tryLimit 重试限制
                     * 
                     */
                    void SetTryLimit(const uint64_t& _tryLimit);

                    /**
                     * 判断参数 TryLimit 是否已赋值
                     * @return TryLimit 是否已赋值
                     * 
                     */
                    bool TryLimitHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return RunPriority 优先级
                     * 
                     */
                    uint64_t GetRunPriority() const;

                    /**
                     * 设置优先级
                     * @param _runPriority 优先级
                     * 
                     */
                    void SetRunPriority(const uint64_t& _runPriority);

                    /**
                     * 判断参数 RunPriority 是否已赋值
                     * @return RunPriority 是否已赋值
                     * 
                     */
                    bool RunPriorityHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取1 有序串行 一次一个，排队 orderly 
2 无序串行 一次一个，不排队 serial  
3 并行 一次多个 parallel
                     * @return SelfDepend 1 有序串行 一次一个，排队 orderly 
2 无序串行 一次一个，不排队 serial  
3 并行 一次多个 parallel
                     * 
                     */
                    uint64_t GetSelfDepend() const;

                    /**
                     * 设置1 有序串行 一次一个，排队 orderly 
2 无序串行 一次一个，不排队 serial  
3 并行 一次多个 parallel
                     * @param _selfDepend 1 有序串行 一次一个，排队 orderly 
2 无序串行 一次一个，不排队 serial  
3 并行 一次多个 parallel
                     * 
                     */
                    void SetSelfDepend(const uint64_t& _selfDepend);

                    /**
                     * 判断参数 SelfDepend 是否已赋值
                     * @return SelfDepend 是否已赋值
                     * 
                     */
                    bool SelfDependHasBeenSet() const;

                    /**
                     * 获取周任务：1是周天，2是周1，7是周6 。
月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 周任务：1是周天，2是周1，7是周6 。
月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置周任务：1是周天，2是周1，7是周6 。
月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 周任务：1是周天，2是周1，7是周6 。
月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                    /**
                     * 获取调度执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionEndTime 调度执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置调度执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionEndTime 调度执行结束时间
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
                     * 获取调度执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStartTime 调度执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置调度执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStartTime 调度执行开始时间
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
                     * 获取是否自动提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAutoSubmit 是否自动提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTaskAutoSubmit() const;

                    /**
                     * 设置是否自动提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAutoSubmit 是否自动提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskAutoSubmit(const bool& _taskAutoSubmit);

                    /**
                     * 判断参数 TaskAutoSubmit 是否已赋值
                     * @return TaskAutoSubmit 是否已赋值
                     * 
                     */
                    bool TaskAutoSubmitHasBeenSet() const;

                    /**
                     * 获取实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInitStrategy 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceInitStrategy() const;

                    /**
                     * 设置实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInitStrategy 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceInitStrategy(const std::string& _instanceInitStrategy);

                    /**
                     * 判断参数 InstanceInitStrategy 是否已赋值
                     * @return InstanceInitStrategy 是否已赋值
                     * 
                     */
                    bool InstanceInitStrategyHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 依赖
                     */
                    std::string m_dependencyWorkflow;
                    bool m_dependencyWorkflowHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 周期
                     */
                    uint64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 周期间隔
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 延迟时间
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * crontab
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_crontabExpression;
                    bool m_crontabExpressionHasBeenSet;

                    /**
                     * 重试等待
                     */
                    uint64_t m_retryWait;
                    bool m_retryWaitHasBeenSet;

                    /**
                     * 是否可以重试
                     */
                    uint64_t m_retriable;
                    bool m_retriableHasBeenSet;

                    /**
                     * 重试限制
                     */
                    uint64_t m_tryLimit;
                    bool m_tryLimitHasBeenSet;

                    /**
                     * 优先级
                     */
                    uint64_t m_runPriority;
                    bool m_runPriorityHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 1 有序串行 一次一个，排队 orderly 
2 无序串行 一次一个，不排队 serial  
3 并行 一次多个 parallel
                     */
                    uint64_t m_selfDepend;
                    bool m_selfDependHasBeenSet;

                    /**
                     * 周任务：1是周天，2是周1，7是周6 。
月任务：如具体1，3号则写 "1,3"，指定月末不可和具体号数一起输入，仅能为 "L"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 调度执行结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                    /**
                     * 调度执行开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * 是否自动提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_taskAutoSubmit;
                    bool m_taskAutoSubmitHasBeenSet;

                    /**
                     * 实例初始化策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceInitStrategy;
                    bool m_instanceInitStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OFFLINETASKADDPARAM_H_

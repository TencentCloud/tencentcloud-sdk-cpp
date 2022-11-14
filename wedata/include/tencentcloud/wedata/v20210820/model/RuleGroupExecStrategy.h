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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ProdSchedulerTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 质量规则执行策略
                */
                class RuleGroupExecStrategy : public AbstractModel
                {
                public:
                    RuleGroupExecStrategy();
                    ~RuleGroupExecStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecQueue 计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecQueue 计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecQueue(const std::string& _execQueue);

                    /**
                     * 判断参数 ExecQueue 是否已赋值
                     * @return ExecQueue 是否已赋值
                     */
                    bool ExecQueueHasBeenSet() const;

                    /**
                     * 获取执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecutorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecutorGroupName 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取关联的生产调度任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 关联的生产调度任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置关联的生产调度任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tasks 关联的生产调度任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTasks(const std::vector<ProdSchedulerTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取调度周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 调度周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置调度周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CycleType 调度周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取延迟调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延迟调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延迟调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DelayTime 延迟调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 间隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CycleStep 间隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取时间指定
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 时间指定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置时间指定
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskAction 时间指定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskAction(const std::string& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     */
                    bool TaskActionHasBeenSet() const;

                private:

                    /**
                     * 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 计算队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 关联的生产调度任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 周期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 周期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 调度周期类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 延迟调度时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 间隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 时间指定
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_

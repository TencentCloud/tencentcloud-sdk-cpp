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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TimeOutStrategyInfo.h>
#include <tencentcloud/wedata/v20250806/model/ProjectInstanceStatisticsAlarmInfo.h>
#include <tencentcloud/wedata/v20250806/model/ReconciliationStrategyInfo.h>
#include <tencentcloud/wedata/v20250806/model/MonitorWhiteTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警规则详细配置
                */
                class AlarmRuleDetail : public AbstractModel
                {
                public:
                    AlarmRuleDetail();
                    ~AlarmRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败触发时机 

1 – 首次失败触发
2 --所有重试完成触发 (默认)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trigger 失败触发时机 

1 – 首次失败触发
2 --所有重试完成触发 (默认)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTrigger() const;

                    /**
                     * 设置失败触发时机 

1 – 首次失败触发
2 --所有重试完成触发 (默认)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trigger 失败触发时机 

1 – 首次失败触发
2 --所有重试完成触发 (默认)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrigger(const int64_t& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取补录重跑触发时机

1 –  首次失败触发
2 – 所有重试完成触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBackfillOrRerunTrigger 补录重跑触发时机

1 –  首次失败触发
2 – 所有重试完成触发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataBackfillOrRerunTrigger() const;

                    /**
                     * 设置补录重跑触发时机

1 –  首次失败触发
2 – 所有重试完成触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataBackfillOrRerunTrigger 补录重跑触发时机

1 –  首次失败触发
2 – 所有重试完成触发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataBackfillOrRerunTrigger(const int64_t& _dataBackfillOrRerunTrigger);

                    /**
                     * 判断参数 DataBackfillOrRerunTrigger 是否已赋值
                     * @return DataBackfillOrRerunTrigger 是否已赋值
                     * 
                     */
                    bool DataBackfillOrRerunTriggerHasBeenSet() const;

                    /**
                     * 获取周期实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeOutExtInfo 周期实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetTimeOutExtInfo() const;

                    /**
                     * 设置周期实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeOutExtInfo 周期实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeOutExtInfo(const std::vector<TimeOutStrategyInfo>& _timeOutExtInfo);

                    /**
                     * 判断参数 TimeOutExtInfo 是否已赋值
                     * @return TimeOutExtInfo 是否已赋值
                     * 
                     */
                    bool TimeOutExtInfoHasBeenSet() const;

                    /**
                     * 获取重跑补录实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataBackfillOrRerunTimeOutExtInfo 重跑补录实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetDataBackfillOrRerunTimeOutExtInfo() const;

                    /**
                     * 设置重跑补录实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataBackfillOrRerunTimeOutExtInfo 重跑补录实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataBackfillOrRerunTimeOutExtInfo(const std::vector<TimeOutStrategyInfo>& _dataBackfillOrRerunTimeOutExtInfo);

                    /**
                     * 判断参数 DataBackfillOrRerunTimeOutExtInfo 是否已赋值
                     * @return DataBackfillOrRerunTimeOutExtInfo 是否已赋值
                     * 
                     */
                    bool DataBackfillOrRerunTimeOutExtInfoHasBeenSet() const;

                    /**
                     * 获取项目波动告警配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectInstanceStatisticsAlarmInfoList 项目波动告警配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProjectInstanceStatisticsAlarmInfo> GetProjectInstanceStatisticsAlarmInfoList() const;

                    /**
                     * 设置项目波动告警配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectInstanceStatisticsAlarmInfoList 项目波动告警配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectInstanceStatisticsAlarmInfoList(const std::vector<ProjectInstanceStatisticsAlarmInfo>& _projectInstanceStatisticsAlarmInfoList);

                    /**
                     * 判断参数 ProjectInstanceStatisticsAlarmInfoList 是否已赋值
                     * @return ProjectInstanceStatisticsAlarmInfoList 是否已赋值
                     * 
                     */
                    bool ProjectInstanceStatisticsAlarmInfoListHasBeenSet() const;

                    /**
                     * 获取离线集成对账告警配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReconciliationExtInfo 离线集成对账告警配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReconciliationStrategyInfo> GetReconciliationExtInfo() const;

                    /**
                     * 设置离线集成对账告警配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reconciliationExtInfo 离线集成对账告警配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReconciliationExtInfo(const std::vector<ReconciliationStrategyInfo>& _reconciliationExtInfo);

                    /**
                     * 判断参数 ReconciliationExtInfo 是否已赋值
                     * @return ReconciliationExtInfo 是否已赋值
                     * 
                     */
                    bool ReconciliationExtInfoHasBeenSet() const;

                    /**
                     * 获取监控对象的白名单配置
                     * @return MonitorWhiteTasks 监控对象的白名单配置
                     * 
                     */
                    std::vector<MonitorWhiteTask> GetMonitorWhiteTasks() const;

                    /**
                     * 设置监控对象的白名单配置
                     * @param _monitorWhiteTasks 监控对象的白名单配置
                     * 
                     */
                    void SetMonitorWhiteTasks(const std::vector<MonitorWhiteTask>& _monitorWhiteTasks);

                    /**
                     * 判断参数 MonitorWhiteTasks 是否已赋值
                     * @return MonitorWhiteTasks 是否已赋值
                     * 
                     */
                    bool MonitorWhiteTasksHasBeenSet() const;

                    /**
                     * 获取3.0 Workflow 完成时间（周期）告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowCompletionTimeCycleExtInfo 3.0 Workflow 完成时间（周期）告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeOutStrategyInfo> GetWorkflowCompletionTimeCycleExtInfo() const;

                    /**
                     * 设置3.0 Workflow 完成时间（周期）告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowCompletionTimeCycleExtInfo 3.0 Workflow 完成时间（周期）告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowCompletionTimeCycleExtInfo(const std::vector<TimeOutStrategyInfo>& _workflowCompletionTimeCycleExtInfo);

                    /**
                     * 判断参数 WorkflowCompletionTimeCycleExtInfo 是否已赋值
                     * @return WorkflowCompletionTimeCycleExtInfo 是否已赋值
                     * 
                     */
                    bool WorkflowCompletionTimeCycleExtInfoHasBeenSet() const;

                    /**
                     * 获取工作流执行触发告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionTrigger 工作流执行触发告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkflowExecutionTrigger() const;

                    /**
                     * 设置工作流执行触发告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionTrigger 工作流执行触发告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionTrigger(const int64_t& _workflowExecutionTrigger);

                    /**
                     * 判断参数 WorkflowExecutionTrigger 是否已赋值
                     * @return WorkflowExecutionTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionTriggerHasBeenSet() const;

                    /**
                     * 获取工作流执行失败告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionFailureTrigger 工作流执行失败告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkflowExecutionFailureTrigger() const;

                    /**
                     * 设置工作流执行失败告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionFailureTrigger 工作流执行失败告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionFailureTrigger(const int64_t& _workflowExecutionFailureTrigger);

                    /**
                     * 判断参数 WorkflowExecutionFailureTrigger 是否已赋值
                     * @return WorkflowExecutionFailureTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionFailureTriggerHasBeenSet() const;

                    /**
                     * 获取工作流执行成功告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowExecutionSuccessTrigger 工作流执行成功告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkflowExecutionSuccessTrigger() const;

                    /**
                     * 设置工作流执行成功告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowExecutionSuccessTrigger 工作流执行成功告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowExecutionSuccessTrigger(const int64_t& _workflowExecutionSuccessTrigger);

                    /**
                     * 判断参数 WorkflowExecutionSuccessTrigger 是否已赋值
                     * @return WorkflowExecutionSuccessTrigger 是否已赋值
                     * 
                     */
                    bool WorkflowExecutionSuccessTriggerHasBeenSet() const;

                private:

                    /**
                     * 失败触发时机 

1 – 首次失败触发
2 --所有重试完成触发 (默认)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * 补录重跑触发时机

1 –  首次失败触发
2 – 所有重试完成触发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataBackfillOrRerunTrigger;
                    bool m_dataBackfillOrRerunTriggerHasBeenSet;

                    /**
                     * 周期实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeOutStrategyInfo> m_timeOutExtInfo;
                    bool m_timeOutExtInfoHasBeenSet;

                    /**
                     * 重跑补录实例超时配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeOutStrategyInfo> m_dataBackfillOrRerunTimeOutExtInfo;
                    bool m_dataBackfillOrRerunTimeOutExtInfoHasBeenSet;

                    /**
                     * 项目波动告警配置明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProjectInstanceStatisticsAlarmInfo> m_projectInstanceStatisticsAlarmInfoList;
                    bool m_projectInstanceStatisticsAlarmInfoListHasBeenSet;

                    /**
                     * 离线集成对账告警配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReconciliationStrategyInfo> m_reconciliationExtInfo;
                    bool m_reconciliationExtInfoHasBeenSet;

                    /**
                     * 监控对象的白名单配置
                     */
                    std::vector<MonitorWhiteTask> m_monitorWhiteTasks;
                    bool m_monitorWhiteTasksHasBeenSet;

                    /**
                     * 3.0 Workflow 完成时间（周期）告警策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeOutStrategyInfo> m_workflowCompletionTimeCycleExtInfo;
                    bool m_workflowCompletionTimeCycleExtInfoHasBeenSet;

                    /**
                     * 工作流执行触发告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workflowExecutionTrigger;
                    bool m_workflowExecutionTriggerHasBeenSet;

                    /**
                     * 工作流执行失败告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workflowExecutionFailureTrigger;
                    bool m_workflowExecutionFailureTriggerHasBeenSet;

                    /**
                     * 工作流执行成功告警条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workflowExecutionSuccessTrigger;
                    bool m_workflowExecutionSuccessTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDETAIL_H_

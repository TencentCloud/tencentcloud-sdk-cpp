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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPEXECSTRATEGY_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPEXECSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityProdSchedulerTask.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 质量监控任务执行策略
                */
                class QualityRuleGroupExecStrategy : public AbstractModel
                {
                public:
                    QualityRuleGroupExecStrategy();
                    ~QualityRuleGroupExecStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控类型 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控类型 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取监控任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupName 监控任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleGroupName() const;

                    /**
                     * 设置监控任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupName 监控任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupName(const std::string& _ruleGroupName);

                    /**
                     * 判断参数 RuleGroupName 是否已赋值
                     * @return RuleGroupName 是否已赋值
                     * 
                     */
                    bool RuleGroupNameHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取监控任务的Id，编辑更新监控任务时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 监控任务的Id，编辑更新监控任务时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置监控任务的Id，编辑更新监控任务时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 监控任务的Id，编辑更新监控任务时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取计算队列，数据源为HIVE、ICEBERG、DLC时必填，数据源为DLC时，该字段填写DLC数据引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecQueue 计算队列，数据源为HIVE、ICEBERG、DLC时必填，数据源为DLC时，该字段填写DLC数据引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置计算队列，数据源为HIVE、ICEBERG、DLC时必填，数据源为DLC时，该字段填写DLC数据引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execQueue 计算队列，数据源为HIVE、ICEBERG、DLC时必填，数据源为DLC时，该字段填写DLC数据引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecQueue(const std::string& _execQueue);

                    /**
                     * 判断参数 ExecQueue 是否已赋值
                     * @return ExecQueue 是否已赋值
                     * 
                     */
                    bool ExecQueueHasBeenSet() const;

                    /**
                     * 获取执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupName(const std::string& _executorGroupName);

                    /**
                     * 判断参数 ExecutorGroupName 是否已赋值
                     * @return ExecutorGroupName 是否已赋值
                     * 
                     */
                    bool ExecutorGroupNameHasBeenSet() const;

                    /**
                     * 获取关联的生产调度任务列表，MonitorType=2时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks 关联的生产调度任务列表，MonitorType=2时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置关联的生产调度任务列表，MonitorType=2时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks 关联的生产调度任务列表，MonitorType=2时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<QualityProdSchedulerTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取周期开始时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 周期开始时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置周期开始时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 周期开始时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取周期结束时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 周期结束时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置周期结束时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 周期结束时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取调度周期类型，MonitorType=3时必填，具体可填值参考：
I：按分钟调度
H：按小时调度
D：按天调度
W：按周调度
M：按月调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 调度周期类型，MonitorType=3时必填，具体可填值参考：
I：按分钟调度
H：按小时调度
D：按天调度
W：按周调度
M：按月调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置调度周期类型，MonitorType=3时必填，具体可填值参考：
I：按分钟调度
H：按小时调度
D：按天调度
W：按周调度
M：按月调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 调度周期类型，MonitorType=3时必填，具体可填值参考：
I：按分钟调度
H：按小时调度
D：按天调度
W：按周调度
M：按月调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleType(const std::string& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取延迟调度时间，MonitorType=3时必填，主要用于调度周期为天/周/月的任务，
计量单位为分钟，比如天任务需要延迟到02:00执行，则该字段值为120，表示延迟2小时（120分钟）
对于小时/分钟任务，该字段无意义，填固定值0，否则字段校验不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime 延迟调度时间，MonitorType=3时必填，主要用于调度周期为天/周/月的任务，
计量单位为分钟，比如天任务需要延迟到02:00执行，则该字段值为120，表示延迟2小时（120分钟）
对于小时/分钟任务，该字段无意义，填固定值0，否则字段校验不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置延迟调度时间，MonitorType=3时必填，主要用于调度周期为天/周/月的任务，
计量单位为分钟，比如天任务需要延迟到02:00执行，则该字段值为120，表示延迟2小时（120分钟）
对于小时/分钟任务，该字段无意义，填固定值0，否则字段校验不通过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime 延迟调度时间，MonitorType=3时必填，主要用于调度周期为天/周/月的任务，
计量单位为分钟，比如天任务需要延迟到02:00执行，则该字段值为120，表示延迟2小时（120分钟）
对于小时/分钟任务，该字段无意义，填固定值0，否则字段校验不通过
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取间隔，MonitorType=3时必填，表示周期任务间隔时间
周/月/天任务可选：1
分钟任务可选：10，20，30
小时任务可选：1，2，3，4，6，8，12
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 间隔，MonitorType=3时必填，表示周期任务间隔时间
周/月/天任务可选：1
分钟任务可选：10，20，30
小时任务可选：1，2，3，4，6，8，12
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置间隔，MonitorType=3时必填，表示周期任务间隔时间
周/月/天任务可选：1
分钟任务可选：10，20，30
小时任务可选：1，2，3，4，6，8，12
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 间隔，MonitorType=3时必填，表示周期任务间隔时间
周/月/天任务可选：1
分钟任务可选：10，20，30
小时任务可选：1，2，3，4，6，8，12
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取时间指定，主要用于调度周期为周/月的任务
调度周期为周时：含义为指定周几运行，可选多个，英文逗号隔开
可填1,2...7，依次代表周日，周一...周六，例如填“1,2”，表示周日、周一执行；

调度周期为月时，含义为指定每月的几号运行，可选多个，英文逗号隔开
可填1,2,...,31，依次代表1号，2号...31号，例如填“1,2”，表示每月的1号、2号执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction 时间指定，主要用于调度周期为周/月的任务
调度周期为周时：含义为指定周几运行，可选多个，英文逗号隔开
可填1,2...7，依次代表周日，周一...周六，例如填“1,2”，表示周日、周一执行；

调度周期为月时，含义为指定每月的几号运行，可选多个，英文逗号隔开
可填1,2,...,31，依次代表1号，2号...31号，例如填“1,2”，表示每月的1号、2号执行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置时间指定，主要用于调度周期为周/月的任务
调度周期为周时：含义为指定周几运行，可选多个，英文逗号隔开
可填1,2...7，依次代表周日，周一...周六，例如填“1,2”，表示周日、周一执行；

调度周期为月时，含义为指定每月的几号运行，可选多个，英文逗号隔开
可填1,2,...,31，依次代表1号，2号...31号，例如填“1,2”，表示每月的1号、2号执行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction 时间指定，主要用于调度周期为周/月的任务
调度周期为周时：含义为指定周几运行，可选多个，英文逗号隔开
可填1,2...7，依次代表周日，周一...周六，例如填“1,2”，表示周日、周一执行；

调度周期为月时，含义为指定每月的几号运行，可选多个，英文逗号隔开
可填1,2,...,31，依次代表1号，2号...31号，例如填“1,2”，表示每月的1号、2号执行
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
                     * 获取运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecEngineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecEngineType() const;

                    /**
                     * 设置运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execEngineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecEngineType(const std::string& _execEngineType);

                    /**
                     * 判断参数 ExecEngineType 是否已赋值
                     * @return ExecEngineType 是否已赋值
                     * 
                     */
                    bool ExecEngineTypeHasBeenSet() const;

                    /**
                     * 获取执行计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecPlan 执行计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecPlan() const;

                    /**
                     * 设置执行计划
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execPlan 执行计划
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecPlan(const std::string& _execPlan);

                    /**
                     * 判断参数 ExecPlan 是否已赋值
                     * @return ExecPlan 是否已赋值
                     * 
                     */
                    bool ExecPlanHasBeenSet() const;

                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取触发类型，主要用于“关联生产调度”（MonitorType=2）的监控任务，可选值：
CYCLE：周期调度
MAKE_UP：补录
RERUN：重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTypes 触发类型，主要用于“关联生产调度”（MonitorType=2）的监控任务，可选值：
CYCLE：周期调度
MAKE_UP：补录
RERUN：重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTriggerTypes() const;

                    /**
                     * 设置触发类型，主要用于“关联生产调度”（MonitorType=2）的监控任务，可选值：
CYCLE：周期调度
MAKE_UP：补录
RERUN：重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTypes 触发类型，主要用于“关联生产调度”（MonitorType=2）的监控任务，可选值：
CYCLE：周期调度
MAKE_UP：补录
RERUN：重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerTypes(const std::vector<std::string>& _triggerTypes);

                    /**
                     * 判断参数 TriggerTypes 是否已赋值
                     * @return TriggerTypes 是否已赋值
                     * 
                     */
                    bool TriggerTypesHasBeenSet() const;

                    /**
                     * 获取数据源为DLC时，对应DLC资源组，根据ExecQueue中填的DLC引擎名称，选择对应引擎下的资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcGroupName 数据源为DLC时，对应DLC资源组，根据ExecQueue中填的DLC引擎名称，选择对应引擎下的资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcGroupName() const;

                    /**
                     * 设置数据源为DLC时，对应DLC资源组，根据ExecQueue中填的DLC引擎名称，选择对应引擎下的资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcGroupName 数据源为DLC时，对应DLC资源组，根据ExecQueue中填的DLC引擎名称，选择对应引擎下的资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcGroupName(const std::string& _dlcGroupName);

                    /**
                     * 判断参数 DlcGroupName 是否已赋值
                     * @return DlcGroupName 是否已赋值
                     * 
                     */
                    bool DlcGroupNameHasBeenSet() const;

                    /**
                     * 获取schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取时区，默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone 时区，默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置时区，默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone 时区，默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleTimeZone(const std::string& _scheduleTimeZone);

                    /**
                     * 判断参数 ScheduleTimeZone 是否已赋值
                     * @return ScheduleTimeZone 是否已赋值
                     * 
                     */
                    bool ScheduleTimeZoneHasBeenSet() const;

                    /**
                     * 获取任务监控参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupConfig 任务监控参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityRuleGroupConfig GetGroupConfig() const;

                    /**
                     * 设置任务监控参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupConfig 任务监控参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupConfig(const QualityRuleGroupConfig& _groupConfig);

                    /**
                     * 判断参数 GroupConfig 是否已赋值
                     * @return GroupConfig 是否已赋值
                     * 
                     */
                    bool GroupConfigHasBeenSet() const;

                    /**
                     * 获取引擎参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineParam 引擎参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineParam() const;

                    /**
                     * 设置引擎参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineParam 引擎参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineParam(const std::string& _engineParam);

                    /**
                     * 判断参数 EngineParam 是否已赋值
                     * @return EngineParam 是否已赋值
                     * 
                     */
                    bool EngineParamHasBeenSet() const;

                    /**
                     * 获取数据目录名称，不填默认为DataLakeCatalog（更新质量监控时该参数无效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName 数据目录名称，不填默认为DataLakeCatalog（更新质量监控时该参数无效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置数据目录名称，不填默认为DataLakeCatalog（更新质量监控时该参数无效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName 数据目录名称，不填默认为DataLakeCatalog（更新质量监控时该参数无效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                private:

                    /**
                     * 监控类型 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 执行资源组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 监控任务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleGroupName;
                    bool m_ruleGroupNameHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 监控任务的Id，编辑更新监控任务时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 计算队列，数据源为HIVE、ICEBERG、DLC时必填，数据源为DLC时，该字段填写DLC数据引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * 执行资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * 关联的生产调度任务列表，MonitorType=2时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 周期开始时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 周期结束时间，MonitorType=3时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 调度周期类型，MonitorType=3时必填，具体可填值参考：
I：按分钟调度
H：按小时调度
D：按天调度
W：按周调度
M：按月调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * 延迟调度时间，MonitorType=3时必填，主要用于调度周期为天/周/月的任务，
计量单位为分钟，比如天任务需要延迟到02:00执行，则该字段值为120，表示延迟2小时（120分钟）
对于小时/分钟任务，该字段无意义，填固定值0，否则字段校验不通过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 间隔，MonitorType=3时必填，表示周期任务间隔时间
周/月/天任务可选：1
分钟任务可选：10，20，30
小时任务可选：1，2，3，4，6，8，12
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * 时间指定，主要用于调度周期为周/月的任务
调度周期为周时：含义为指定周几运行，可选多个，英文逗号隔开
可填1,2...7，依次代表周日，周一...周六，例如填“1,2”，表示周日、周一执行；

调度周期为月时，含义为指定每月的几号运行，可选多个，英文逗号隔开
可填1,2,...,31，依次代表1号，2号...31号，例如填“1,2”，表示每月的1号、2号执行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execEngineType;
                    bool m_execEngineTypeHasBeenSet;

                    /**
                     * 执行计划
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execPlan;
                    bool m_execPlanHasBeenSet;

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 触发类型，主要用于“关联生产调度”（MonitorType=2）的监控任务，可选值：
CYCLE：周期调度
MAKE_UP：补录
RERUN：重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_triggerTypes;
                    bool m_triggerTypesHasBeenSet;

                    /**
                     * 数据源为DLC时，对应DLC资源组，根据ExecQueue中填的DLC引擎名称，选择对应引擎下的资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcGroupName;
                    bool m_dlcGroupNameHasBeenSet;

                    /**
                     * schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 任务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 时区，默认为UTC+8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * 任务监控参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityRuleGroupConfig m_groupConfig;
                    bool m_groupConfigHasBeenSet;

                    /**
                     * 引擎参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineParam;
                    bool m_engineParamHasBeenSet;

                    /**
                     * 数据目录名称，不填默认为DataLakeCatalog（更新质量监控时该参数无效）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEGROUPEXECSTRATEGY_H_

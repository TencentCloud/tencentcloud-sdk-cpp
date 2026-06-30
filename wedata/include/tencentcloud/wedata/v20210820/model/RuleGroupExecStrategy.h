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
#include <tencentcloud/wedata/v20210820/model/RuleGroupConfig.h>


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
                     * 获取<p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId <p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置<p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId <p>规则组Id</p>
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
                     * 获取监控类型：1-未配置，2-关联生产调度，3-离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型：1-未配置，2-关联生产调度，3-离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型：1-未配置，2-关联生产调度，3-离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控类型：1-未配置，2-关联生产调度，3-离线周期检测
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
                     * 获取<p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecQueue <p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecQueue() const;

                    /**
                     * 设置<p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execQueue <p>计算队列</p>
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
                     * 获取<p>执行资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId <p>执行资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置<p>执行资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId <p>执行资源组ID</p>
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
                     * 获取<p>执行资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupName <p>执行资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupName() const;

                    /**
                     * 设置<p>执行资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupName <p>执行资源组名称</p>
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
                     * 获取<p>关联的生产调度任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>关联的生产调度任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProdSchedulerTask> GetTasks() const;

                    /**
                     * 设置<p>关联的生产调度任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>关联的生产调度任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<ProdSchedulerTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>周期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>周期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>周期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>周期开始时间</p>
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
                     * 获取<p>周期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>周期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>周期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>周期结束时间</p>
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
                     * 获取周期类型：MINUTE-分钟，HOUR-小时，DAY-天，WEEK-周，MONTH-月，YEAR-年
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleType 周期类型：MINUTE-分钟，HOUR-小时，DAY-天，WEEK-周，MONTH-月，YEAR-年
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCycleType() const;

                    /**
                     * 设置周期类型：MINUTE-分钟，HOUR-小时，DAY-天，WEEK-周，MONTH-月，YEAR-年
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleType 周期类型：MINUTE-分钟，HOUR-小时，DAY-天，WEEK-周，MONTH-月，YEAR-年
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
                     * 获取<p>延迟调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayTime <p>延迟调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置<p>延迟调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayTime <p>延迟调度时间</p>
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
                     * 获取<p>间隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep <p>间隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置<p>间隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep <p>间隔</p>
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
                     * 获取<p>时间指定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskAction <p>时间指定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskAction() const;

                    /**
                     * 设置<p>时间指定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskAction <p>时间指定</p>
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
                     * 获取执行引擎类型，可选值：MYSQL, HIVE, SPARK, LIVY, DLC, GBASE, CDW_PG, TCHouse-P, DORIS, TCHouse-D
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecEngineType 执行引擎类型，可选值：MYSQL, HIVE, SPARK, LIVY, DLC, GBASE, CDW_PG, TCHouse-P, DORIS, TCHouse-D
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecEngineType() const;

                    /**
                     * 设置执行引擎类型，可选值：MYSQL, HIVE, SPARK, LIVY, DLC, GBASE, CDW_PG, TCHouse-P, DORIS, TCHouse-D
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execEngineType 执行引擎类型，可选值：MYSQL, HIVE, SPARK, LIVY, DLC, GBASE, CDW_PG, TCHouse-P, DORIS, TCHouse-D
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
                     * 获取<p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecPlan <p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecPlan() const;

                    /**
                     * 设置<p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execPlan <p>执行计划</p>
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
                     * 获取<p>规则id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId <p>规则id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>规则id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId <p>规则id</p>
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
                     * 获取<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取触发类型数组：1-手动触发，2-调度事件触发，3-周期调度触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerTypes 触发类型数组：1-手动触发，2-调度事件触发，3-周期调度触发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTriggerTypes() const;

                    /**
                     * 设置触发类型数组：1-手动触发，2-调度事件触发，3-周期调度触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerTypes 触发类型数组：1-手动触发，2-调度事件触发，3-周期调度触发
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
                     * 获取<p>DLC资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcGroupName <p>DLC资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcGroupName() const;

                    /**
                     * 设置<p>DLC资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcGroupName <p>DLC资源组</p>
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
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleGroupName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupName <p>任务名称</p>
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
                     * 获取<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>数据库名称</p>
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
                     * 获取<p>schema名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName <p>schema名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName <p>schema名称</p>
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
                     * 获取<p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>表名称</p>
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
                     * 获取<p>数据源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId <p>数据源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置<p>数据源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId <p>数据源id</p>
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
                     * 获取<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>任务描述</p>
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
                     * 获取<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleTimeZone <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleTimeZone() const;

                    /**
                     * 设置<p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleTimeZone <p>时区</p>
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
                     * 获取<p>任务监控参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupConfig <p>任务监控参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupConfig GetGroupConfig() const;

                    /**
                     * 设置<p>任务监控参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupConfig <p>任务监控参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupConfig(const RuleGroupConfig& _groupConfig);

                    /**
                     * 判断参数 GroupConfig 是否已赋值
                     * @return GroupConfig 是否已赋值
                     * 
                     */
                    bool GroupConfigHasBeenSet() const;

                    /**
                     * 获取<p>引擎参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineParam <p>引擎参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineParam() const;

                    /**
                     * 设置<p>引擎参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineParam <p>引擎参数</p>
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
                     * 获取<p>catalog名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName <p>catalog名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>catalog名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName <p>catalog名称</p>
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

                    /**
                     * 获取<p>执行失败是否阻塞下游</p><p>枚举值：</p><ul><li>0： 失败不阻塞（默认）</li><li>1： 失败阻塞</li></ul><p>默认值：0</p><p>仅作用于“关联生产调度”类型的质量监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecFailBlock <p>执行失败是否阻塞下游</p><p>枚举值：</p><ul><li>0： 失败不阻塞（默认）</li><li>1： 失败阻塞</li></ul><p>默认值：0</p><p>仅作用于“关联生产调度”类型的质量监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExecFailBlock() const;

                    /**
                     * 设置<p>执行失败是否阻塞下游</p><p>枚举值：</p><ul><li>0： 失败不阻塞（默认）</li><li>1： 失败阻塞</li></ul><p>默认值：0</p><p>仅作用于“关联生产调度”类型的质量监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execFailBlock <p>执行失败是否阻塞下游</p><p>枚举值：</p><ul><li>0： 失败不阻塞（默认）</li><li>1： 失败阻塞</li></ul><p>默认值：0</p><p>仅作用于“关联生产调度”类型的质量监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecFailBlock(const uint64_t& _execFailBlock);

                    /**
                     * 判断参数 ExecFailBlock 是否已赋值
                     * @return ExecFailBlock 是否已赋值
                     * 
                     */
                    bool ExecFailBlockHasBeenSet() const;

                private:

                    /**
                     * <p>规则组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 监控类型：1-未配置，2-关联生产调度，3-离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>计算队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execQueue;
                    bool m_execQueueHasBeenSet;

                    /**
                     * <p>执行资源组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * <p>执行资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupName;
                    bool m_executorGroupNameHasBeenSet;

                    /**
                     * <p>关联的生产调度任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProdSchedulerTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>周期开始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>周期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 周期类型：MINUTE-分钟，HOUR-小时，DAY-天，WEEK-周，MONTH-月，YEAR-年
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>延迟调度时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>间隔</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * <p>时间指定</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskAction;
                    bool m_taskActionHasBeenSet;

                    /**
                     * 执行引擎类型，可选值：MYSQL, HIVE, SPARK, LIVY, DLC, GBASE, CDW_PG, TCHouse-P, DORIS, TCHouse-D
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execEngineType;
                    bool m_execEngineTypeHasBeenSet;

                    /**
                     * <p>执行计划</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execPlan;
                    bool m_execPlanHasBeenSet;

                    /**
                     * <p>规则id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 触发类型数组：1-手动触发，2-调度事件触发，3-周期调度触发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_triggerTypes;
                    bool m_triggerTypesHasBeenSet;

                    /**
                     * <p>DLC资源组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcGroupName;
                    bool m_dlcGroupNameHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleGroupName;
                    bool m_ruleGroupNameHasBeenSet;

                    /**
                     * <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>schema名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>数据源id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * <p>任务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>时区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleTimeZone;
                    bool m_scheduleTimeZoneHasBeenSet;

                    /**
                     * <p>任务监控参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupConfig m_groupConfig;
                    bool m_groupConfigHasBeenSet;

                    /**
                     * <p>引擎参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineParam;
                    bool m_engineParamHasBeenSet;

                    /**
                     * <p>catalog名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>执行失败是否阻塞下游</p><p>枚举值：</p><ul><li>0： 失败不阻塞（默认）</li><li>1： 失败阻塞</li></ul><p>默认值：0</p><p>仅作用于“关联生产调度”类型的质量监控</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_execFailBlock;
                    bool m_execFailBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPEXECSTRATEGY_H_

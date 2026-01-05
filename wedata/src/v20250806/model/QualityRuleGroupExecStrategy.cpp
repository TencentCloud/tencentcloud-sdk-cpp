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

#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupExecStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleGroupExecStrategy::QualityRuleGroupExecStrategy() :
    m_monitorTypeHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_execQueueHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_execEngineTypeHasBeenSet(false),
    m_execPlanHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_triggerTypesHasBeenSet(false),
    m_dlcGroupNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_groupConfigHasBeenSet(false),
    m_engineParamHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleGroupExecStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.MonitorType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetUint64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupName") && !value["RuleGroupName"].IsNull())
    {
        if (!value["RuleGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.RuleGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupName = string(value["RuleGroupName"].GetString());
        m_ruleGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecQueue") && !value["ExecQueue"].IsNull())
    {
        if (!value["ExecQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ExecQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execQueue = string(value["ExecQueue"].GetString());
        m_execQueueHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityProdSchedulerTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("ExecEngineType") && !value["ExecEngineType"].IsNull())
    {
        if (!value["ExecEngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ExecEngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execEngineType = string(value["ExecEngineType"].GetString());
        m_execEngineTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecPlan") && !value["ExecPlan"].IsNull())
    {
        if (!value["ExecPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ExecPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execPlan = string(value["ExecPlan"].GetString());
        m_execPlanHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerTypes") && !value["TriggerTypes"].IsNull())
    {
        if (!value["TriggerTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.TriggerTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_triggerTypes.push_back((*itr).GetString());
        }
        m_triggerTypesHasBeenSet = true;
    }

    if (value.HasMember("DlcGroupName") && !value["DlcGroupName"].IsNull())
    {
        if (!value["DlcGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.DlcGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcGroupName = string(value["DlcGroupName"].GetString());
        m_dlcGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("GroupConfig") && !value["GroupConfig"].IsNull())
    {
        if (!value["GroupConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.GroupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_groupConfig.Deserialize(value["GroupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_groupConfigHasBeenSet = true;
    }

    if (value.HasMember("EngineParam") && !value["EngineParam"].IsNull())
    {
        if (!value["EngineParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.EngineParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineParam = string(value["EngineParam"].GetString());
        m_engineParamHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleGroupExecStrategy.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleGroupExecStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_execQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_execEngineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecEngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execEngineType.c_str(), allocator).Move(), allocator);
    }

    if (m_execPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_triggerTypes.begin(); itr != m_triggerTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dlcGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_groupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_groupConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_engineParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineParam.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualityRuleGroupExecStrategy::GetMonitorType() const
{
    return m_monitorType;
}

void QualityRuleGroupExecStrategy::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void QualityRuleGroupExecStrategy::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetRuleGroupName() const
{
    return m_ruleGroupName;
}

void QualityRuleGroupExecStrategy::SetRuleGroupName(const string& _ruleGroupName)
{
    m_ruleGroupName = _ruleGroupName;
    m_ruleGroupNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::RuleGroupNameHasBeenSet() const
{
    return m_ruleGroupNameHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetDatabaseName() const
{
    return m_databaseName;
}

void QualityRuleGroupExecStrategy::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetDatasourceId() const
{
    return m_datasourceId;
}

void QualityRuleGroupExecStrategy::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetTableName() const
{
    return m_tableName;
}

void QualityRuleGroupExecStrategy::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

uint64_t QualityRuleGroupExecStrategy::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void QualityRuleGroupExecStrategy::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetExecQueue() const
{
    return m_execQueue;
}

void QualityRuleGroupExecStrategy::SetExecQueue(const string& _execQueue)
{
    m_execQueue = _execQueue;
    m_execQueueHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ExecQueueHasBeenSet() const
{
    return m_execQueueHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void QualityRuleGroupExecStrategy::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

vector<QualityProdSchedulerTask> QualityRuleGroupExecStrategy::GetTasks() const
{
    return m_tasks;
}

void QualityRuleGroupExecStrategy::SetTasks(const vector<QualityProdSchedulerTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetStartTime() const
{
    return m_startTime;
}

void QualityRuleGroupExecStrategy::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetEndTime() const
{
    return m_endTime;
}

void QualityRuleGroupExecStrategy::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetCycleType() const
{
    return m_cycleType;
}

void QualityRuleGroupExecStrategy::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t QualityRuleGroupExecStrategy::GetDelayTime() const
{
    return m_delayTime;
}

void QualityRuleGroupExecStrategy::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t QualityRuleGroupExecStrategy::GetCycleStep() const
{
    return m_cycleStep;
}

void QualityRuleGroupExecStrategy::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetTaskAction() const
{
    return m_taskAction;
}

void QualityRuleGroupExecStrategy::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetExecEngineType() const
{
    return m_execEngineType;
}

void QualityRuleGroupExecStrategy::SetExecEngineType(const string& _execEngineType)
{
    m_execEngineType = _execEngineType;
    m_execEngineTypeHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ExecEngineTypeHasBeenSet() const
{
    return m_execEngineTypeHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetExecPlan() const
{
    return m_execPlan;
}

void QualityRuleGroupExecStrategy::SetExecPlan(const string& _execPlan)
{
    m_execPlan = _execPlan;
    m_execPlanHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ExecPlanHasBeenSet() const
{
    return m_execPlanHasBeenSet;
}

uint64_t QualityRuleGroupExecStrategy::GetRuleId() const
{
    return m_ruleId;
}

void QualityRuleGroupExecStrategy::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetRuleName() const
{
    return m_ruleName;
}

void QualityRuleGroupExecStrategy::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<string> QualityRuleGroupExecStrategy::GetTriggerTypes() const
{
    return m_triggerTypes;
}

void QualityRuleGroupExecStrategy::SetTriggerTypes(const vector<string>& _triggerTypes)
{
    m_triggerTypes = _triggerTypes;
    m_triggerTypesHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::TriggerTypesHasBeenSet() const
{
    return m_triggerTypesHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetDlcGroupName() const
{
    return m_dlcGroupName;
}

void QualityRuleGroupExecStrategy::SetDlcGroupName(const string& _dlcGroupName)
{
    m_dlcGroupName = _dlcGroupName;
    m_dlcGroupNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::DlcGroupNameHasBeenSet() const
{
    return m_dlcGroupNameHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetSchemaName() const
{
    return m_schemaName;
}

void QualityRuleGroupExecStrategy::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetDescription() const
{
    return m_description;
}

void QualityRuleGroupExecStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void QualityRuleGroupExecStrategy::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

QualityRuleGroupConfig QualityRuleGroupExecStrategy::GetGroupConfig() const
{
    return m_groupConfig;
}

void QualityRuleGroupExecStrategy::SetGroupConfig(const QualityRuleGroupConfig& _groupConfig)
{
    m_groupConfig = _groupConfig;
    m_groupConfigHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::GroupConfigHasBeenSet() const
{
    return m_groupConfigHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetEngineParam() const
{
    return m_engineParam;
}

void QualityRuleGroupExecStrategy::SetEngineParam(const string& _engineParam)
{
    m_engineParam = _engineParam;
    m_engineParamHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::EngineParamHasBeenSet() const
{
    return m_engineParamHasBeenSet;
}

string QualityRuleGroupExecStrategy::GetCatalogName() const
{
    return m_catalogName;
}

void QualityRuleGroupExecStrategy::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QualityRuleGroupExecStrategy::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}


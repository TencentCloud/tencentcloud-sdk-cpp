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

#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupExecStrategy::RuleGroupExecStrategy() :
    m_ruleGroupIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_execQueueHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
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
    m_ruleGroupNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupExecStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.MonitorType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetUint64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecQueue") && !value["ExecQueue"].IsNull())
    {
        if (!value["ExecQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.ExecQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execQueue = string(value["ExecQueue"].GetString());
        m_execQueueHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupName") && !value["ExecutorGroupName"].IsNull())
    {
        if (!value["ExecutorGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.ExecutorGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupName = string(value["ExecutorGroupName"].GetString());
        m_executorGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProdSchedulerTask item;
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
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("ExecEngineType") && !value["ExecEngineType"].IsNull())
    {
        if (!value["ExecEngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.ExecEngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execEngineType = string(value["ExecEngineType"].GetString());
        m_execEngineTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecPlan") && !value["ExecPlan"].IsNull())
    {
        if (!value["ExecPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.ExecPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execPlan = string(value["ExecPlan"].GetString());
        m_execPlanHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerTypes") && !value["TriggerTypes"].IsNull())
    {
        if (!value["TriggerTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.TriggerTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.DlcGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcGroupName = string(value["DlcGroupName"].GetString());
        m_dlcGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupName") && !value["RuleGroupName"].IsNull())
    {
        if (!value["RuleGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.RuleGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupName = string(value["RuleGroupName"].GetString());
        m_ruleGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupExecStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupExecStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_execQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleGroupExecStrategy::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroupExecStrategy::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroupExecStrategy::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t RuleGroupExecStrategy::GetMonitorType() const
{
    return m_monitorType;
}

void RuleGroupExecStrategy::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool RuleGroupExecStrategy::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string RuleGroupExecStrategy::GetExecQueue() const
{
    return m_execQueue;
}

void RuleGroupExecStrategy::SetExecQueue(const string& _execQueue)
{
    m_execQueue = _execQueue;
    m_execQueueHasBeenSet = true;
}

bool RuleGroupExecStrategy::ExecQueueHasBeenSet() const
{
    return m_execQueueHasBeenSet;
}

string RuleGroupExecStrategy::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void RuleGroupExecStrategy::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool RuleGroupExecStrategy::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string RuleGroupExecStrategy::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void RuleGroupExecStrategy::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

vector<ProdSchedulerTask> RuleGroupExecStrategy::GetTasks() const
{
    return m_tasks;
}

void RuleGroupExecStrategy::SetTasks(const vector<ProdSchedulerTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool RuleGroupExecStrategy::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string RuleGroupExecStrategy::GetStartTime() const
{
    return m_startTime;
}

void RuleGroupExecStrategy::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RuleGroupExecStrategy::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RuleGroupExecStrategy::GetEndTime() const
{
    return m_endTime;
}

void RuleGroupExecStrategy::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RuleGroupExecStrategy::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RuleGroupExecStrategy::GetCycleType() const
{
    return m_cycleType;
}

void RuleGroupExecStrategy::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool RuleGroupExecStrategy::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t RuleGroupExecStrategy::GetDelayTime() const
{
    return m_delayTime;
}

void RuleGroupExecStrategy::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool RuleGroupExecStrategy::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t RuleGroupExecStrategy::GetCycleStep() const
{
    return m_cycleStep;
}

void RuleGroupExecStrategy::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool RuleGroupExecStrategy::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string RuleGroupExecStrategy::GetTaskAction() const
{
    return m_taskAction;
}

void RuleGroupExecStrategy::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool RuleGroupExecStrategy::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string RuleGroupExecStrategy::GetExecEngineType() const
{
    return m_execEngineType;
}

void RuleGroupExecStrategy::SetExecEngineType(const string& _execEngineType)
{
    m_execEngineType = _execEngineType;
    m_execEngineTypeHasBeenSet = true;
}

bool RuleGroupExecStrategy::ExecEngineTypeHasBeenSet() const
{
    return m_execEngineTypeHasBeenSet;
}

string RuleGroupExecStrategy::GetExecPlan() const
{
    return m_execPlan;
}

void RuleGroupExecStrategy::SetExecPlan(const string& _execPlan)
{
    m_execPlan = _execPlan;
    m_execPlanHasBeenSet = true;
}

bool RuleGroupExecStrategy::ExecPlanHasBeenSet() const
{
    return m_execPlanHasBeenSet;
}

uint64_t RuleGroupExecStrategy::GetRuleId() const
{
    return m_ruleId;
}

void RuleGroupExecStrategy::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleGroupExecStrategy::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleGroupExecStrategy::GetRuleName() const
{
    return m_ruleName;
}

void RuleGroupExecStrategy::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<string> RuleGroupExecStrategy::GetTriggerTypes() const
{
    return m_triggerTypes;
}

void RuleGroupExecStrategy::SetTriggerTypes(const vector<string>& _triggerTypes)
{
    m_triggerTypes = _triggerTypes;
    m_triggerTypesHasBeenSet = true;
}

bool RuleGroupExecStrategy::TriggerTypesHasBeenSet() const
{
    return m_triggerTypesHasBeenSet;
}

string RuleGroupExecStrategy::GetDlcGroupName() const
{
    return m_dlcGroupName;
}

void RuleGroupExecStrategy::SetDlcGroupName(const string& _dlcGroupName)
{
    m_dlcGroupName = _dlcGroupName;
    m_dlcGroupNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::DlcGroupNameHasBeenSet() const
{
    return m_dlcGroupNameHasBeenSet;
}

string RuleGroupExecStrategy::GetRuleGroupName() const
{
    return m_ruleGroupName;
}

void RuleGroupExecStrategy::SetRuleGroupName(const string& _ruleGroupName)
{
    m_ruleGroupName = _ruleGroupName;
    m_ruleGroupNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::RuleGroupNameHasBeenSet() const
{
    return m_ruleGroupNameHasBeenSet;
}

string RuleGroupExecStrategy::GetDatabaseName() const
{
    return m_databaseName;
}

void RuleGroupExecStrategy::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string RuleGroupExecStrategy::GetSchemaName() const
{
    return m_schemaName;
}

void RuleGroupExecStrategy::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string RuleGroupExecStrategy::GetTableName() const
{
    return m_tableName;
}

void RuleGroupExecStrategy::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool RuleGroupExecStrategy::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string RuleGroupExecStrategy::GetDatasourceId() const
{
    return m_datasourceId;
}

void RuleGroupExecStrategy::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool RuleGroupExecStrategy::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string RuleGroupExecStrategy::GetDescription() const
{
    return m_description;
}

void RuleGroupExecStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleGroupExecStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


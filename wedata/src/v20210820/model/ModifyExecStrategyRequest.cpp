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

#include <tencentcloud/wedata/v20210820/model/ModifyExecStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyExecStrategyRequest::ModifyExecStrategyRequest() :
    m_ruleGroupIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_execQueueHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_executorGroupNameHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_execEngineTypeHasBeenSet(false),
    m_triggerTypesHasBeenSet(false)
{
}

string ModifyExecStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_execQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_execQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_execEngineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecEngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_execEngineType.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_triggerTypes.begin(); itr != m_triggerTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyExecStrategyRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void ModifyExecStrategyRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t ModifyExecStrategyRequest::GetMonitorType() const
{
    return m_monitorType;
}

void ModifyExecStrategyRequest::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string ModifyExecStrategyRequest::GetExecQueue() const
{
    return m_execQueue;
}

void ModifyExecStrategyRequest::SetExecQueue(const string& _execQueue)
{
    m_execQueue = _execQueue;
    m_execQueueHasBeenSet = true;
}

bool ModifyExecStrategyRequest::ExecQueueHasBeenSet() const
{
    return m_execQueueHasBeenSet;
}

string ModifyExecStrategyRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void ModifyExecStrategyRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string ModifyExecStrategyRequest::GetExecutorGroupName() const
{
    return m_executorGroupName;
}

void ModifyExecStrategyRequest::SetExecutorGroupName(const string& _executorGroupName)
{
    m_executorGroupName = _executorGroupName;
    m_executorGroupNameHasBeenSet = true;
}

bool ModifyExecStrategyRequest::ExecutorGroupNameHasBeenSet() const
{
    return m_executorGroupNameHasBeenSet;
}

vector<ProdSchedulerTask> ModifyExecStrategyRequest::GetTasks() const
{
    return m_tasks;
}

void ModifyExecStrategyRequest::SetTasks(const vector<ProdSchedulerTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ModifyExecStrategyRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string ModifyExecStrategyRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyExecStrategyRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyExecStrategyRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyExecStrategyRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ModifyExecStrategyRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyExecStrategyRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyExecStrategyRequest::GetCycleType() const
{
    return m_cycleType;
}

void ModifyExecStrategyRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

uint64_t ModifyExecStrategyRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void ModifyExecStrategyRequest::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool ModifyExecStrategyRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string ModifyExecStrategyRequest::GetTaskAction() const
{
    return m_taskAction;
}

void ModifyExecStrategyRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool ModifyExecStrategyRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

uint64_t ModifyExecStrategyRequest::GetDelayTime() const
{
    return m_delayTime;
}

void ModifyExecStrategyRequest::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string ModifyExecStrategyRequest::GetDatabaseId() const
{
    return m_databaseId;
}

void ModifyExecStrategyRequest::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string ModifyExecStrategyRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void ModifyExecStrategyRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string ModifyExecStrategyRequest::GetTableId() const
{
    return m_tableId;
}

void ModifyExecStrategyRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ModifyExecStrategyRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string ModifyExecStrategyRequest::GetExecEngineType() const
{
    return m_execEngineType;
}

void ModifyExecStrategyRequest::SetExecEngineType(const string& _execEngineType)
{
    m_execEngineType = _execEngineType;
    m_execEngineTypeHasBeenSet = true;
}

bool ModifyExecStrategyRequest::ExecEngineTypeHasBeenSet() const
{
    return m_execEngineTypeHasBeenSet;
}

vector<string> ModifyExecStrategyRequest::GetTriggerTypes() const
{
    return m_triggerTypes;
}

void ModifyExecStrategyRequest::SetTriggerTypes(const vector<string>& _triggerTypes)
{
    m_triggerTypes = _triggerTypes;
    m_triggerTypesHasBeenSet = true;
}

bool ModifyExecStrategyRequest::TriggerTypesHasBeenSet() const
{
    return m_triggerTypesHasBeenSet;
}



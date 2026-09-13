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

#include <tencentcloud/databuddy/v20260715/model/WorkflowTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowTask::WorkflowTask() :
    m_paramListHasBeenSet(false),
    m_dependOnListHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_alarmHasBeenSet(false),
    m_monitorMetricHasBeenSet(false),
    m_taskRetryStrategyHasBeenSet(false),
    m_dependOnRunConditionHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_advancedDependencyConfigHasBeenSet(false),
    m_innerTaskHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createUserUinHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.ParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramList.push_back(item);
        }
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("DependOnList") && !value["DependOnList"].IsNull())
    {
        if (!value["DependOnList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.DependOnList` is not array type"));

        const rapidjson::Value &tmpValue = value["DependOnList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependOnBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependOnList.push_back(item);
        }
        m_dependOnListHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TaskType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskType.Deserialize(value["TaskType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Alarm") && !value["Alarm"].IsNull())
    {
        if (!value["Alarm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.Alarm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alarm.Deserialize(value["Alarm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alarmHasBeenSet = true;
    }

    if (value.HasMember("MonitorMetric") && !value["MonitorMetric"].IsNull())
    {
        if (!value["MonitorMetric"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.MonitorMetric` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorMetric.Deserialize(value["MonitorMetric"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorMetricHasBeenSet = true;
    }

    if (value.HasMember("TaskRetryStrategy") && !value["TaskRetryStrategy"].IsNull())
    {
        if (!value["TaskRetryStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TaskRetryStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskRetryStrategy.Deserialize(value["TaskRetryStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskRetryStrategyHasBeenSet = true;
    }

    if (value.HasMember("DependOnRunCondition") && !value["DependOnRunCondition"].IsNull())
    {
        if (!value["DependOnRunCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.DependOnRunCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependOnRunCondition = string(value["DependOnRunCondition"].GetString());
        m_dependOnRunConditionHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("AdvancedDependencyConfig") && !value["AdvancedDependencyConfig"].IsNull())
    {
        if (!value["AdvancedDependencyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.AdvancedDependencyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedDependencyConfig.Deserialize(value["AdvancedDependencyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedDependencyConfigHasBeenSet = true;
    }

    if (value.HasMember("InnerTask") && !value["InnerTask"].IsNull())
    {
        if (!value["InnerTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.InnerTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerTask.Deserialize(value["InnerTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerTaskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTask.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dependOnListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependOnList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependOnList.begin(); itr != m_dependOnList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alarm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monitorMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorMetric.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskRetryStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRetryStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskRetryStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dependOnRunConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependOnRunCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependOnRunCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_leftCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftCoordinate, allocator);
    }

    if (m_topCoordinateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCoordinate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topCoordinate, allocator);
    }

    if (m_advancedDependencyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedDependencyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedDependencyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_innerTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_innerTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

}


vector<ParamInfo> WorkflowTask::GetParamList() const
{
    return m_paramList;
}

void WorkflowTask::SetParamList(const vector<ParamInfo>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool WorkflowTask::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

vector<DependOnBrief> WorkflowTask::GetDependOnList() const
{
    return m_dependOnList;
}

void WorkflowTask::SetDependOnList(const vector<DependOnBrief>& _dependOnList)
{
    m_dependOnList = _dependOnList;
    m_dependOnListHasBeenSet = true;
}

bool WorkflowTask::DependOnListHasBeenSet() const
{
    return m_dependOnListHasBeenSet;
}

string WorkflowTask::GetTaskId() const
{
    return m_taskId;
}

void WorkflowTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WorkflowTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WorkflowTask::GetTaskName() const
{
    return m_taskName;
}

void WorkflowTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool WorkflowTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

TaskType WorkflowTask::GetTaskType() const
{
    return m_taskType;
}

void WorkflowTask::SetTaskType(const TaskType& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool WorkflowTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string WorkflowTask::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void WorkflowTask::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool WorkflowTask::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string WorkflowTask::GetDescription() const
{
    return m_description;
}

void WorkflowTask::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkflowTask::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

AlarmBrief WorkflowTask::GetAlarm() const
{
    return m_alarm;
}

void WorkflowTask::SetAlarm(const AlarmBrief& _alarm)
{
    m_alarm = _alarm;
    m_alarmHasBeenSet = true;
}

bool WorkflowTask::AlarmHasBeenSet() const
{
    return m_alarmHasBeenSet;
}

MonitorMetricBrief WorkflowTask::GetMonitorMetric() const
{
    return m_monitorMetric;
}

void WorkflowTask::SetMonitorMetric(const MonitorMetricBrief& _monitorMetric)
{
    m_monitorMetric = _monitorMetric;
    m_monitorMetricHasBeenSet = true;
}

bool WorkflowTask::MonitorMetricHasBeenSet() const
{
    return m_monitorMetricHasBeenSet;
}

TaskRetryStrategy WorkflowTask::GetTaskRetryStrategy() const
{
    return m_taskRetryStrategy;
}

void WorkflowTask::SetTaskRetryStrategy(const TaskRetryStrategy& _taskRetryStrategy)
{
    m_taskRetryStrategy = _taskRetryStrategy;
    m_taskRetryStrategyHasBeenSet = true;
}

bool WorkflowTask::TaskRetryStrategyHasBeenSet() const
{
    return m_taskRetryStrategyHasBeenSet;
}

string WorkflowTask::GetDependOnRunCondition() const
{
    return m_dependOnRunCondition;
}

void WorkflowTask::SetDependOnRunCondition(const string& _dependOnRunCondition)
{
    m_dependOnRunCondition = _dependOnRunCondition;
    m_dependOnRunConditionHasBeenSet = true;
}

bool WorkflowTask::DependOnRunConditionHasBeenSet() const
{
    return m_dependOnRunConditionHasBeenSet;
}

double WorkflowTask::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void WorkflowTask::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool WorkflowTask::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double WorkflowTask::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void WorkflowTask::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool WorkflowTask::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

AdvancedDependencyConfig WorkflowTask::GetAdvancedDependencyConfig() const
{
    return m_advancedDependencyConfig;
}

void WorkflowTask::SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig)
{
    m_advancedDependencyConfig = _advancedDependencyConfig;
    m_advancedDependencyConfigHasBeenSet = true;
}

bool WorkflowTask::AdvancedDependencyConfigHasBeenSet() const
{
    return m_advancedDependencyConfigHasBeenSet;
}

WorkflowTask WorkflowTask::GetInnerTask() const
{
    return m_innerTask;
}

void WorkflowTask::SetInnerTask(const WorkflowTask& _innerTask)
{
    m_innerTask = _innerTask;
    m_innerTaskHasBeenSet = true;
}

bool WorkflowTask::InnerTaskHasBeenSet() const
{
    return m_innerTaskHasBeenSet;
}

string WorkflowTask::GetCreateTime() const
{
    return m_createTime;
}

void WorkflowTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WorkflowTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WorkflowTask::GetUpdateTime() const
{
    return m_updateTime;
}

void WorkflowTask::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WorkflowTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string WorkflowTask::GetCreateUserUin() const
{
    return m_createUserUin;
}

void WorkflowTask::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool WorkflowTask::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}


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

#include <tencentcloud/databuddy/v20260715/model/WorkflowTaskNodeBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

WorkflowTaskNodeBrief::WorkflowTaskNodeBrief() :
    m_workflowIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeNameHasBeenSet(false),
    m_dependOnListHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_leftCoordinateHasBeenSet(false),
    m_topCoordinateHasBeenSet(false),
    m_taskRetryStrategyHasBeenSet(false),
    m_dependOnRunConditionHasBeenSet(false),
    m_advancedDependencyConfigHasBeenSet(false),
    m_innerTaskHasBeenSet(false)
{
}

CoreInternalOutcome WorkflowTaskNodeBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeName") && !value["TaskTypeName"].IsNull())
    {
        if (!value["TaskTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.TaskTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTypeName = string(value["TaskTypeName"].GetString());
        m_taskTypeNameHasBeenSet = true;
    }

    if (value.HasMember("DependOnList") && !value["DependOnList"].IsNull())
    {
        if (!value["DependOnList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.DependOnList` is not array type"));

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

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("LeftCoordinate") && !value["LeftCoordinate"].IsNull())
    {
        if (!value["LeftCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.LeftCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_leftCoordinate = value["LeftCoordinate"].GetDouble();
        m_leftCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TopCoordinate") && !value["TopCoordinate"].IsNull())
    {
        if (!value["TopCoordinate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.TopCoordinate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_topCoordinate = value["TopCoordinate"].GetDouble();
        m_topCoordinateHasBeenSet = true;
    }

    if (value.HasMember("TaskRetryStrategy") && !value["TaskRetryStrategy"].IsNull())
    {
        if (!value["TaskRetryStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.TaskRetryStrategy` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.DependOnRunCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependOnRunCondition = string(value["DependOnRunCondition"].GetString());
        m_dependOnRunConditionHasBeenSet = true;
    }

    if (value.HasMember("AdvancedDependencyConfig") && !value["AdvancedDependencyConfig"].IsNull())
    {
        if (!value["AdvancedDependencyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.AdvancedDependencyConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `WorkflowTaskNodeBrief.InnerTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_innerTask.Deserialize(value["InnerTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_innerTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkflowTaskNodeBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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

    if (m_taskTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
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

}


string WorkflowTaskNodeBrief::GetWorkflowId() const
{
    return m_workflowId;
}

void WorkflowTaskNodeBrief::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string WorkflowTaskNodeBrief::GetTaskId() const
{
    return m_taskId;
}

void WorkflowTaskNodeBrief::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string WorkflowTaskNodeBrief::GetTaskName() const
{
    return m_taskName;
}

void WorkflowTaskNodeBrief::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string WorkflowTaskNodeBrief::GetTaskTypeName() const
{
    return m_taskTypeName;
}

void WorkflowTaskNodeBrief::SetTaskTypeName(const string& _taskTypeName)
{
    m_taskTypeName = _taskTypeName;
    m_taskTypeNameHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::TaskTypeNameHasBeenSet() const
{
    return m_taskTypeNameHasBeenSet;
}

vector<DependOnBrief> WorkflowTaskNodeBrief::GetDependOnList() const
{
    return m_dependOnList;
}

void WorkflowTaskNodeBrief::SetDependOnList(const vector<DependOnBrief>& _dependOnList)
{
    m_dependOnList = _dependOnList;
    m_dependOnListHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::DependOnListHasBeenSet() const
{
    return m_dependOnListHasBeenSet;
}

string WorkflowTaskNodeBrief::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void WorkflowTaskNodeBrief::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string WorkflowTaskNodeBrief::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void WorkflowTaskNodeBrief::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

double WorkflowTaskNodeBrief::GetLeftCoordinate() const
{
    return m_leftCoordinate;
}

void WorkflowTaskNodeBrief::SetLeftCoordinate(const double& _leftCoordinate)
{
    m_leftCoordinate = _leftCoordinate;
    m_leftCoordinateHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::LeftCoordinateHasBeenSet() const
{
    return m_leftCoordinateHasBeenSet;
}

double WorkflowTaskNodeBrief::GetTopCoordinate() const
{
    return m_topCoordinate;
}

void WorkflowTaskNodeBrief::SetTopCoordinate(const double& _topCoordinate)
{
    m_topCoordinate = _topCoordinate;
    m_topCoordinateHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::TopCoordinateHasBeenSet() const
{
    return m_topCoordinateHasBeenSet;
}

TaskRetryStrategy WorkflowTaskNodeBrief::GetTaskRetryStrategy() const
{
    return m_taskRetryStrategy;
}

void WorkflowTaskNodeBrief::SetTaskRetryStrategy(const TaskRetryStrategy& _taskRetryStrategy)
{
    m_taskRetryStrategy = _taskRetryStrategy;
    m_taskRetryStrategyHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::TaskRetryStrategyHasBeenSet() const
{
    return m_taskRetryStrategyHasBeenSet;
}

string WorkflowTaskNodeBrief::GetDependOnRunCondition() const
{
    return m_dependOnRunCondition;
}

void WorkflowTaskNodeBrief::SetDependOnRunCondition(const string& _dependOnRunCondition)
{
    m_dependOnRunCondition = _dependOnRunCondition;
    m_dependOnRunConditionHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::DependOnRunConditionHasBeenSet() const
{
    return m_dependOnRunConditionHasBeenSet;
}

AdvancedDependencyConfig WorkflowTaskNodeBrief::GetAdvancedDependencyConfig() const
{
    return m_advancedDependencyConfig;
}

void WorkflowTaskNodeBrief::SetAdvancedDependencyConfig(const AdvancedDependencyConfig& _advancedDependencyConfig)
{
    m_advancedDependencyConfig = _advancedDependencyConfig;
    m_advancedDependencyConfigHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::AdvancedDependencyConfigHasBeenSet() const
{
    return m_advancedDependencyConfigHasBeenSet;
}

WorkflowTaskNodeBrief WorkflowTaskNodeBrief::GetInnerTask() const
{
    return m_innerTask;
}

void WorkflowTaskNodeBrief::SetInnerTask(const WorkflowTaskNodeBrief& _innerTask)
{
    m_innerTask = _innerTask;
    m_innerTaskHasBeenSet = true;
}

bool WorkflowTaskNodeBrief::InnerTaskHasBeenSet() const
{
    return m_innerTaskHasBeenSet;
}


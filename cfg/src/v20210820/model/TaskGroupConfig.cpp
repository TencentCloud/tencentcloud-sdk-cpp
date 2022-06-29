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

#include <tencentcloud/cfg/v20210820/model/TaskGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupConfig::TaskGroupConfig() :
    m_taskGroupInstancesHasBeenSet(false),
    m_taskGroupTitleHasBeenSet(false),
    m_taskGroupDescriptionHasBeenSet(false),
    m_taskGroupModeHasBeenSet(false),
    m_taskGroupActionsConfigHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupInstances") && !value["TaskGroupInstances"].IsNull())
    {
        if (!value["TaskGroupInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroupConfig.TaskGroupInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskGroupInstances.push_back((*itr).GetString());
        }
        m_taskGroupInstancesHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupTitle") && !value["TaskGroupTitle"].IsNull())
    {
        if (!value["TaskGroupTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupConfig.TaskGroupTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupTitle = string(value["TaskGroupTitle"].GetString());
        m_taskGroupTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupDescription") && !value["TaskGroupDescription"].IsNull())
    {
        if (!value["TaskGroupDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupConfig.TaskGroupDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupDescription = string(value["TaskGroupDescription"].GetString());
        m_taskGroupDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupMode") && !value["TaskGroupMode"].IsNull())
    {
        if (!value["TaskGroupMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupConfig.TaskGroupMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupMode = value["TaskGroupMode"].GetUint64();
        m_taskGroupModeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionsConfig") && !value["TaskGroupActionsConfig"].IsNull())
    {
        if (!value["TaskGroupActionsConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroupConfig.TaskGroupActionsConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupActionsConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroupActionConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroupActionsConfig.push_back(item);
        }
        m_taskGroupActionsConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskGroupInstances.begin(); itr != m_taskGroupInstances.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskGroupTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupMode, allocator);
    }

    if (m_taskGroupActionsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroupActionsConfig.begin(); itr != m_taskGroupActionsConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> TaskGroupConfig::GetTaskGroupInstances() const
{
    return m_taskGroupInstances;
}

void TaskGroupConfig::SetTaskGroupInstances(const vector<string>& _taskGroupInstances)
{
    m_taskGroupInstances = _taskGroupInstances;
    m_taskGroupInstancesHasBeenSet = true;
}

bool TaskGroupConfig::TaskGroupInstancesHasBeenSet() const
{
    return m_taskGroupInstancesHasBeenSet;
}

string TaskGroupConfig::GetTaskGroupTitle() const
{
    return m_taskGroupTitle;
}

void TaskGroupConfig::SetTaskGroupTitle(const string& _taskGroupTitle)
{
    m_taskGroupTitle = _taskGroupTitle;
    m_taskGroupTitleHasBeenSet = true;
}

bool TaskGroupConfig::TaskGroupTitleHasBeenSet() const
{
    return m_taskGroupTitleHasBeenSet;
}

string TaskGroupConfig::GetTaskGroupDescription() const
{
    return m_taskGroupDescription;
}

void TaskGroupConfig::SetTaskGroupDescription(const string& _taskGroupDescription)
{
    m_taskGroupDescription = _taskGroupDescription;
    m_taskGroupDescriptionHasBeenSet = true;
}

bool TaskGroupConfig::TaskGroupDescriptionHasBeenSet() const
{
    return m_taskGroupDescriptionHasBeenSet;
}

uint64_t TaskGroupConfig::GetTaskGroupMode() const
{
    return m_taskGroupMode;
}

void TaskGroupConfig::SetTaskGroupMode(const uint64_t& _taskGroupMode)
{
    m_taskGroupMode = _taskGroupMode;
    m_taskGroupModeHasBeenSet = true;
}

bool TaskGroupConfig::TaskGroupModeHasBeenSet() const
{
    return m_taskGroupModeHasBeenSet;
}

vector<TaskGroupActionConfig> TaskGroupConfig::GetTaskGroupActionsConfig() const
{
    return m_taskGroupActionsConfig;
}

void TaskGroupConfig::SetTaskGroupActionsConfig(const vector<TaskGroupActionConfig>& _taskGroupActionsConfig)
{
    m_taskGroupActionsConfig = _taskGroupActionsConfig;
    m_taskGroupActionsConfigHasBeenSet = true;
}

bool TaskGroupConfig::TaskGroupActionsConfigHasBeenSet() const
{
    return m_taskGroupActionsConfigHasBeenSet;
}


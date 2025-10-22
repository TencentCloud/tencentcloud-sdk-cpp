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

#include <tencentcloud/wedata/v20250806/model/DependencyStrategyTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DependencyStrategyTask::DependencyStrategyTask() :
    m_pollingNullStrategyHasBeenSet(false),
    m_taskDependencyExecutingStrategiesHasBeenSet(false),
    m_taskDependencyExecutingTimeoutValueHasBeenSet(false)
{
}

CoreInternalOutcome DependencyStrategyTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PollingNullStrategy") && !value["PollingNullStrategy"].IsNull())
    {
        if (!value["PollingNullStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyStrategyTask.PollingNullStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pollingNullStrategy = string(value["PollingNullStrategy"].GetString());
        m_pollingNullStrategyHasBeenSet = true;
    }

    if (value.HasMember("TaskDependencyExecutingStrategies") && !value["TaskDependencyExecutingStrategies"].IsNull())
    {
        if (!value["TaskDependencyExecutingStrategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DependencyStrategyTask.TaskDependencyExecutingStrategies` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskDependencyExecutingStrategies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskDependencyExecutingStrategies.push_back((*itr).GetString());
        }
        m_taskDependencyExecutingStrategiesHasBeenSet = true;
    }

    if (value.HasMember("TaskDependencyExecutingTimeoutValue") && !value["TaskDependencyExecutingTimeoutValue"].IsNull())
    {
        if (!value["TaskDependencyExecutingTimeoutValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyStrategyTask.TaskDependencyExecutingTimeoutValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskDependencyExecutingTimeoutValue = value["TaskDependencyExecutingTimeoutValue"].GetInt64();
        m_taskDependencyExecutingTimeoutValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyStrategyTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pollingNullStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingNullStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pollingNullStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDependencyExecutingStrategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDependencyExecutingStrategies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskDependencyExecutingStrategies.begin(); itr != m_taskDependencyExecutingStrategies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskDependencyExecutingTimeoutValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDependencyExecutingTimeoutValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskDependencyExecutingTimeoutValue, allocator);
    }

}


string DependencyStrategyTask::GetPollingNullStrategy() const
{
    return m_pollingNullStrategy;
}

void DependencyStrategyTask::SetPollingNullStrategy(const string& _pollingNullStrategy)
{
    m_pollingNullStrategy = _pollingNullStrategy;
    m_pollingNullStrategyHasBeenSet = true;
}

bool DependencyStrategyTask::PollingNullStrategyHasBeenSet() const
{
    return m_pollingNullStrategyHasBeenSet;
}

vector<string> DependencyStrategyTask::GetTaskDependencyExecutingStrategies() const
{
    return m_taskDependencyExecutingStrategies;
}

void DependencyStrategyTask::SetTaskDependencyExecutingStrategies(const vector<string>& _taskDependencyExecutingStrategies)
{
    m_taskDependencyExecutingStrategies = _taskDependencyExecutingStrategies;
    m_taskDependencyExecutingStrategiesHasBeenSet = true;
}

bool DependencyStrategyTask::TaskDependencyExecutingStrategiesHasBeenSet() const
{
    return m_taskDependencyExecutingStrategiesHasBeenSet;
}

int64_t DependencyStrategyTask::GetTaskDependencyExecutingTimeoutValue() const
{
    return m_taskDependencyExecutingTimeoutValue;
}

void DependencyStrategyTask::SetTaskDependencyExecutingTimeoutValue(const int64_t& _taskDependencyExecutingTimeoutValue)
{
    m_taskDependencyExecutingTimeoutValue = _taskDependencyExecutingTimeoutValue;
    m_taskDependencyExecutingTimeoutValueHasBeenSet = true;
}

bool DependencyStrategyTask::TaskDependencyExecutingTimeoutValueHasBeenSet() const
{
    return m_taskDependencyExecutingTimeoutValueHasBeenSet;
}


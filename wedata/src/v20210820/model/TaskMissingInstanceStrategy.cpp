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

#include <tencentcloud/wedata/v20210820/model/TaskMissingInstanceStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskMissingInstanceStrategy::TaskMissingInstanceStrategy() :
    m_taskIdHasBeenSet(false),
    m_missingInstanceStrategyHasBeenSet(false)
{
}

CoreInternalOutcome TaskMissingInstanceStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMissingInstanceStrategy.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("MissingInstanceStrategy") && !value["MissingInstanceStrategy"].IsNull())
    {
        if (!value["MissingInstanceStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskMissingInstanceStrategy.MissingInstanceStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_missingInstanceStrategy = string(value["MissingInstanceStrategy"].GetString());
        m_missingInstanceStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskMissingInstanceStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_missingInstanceStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissingInstanceStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_missingInstanceStrategy.c_str(), allocator).Move(), allocator);
    }

}


string TaskMissingInstanceStrategy::GetTaskId() const
{
    return m_taskId;
}

void TaskMissingInstanceStrategy::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskMissingInstanceStrategy::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskMissingInstanceStrategy::GetMissingInstanceStrategy() const
{
    return m_missingInstanceStrategy;
}

void TaskMissingInstanceStrategy::SetMissingInstanceStrategy(const string& _missingInstanceStrategy)
{
    m_missingInstanceStrategy = _missingInstanceStrategy;
    m_missingInstanceStrategyHasBeenSet = true;
}

bool TaskMissingInstanceStrategy::MissingInstanceStrategyHasBeenSet() const
{
    return m_missingInstanceStrategyHasBeenSet;
}


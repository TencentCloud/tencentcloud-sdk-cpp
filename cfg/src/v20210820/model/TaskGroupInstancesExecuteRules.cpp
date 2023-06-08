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

#include <tencentcloud/cfg/v20210820/model/TaskGroupInstancesExecuteRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupInstancesExecuteRules::TaskGroupInstancesExecuteRules() :
    m_taskGroupInstancesExecuteModeHasBeenSet(false),
    m_taskGroupInstancesExecutePercentHasBeenSet(false),
    m_taskGroupInstancesExecuteNumHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupInstancesExecuteRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupInstancesExecuteMode") && !value["TaskGroupInstancesExecuteMode"].IsNull())
    {
        if (!value["TaskGroupInstancesExecuteMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstancesExecuteRules.TaskGroupInstancesExecuteMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstancesExecuteMode = value["TaskGroupInstancesExecuteMode"].GetInt64();
        m_taskGroupInstancesExecuteModeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstancesExecutePercent") && !value["TaskGroupInstancesExecutePercent"].IsNull())
    {
        if (!value["TaskGroupInstancesExecutePercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstancesExecuteRules.TaskGroupInstancesExecutePercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstancesExecutePercent = value["TaskGroupInstancesExecutePercent"].GetInt64();
        m_taskGroupInstancesExecutePercentHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstancesExecuteNum") && !value["TaskGroupInstancesExecuteNum"].IsNull())
    {
        if (!value["TaskGroupInstancesExecuteNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupInstancesExecuteRules.TaskGroupInstancesExecuteNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupInstancesExecuteNum = value["TaskGroupInstancesExecuteNum"].GetInt64();
        m_taskGroupInstancesExecuteNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupInstancesExecuteRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupInstancesExecuteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstancesExecuteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstancesExecuteMode, allocator);
    }

    if (m_taskGroupInstancesExecutePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstancesExecutePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstancesExecutePercent, allocator);
    }

    if (m_taskGroupInstancesExecuteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstancesExecuteNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupInstancesExecuteNum, allocator);
    }

}


int64_t TaskGroupInstancesExecuteRules::GetTaskGroupInstancesExecuteMode() const
{
    return m_taskGroupInstancesExecuteMode;
}

void TaskGroupInstancesExecuteRules::SetTaskGroupInstancesExecuteMode(const int64_t& _taskGroupInstancesExecuteMode)
{
    m_taskGroupInstancesExecuteMode = _taskGroupInstancesExecuteMode;
    m_taskGroupInstancesExecuteModeHasBeenSet = true;
}

bool TaskGroupInstancesExecuteRules::TaskGroupInstancesExecuteModeHasBeenSet() const
{
    return m_taskGroupInstancesExecuteModeHasBeenSet;
}

int64_t TaskGroupInstancesExecuteRules::GetTaskGroupInstancesExecutePercent() const
{
    return m_taskGroupInstancesExecutePercent;
}

void TaskGroupInstancesExecuteRules::SetTaskGroupInstancesExecutePercent(const int64_t& _taskGroupInstancesExecutePercent)
{
    m_taskGroupInstancesExecutePercent = _taskGroupInstancesExecutePercent;
    m_taskGroupInstancesExecutePercentHasBeenSet = true;
}

bool TaskGroupInstancesExecuteRules::TaskGroupInstancesExecutePercentHasBeenSet() const
{
    return m_taskGroupInstancesExecutePercentHasBeenSet;
}

int64_t TaskGroupInstancesExecuteRules::GetTaskGroupInstancesExecuteNum() const
{
    return m_taskGroupInstancesExecuteNum;
}

void TaskGroupInstancesExecuteRules::SetTaskGroupInstancesExecuteNum(const int64_t& _taskGroupInstancesExecuteNum)
{
    m_taskGroupInstancesExecuteNum = _taskGroupInstancesExecuteNum;
    m_taskGroupInstancesExecuteNumHasBeenSet = true;
}

bool TaskGroupInstancesExecuteRules::TaskGroupInstancesExecuteNumHasBeenSet() const
{
    return m_taskGroupInstancesExecuteNumHasBeenSet;
}


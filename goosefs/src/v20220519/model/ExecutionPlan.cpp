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

#include <tencentcloud/goosefs/v20220519/model/ExecutionPlan.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ExecutionPlan::ExecutionPlan() :
    m_executeModeHasBeenSet(false),
    m_executeAtHasBeenSet(false),
    m_executePeriodHasBeenSet(false),
    m_waitTimeHasBeenSet(false)
{
}

CoreInternalOutcome ExecutionPlan::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecuteMode") && !value["ExecuteMode"].IsNull())
    {
        if (!value["ExecuteMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlan.ExecuteMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeMode = string(value["ExecuteMode"].GetString());
        m_executeModeHasBeenSet = true;
    }

    if (value.HasMember("ExecuteAt") && !value["ExecuteAt"].IsNull())
    {
        if (!value["ExecuteAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlan.ExecuteAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeAt = string(value["ExecuteAt"].GetString());
        m_executeAtHasBeenSet = true;
    }

    if (value.HasMember("ExecutePeriod") && !value["ExecutePeriod"].IsNull())
    {
        if (!value["ExecutePeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlan.ExecutePeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executePeriod.Deserialize(value["ExecutePeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executePeriodHasBeenSet = true;
    }

    if (value.HasMember("WaitTime") && !value["WaitTime"].IsNull())
    {
        if (!value["WaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlan.WaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_waitTime = value["WaitTime"].GetInt64();
        m_waitTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutionPlan::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_executeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_executePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executePeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitTime, allocator);
    }

}


string ExecutionPlan::GetExecuteMode() const
{
    return m_executeMode;
}

void ExecutionPlan::SetExecuteMode(const string& _executeMode)
{
    m_executeMode = _executeMode;
    m_executeModeHasBeenSet = true;
}

bool ExecutionPlan::ExecuteModeHasBeenSet() const
{
    return m_executeModeHasBeenSet;
}

string ExecutionPlan::GetExecuteAt() const
{
    return m_executeAt;
}

void ExecutionPlan::SetExecuteAt(const string& _executeAt)
{
    m_executeAt = _executeAt;
    m_executeAtHasBeenSet = true;
}

bool ExecutionPlan::ExecuteAtHasBeenSet() const
{
    return m_executeAtHasBeenSet;
}

ExecutePeriodAttribute ExecutionPlan::GetExecutePeriod() const
{
    return m_executePeriod;
}

void ExecutionPlan::SetExecutePeriod(const ExecutePeriodAttribute& _executePeriod)
{
    m_executePeriod = _executePeriod;
    m_executePeriodHasBeenSet = true;
}

bool ExecutionPlan::ExecutePeriodHasBeenSet() const
{
    return m_executePeriodHasBeenSet;
}

int64_t ExecutionPlan::GetWaitTime() const
{
    return m_waitTime;
}

void ExecutionPlan::SetWaitTime(const int64_t& _waitTime)
{
    m_waitTime = _waitTime;
    m_waitTimeHasBeenSet = true;
}

bool ExecutionPlan::WaitTimeHasBeenSet() const
{
    return m_waitTimeHasBeenSet;
}


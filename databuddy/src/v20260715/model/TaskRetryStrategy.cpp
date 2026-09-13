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

#include <tencentcloud/databuddy/v20260715/model/TaskRetryStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TaskRetryStrategy::TaskRetryStrategy() :
    m_maxRetryTimesHasBeenSet(false),
    m_retryBetweenWaitTimeHasBeenSet(false),
    m_retryBetweenWaitTimeUnitHasBeenSet(false),
    m_taskRunFailureRetrySwitchHasBeenSet(false),
    m_taskRunTimeoutRetrySwitchHasBeenSet(false)
{
}

CoreInternalOutcome TaskRetryStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxRetryTimes") && !value["MaxRetryTimes"].IsNull())
    {
        if (!value["MaxRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRetryStrategy.MaxRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryTimes = value["MaxRetryTimes"].GetInt64();
        m_maxRetryTimesHasBeenSet = true;
    }

    if (value.HasMember("RetryBetweenWaitTime") && !value["RetryBetweenWaitTime"].IsNull())
    {
        if (!value["RetryBetweenWaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRetryStrategy.RetryBetweenWaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryBetweenWaitTime = value["RetryBetweenWaitTime"].GetInt64();
        m_retryBetweenWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("RetryBetweenWaitTimeUnit") && !value["RetryBetweenWaitTimeUnit"].IsNull())
    {
        if (!value["RetryBetweenWaitTimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRetryStrategy.RetryBetweenWaitTimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retryBetweenWaitTimeUnit = string(value["RetryBetweenWaitTimeUnit"].GetString());
        m_retryBetweenWaitTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("TaskRunFailureRetrySwitch") && !value["TaskRunFailureRetrySwitch"].IsNull())
    {
        if (!value["TaskRunFailureRetrySwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRetryStrategy.TaskRunFailureRetrySwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunFailureRetrySwitch = value["TaskRunFailureRetrySwitch"].GetBool();
        m_taskRunFailureRetrySwitchHasBeenSet = true;
    }

    if (value.HasMember("TaskRunTimeoutRetrySwitch") && !value["TaskRunTimeoutRetrySwitch"].IsNull())
    {
        if (!value["TaskRunTimeoutRetrySwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRetryStrategy.TaskRunTimeoutRetrySwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_taskRunTimeoutRetrySwitch = value["TaskRunTimeoutRetrySwitch"].GetBool();
        m_taskRunTimeoutRetrySwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskRetryStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_retryBetweenWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryBetweenWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryBetweenWaitTime, allocator);
    }

    if (m_retryBetweenWaitTimeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryBetweenWaitTimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retryBetweenWaitTimeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRunFailureRetrySwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunFailureRetrySwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRunFailureRetrySwitch, allocator);
    }

    if (m_taskRunTimeoutRetrySwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRunTimeoutRetrySwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRunTimeoutRetrySwitch, allocator);
    }

}


int64_t TaskRetryStrategy::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void TaskRetryStrategy::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool TaskRetryStrategy::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

int64_t TaskRetryStrategy::GetRetryBetweenWaitTime() const
{
    return m_retryBetweenWaitTime;
}

void TaskRetryStrategy::SetRetryBetweenWaitTime(const int64_t& _retryBetweenWaitTime)
{
    m_retryBetweenWaitTime = _retryBetweenWaitTime;
    m_retryBetweenWaitTimeHasBeenSet = true;
}

bool TaskRetryStrategy::RetryBetweenWaitTimeHasBeenSet() const
{
    return m_retryBetweenWaitTimeHasBeenSet;
}

string TaskRetryStrategy::GetRetryBetweenWaitTimeUnit() const
{
    return m_retryBetweenWaitTimeUnit;
}

void TaskRetryStrategy::SetRetryBetweenWaitTimeUnit(const string& _retryBetweenWaitTimeUnit)
{
    m_retryBetweenWaitTimeUnit = _retryBetweenWaitTimeUnit;
    m_retryBetweenWaitTimeUnitHasBeenSet = true;
}

bool TaskRetryStrategy::RetryBetweenWaitTimeUnitHasBeenSet() const
{
    return m_retryBetweenWaitTimeUnitHasBeenSet;
}

bool TaskRetryStrategy::GetTaskRunFailureRetrySwitch() const
{
    return m_taskRunFailureRetrySwitch;
}

void TaskRetryStrategy::SetTaskRunFailureRetrySwitch(const bool& _taskRunFailureRetrySwitch)
{
    m_taskRunFailureRetrySwitch = _taskRunFailureRetrySwitch;
    m_taskRunFailureRetrySwitchHasBeenSet = true;
}

bool TaskRetryStrategy::TaskRunFailureRetrySwitchHasBeenSet() const
{
    return m_taskRunFailureRetrySwitchHasBeenSet;
}

bool TaskRetryStrategy::GetTaskRunTimeoutRetrySwitch() const
{
    return m_taskRunTimeoutRetrySwitch;
}

void TaskRetryStrategy::SetTaskRunTimeoutRetrySwitch(const bool& _taskRunTimeoutRetrySwitch)
{
    m_taskRunTimeoutRetrySwitch = _taskRunTimeoutRetrySwitch;
    m_taskRunTimeoutRetrySwitchHasBeenSet = true;
}

bool TaskRetryStrategy::TaskRunTimeoutRetrySwitchHasBeenSet() const
{
    return m_taskRunTimeoutRetrySwitchHasBeenSet;
}


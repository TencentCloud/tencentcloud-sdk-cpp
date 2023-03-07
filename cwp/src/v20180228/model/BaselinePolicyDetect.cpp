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

#include <tencentcloud/cwp/v20180228/model/BaselinePolicyDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselinePolicyDetect::BaselinePolicyDetect() :
    m_policyIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_timeoutCountHasBeenSet(false),
    m_policyDetectStatusHasBeenSet(false)
{
}

CoreInternalOutcome BaselinePolicyDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("TimeoutCount") && !value["TimeoutCount"].IsNull())
    {
        if (!value["TimeoutCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.TimeoutCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutCount = value["TimeoutCount"].GetInt64();
        m_timeoutCountHasBeenSet = true;
    }

    if (value.HasMember("PolicyDetectStatus") && !value["PolicyDetectStatus"].IsNull())
    {
        if (!value["PolicyDetectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicyDetect.PolicyDetectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyDetectStatus = value["PolicyDetectStatus"].GetInt64();
        m_policyDetectStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselinePolicyDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

    if (m_timeoutCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutCount, allocator);
    }

    if (m_policyDetectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyDetectStatus, allocator);
    }

}


int64_t BaselinePolicyDetect::GetPolicyId() const
{
    return m_policyId;
}

void BaselinePolicyDetect::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool BaselinePolicyDetect::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t BaselinePolicyDetect::GetTaskId() const
{
    return m_taskId;
}

void BaselinePolicyDetect::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BaselinePolicyDetect::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t BaselinePolicyDetect::GetHostCount() const
{
    return m_hostCount;
}

void BaselinePolicyDetect::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselinePolicyDetect::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string BaselinePolicyDetect::GetStartTime() const
{
    return m_startTime;
}

void BaselinePolicyDetect::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BaselinePolicyDetect::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BaselinePolicyDetect::GetFinishTime() const
{
    return m_finishTime;
}

void BaselinePolicyDetect::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool BaselinePolicyDetect::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string BaselinePolicyDetect::GetPolicyName() const
{
    return m_policyName;
}

void BaselinePolicyDetect::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool BaselinePolicyDetect::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t BaselinePolicyDetect::GetSuccessCount() const
{
    return m_successCount;
}

void BaselinePolicyDetect::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool BaselinePolicyDetect::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t BaselinePolicyDetect::GetFailedCount() const
{
    return m_failedCount;
}

void BaselinePolicyDetect::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool BaselinePolicyDetect::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

int64_t BaselinePolicyDetect::GetTimeoutCount() const
{
    return m_timeoutCount;
}

void BaselinePolicyDetect::SetTimeoutCount(const int64_t& _timeoutCount)
{
    m_timeoutCount = _timeoutCount;
    m_timeoutCountHasBeenSet = true;
}

bool BaselinePolicyDetect::TimeoutCountHasBeenSet() const
{
    return m_timeoutCountHasBeenSet;
}

int64_t BaselinePolicyDetect::GetPolicyDetectStatus() const
{
    return m_policyDetectStatus;
}

void BaselinePolicyDetect::SetPolicyDetectStatus(const int64_t& _policyDetectStatus)
{
    m_policyDetectStatus = _policyDetectStatus;
    m_policyDetectStatusHasBeenSet = true;
}

bool BaselinePolicyDetect::PolicyDetectStatusHasBeenSet() const
{
    return m_policyDetectStatusHasBeenSet;
}


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

#include <tencentcloud/tcr/v20190924/model/ReplicationExecution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ReplicationExecution::ReplicationExecution() :
    m_executionIDHasBeenSet(false),
    m_policyIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_succeedHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationExecution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionID") && !value["ExecutionID"].IsNull())
    {
        if (!value["ExecutionID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.ExecutionID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionID = value["ExecutionID"].GetInt64();
        m_executionIDHasBeenSet = true;
    }

    if (value.HasMember("PolicyID") && !value["PolicyID"].IsNull())
    {
        if (!value["PolicyID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.PolicyID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyID = value["PolicyID"].GetInt64();
        m_policyIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Succeed") && !value["Succeed"].IsNull())
    {
        if (!value["Succeed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.Succeed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_succeed = value["Succeed"].GetInt64();
        m_succeedHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationExecution.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationExecution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionID, allocator);
    }

    if (m_policyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyID, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_succeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Succeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succeed, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ReplicationExecution::GetExecutionID() const
{
    return m_executionID;
}

void ReplicationExecution::SetExecutionID(const int64_t& _executionID)
{
    m_executionID = _executionID;
    m_executionIDHasBeenSet = true;
}

bool ReplicationExecution::ExecutionIDHasBeenSet() const
{
    return m_executionIDHasBeenSet;
}

int64_t ReplicationExecution::GetPolicyID() const
{
    return m_policyID;
}

void ReplicationExecution::SetPolicyID(const int64_t& _policyID)
{
    m_policyID = _policyID;
    m_policyIDHasBeenSet = true;
}

bool ReplicationExecution::PolicyIDHasBeenSet() const
{
    return m_policyIDHasBeenSet;
}

string ReplicationExecution::GetStatus() const
{
    return m_status;
}

void ReplicationExecution::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReplicationExecution::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ReplicationExecution::GetTotal() const
{
    return m_total;
}

void ReplicationExecution::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ReplicationExecution::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t ReplicationExecution::GetSucceed() const
{
    return m_succeed;
}

void ReplicationExecution::SetSucceed(const int64_t& _succeed)
{
    m_succeed = _succeed;
    m_succeedHasBeenSet = true;
}

bool ReplicationExecution::SucceedHasBeenSet() const
{
    return m_succeedHasBeenSet;
}

string ReplicationExecution::GetStartTime() const
{
    return m_startTime;
}

void ReplicationExecution::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReplicationExecution::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReplicationExecution::GetEndTime() const
{
    return m_endTime;
}

void ReplicationExecution::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReplicationExecution::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


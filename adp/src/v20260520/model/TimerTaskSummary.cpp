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

#include <tencentcloud/adp/v20260520/model/TimerTaskSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerTaskSummary::TimerTaskSummary() :
    m_ownerUserIdHasBeenSet(false),
    m_policySummaryHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_timerIdHasBeenSet(false)
{
}

CoreInternalOutcome TimerTaskSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.OwnerUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = string(value["OwnerUserId"].GetString());
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("PolicySummary") && !value["PolicySummary"].IsNull())
    {
        if (!value["PolicySummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.PolicySummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policySummary = string(value["PolicySummary"].GetString());
        m_policySummaryHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TimerId") && !value["TimerId"].IsNull())
    {
        if (!value["TimerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTaskSummary.TimerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerId = string(value["TimerId"].GetString());
        m_timerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerTaskSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_policySummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicySummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policySummary.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

}


string TimerTaskSummary::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void TimerTaskSummary::SetOwnerUserId(const string& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool TimerTaskSummary::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

string TimerTaskSummary::GetPolicySummary() const
{
    return m_policySummary;
}

void TimerTaskSummary::SetPolicySummary(const string& _policySummary)
{
    m_policySummary = _policySummary;
    m_policySummaryHasBeenSet = true;
}

bool TimerTaskSummary::PolicySummaryHasBeenSet() const
{
    return m_policySummaryHasBeenSet;
}

string TimerTaskSummary::GetSpaceId() const
{
    return m_spaceId;
}

void TimerTaskSummary::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool TimerTaskSummary::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

TimerStatus TimerTaskSummary::GetStatus() const
{
    return m_status;
}

void TimerTaskSummary::SetStatus(const TimerStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TimerTaskSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TimerTaskSummary::GetTaskName() const
{
    return m_taskName;
}

void TimerTaskSummary::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TimerTaskSummary::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string TimerTaskSummary::GetTimerId() const
{
    return m_timerId;
}

void TimerTaskSummary::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool TimerTaskSummary::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}


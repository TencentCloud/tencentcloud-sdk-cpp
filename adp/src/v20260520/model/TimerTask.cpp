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

#include <tencentcloud/adp/v20260520/model/TimerTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TimerTask::TimerTask() :
    m_configHasBeenSet(false),
    m_ownerUserIdHasBeenSet(false),
    m_policySummaryHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timerIdHasBeenSet(false)
{
}

CoreInternalOutcome TimerTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserId") && !value["OwnerUserId"].IsNull())
    {
        if (!value["OwnerUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.OwnerUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserId = string(value["OwnerUserId"].GetString());
        m_ownerUserIdHasBeenSet = true;
    }

    if (value.HasMember("PolicySummary") && !value["PolicySummary"].IsNull())
    {
        if (!value["PolicySummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.PolicySummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policySummary = string(value["PolicySummary"].GetString());
        m_policySummaryHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TimerId") && !value["TimerId"].IsNull())
    {
        if (!value["TimerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerTask.TimerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerId = string(value["TimerId"].GetString());
        m_timerIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

}


TimerConfig TimerTask::GetConfig() const
{
    return m_config;
}

void TimerTask::SetConfig(const TimerConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TimerTask::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string TimerTask::GetOwnerUserId() const
{
    return m_ownerUserId;
}

void TimerTask::SetOwnerUserId(const string& _ownerUserId)
{
    m_ownerUserId = _ownerUserId;
    m_ownerUserIdHasBeenSet = true;
}

bool TimerTask::OwnerUserIdHasBeenSet() const
{
    return m_ownerUserIdHasBeenSet;
}

string TimerTask::GetPolicySummary() const
{
    return m_policySummary;
}

void TimerTask::SetPolicySummary(const string& _policySummary)
{
    m_policySummary = _policySummary;
    m_policySummaryHasBeenSet = true;
}

bool TimerTask::PolicySummaryHasBeenSet() const
{
    return m_policySummaryHasBeenSet;
}

TimerProfile TimerTask::GetProfile() const
{
    return m_profile;
}

void TimerTask::SetProfile(const TimerProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool TimerTask::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string TimerTask::GetSpaceId() const
{
    return m_spaceId;
}

void TimerTask::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool TimerTask::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

TimerStatus TimerTask::GetStatus() const
{
    return m_status;
}

void TimerTask::SetStatus(const TimerStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TimerTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TimerTask::GetTimerId() const
{
    return m_timerId;
}

void TimerTask::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool TimerTask::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}


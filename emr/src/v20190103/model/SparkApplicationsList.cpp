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

#include <tencentcloud/emr/v20190103/model/SparkApplicationsList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SparkApplicationsList::SparkApplicationsList() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_coreSecondsHasBeenSet(false),
    m_memorySecondsHasBeenSet(false),
    m_insightHasBeenSet(false)
{
}

CoreInternalOutcome SparkApplicationsList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("CoreSeconds") && !value["CoreSeconds"].IsNull())
    {
        if (!value["CoreSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.CoreSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coreSeconds = value["CoreSeconds"].GetInt64();
        m_coreSecondsHasBeenSet = true;
    }

    if (value.HasMember("MemorySeconds") && !value["MemorySeconds"].IsNull())
    {
        if (!value["MemorySeconds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.MemorySeconds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memorySeconds = string(value["MemorySeconds"].GetString());
        m_memorySecondsHasBeenSet = true;
    }

    if (value.HasMember("Insight") && !value["Insight"].IsNull())
    {
        if (!value["Insight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkApplicationsList.Insight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insight = string(value["Insight"].GetString());
        m_insightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkApplicationsList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_coreSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coreSeconds, allocator);
    }

    if (m_memorySecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memorySeconds.c_str(), allocator).Move(), allocator);
    }

    if (m_insightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Insight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insight.c_str(), allocator).Move(), allocator);
    }

}


string SparkApplicationsList::GetID() const
{
    return m_iD;
}

void SparkApplicationsList::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SparkApplicationsList::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SparkApplicationsList::GetName() const
{
    return m_name;
}

void SparkApplicationsList::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SparkApplicationsList::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SparkApplicationsList::GetUser() const
{
    return m_user;
}

void SparkApplicationsList::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool SparkApplicationsList::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

int64_t SparkApplicationsList::GetStartTime() const
{
    return m_startTime;
}

void SparkApplicationsList::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SparkApplicationsList::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t SparkApplicationsList::GetEndTime() const
{
    return m_endTime;
}

void SparkApplicationsList::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SparkApplicationsList::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t SparkApplicationsList::GetDuration() const
{
    return m_duration;
}

void SparkApplicationsList::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SparkApplicationsList::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SparkApplicationsList::GetState() const
{
    return m_state;
}

void SparkApplicationsList::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SparkApplicationsList::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string SparkApplicationsList::GetApplicationType() const
{
    return m_applicationType;
}

void SparkApplicationsList::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool SparkApplicationsList::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

int64_t SparkApplicationsList::GetCoreSeconds() const
{
    return m_coreSeconds;
}

void SparkApplicationsList::SetCoreSeconds(const int64_t& _coreSeconds)
{
    m_coreSeconds = _coreSeconds;
    m_coreSecondsHasBeenSet = true;
}

bool SparkApplicationsList::CoreSecondsHasBeenSet() const
{
    return m_coreSecondsHasBeenSet;
}

string SparkApplicationsList::GetMemorySeconds() const
{
    return m_memorySeconds;
}

void SparkApplicationsList::SetMemorySeconds(const string& _memorySeconds)
{
    m_memorySeconds = _memorySeconds;
    m_memorySecondsHasBeenSet = true;
}

bool SparkApplicationsList::MemorySecondsHasBeenSet() const
{
    return m_memorySecondsHasBeenSet;
}

string SparkApplicationsList::GetInsight() const
{
    return m_insight;
}

void SparkApplicationsList::SetInsight(const string& _insight)
{
    m_insight = _insight;
    m_insightHasBeenSet = true;
}

bool SparkApplicationsList::InsightHasBeenSet() const
{
    return m_insightHasBeenSet;
}


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

#include <tencentcloud/ccc/v20200210/model/TelCdrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace rapidjson;
using namespace std;

TelCdrInfo::TelCdrInfo() :
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_recordURLHasBeenSet(false),
    m_seatUserHasBeenSet(false),
    m_endStatusHasBeenSet(false),
    m_skillGroupHasBeenSet(false),
    m_callerLocationHasBeenSet(false)
{
}

CoreInternalOutcome TelCdrInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Caller") && !value["Caller"].IsNull())
    {
        if (!value["Caller"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(value["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RecordURL") && !value["RecordURL"].IsNull())
    {
        if (!value["RecordURL"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.RecordURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordURL = string(value["RecordURL"].GetString());
        m_recordURLHasBeenSet = true;
    }

    if (value.HasMember("SeatUser") && !value["SeatUser"].IsNull())
    {
        if (!value["SeatUser"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.SeatUser` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seatUser.Deserialize(value["SeatUser"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seatUserHasBeenSet = true;
    }

    if (value.HasMember("EndStatus") && !value["EndStatus"].IsNull())
    {
        if (!value["EndStatus"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.EndStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endStatus = value["EndStatus"].GetInt64();
        m_endStatusHasBeenSet = true;
    }

    if (value.HasMember("SkillGroup") && !value["SkillGroup"].IsNull())
    {
        if (!value["SkillGroup"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.SkillGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroup = string(value["SkillGroup"].GetString());
        m_skillGroupHasBeenSet = true;
    }

    if (value.HasMember("CallerLocation") && !value["CallerLocation"].IsNull())
    {
        if (!value["CallerLocation"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.CallerLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callerLocation = string(value["CallerLocation"].GetString());
        m_callerLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TelCdrInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_callerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_caller.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_directionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_recordURLHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_recordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_seatUserHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SeatUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_seatUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endStatus, allocator);
    }

    if (m_skillGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SkillGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_skillGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_callerLocationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallerLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_callerLocation.c_str(), allocator).Move(), allocator);
    }

}


string TelCdrInfo::GetCaller() const
{
    return m_caller;
}

void TelCdrInfo::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool TelCdrInfo::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string TelCdrInfo::GetCallee() const
{
    return m_callee;
}

void TelCdrInfo::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool TelCdrInfo::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t TelCdrInfo::GetTime() const
{
    return m_time;
}

void TelCdrInfo::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TelCdrInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t TelCdrInfo::GetDirection() const
{
    return m_direction;
}

void TelCdrInfo::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool TelCdrInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t TelCdrInfo::GetDuration() const
{
    return m_duration;
}

void TelCdrInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TelCdrInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TelCdrInfo::GetRecordURL() const
{
    return m_recordURL;
}

void TelCdrInfo::SetRecordURL(const string& _recordURL)
{
    m_recordURL = _recordURL;
    m_recordURLHasBeenSet = true;
}

bool TelCdrInfo::RecordURLHasBeenSet() const
{
    return m_recordURLHasBeenSet;
}

SeatUserInfo TelCdrInfo::GetSeatUser() const
{
    return m_seatUser;
}

void TelCdrInfo::SetSeatUser(const SeatUserInfo& _seatUser)
{
    m_seatUser = _seatUser;
    m_seatUserHasBeenSet = true;
}

bool TelCdrInfo::SeatUserHasBeenSet() const
{
    return m_seatUserHasBeenSet;
}

int64_t TelCdrInfo::GetEndStatus() const
{
    return m_endStatus;
}

void TelCdrInfo::SetEndStatus(const int64_t& _endStatus)
{
    m_endStatus = _endStatus;
    m_endStatusHasBeenSet = true;
}

bool TelCdrInfo::EndStatusHasBeenSet() const
{
    return m_endStatusHasBeenSet;
}

string TelCdrInfo::GetSkillGroup() const
{
    return m_skillGroup;
}

void TelCdrInfo::SetSkillGroup(const string& _skillGroup)
{
    m_skillGroup = _skillGroup;
    m_skillGroupHasBeenSet = true;
}

bool TelCdrInfo::SkillGroupHasBeenSet() const
{
    return m_skillGroupHasBeenSet;
}

string TelCdrInfo::GetCallerLocation() const
{
    return m_callerLocation;
}

void TelCdrInfo::SetCallerLocation(const string& _callerLocation)
{
    m_callerLocation = _callerLocation;
    m_callerLocationHasBeenSet = true;
}

bool TelCdrInfo::CallerLocationHasBeenSet() const
{
    return m_callerLocationHasBeenSet;
}


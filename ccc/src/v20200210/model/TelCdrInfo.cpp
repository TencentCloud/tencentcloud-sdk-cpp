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
    m_callerLocationHasBeenSet(false),
    m_iVRDurationHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_endedTimestampHasBeenSet(false),
    m_iVRKeyPressedHasBeenSet(false),
    m_hungUpSideHasBeenSet(false),
    m_serveParticipantsHasBeenSet(false),
    m_skillGroupIdHasBeenSet(false),
    m_endStatusStringHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_queuedTimestampHasBeenSet(false),
    m_postIVRKeyPressedHasBeenSet(false),
    m_queuedSkillGroupIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome TelCdrInfo::Deserialize(const rapidjson::Value &value)
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

    if (value.HasMember("IVRDuration") && !value["IVRDuration"].IsNull())
    {
        if (!value["IVRDuration"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.IVRDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iVRDuration = value["IVRDuration"].GetInt64();
        m_iVRDurationHasBeenSet = true;
    }

    if (value.HasMember("RingTimestamp") && !value["RingTimestamp"].IsNull())
    {
        if (!value["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = value["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (value.HasMember("AcceptTimestamp") && !value["AcceptTimestamp"].IsNull())
    {
        if (!value["AcceptTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.AcceptTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = value["AcceptTimestamp"].GetInt64();
        m_acceptTimestampHasBeenSet = true;
    }

    if (value.HasMember("EndedTimestamp") && !value["EndedTimestamp"].IsNull())
    {
        if (!value["EndedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.EndedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endedTimestamp = value["EndedTimestamp"].GetInt64();
        m_endedTimestampHasBeenSet = true;
    }

    if (value.HasMember("IVRKeyPressed") && !value["IVRKeyPressed"].IsNull())
    {
        if (!value["IVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Error("response `TelCdrInfo.IVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = value["IVRKeyPressed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iVRKeyPressed.push_back((*itr).GetString());
        }
        m_iVRKeyPressedHasBeenSet = true;
    }

    if (value.HasMember("HungUpSide") && !value["HungUpSide"].IsNull())
    {
        if (!value["HungUpSide"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.HungUpSide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hungUpSide = string(value["HungUpSide"].GetString());
        m_hungUpSideHasBeenSet = true;
    }

    if (value.HasMember("ServeParticipants") && !value["ServeParticipants"].IsNull())
    {
        if (!value["ServeParticipants"].IsArray())
            return CoreInternalOutcome(Error("response `TelCdrInfo.ServeParticipants` is not array type"));

        const rapidjson::Value &tmpValue = value["ServeParticipants"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServeParticipant item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serveParticipants.push_back(item);
        }
        m_serveParticipantsHasBeenSet = true;
    }

    if (value.HasMember("SkillGroupId") && !value["SkillGroupId"].IsNull())
    {
        if (!value["SkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.SkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_skillGroupId = value["SkillGroupId"].GetInt64();
        m_skillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EndStatusString") && !value["EndStatusString"].IsNull())
    {
        if (!value["EndStatusString"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.EndStatusString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endStatusString = string(value["EndStatusString"].GetString());
        m_endStatusStringHasBeenSet = true;
    }

    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.StartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = value["StartTimestamp"].GetInt64();
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("QueuedTimestamp") && !value["QueuedTimestamp"].IsNull())
    {
        if (!value["QueuedTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.QueuedTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedTimestamp = value["QueuedTimestamp"].GetInt64();
        m_queuedTimestampHasBeenSet = true;
    }

    if (value.HasMember("PostIVRKeyPressed") && !value["PostIVRKeyPressed"].IsNull())
    {
        if (!value["PostIVRKeyPressed"].IsArray())
            return CoreInternalOutcome(Error("response `TelCdrInfo.PostIVRKeyPressed` is not array type"));

        const rapidjson::Value &tmpValue = value["PostIVRKeyPressed"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IVRKeyPressedElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_postIVRKeyPressed.push_back(item);
        }
        m_postIVRKeyPressedHasBeenSet = true;
    }

    if (value.HasMember("QueuedSkillGroupId") && !value["QueuedSkillGroupId"].IsNull())
    {
        if (!value["QueuedSkillGroupId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.QueuedSkillGroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queuedSkillGroupId = value["QueuedSkillGroupId"].GetInt64();
        m_queuedSkillGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TelCdrInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TelCdrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caller.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_recordURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordURL.c_str(), allocator).Move(), allocator);
    }

    if (m_seatUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seatUser.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endStatus, allocator);
    }

    if (m_skillGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_callerLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callerLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_iVRDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iVRDuration, allocator);
    }

    if (m_ringTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RingTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ringTimestamp, allocator);
    }

    if (m_acceptTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acceptTimestamp, allocator);
    }

    if (m_endedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endedTimestamp, allocator);
    }

    if (m_iVRKeyPressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRKeyPressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iVRKeyPressed.begin(); itr != m_iVRKeyPressed.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hungUpSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HungUpSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hungUpSide.c_str(), allocator).Move(), allocator);
    }

    if (m_serveParticipantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServeParticipants";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serveParticipants.begin(); itr != m_serveParticipants.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skillGroupId, allocator);
    }

    if (m_endStatusStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndStatusString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endStatusString.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_queuedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedTimestamp, allocator);
    }

    if (m_postIVRKeyPressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostIVRKeyPressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postIVRKeyPressed.begin(); itr != m_postIVRKeyPressed.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queuedSkillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuedSkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuedSkillGroupId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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

int64_t TelCdrInfo::GetIVRDuration() const
{
    return m_iVRDuration;
}

void TelCdrInfo::SetIVRDuration(const int64_t& _iVRDuration)
{
    m_iVRDuration = _iVRDuration;
    m_iVRDurationHasBeenSet = true;
}

bool TelCdrInfo::IVRDurationHasBeenSet() const
{
    return m_iVRDurationHasBeenSet;
}

int64_t TelCdrInfo::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

void TelCdrInfo::SetRingTimestamp(const int64_t& _ringTimestamp)
{
    m_ringTimestamp = _ringTimestamp;
    m_ringTimestampHasBeenSet = true;
}

bool TelCdrInfo::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

void TelCdrInfo::SetAcceptTimestamp(const int64_t& _acceptTimestamp)
{
    m_acceptTimestamp = _acceptTimestamp;
    m_acceptTimestampHasBeenSet = true;
}

bool TelCdrInfo::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetEndedTimestamp() const
{
    return m_endedTimestamp;
}

void TelCdrInfo::SetEndedTimestamp(const int64_t& _endedTimestamp)
{
    m_endedTimestamp = _endedTimestamp;
    m_endedTimestampHasBeenSet = true;
}

bool TelCdrInfo::EndedTimestampHasBeenSet() const
{
    return m_endedTimestampHasBeenSet;
}

vector<string> TelCdrInfo::GetIVRKeyPressed() const
{
    return m_iVRKeyPressed;
}

void TelCdrInfo::SetIVRKeyPressed(const vector<string>& _iVRKeyPressed)
{
    m_iVRKeyPressed = _iVRKeyPressed;
    m_iVRKeyPressedHasBeenSet = true;
}

bool TelCdrInfo::IVRKeyPressedHasBeenSet() const
{
    return m_iVRKeyPressedHasBeenSet;
}

string TelCdrInfo::GetHungUpSide() const
{
    return m_hungUpSide;
}

void TelCdrInfo::SetHungUpSide(const string& _hungUpSide)
{
    m_hungUpSide = _hungUpSide;
    m_hungUpSideHasBeenSet = true;
}

bool TelCdrInfo::HungUpSideHasBeenSet() const
{
    return m_hungUpSideHasBeenSet;
}

vector<ServeParticipant> TelCdrInfo::GetServeParticipants() const
{
    return m_serveParticipants;
}

void TelCdrInfo::SetServeParticipants(const vector<ServeParticipant>& _serveParticipants)
{
    m_serveParticipants = _serveParticipants;
    m_serveParticipantsHasBeenSet = true;
}

bool TelCdrInfo::ServeParticipantsHasBeenSet() const
{
    return m_serveParticipantsHasBeenSet;
}

int64_t TelCdrInfo::GetSkillGroupId() const
{
    return m_skillGroupId;
}

void TelCdrInfo::SetSkillGroupId(const int64_t& _skillGroupId)
{
    m_skillGroupId = _skillGroupId;
    m_skillGroupIdHasBeenSet = true;
}

bool TelCdrInfo::SkillGroupIdHasBeenSet() const
{
    return m_skillGroupIdHasBeenSet;
}

string TelCdrInfo::GetEndStatusString() const
{
    return m_endStatusString;
}

void TelCdrInfo::SetEndStatusString(const string& _endStatusString)
{
    m_endStatusString = _endStatusString;
    m_endStatusStringHasBeenSet = true;
}

bool TelCdrInfo::EndStatusStringHasBeenSet() const
{
    return m_endStatusStringHasBeenSet;
}

int64_t TelCdrInfo::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void TelCdrInfo::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool TelCdrInfo::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t TelCdrInfo::GetQueuedTimestamp() const
{
    return m_queuedTimestamp;
}

void TelCdrInfo::SetQueuedTimestamp(const int64_t& _queuedTimestamp)
{
    m_queuedTimestamp = _queuedTimestamp;
    m_queuedTimestampHasBeenSet = true;
}

bool TelCdrInfo::QueuedTimestampHasBeenSet() const
{
    return m_queuedTimestampHasBeenSet;
}

vector<IVRKeyPressedElement> TelCdrInfo::GetPostIVRKeyPressed() const
{
    return m_postIVRKeyPressed;
}

void TelCdrInfo::SetPostIVRKeyPressed(const vector<IVRKeyPressedElement>& _postIVRKeyPressed)
{
    m_postIVRKeyPressed = _postIVRKeyPressed;
    m_postIVRKeyPressedHasBeenSet = true;
}

bool TelCdrInfo::PostIVRKeyPressedHasBeenSet() const
{
    return m_postIVRKeyPressedHasBeenSet;
}

int64_t TelCdrInfo::GetQueuedSkillGroupId() const
{
    return m_queuedSkillGroupId;
}

void TelCdrInfo::SetQueuedSkillGroupId(const int64_t& _queuedSkillGroupId)
{
    m_queuedSkillGroupId = _queuedSkillGroupId;
    m_queuedSkillGroupIdHasBeenSet = true;
}

bool TelCdrInfo::QueuedSkillGroupIdHasBeenSet() const
{
    return m_queuedSkillGroupIdHasBeenSet;
}

string TelCdrInfo::GetSessionId() const
{
    return m_sessionId;
}

void TelCdrInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TelCdrInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


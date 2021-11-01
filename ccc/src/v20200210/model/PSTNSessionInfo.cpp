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

#include <tencentcloud/ccc/v20200210/model/PSTNSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

PSTNSessionInfo::PSTNSessionInfo() :
    m_sessionIDHasBeenSet(false),
    m_roomIDHasBeenSet(false),
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_staffEmailHasBeenSet(false),
    m_staffNumberHasBeenSet(false),
    m_sessionStatusHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_protectedCallerHasBeenSet(false),
    m_protectedCalleeHasBeenSet(false)
{
}

CoreInternalOutcome PSTNSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionID") && !value["SessionID"].IsNull())
    {
        if (!value["SessionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.SessionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionID = string(value["SessionID"].GetString());
        m_sessionIDHasBeenSet = true;
    }

    if (value.HasMember("RoomID") && !value["RoomID"].IsNull())
    {
        if (!value["RoomID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.RoomID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomID = string(value["RoomID"].GetString());
        m_roomIDHasBeenSet = true;
    }

    if (value.HasMember("Caller") && !value["Caller"].IsNull())
    {
        if (!value["Caller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(value["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.StartTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = string(value["StartTimestamp"].GetString());
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("AcceptTimestamp") && !value["AcceptTimestamp"].IsNull())
    {
        if (!value["AcceptTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.AcceptTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = string(value["AcceptTimestamp"].GetString());
        m_acceptTimestampHasBeenSet = true;
    }

    if (value.HasMember("StaffEmail") && !value["StaffEmail"].IsNull())
    {
        if (!value["StaffEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.StaffEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffEmail = string(value["StaffEmail"].GetString());
        m_staffEmailHasBeenSet = true;
    }

    if (value.HasMember("StaffNumber") && !value["StaffNumber"].IsNull())
    {
        if (!value["StaffNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.StaffNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNumber = string(value["StaffNumber"].GetString());
        m_staffNumberHasBeenSet = true;
    }

    if (value.HasMember("SessionStatus") && !value["SessionStatus"].IsNull())
    {
        if (!value["SessionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.SessionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStatus = string(value["SessionStatus"].GetString());
        m_sessionStatusHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("RingTimestamp") && !value["RingTimestamp"].IsNull())
    {
        if (!value["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = value["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCaller") && !value["ProtectedCaller"].IsNull())
    {
        if (!value["ProtectedCaller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.ProtectedCaller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCaller = string(value["ProtectedCaller"].GetString());
        m_protectedCallerHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCallee") && !value["ProtectedCallee"].IsNull())
    {
        if (!value["ProtectedCallee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSessionInfo.ProtectedCallee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCallee = string(value["ProtectedCallee"].GetString());
        m_protectedCalleeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PSTNSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionID.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomID.c_str(), allocator).Move(), allocator);
    }

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

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_acceptTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acceptTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_staffEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_staffNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_staffNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_ringTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RingTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ringTimestamp, allocator);
    }

    if (m_protectedCallerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCaller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectedCaller.c_str(), allocator).Move(), allocator);
    }

    if (m_protectedCalleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedCallee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectedCallee.c_str(), allocator).Move(), allocator);
    }

}


string PSTNSessionInfo::GetSessionID() const
{
    return m_sessionID;
}

void PSTNSessionInfo::SetSessionID(const string& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool PSTNSessionInfo::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}

string PSTNSessionInfo::GetRoomID() const
{
    return m_roomID;
}

void PSTNSessionInfo::SetRoomID(const string& _roomID)
{
    m_roomID = _roomID;
    m_roomIDHasBeenSet = true;
}

bool PSTNSessionInfo::RoomIDHasBeenSet() const
{
    return m_roomIDHasBeenSet;
}

string PSTNSessionInfo::GetCaller() const
{
    return m_caller;
}

void PSTNSessionInfo::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool PSTNSessionInfo::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string PSTNSessionInfo::GetCallee() const
{
    return m_callee;
}

void PSTNSessionInfo::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool PSTNSessionInfo::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

string PSTNSessionInfo::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void PSTNSessionInfo::SetStartTimestamp(const string& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool PSTNSessionInfo::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

string PSTNSessionInfo::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

void PSTNSessionInfo::SetAcceptTimestamp(const string& _acceptTimestamp)
{
    m_acceptTimestamp = _acceptTimestamp;
    m_acceptTimestampHasBeenSet = true;
}

bool PSTNSessionInfo::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

string PSTNSessionInfo::GetStaffEmail() const
{
    return m_staffEmail;
}

void PSTNSessionInfo::SetStaffEmail(const string& _staffEmail)
{
    m_staffEmail = _staffEmail;
    m_staffEmailHasBeenSet = true;
}

bool PSTNSessionInfo::StaffEmailHasBeenSet() const
{
    return m_staffEmailHasBeenSet;
}

string PSTNSessionInfo::GetStaffNumber() const
{
    return m_staffNumber;
}

void PSTNSessionInfo::SetStaffNumber(const string& _staffNumber)
{
    m_staffNumber = _staffNumber;
    m_staffNumberHasBeenSet = true;
}

bool PSTNSessionInfo::StaffNumberHasBeenSet() const
{
    return m_staffNumberHasBeenSet;
}

string PSTNSessionInfo::GetSessionStatus() const
{
    return m_sessionStatus;
}

void PSTNSessionInfo::SetSessionStatus(const string& _sessionStatus)
{
    m_sessionStatus = _sessionStatus;
    m_sessionStatusHasBeenSet = true;
}

bool PSTNSessionInfo::SessionStatusHasBeenSet() const
{
    return m_sessionStatusHasBeenSet;
}

int64_t PSTNSessionInfo::GetDirection() const
{
    return m_direction;
}

void PSTNSessionInfo::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool PSTNSessionInfo::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

int64_t PSTNSessionInfo::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

void PSTNSessionInfo::SetRingTimestamp(const int64_t& _ringTimestamp)
{
    m_ringTimestamp = _ringTimestamp;
    m_ringTimestampHasBeenSet = true;
}

bool PSTNSessionInfo::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

string PSTNSessionInfo::GetProtectedCaller() const
{
    return m_protectedCaller;
}

void PSTNSessionInfo::SetProtectedCaller(const string& _protectedCaller)
{
    m_protectedCaller = _protectedCaller;
    m_protectedCallerHasBeenSet = true;
}

bool PSTNSessionInfo::ProtectedCallerHasBeenSet() const
{
    return m_protectedCallerHasBeenSet;
}

string PSTNSessionInfo::GetProtectedCallee() const
{
    return m_protectedCallee;
}

void PSTNSessionInfo::SetProtectedCallee(const string& _protectedCallee)
{
    m_protectedCallee = _protectedCallee;
    m_protectedCalleeHasBeenSet = true;
}

bool PSTNSessionInfo::ProtectedCalleeHasBeenSet() const
{
    return m_protectedCalleeHasBeenSet;
}


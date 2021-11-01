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

#include <tencentcloud/ccc/v20200210/model/PSTNSession.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

PSTNSession::PSTNSession() :
    m_sessionIDHasBeenSet(false),
    m_roomIDHasBeenSet(false),
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_ringTimestampHasBeenSet(false),
    m_acceptTimestampHasBeenSet(false),
    m_staffEmailHasBeenSet(false),
    m_staffNumberHasBeenSet(false),
    m_sessionStatusHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_outBoundCallerHasBeenSet(false),
    m_outBoundCalleeHasBeenSet(false),
    m_protectedCallerHasBeenSet(false),
    m_protectedCalleeHasBeenSet(false)
{
}

CoreInternalOutcome PSTNSession::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionID") && !value["SessionID"].IsNull())
    {
        if (!value["SessionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.SessionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionID = string(value["SessionID"].GetString());
        m_sessionIDHasBeenSet = true;
    }

    if (value.HasMember("RoomID") && !value["RoomID"].IsNull())
    {
        if (!value["RoomID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.RoomID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomID = string(value["RoomID"].GetString());
        m_roomIDHasBeenSet = true;
    }

    if (value.HasMember("Caller") && !value["Caller"].IsNull())
    {
        if (!value["Caller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(value["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("StartTimestamp") && !value["StartTimestamp"].IsNull())
    {
        if (!value["StartTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.StartTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimestamp = value["StartTimestamp"].GetInt64();
        m_startTimestampHasBeenSet = true;
    }

    if (value.HasMember("RingTimestamp") && !value["RingTimestamp"].IsNull())
    {
        if (!value["RingTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.RingTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringTimestamp = value["RingTimestamp"].GetInt64();
        m_ringTimestampHasBeenSet = true;
    }

    if (value.HasMember("AcceptTimestamp") && !value["AcceptTimestamp"].IsNull())
    {
        if (!value["AcceptTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.AcceptTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptTimestamp = value["AcceptTimestamp"].GetInt64();
        m_acceptTimestampHasBeenSet = true;
    }

    if (value.HasMember("StaffEmail") && !value["StaffEmail"].IsNull())
    {
        if (!value["StaffEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.StaffEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffEmail = string(value["StaffEmail"].GetString());
        m_staffEmailHasBeenSet = true;
    }

    if (value.HasMember("StaffNumber") && !value["StaffNumber"].IsNull())
    {
        if (!value["StaffNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.StaffNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_staffNumber = string(value["StaffNumber"].GetString());
        m_staffNumberHasBeenSet = true;
    }

    if (value.HasMember("SessionStatus") && !value["SessionStatus"].IsNull())
    {
        if (!value["SessionStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.SessionStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStatus = string(value["SessionStatus"].GetString());
        m_sessionStatusHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("OutBoundCaller") && !value["OutBoundCaller"].IsNull())
    {
        if (!value["OutBoundCaller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.OutBoundCaller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBoundCaller = string(value["OutBoundCaller"].GetString());
        m_outBoundCallerHasBeenSet = true;
    }

    if (value.HasMember("OutBoundCallee") && !value["OutBoundCallee"].IsNull())
    {
        if (!value["OutBoundCallee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.OutBoundCallee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outBoundCallee = string(value["OutBoundCallee"].GetString());
        m_outBoundCalleeHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCaller") && !value["ProtectedCaller"].IsNull())
    {
        if (!value["ProtectedCaller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.ProtectedCaller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCaller = string(value["ProtectedCaller"].GetString());
        m_protectedCallerHasBeenSet = true;
    }

    if (value.HasMember("ProtectedCallee") && !value["ProtectedCallee"].IsNull())
    {
        if (!value["ProtectedCallee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PSTNSession.ProtectedCallee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectedCallee = string(value["ProtectedCallee"].GetString());
        m_protectedCalleeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PSTNSession::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_startTimestamp, allocator);
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

    if (m_outBoundCallerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBoundCaller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outBoundCaller.c_str(), allocator).Move(), allocator);
    }

    if (m_outBoundCalleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBoundCallee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outBoundCallee.c_str(), allocator).Move(), allocator);
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


string PSTNSession::GetSessionID() const
{
    return m_sessionID;
}

void PSTNSession::SetSessionID(const string& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool PSTNSession::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}

string PSTNSession::GetRoomID() const
{
    return m_roomID;
}

void PSTNSession::SetRoomID(const string& _roomID)
{
    m_roomID = _roomID;
    m_roomIDHasBeenSet = true;
}

bool PSTNSession::RoomIDHasBeenSet() const
{
    return m_roomIDHasBeenSet;
}

string PSTNSession::GetCaller() const
{
    return m_caller;
}

void PSTNSession::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool PSTNSession::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string PSTNSession::GetCallee() const
{
    return m_callee;
}

void PSTNSession::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool PSTNSession::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t PSTNSession::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void PSTNSession::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool PSTNSession::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t PSTNSession::GetRingTimestamp() const
{
    return m_ringTimestamp;
}

void PSTNSession::SetRingTimestamp(const int64_t& _ringTimestamp)
{
    m_ringTimestamp = _ringTimestamp;
    m_ringTimestampHasBeenSet = true;
}

bool PSTNSession::RingTimestampHasBeenSet() const
{
    return m_ringTimestampHasBeenSet;
}

int64_t PSTNSession::GetAcceptTimestamp() const
{
    return m_acceptTimestamp;
}

void PSTNSession::SetAcceptTimestamp(const int64_t& _acceptTimestamp)
{
    m_acceptTimestamp = _acceptTimestamp;
    m_acceptTimestampHasBeenSet = true;
}

bool PSTNSession::AcceptTimestampHasBeenSet() const
{
    return m_acceptTimestampHasBeenSet;
}

string PSTNSession::GetStaffEmail() const
{
    return m_staffEmail;
}

void PSTNSession::SetStaffEmail(const string& _staffEmail)
{
    m_staffEmail = _staffEmail;
    m_staffEmailHasBeenSet = true;
}

bool PSTNSession::StaffEmailHasBeenSet() const
{
    return m_staffEmailHasBeenSet;
}

string PSTNSession::GetStaffNumber() const
{
    return m_staffNumber;
}

void PSTNSession::SetStaffNumber(const string& _staffNumber)
{
    m_staffNumber = _staffNumber;
    m_staffNumberHasBeenSet = true;
}

bool PSTNSession::StaffNumberHasBeenSet() const
{
    return m_staffNumberHasBeenSet;
}

string PSTNSession::GetSessionStatus() const
{
    return m_sessionStatus;
}

void PSTNSession::SetSessionStatus(const string& _sessionStatus)
{
    m_sessionStatus = _sessionStatus;
    m_sessionStatusHasBeenSet = true;
}

bool PSTNSession::SessionStatusHasBeenSet() const
{
    return m_sessionStatusHasBeenSet;
}

int64_t PSTNSession::GetDirection() const
{
    return m_direction;
}

void PSTNSession::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool PSTNSession::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string PSTNSession::GetOutBoundCaller() const
{
    return m_outBoundCaller;
}

void PSTNSession::SetOutBoundCaller(const string& _outBoundCaller)
{
    m_outBoundCaller = _outBoundCaller;
    m_outBoundCallerHasBeenSet = true;
}

bool PSTNSession::OutBoundCallerHasBeenSet() const
{
    return m_outBoundCallerHasBeenSet;
}

string PSTNSession::GetOutBoundCallee() const
{
    return m_outBoundCallee;
}

void PSTNSession::SetOutBoundCallee(const string& _outBoundCallee)
{
    m_outBoundCallee = _outBoundCallee;
    m_outBoundCalleeHasBeenSet = true;
}

bool PSTNSession::OutBoundCalleeHasBeenSet() const
{
    return m_outBoundCalleeHasBeenSet;
}

string PSTNSession::GetProtectedCaller() const
{
    return m_protectedCaller;
}

void PSTNSession::SetProtectedCaller(const string& _protectedCaller)
{
    m_protectedCaller = _protectedCaller;
    m_protectedCallerHasBeenSet = true;
}

bool PSTNSession::ProtectedCallerHasBeenSet() const
{
    return m_protectedCallerHasBeenSet;
}

string PSTNSession::GetProtectedCallee() const
{
    return m_protectedCallee;
}

void PSTNSession::SetProtectedCallee(const string& _protectedCallee)
{
    m_protectedCallee = _protectedCallee;
    m_protectedCalleeHasBeenSet = true;
}

bool PSTNSession::ProtectedCalleeHasBeenSet() const
{
    return m_protectedCalleeHasBeenSet;
}


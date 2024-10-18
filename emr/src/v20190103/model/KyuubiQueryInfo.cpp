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

#include <tencentcloud/emr/v20190103/model/KyuubiQueryInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

KyuubiQueryInfo::KyuubiQueryInfo() :
    m_clientIPHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_engineIDHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sessionIDHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_executionStateHasBeenSet(false),
    m_executionStatementHasBeenSet(false),
    m_statementIDHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome KyuubiQueryInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIP") && !value["ClientIP"].IsNull())
    {
        if (!value["ClientIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.ClientIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIP = string(value["ClientIP"].GetString());
        m_clientIPHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EngineID") && !value["EngineID"].IsNull())
    {
        if (!value["EngineID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.EngineID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineID = string(value["EngineID"].GetString());
        m_engineIDHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("SessionID") && !value["SessionID"].IsNull())
    {
        if (!value["SessionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.SessionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionID = string(value["SessionID"].GetString());
        m_sessionIDHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionState") && !value["ExecutionState"].IsNull())
    {
        if (!value["ExecutionState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.ExecutionState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionState = string(value["ExecutionState"].GetString());
        m_executionStateHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStatement") && !value["ExecutionStatement"].IsNull())
    {
        if (!value["ExecutionStatement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.ExecutionStatement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStatement = string(value["ExecutionStatement"].GetString());
        m_executionStatementHasBeenSet = true;
    }

    if (value.HasMember("StatementID") && !value["StatementID"].IsNull())
    {
        if (!value["StatementID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.StatementID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statementID = string(value["StatementID"].GetString());
        m_statementIDHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KyuubiQueryInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KyuubiQueryInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_engineIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineID.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionID.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_executionStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionState.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStatement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_statementIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatementID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statementID.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

}


string KyuubiQueryInfo::GetClientIP() const
{
    return m_clientIP;
}

void KyuubiQueryInfo::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool KyuubiQueryInfo::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

int64_t KyuubiQueryInfo::GetDuration() const
{
    return m_duration;
}

void KyuubiQueryInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool KyuubiQueryInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t KyuubiQueryInfo::GetEndTime() const
{
    return m_endTime;
}

void KyuubiQueryInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool KyuubiQueryInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string KyuubiQueryInfo::GetEngineID() const
{
    return m_engineID;
}

void KyuubiQueryInfo::SetEngineID(const string& _engineID)
{
    m_engineID = _engineID;
    m_engineIDHasBeenSet = true;
}

bool KyuubiQueryInfo::EngineIDHasBeenSet() const
{
    return m_engineIDHasBeenSet;
}

string KyuubiQueryInfo::GetEngineType() const
{
    return m_engineType;
}

void KyuubiQueryInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool KyuubiQueryInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string KyuubiQueryInfo::GetId() const
{
    return m_id;
}

void KyuubiQueryInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool KyuubiQueryInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string KyuubiQueryInfo::GetSessionID() const
{
    return m_sessionID;
}

void KyuubiQueryInfo::SetSessionID(const string& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool KyuubiQueryInfo::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}

int64_t KyuubiQueryInfo::GetBeginTime() const
{
    return m_beginTime;
}

void KyuubiQueryInfo::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool KyuubiQueryInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string KyuubiQueryInfo::GetExecutionState() const
{
    return m_executionState;
}

void KyuubiQueryInfo::SetExecutionState(const string& _executionState)
{
    m_executionState = _executionState;
    m_executionStateHasBeenSet = true;
}

bool KyuubiQueryInfo::ExecutionStateHasBeenSet() const
{
    return m_executionStateHasBeenSet;
}

string KyuubiQueryInfo::GetExecutionStatement() const
{
    return m_executionStatement;
}

void KyuubiQueryInfo::SetExecutionStatement(const string& _executionStatement)
{
    m_executionStatement = _executionStatement;
    m_executionStatementHasBeenSet = true;
}

bool KyuubiQueryInfo::ExecutionStatementHasBeenSet() const
{
    return m_executionStatementHasBeenSet;
}

string KyuubiQueryInfo::GetStatementID() const
{
    return m_statementID;
}

void KyuubiQueryInfo::SetStatementID(const string& _statementID)
{
    m_statementID = _statementID;
    m_statementIDHasBeenSet = true;
}

bool KyuubiQueryInfo::StatementIDHasBeenSet() const
{
    return m_statementIDHasBeenSet;
}

string KyuubiQueryInfo::GetUser() const
{
    return m_user;
}

void KyuubiQueryInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool KyuubiQueryInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}


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

#include <tencentcloud/postgres/v20170312/model/ErrLogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ErrLogDetail::ErrLogDetail() :
    m_userNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_errTimeHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionStartTimeHasBeenSet(false),
    m_virtualTransactionIdHasBeenSet(false),
    m_sqlStateCodeHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome ErrLogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("ErrTime") && !value["ErrTime"].IsNull())
    {
        if (!value["ErrTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.ErrTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errTime = string(value["ErrTime"].GetString());
        m_errTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.ProcessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetInt64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionStartTime") && !value["SessionStartTime"].IsNull())
    {
        if (!value["SessionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.SessionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStartTime = string(value["SessionStartTime"].GetString());
        m_sessionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("VirtualTransactionId") && !value["VirtualTransactionId"].IsNull())
    {
        if (!value["VirtualTransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.VirtualTransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTransactionId = string(value["VirtualTransactionId"].GetString());
        m_virtualTransactionIdHasBeenSet = true;
    }

    if (value.HasMember("SqlStateCode") && !value["SqlStateCode"].IsNull())
    {
        if (!value["SqlStateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.SqlStateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStateCode = string(value["SqlStateCode"].GetString());
        m_sqlStateCodeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrLogDetail.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrLogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_errTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualTransactionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTransactionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualTransactionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlStateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

}


string ErrLogDetail::GetUserName() const
{
    return m_userName;
}

void ErrLogDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ErrLogDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ErrLogDetail::GetDatabase() const
{
    return m_database;
}

void ErrLogDetail::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ErrLogDetail::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ErrLogDetail::GetErrTime() const
{
    return m_errTime;
}

void ErrLogDetail::SetErrTime(const string& _errTime)
{
    m_errTime = _errTime;
    m_errTimeHasBeenSet = true;
}

bool ErrLogDetail::ErrTimeHasBeenSet() const
{
    return m_errTimeHasBeenSet;
}

string ErrLogDetail::GetErrMsg() const
{
    return m_errMsg;
}

void ErrLogDetail::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool ErrLogDetail::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

int64_t ErrLogDetail::GetProcessId() const
{
    return m_processId;
}

void ErrLogDetail::SetProcessId(const int64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool ErrLogDetail::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string ErrLogDetail::GetClientAddr() const
{
    return m_clientAddr;
}

void ErrLogDetail::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool ErrLogDetail::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string ErrLogDetail::GetSessionId() const
{
    return m_sessionId;
}

void ErrLogDetail::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ErrLogDetail::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ErrLogDetail::GetSessionStartTime() const
{
    return m_sessionStartTime;
}

void ErrLogDetail::SetSessionStartTime(const string& _sessionStartTime)
{
    m_sessionStartTime = _sessionStartTime;
    m_sessionStartTimeHasBeenSet = true;
}

bool ErrLogDetail::SessionStartTimeHasBeenSet() const
{
    return m_sessionStartTimeHasBeenSet;
}

string ErrLogDetail::GetVirtualTransactionId() const
{
    return m_virtualTransactionId;
}

void ErrLogDetail::SetVirtualTransactionId(const string& _virtualTransactionId)
{
    m_virtualTransactionId = _virtualTransactionId;
    m_virtualTransactionIdHasBeenSet = true;
}

bool ErrLogDetail::VirtualTransactionIdHasBeenSet() const
{
    return m_virtualTransactionIdHasBeenSet;
}

string ErrLogDetail::GetSqlStateCode() const
{
    return m_sqlStateCode;
}

void ErrLogDetail::SetSqlStateCode(const string& _sqlStateCode)
{
    m_sqlStateCode = _sqlStateCode;
    m_sqlStateCodeHasBeenSet = true;
}

bool ErrLogDetail::SqlStateCodeHasBeenSet() const
{
    return m_sqlStateCodeHasBeenSet;
}

string ErrLogDetail::GetApplicationName() const
{
    return m_applicationName;
}

void ErrLogDetail::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ErrLogDetail::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}


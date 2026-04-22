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

#include <tencentcloud/postgres/v20170312/model/RawSlowQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

RawSlowQuery::RawSlowQuery() :
    m_rawQueryHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_clientAddrHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_sessionStartTimeHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_virtualTransactionIdHasBeenSet(false),
    m_sqlStateCodeHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome RawSlowQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RawQuery") && !value["RawQuery"].IsNull())
    {
        if (!value["RawQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.RawQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawQuery = string(value["RawQuery"].GetString());
        m_rawQueryHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ClientAddr") && !value["ClientAddr"].IsNull())
    {
        if (!value["ClientAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.ClientAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientAddr = string(value["ClientAddr"].GetString());
        m_clientAddrHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("SessionStartTime") && !value["SessionStartTime"].IsNull())
    {
        if (!value["SessionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.SessionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStartTime = string(value["SessionStartTime"].GetString());
        m_sessionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.ProcessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetInt64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("VirtualTransactionId") && !value["VirtualTransactionId"].IsNull())
    {
        if (!value["VirtualTransactionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.VirtualTransactionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualTransactionId = string(value["VirtualTransactionId"].GetString());
        m_virtualTransactionIdHasBeenSet = true;
    }

    if (value.HasMember("SqlStateCode") && !value["SqlStateCode"].IsNull())
    {
        if (!value["SqlStateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.SqlStateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStateCode = string(value["SqlStateCode"].GetString());
        m_sqlStateCodeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RawSlowQuery.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RawSlowQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rawQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_clientAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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


string RawSlowQuery::GetRawQuery() const
{
    return m_rawQuery;
}

void RawSlowQuery::SetRawQuery(const string& _rawQuery)
{
    m_rawQuery = _rawQuery;
    m_rawQueryHasBeenSet = true;
}

bool RawSlowQuery::RawQueryHasBeenSet() const
{
    return m_rawQueryHasBeenSet;
}

string RawSlowQuery::GetDatabaseName() const
{
    return m_databaseName;
}

void RawSlowQuery::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool RawSlowQuery::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

double RawSlowQuery::GetDuration() const
{
    return m_duration;
}

void RawSlowQuery::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool RawSlowQuery::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string RawSlowQuery::GetClientAddr() const
{
    return m_clientAddr;
}

void RawSlowQuery::SetClientAddr(const string& _clientAddr)
{
    m_clientAddr = _clientAddr;
    m_clientAddrHasBeenSet = true;
}

bool RawSlowQuery::ClientAddrHasBeenSet() const
{
    return m_clientAddrHasBeenSet;
}

string RawSlowQuery::GetUserName() const
{
    return m_userName;
}

void RawSlowQuery::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RawSlowQuery::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string RawSlowQuery::GetSessionStartTime() const
{
    return m_sessionStartTime;
}

void RawSlowQuery::SetSessionStartTime(const string& _sessionStartTime)
{
    m_sessionStartTime = _sessionStartTime;
    m_sessionStartTimeHasBeenSet = true;
}

bool RawSlowQuery::SessionStartTimeHasBeenSet() const
{
    return m_sessionStartTimeHasBeenSet;
}

int64_t RawSlowQuery::GetProcessId() const
{
    return m_processId;
}

void RawSlowQuery::SetProcessId(const int64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool RawSlowQuery::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string RawSlowQuery::GetSessionId() const
{
    return m_sessionId;
}

void RawSlowQuery::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool RawSlowQuery::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string RawSlowQuery::GetVirtualTransactionId() const
{
    return m_virtualTransactionId;
}

void RawSlowQuery::SetVirtualTransactionId(const string& _virtualTransactionId)
{
    m_virtualTransactionId = _virtualTransactionId;
    m_virtualTransactionIdHasBeenSet = true;
}

bool RawSlowQuery::VirtualTransactionIdHasBeenSet() const
{
    return m_virtualTransactionIdHasBeenSet;
}

string RawSlowQuery::GetSqlStateCode() const
{
    return m_sqlStateCode;
}

void RawSlowQuery::SetSqlStateCode(const string& _sqlStateCode)
{
    m_sqlStateCode = _sqlStateCode;
    m_sqlStateCodeHasBeenSet = true;
}

bool RawSlowQuery::SqlStateCodeHasBeenSet() const
{
    return m_sqlStateCodeHasBeenSet;
}

string RawSlowQuery::GetApplicationName() const
{
    return m_applicationName;
}

void RawSlowQuery::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool RawSlowQuery::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}


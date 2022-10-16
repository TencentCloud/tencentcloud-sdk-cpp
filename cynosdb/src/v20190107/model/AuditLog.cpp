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

#include <tencentcloud/cynosdb/v20190107/model/AuditLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AuditLog::AuditLog() :
    m_affectRowsHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_userHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_threadIdHasBeenSet(false)
{
}

CoreInternalOutcome AuditLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.ErrCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = value["ErrCode"].GetInt64();
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.SentRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetInt64();
        m_sentRowsHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.ThreadId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threadId = value["ThreadId"].GetInt64();
        m_threadIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errCode, allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_sentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRows, allocator);
    }

    if (m_threadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threadId, allocator);
    }

}


int64_t AuditLog::GetAffectRows() const
{
    return m_affectRows;
}

void AuditLog::SetAffectRows(const int64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditLog::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

int64_t AuditLog::GetErrCode() const
{
    return m_errCode;
}

void AuditLog::SetErrCode(const int64_t& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AuditLog::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AuditLog::GetSqlType() const
{
    return m_sqlType;
}

void AuditLog::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditLog::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string AuditLog::GetTableName() const
{
    return m_tableName;
}

void AuditLog::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool AuditLog::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string AuditLog::GetInstanceName() const
{
    return m_instanceName;
}

void AuditLog::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AuditLog::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AuditLog::GetPolicyName() const
{
    return m_policyName;
}

void AuditLog::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AuditLog::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AuditLog::GetDBName() const
{
    return m_dBName;
}

void AuditLog::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool AuditLog::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string AuditLog::GetSql() const
{
    return m_sql;
}

void AuditLog::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool AuditLog::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string AuditLog::GetHost() const
{
    return m_host;
}

void AuditLog::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AuditLog::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AuditLog::GetUser() const
{
    return m_user;
}

void AuditLog::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AuditLog::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

int64_t AuditLog::GetExecTime() const
{
    return m_execTime;
}

void AuditLog::SetExecTime(const int64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLog::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

string AuditLog::GetTimestamp() const
{
    return m_timestamp;
}

void AuditLog::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AuditLog::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t AuditLog::GetSentRows() const
{
    return m_sentRows;
}

void AuditLog::SetSentRows(const int64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool AuditLog::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
}

int64_t AuditLog::GetThreadId() const
{
    return m_threadId;
}

void AuditLog::SetThreadId(const int64_t& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool AuditLog::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}


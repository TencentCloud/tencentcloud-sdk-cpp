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

#include <tencentcloud/cdb/v20170320/model/AuditLogFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

AuditLogFilter::AuditLogFilter() :
    m_hostHasBeenSet(false),
    m_userHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_affectRowsHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogFilter::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsArray())
            return CoreInternalOutcome(Error("response `AuditLogFilter.Host` is not array type"));

        const Value &tmpValue = value["Host"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_host.push_back((*itr).GetString());
        }
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsArray())
            return CoreInternalOutcome(Error("response `AuditLogFilter.User` is not array type"));

        const Value &tmpValue = value["User"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_user.push_back((*itr).GetString());
        }
        m_userHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsArray())
            return CoreInternalOutcome(Error("response `AuditLogFilter.DBName` is not array type"));

        const Value &tmpValue = value["DBName"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBName.push_back((*itr).GetString());
        }
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsArray())
            return CoreInternalOutcome(Error("response `AuditLogFilter.TableName` is not array type"));

        const Value &tmpValue = value["TableName"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tableName.push_back((*itr).GetString());
        }
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsArray())
            return CoreInternalOutcome(Error("response `AuditLogFilter.PolicyName` is not array type"));

        const Value &tmpValue = value["PolicyName"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyName.push_back((*itr).GetString());
        }
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Error("response `AuditLogFilter.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Error("response `AuditLogFilter.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AuditLogFilter.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AuditLogFilter.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogFilter::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_host.begin(); itr != m_host.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_user.begin(); itr != m_user.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dBNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBName.begin(); itr != m_dBName.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tableName.begin(); itr != m_tableName.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_policyName.begin(); itr != m_policyName.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

}


vector<string> AuditLogFilter::GetHost() const
{
    return m_host;
}

void AuditLogFilter::SetHost(const vector<string>& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AuditLogFilter::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

vector<string> AuditLogFilter::GetUser() const
{
    return m_user;
}

void AuditLogFilter::SetUser(const vector<string>& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AuditLogFilter::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

vector<string> AuditLogFilter::GetDBName() const
{
    return m_dBName;
}

void AuditLogFilter::SetDBName(const vector<string>& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool AuditLogFilter::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

vector<string> AuditLogFilter::GetTableName() const
{
    return m_tableName;
}

void AuditLogFilter::SetTableName(const vector<string>& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool AuditLogFilter::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> AuditLogFilter::GetPolicyName() const
{
    return m_policyName;
}

void AuditLogFilter::SetPolicyName(const vector<string>& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AuditLogFilter::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string AuditLogFilter::GetSql() const
{
    return m_sql;
}

void AuditLogFilter::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool AuditLogFilter::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string AuditLogFilter::GetSqlType() const
{
    return m_sqlType;
}

void AuditLogFilter::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditLogFilter::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

int64_t AuditLogFilter::GetExecTime() const
{
    return m_execTime;
}

void AuditLogFilter::SetExecTime(const int64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLogFilter::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

int64_t AuditLogFilter::GetAffectRows() const
{
    return m_affectRows;
}

void AuditLogFilter::SetAffectRows(const int64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditLogFilter::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}


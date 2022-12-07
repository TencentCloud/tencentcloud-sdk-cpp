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

#include <tencentcloud/cynosdb/v20190107/model/AuditLogFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
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
    m_affectRowsHasBeenSet(false),
    m_sqlTypesHasBeenSet(false),
    m_sqlsHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_threadIdHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Host` is not array type"));

        const rapidjson::Value &tmpValue = value["Host"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_host.push_back((*itr).GetString());
        }
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.User` is not array type"));

        const rapidjson::Value &tmpValue = value["User"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_user.push_back((*itr).GetString());
        }
        m_userHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.DBName` is not array type"));

        const rapidjson::Value &tmpValue = value["DBName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBName.push_back((*itr).GetString());
        }
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.TableName` is not array type"));

        const rapidjson::Value &tmpValue = value["TableName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tableName.push_back((*itr).GetString());
        }
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.PolicyName` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyName.push_back((*itr).GetString());
        }
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("SqlTypes") && !value["SqlTypes"].IsNull())
    {
        if (!value["SqlTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.SqlTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SqlTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sqlTypes.push_back((*itr).GetString());
        }
        m_sqlTypesHasBeenSet = true;
    }

    if (value.HasMember("Sqls") && !value["Sqls"].IsNull())
    {
        if (!value["Sqls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Sqls` is not array type"));

        const rapidjson::Value &tmpValue = value["Sqls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sqls.push_back((*itr).GetString());
        }
        m_sqlsHasBeenSet = true;
    }

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.SentRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetUint64();
        m_sentRowsHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.ThreadId` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreadId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threadId.push_back((*itr).GetString());
        }
        m_threadIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_host.begin(); itr != m_host.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_user.begin(); itr != m_user.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBName.begin(); itr != m_dBName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableName.begin(); itr != m_tableName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyName.begin(); itr != m_policyName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_sqlTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqlTypes.begin(); itr != m_sqlTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sqlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sqls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqls.begin(); itr != m_sqls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_threadId.begin(); itr != m_threadId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

vector<string> AuditLogFilter::GetSqlTypes() const
{
    return m_sqlTypes;
}

void AuditLogFilter::SetSqlTypes(const vector<string>& _sqlTypes)
{
    m_sqlTypes = _sqlTypes;
    m_sqlTypesHasBeenSet = true;
}

bool AuditLogFilter::SqlTypesHasBeenSet() const
{
    return m_sqlTypesHasBeenSet;
}

vector<string> AuditLogFilter::GetSqls() const
{
    return m_sqls;
}

void AuditLogFilter::SetSqls(const vector<string>& _sqls)
{
    m_sqls = _sqls;
    m_sqlsHasBeenSet = true;
}

bool AuditLogFilter::SqlsHasBeenSet() const
{
    return m_sqlsHasBeenSet;
}

uint64_t AuditLogFilter::GetSentRows() const
{
    return m_sentRows;
}

void AuditLogFilter::SetSentRows(const uint64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool AuditLogFilter::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
}

vector<string> AuditLogFilter::GetThreadId() const
{
    return m_threadId;
}

void AuditLogFilter::SetThreadId(const vector<string>& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool AuditLogFilter::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}


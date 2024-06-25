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
    m_threadIdHasBeenSet(false),
    m_checkRowsHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_ioWaitTimeHasBeenSet(false),
    m_lockWaitTimeHasBeenSet(false),
    m_trxLivingTimeHasBeenSet(false),
    m_nsTimeHasBeenSet(false),
    m_templateInfoHasBeenSet(false),
    m_trxIdHasBeenSet(false)
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

    if (value.HasMember("CheckRows") && !value["CheckRows"].IsNull())
    {
        if (!value["CheckRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.CheckRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRows = value["CheckRows"].GetInt64();
        m_checkRowsHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.CpuTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTime = value["CpuTime"].GetDouble();
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTime") && !value["IoWaitTime"].IsNull())
    {
        if (!value["IoWaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.IoWaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTime = value["IoWaitTime"].GetInt64();
        m_ioWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTime") && !value["LockWaitTime"].IsNull())
    {
        if (!value["LockWaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.LockWaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTime = value["LockWaitTime"].GetInt64();
        m_lockWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("TrxLivingTime") && !value["TrxLivingTime"].IsNull())
    {
        if (!value["TrxLivingTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.TrxLivingTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trxLivingTime = value["TrxLivingTime"].GetInt64();
        m_trxLivingTimeHasBeenSet = true;
    }

    if (value.HasMember("NsTime") && !value["NsTime"].IsNull())
    {
        if (!value["NsTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.NsTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nsTime = value["NsTime"].GetInt64();
        m_nsTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateInfo") && !value["TemplateInfo"].IsNull())
    {
        if (!value["TemplateInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLog.TemplateInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogRuleTemplateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateInfo.push_back(item);
        }
        m_templateInfoHasBeenSet = true;
    }

    if (value.HasMember("TrxId") && !value["TrxId"].IsNull())
    {
        if (!value["TrxId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.TrxId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trxId = value["TrxId"].GetInt64();
        m_trxIdHasBeenSet = true;
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

    if (m_checkRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkRows, allocator);
    }

    if (m_cpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTime, allocator);
    }

    if (m_ioWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ioWaitTime, allocator);
    }

    if (m_lockWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockWaitTime, allocator);
    }

    if (m_trxLivingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrxLivingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trxLivingTime, allocator);
    }

    if (m_nsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nsTime, allocator);
    }

    if (m_templateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateInfo.begin(); itr != m_templateInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_trxIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trxId, allocator);
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

int64_t AuditLog::GetCheckRows() const
{
    return m_checkRows;
}

void AuditLog::SetCheckRows(const int64_t& _checkRows)
{
    m_checkRows = _checkRows;
    m_checkRowsHasBeenSet = true;
}

bool AuditLog::CheckRowsHasBeenSet() const
{
    return m_checkRowsHasBeenSet;
}

double AuditLog::GetCpuTime() const
{
    return m_cpuTime;
}

void AuditLog::SetCpuTime(const double& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool AuditLog::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

int64_t AuditLog::GetIoWaitTime() const
{
    return m_ioWaitTime;
}

void AuditLog::SetIoWaitTime(const int64_t& _ioWaitTime)
{
    m_ioWaitTime = _ioWaitTime;
    m_ioWaitTimeHasBeenSet = true;
}

bool AuditLog::IoWaitTimeHasBeenSet() const
{
    return m_ioWaitTimeHasBeenSet;
}

int64_t AuditLog::GetLockWaitTime() const
{
    return m_lockWaitTime;
}

void AuditLog::SetLockWaitTime(const int64_t& _lockWaitTime)
{
    m_lockWaitTime = _lockWaitTime;
    m_lockWaitTimeHasBeenSet = true;
}

bool AuditLog::LockWaitTimeHasBeenSet() const
{
    return m_lockWaitTimeHasBeenSet;
}

int64_t AuditLog::GetTrxLivingTime() const
{
    return m_trxLivingTime;
}

void AuditLog::SetTrxLivingTime(const int64_t& _trxLivingTime)
{
    m_trxLivingTime = _trxLivingTime;
    m_trxLivingTimeHasBeenSet = true;
}

bool AuditLog::TrxLivingTimeHasBeenSet() const
{
    return m_trxLivingTimeHasBeenSet;
}

int64_t AuditLog::GetNsTime() const
{
    return m_nsTime;
}

void AuditLog::SetNsTime(const int64_t& _nsTime)
{
    m_nsTime = _nsTime;
    m_nsTimeHasBeenSet = true;
}

bool AuditLog::NsTimeHasBeenSet() const
{
    return m_nsTimeHasBeenSet;
}

vector<LogRuleTemplateInfo> AuditLog::GetTemplateInfo() const
{
    return m_templateInfo;
}

void AuditLog::SetTemplateInfo(const vector<LogRuleTemplateInfo>& _templateInfo)
{
    m_templateInfo = _templateInfo;
    m_templateInfoHasBeenSet = true;
}

bool AuditLog::TemplateInfoHasBeenSet() const
{
    return m_templateInfoHasBeenSet;
}

int64_t AuditLog::GetTrxId() const
{
    return m_trxId;
}

void AuditLog::SetTrxId(const int64_t& _trxId)
{
    m_trxId = _trxId;
    m_trxIdHasBeenSet = true;
}

bool AuditLog::TrxIdHasBeenSet() const
{
    return m_trxIdHasBeenSet;
}


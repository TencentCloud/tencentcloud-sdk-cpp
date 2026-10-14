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

#include <tencentcloud/dbbrain/v20210527/model/AuditDBLogItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AuditDBLogItem::AuditDBLogItem() :
    m_timestampHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_checkRowsHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_setHostHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_setNameHasBeenSet(false),
    m_ioWaitTimeHasBeenSet(false),
    m_lockWaitTimeHasBeenSet(false),
    m_sqlStartTimeNsHasBeenSet(false),
    m_queryIdHasBeenSet(false),
    m_queryNoHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_sqlTemplateIdHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_tablesHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_sqlStartTimeHasBeenSet(false),
    m_trxLivingTimeHasBeenSet(false),
    m_userHasBeenSet(false),
    m_trxIdHasBeenSet(false),
    m_internalXIdHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_flowTimeHasBeenSet(false)
{
}

CoreInternalOutcome AuditDBLogItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("CheckRows") && !value["CheckRows"].IsNull())
    {
        if (!value["CheckRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.CheckRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRows = value["CheckRows"].GetInt64();
        m_checkRowsHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.CpuTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTime = value["CpuTime"].GetInt64();
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("SetHost") && !value["SetHost"].IsNull())
    {
        if (!value["SetHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SetHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setHost = string(value["SetHost"].GetString());
        m_setHostHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("SetName") && !value["SetName"].IsNull())
    {
        if (!value["SetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setName = string(value["SetName"].GetString());
        m_setNameHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTime") && !value["IoWaitTime"].IsNull())
    {
        if (!value["IoWaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.IoWaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTime = value["IoWaitTime"].GetInt64();
        m_ioWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTime") && !value["LockWaitTime"].IsNull())
    {
        if (!value["LockWaitTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.LockWaitTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTime = value["LockWaitTime"].GetInt64();
        m_lockWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("SqlStartTimeNs") && !value["SqlStartTimeNs"].IsNull())
    {
        if (!value["SqlStartTimeNs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SqlStartTimeNs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStartTimeNs = value["SqlStartTimeNs"].GetInt64();
        m_sqlStartTimeNsHasBeenSet = true;
    }

    if (value.HasMember("QueryId") && !value["QueryId"].IsNull())
    {
        if (!value["QueryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.QueryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryId = string(value["QueryId"].GetString());
        m_queryIdHasBeenSet = true;
    }

    if (value.HasMember("QueryNo") && !value["QueryNo"].IsNull())
    {
        if (!value["QueryNo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.QueryNo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queryNo = value["QueryNo"].GetInt64();
        m_queryNoHasBeenSet = true;
    }

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SentRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetInt64();
        m_sentRowsHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplateId") && !value["SqlTemplateId"].IsNull())
    {
        if (!value["SqlTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SqlTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplateId = string(value["SqlTemplateId"].GetString());
        m_sqlTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.Tables` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tables = string(value["Tables"].GetString());
        m_tablesHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.ThreadId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threadId = string(value["ThreadId"].GetString());
        m_threadIdHasBeenSet = true;
    }

    if (value.HasMember("SqlStartTime") && !value["SqlStartTime"].IsNull())
    {
        if (!value["SqlStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.SqlStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStartTime = value["SqlStartTime"].GetInt64();
        m_sqlStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TrxLivingTime") && !value["TrxLivingTime"].IsNull())
    {
        if (!value["TrxLivingTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.TrxLivingTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trxLivingTime = value["TrxLivingTime"].GetInt64();
        m_trxLivingTimeHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("TrxId") && !value["TrxId"].IsNull())
    {
        if (!value["TrxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.TrxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trxId = string(value["TrxId"].GetString());
        m_trxIdHasBeenSet = true;
    }

    if (value.HasMember("InternalXId") && !value["InternalXId"].IsNull())
    {
        if (!value["InternalXId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.InternalXId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalXId = string(value["InternalXId"].GetString());
        m_internalXIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessCode") && !value["BusinessCode"].IsNull())
    {
        if (!value["BusinessCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.BusinessCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessCode = string(value["BusinessCode"].GetString());
        m_businessCodeHasBeenSet = true;
    }

    if (value.HasMember("FlowTime") && !value["FlowTime"].IsNull())
    {
        if (!value["FlowTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditDBLogItem.FlowTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowTime = value["FlowTime"].GetInt64();
        m_flowTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditDBLogItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
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

    if (m_setHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setHost.c_str(), allocator).Move(), allocator);
    }

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_setNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_setName.c_str(), allocator).Move(), allocator);
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

    if (m_sqlStartTimeNsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStartTimeNs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlStartTimeNs, allocator);
    }

    if (m_queryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryNo, allocator);
    }

    if (m_sentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRows, allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tables.c_str(), allocator).Move(), allocator);
    }

    if (m_threadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threadId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlStartTime, allocator);
    }

    if (m_trxLivingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrxLivingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trxLivingTime, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_trxIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trxId.c_str(), allocator).Move(), allocator);
    }

    if (m_internalXIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalXId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalXId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowTime, allocator);
    }

}


string AuditDBLogItem::GetTimestamp() const
{
    return m_timestamp;
}

void AuditDBLogItem::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool AuditDBLogItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string AuditDBLogItem::GetClusterId() const
{
    return m_clusterId;
}

void AuditDBLogItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AuditDBLogItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t AuditDBLogItem::GetAffectRows() const
{
    return m_affectRows;
}

void AuditDBLogItem::SetAffectRows(const int64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditDBLogItem::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

int64_t AuditDBLogItem::GetCheckRows() const
{
    return m_checkRows;
}

void AuditDBLogItem::SetCheckRows(const int64_t& _checkRows)
{
    m_checkRows = _checkRows;
    m_checkRowsHasBeenSet = true;
}

bool AuditDBLogItem::CheckRowsHasBeenSet() const
{
    return m_checkRowsHasBeenSet;
}

int64_t AuditDBLogItem::GetCpuTime() const
{
    return m_cpuTime;
}

void AuditDBLogItem::SetCpuTime(const int64_t& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool AuditDBLogItem::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

string AuditDBLogItem::GetSetHost() const
{
    return m_setHost;
}

void AuditDBLogItem::SetSetHost(const string& _setHost)
{
    m_setHost = _setHost;
    m_setHostHasBeenSet = true;
}

bool AuditDBLogItem::SetHostHasBeenSet() const
{
    return m_setHostHasBeenSet;
}

string AuditDBLogItem::GetDBName() const
{
    return m_dBName;
}

void AuditDBLogItem::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool AuditDBLogItem::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string AuditDBLogItem::GetErrCode() const
{
    return m_errCode;
}

void AuditDBLogItem::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AuditDBLogItem::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

int64_t AuditDBLogItem::GetExecTime() const
{
    return m_execTime;
}

void AuditDBLogItem::SetExecTime(const int64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditDBLogItem::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

string AuditDBLogItem::GetHost() const
{
    return m_host;
}

void AuditDBLogItem::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AuditDBLogItem::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AuditDBLogItem::GetSetName() const
{
    return m_setName;
}

void AuditDBLogItem::SetSetName(const string& _setName)
{
    m_setName = _setName;
    m_setNameHasBeenSet = true;
}

bool AuditDBLogItem::SetNameHasBeenSet() const
{
    return m_setNameHasBeenSet;
}

int64_t AuditDBLogItem::GetIoWaitTime() const
{
    return m_ioWaitTime;
}

void AuditDBLogItem::SetIoWaitTime(const int64_t& _ioWaitTime)
{
    m_ioWaitTime = _ioWaitTime;
    m_ioWaitTimeHasBeenSet = true;
}

bool AuditDBLogItem::IoWaitTimeHasBeenSet() const
{
    return m_ioWaitTimeHasBeenSet;
}

int64_t AuditDBLogItem::GetLockWaitTime() const
{
    return m_lockWaitTime;
}

void AuditDBLogItem::SetLockWaitTime(const int64_t& _lockWaitTime)
{
    m_lockWaitTime = _lockWaitTime;
    m_lockWaitTimeHasBeenSet = true;
}

bool AuditDBLogItem::LockWaitTimeHasBeenSet() const
{
    return m_lockWaitTimeHasBeenSet;
}

int64_t AuditDBLogItem::GetSqlStartTimeNs() const
{
    return m_sqlStartTimeNs;
}

void AuditDBLogItem::SetSqlStartTimeNs(const int64_t& _sqlStartTimeNs)
{
    m_sqlStartTimeNs = _sqlStartTimeNs;
    m_sqlStartTimeNsHasBeenSet = true;
}

bool AuditDBLogItem::SqlStartTimeNsHasBeenSet() const
{
    return m_sqlStartTimeNsHasBeenSet;
}

string AuditDBLogItem::GetQueryId() const
{
    return m_queryId;
}

void AuditDBLogItem::SetQueryId(const string& _queryId)
{
    m_queryId = _queryId;
    m_queryIdHasBeenSet = true;
}

bool AuditDBLogItem::QueryIdHasBeenSet() const
{
    return m_queryIdHasBeenSet;
}

int64_t AuditDBLogItem::GetQueryNo() const
{
    return m_queryNo;
}

void AuditDBLogItem::SetQueryNo(const int64_t& _queryNo)
{
    m_queryNo = _queryNo;
    m_queryNoHasBeenSet = true;
}

bool AuditDBLogItem::QueryNoHasBeenSet() const
{
    return m_queryNoHasBeenSet;
}

int64_t AuditDBLogItem::GetSentRows() const
{
    return m_sentRows;
}

void AuditDBLogItem::SetSentRows(const int64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool AuditDBLogItem::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
}

string AuditDBLogItem::GetSql() const
{
    return m_sql;
}

void AuditDBLogItem::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool AuditDBLogItem::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string AuditDBLogItem::GetSqlTemplateId() const
{
    return m_sqlTemplateId;
}

void AuditDBLogItem::SetSqlTemplateId(const string& _sqlTemplateId)
{
    m_sqlTemplateId = _sqlTemplateId;
    m_sqlTemplateIdHasBeenSet = true;
}

bool AuditDBLogItem::SqlTemplateIdHasBeenSet() const
{
    return m_sqlTemplateIdHasBeenSet;
}

string AuditDBLogItem::GetSqlType() const
{
    return m_sqlType;
}

void AuditDBLogItem::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditDBLogItem::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string AuditDBLogItem::GetTables() const
{
    return m_tables;
}

void AuditDBLogItem::SetTables(const string& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool AuditDBLogItem::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

string AuditDBLogItem::GetThreadId() const
{
    return m_threadId;
}

void AuditDBLogItem::SetThreadId(const string& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool AuditDBLogItem::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}

int64_t AuditDBLogItem::GetSqlStartTime() const
{
    return m_sqlStartTime;
}

void AuditDBLogItem::SetSqlStartTime(const int64_t& _sqlStartTime)
{
    m_sqlStartTime = _sqlStartTime;
    m_sqlStartTimeHasBeenSet = true;
}

bool AuditDBLogItem::SqlStartTimeHasBeenSet() const
{
    return m_sqlStartTimeHasBeenSet;
}

int64_t AuditDBLogItem::GetTrxLivingTime() const
{
    return m_trxLivingTime;
}

void AuditDBLogItem::SetTrxLivingTime(const int64_t& _trxLivingTime)
{
    m_trxLivingTime = _trxLivingTime;
    m_trxLivingTimeHasBeenSet = true;
}

bool AuditDBLogItem::TrxLivingTimeHasBeenSet() const
{
    return m_trxLivingTimeHasBeenSet;
}

string AuditDBLogItem::GetUser() const
{
    return m_user;
}

void AuditDBLogItem::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AuditDBLogItem::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AuditDBLogItem::GetTrxId() const
{
    return m_trxId;
}

void AuditDBLogItem::SetTrxId(const string& _trxId)
{
    m_trxId = _trxId;
    m_trxIdHasBeenSet = true;
}

bool AuditDBLogItem::TrxIdHasBeenSet() const
{
    return m_trxIdHasBeenSet;
}

string AuditDBLogItem::GetInternalXId() const
{
    return m_internalXId;
}

void AuditDBLogItem::SetInternalXId(const string& _internalXId)
{
    m_internalXId = _internalXId;
    m_internalXIdHasBeenSet = true;
}

bool AuditDBLogItem::InternalXIdHasBeenSet() const
{
    return m_internalXIdHasBeenSet;
}

string AuditDBLogItem::GetBusinessCode() const
{
    return m_businessCode;
}

void AuditDBLogItem::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool AuditDBLogItem::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

int64_t AuditDBLogItem::GetFlowTime() const
{
    return m_flowTime;
}

void AuditDBLogItem::SetFlowTime(const int64_t& _flowTime)
{
    m_flowTime = _flowTime;
    m_flowTimeHasBeenSet = true;
}

bool AuditDBLogItem::FlowTimeHasBeenSet() const
{
    return m_flowTimeHasBeenSet;
}


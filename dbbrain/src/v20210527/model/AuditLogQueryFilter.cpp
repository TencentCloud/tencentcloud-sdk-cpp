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

#include <tencentcloud/dbbrain/v20210527/model/AuditLogQueryFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AuditLogQueryFilter::AuditLogQueryFilter() :
    m_sqlTypeHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_ioWaitTimeHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_lockWaitTimeHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errInfoHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_proxyHostListHasBeenSet(false),
    m_setHostListHasBeenSet(false),
    m_setIdListHasBeenSet(false),
    m_multiSqlHasBeenSet(false),
    m_excludeMultiSqlHasBeenSet(false),
    m_sqlTemplateIdHasBeenSet(false),
    m_sqlStartTimeHasBeenSet(false),
    m_queryIdHasBeenSet(false)
{
}

CoreInternalOutcome AuditLogQueryFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.SqlType` is not array type"));

        const rapidjson::Value &tmpValue = value["SqlType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sqlType.push_back((*itr).GetString());
        }
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ExecTime` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_execTime.push_back((*itr).GetInt64());
        }
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTime") && !value["IoWaitTime"].IsNull())
    {
        if (!value["IoWaitTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.IoWaitTime` is not array type"));

        const rapidjson::Value &tmpValue = value["IoWaitTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ioWaitTime.push_back((*itr).GetInt64());
        }
        m_ioWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.CpuTime` is not array type"));

        const rapidjson::Value &tmpValue = value["CpuTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cpuTime.push_back((*itr).GetInt64());
        }
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTime") && !value["LockWaitTime"].IsNull())
    {
        if (!value["LockWaitTime"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.LockWaitTime` is not array type"));

        const rapidjson::Value &tmpValue = value["LockWaitTime"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lockWaitTime.push_back((*itr).GetInt64());
        }
        m_lockWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrInfo") && !value["ErrInfo"].IsNull())
    {
        if (!value["ErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errInfo = string(value["ErrInfo"].GetString());
        m_errInfoHasBeenSet = true;
    }

    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.DBName` is not array type"));

        const rapidjson::Value &tmpValue = value["DBName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBName.push_back((*itr).GetString());
        }
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.User` is not array type"));

        const rapidjson::Value &tmpValue = value["User"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_user.push_back((*itr).GetString());
        }
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.Host` is not array type"));

        const rapidjson::Value &tmpValue = value["Host"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_host.push_back((*itr).GetString());
        }
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("ThreadId") && !value["ThreadId"].IsNull())
    {
        if (!value["ThreadId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ThreadId` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreadId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_threadId.push_back((*itr).GetString());
        }
        m_threadIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyHostList") && !value["ProxyHostList"].IsNull())
    {
        if (!value["ProxyHostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ProxyHostList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyHostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_proxyHostList.push_back((*itr).GetString());
        }
        m_proxyHostListHasBeenSet = true;
    }

    if (value.HasMember("SetHostList") && !value["SetHostList"].IsNull())
    {
        if (!value["SetHostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.SetHostList` is not array type"));

        const rapidjson::Value &tmpValue = value["SetHostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_setHostList.push_back((*itr).GetString());
        }
        m_setHostListHasBeenSet = true;
    }

    if (value.HasMember("SetIdList") && !value["SetIdList"].IsNull())
    {
        if (!value["SetIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.SetIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["SetIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_setIdList.push_back((*itr).GetString());
        }
        m_setIdListHasBeenSet = true;
    }

    if (value.HasMember("MultiSql") && !value["MultiSql"].IsNull())
    {
        if (!value["MultiSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.MultiSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiSql = string(value["MultiSql"].GetString());
        m_multiSqlHasBeenSet = true;
    }

    if (value.HasMember("ExcludeMultiSql") && !value["ExcludeMultiSql"].IsNull())
    {
        if (!value["ExcludeMultiSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.ExcludeMultiSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_excludeMultiSql = string(value["ExcludeMultiSql"].GetString());
        m_excludeMultiSqlHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplateId") && !value["SqlTemplateId"].IsNull())
    {
        if (!value["SqlTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.SqlTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplateId = string(value["SqlTemplateId"].GetString());
        m_sqlTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SqlStartTime") && !value["SqlStartTime"].IsNull())
    {
        if (!value["SqlStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.SqlStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlStartTime = string(value["SqlStartTime"].GetString());
        m_sqlStartTimeHasBeenSet = true;
    }

    if (value.HasMember("QueryId") && !value["QueryId"].IsNull())
    {
        if (!value["QueryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogQueryFilter.QueryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryId = string(value["QueryId"].GetString());
        m_queryIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditLogQueryFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sqlType.begin(); itr != m_sqlType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_execTime.begin(); itr != m_execTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_ioWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ioWaitTime.begin(); itr != m_ioWaitTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cpuTime.begin(); itr != m_cpuTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_lockWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lockWaitTime.begin(); itr != m_lockWaitTime.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errInfo.c_str(), allocator).Move(), allocator);
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

    if (m_proxyHostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyHostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyHostList.begin(); itr != m_proxyHostList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setHostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetHostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_setHostList.begin(); itr != m_setHostList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_setIdList.begin(); itr != m_setIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_multiSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiSql.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeMultiSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeMultiSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_excludeMultiSql.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryId.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AuditLogQueryFilter::GetSqlType() const
{
    return m_sqlType;
}

void AuditLogQueryFilter::SetSqlType(const vector<string>& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool AuditLogQueryFilter::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

vector<int64_t> AuditLogQueryFilter::GetExecTime() const
{
    return m_execTime;
}

void AuditLogQueryFilter::SetExecTime(const vector<int64_t>& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLogQueryFilter::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

vector<int64_t> AuditLogQueryFilter::GetIoWaitTime() const
{
    return m_ioWaitTime;
}

void AuditLogQueryFilter::SetIoWaitTime(const vector<int64_t>& _ioWaitTime)
{
    m_ioWaitTime = _ioWaitTime;
    m_ioWaitTimeHasBeenSet = true;
}

bool AuditLogQueryFilter::IoWaitTimeHasBeenSet() const
{
    return m_ioWaitTimeHasBeenSet;
}

vector<int64_t> AuditLogQueryFilter::GetCpuTime() const
{
    return m_cpuTime;
}

void AuditLogQueryFilter::SetCpuTime(const vector<int64_t>& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool AuditLogQueryFilter::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

vector<int64_t> AuditLogQueryFilter::GetLockWaitTime() const
{
    return m_lockWaitTime;
}

void AuditLogQueryFilter::SetLockWaitTime(const vector<int64_t>& _lockWaitTime)
{
    m_lockWaitTime = _lockWaitTime;
    m_lockWaitTimeHasBeenSet = true;
}

bool AuditLogQueryFilter::LockWaitTimeHasBeenSet() const
{
    return m_lockWaitTimeHasBeenSet;
}

string AuditLogQueryFilter::GetErrCode() const
{
    return m_errCode;
}

void AuditLogQueryFilter::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool AuditLogQueryFilter::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string AuditLogQueryFilter::GetErrInfo() const
{
    return m_errInfo;
}

void AuditLogQueryFilter::SetErrInfo(const string& _errInfo)
{
    m_errInfo = _errInfo;
    m_errInfoHasBeenSet = true;
}

bool AuditLogQueryFilter::ErrInfoHasBeenSet() const
{
    return m_errInfoHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetDBName() const
{
    return m_dBName;
}

void AuditLogQueryFilter::SetDBName(const vector<string>& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool AuditLogQueryFilter::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetUser() const
{
    return m_user;
}

void AuditLogQueryFilter::SetUser(const vector<string>& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AuditLogQueryFilter::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetHost() const
{
    return m_host;
}

void AuditLogQueryFilter::SetHost(const vector<string>& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AuditLogQueryFilter::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetThreadId() const
{
    return m_threadId;
}

void AuditLogQueryFilter::SetThreadId(const vector<string>& _threadId)
{
    m_threadId = _threadId;
    m_threadIdHasBeenSet = true;
}

bool AuditLogQueryFilter::ThreadIdHasBeenSet() const
{
    return m_threadIdHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetProxyHostList() const
{
    return m_proxyHostList;
}

void AuditLogQueryFilter::SetProxyHostList(const vector<string>& _proxyHostList)
{
    m_proxyHostList = _proxyHostList;
    m_proxyHostListHasBeenSet = true;
}

bool AuditLogQueryFilter::ProxyHostListHasBeenSet() const
{
    return m_proxyHostListHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetSetHostList() const
{
    return m_setHostList;
}

void AuditLogQueryFilter::SetSetHostList(const vector<string>& _setHostList)
{
    m_setHostList = _setHostList;
    m_setHostListHasBeenSet = true;
}

bool AuditLogQueryFilter::SetHostListHasBeenSet() const
{
    return m_setHostListHasBeenSet;
}

vector<string> AuditLogQueryFilter::GetSetIdList() const
{
    return m_setIdList;
}

void AuditLogQueryFilter::SetSetIdList(const vector<string>& _setIdList)
{
    m_setIdList = _setIdList;
    m_setIdListHasBeenSet = true;
}

bool AuditLogQueryFilter::SetIdListHasBeenSet() const
{
    return m_setIdListHasBeenSet;
}

string AuditLogQueryFilter::GetMultiSql() const
{
    return m_multiSql;
}

void AuditLogQueryFilter::SetMultiSql(const string& _multiSql)
{
    m_multiSql = _multiSql;
    m_multiSqlHasBeenSet = true;
}

bool AuditLogQueryFilter::MultiSqlHasBeenSet() const
{
    return m_multiSqlHasBeenSet;
}

string AuditLogQueryFilter::GetExcludeMultiSql() const
{
    return m_excludeMultiSql;
}

void AuditLogQueryFilter::SetExcludeMultiSql(const string& _excludeMultiSql)
{
    m_excludeMultiSql = _excludeMultiSql;
    m_excludeMultiSqlHasBeenSet = true;
}

bool AuditLogQueryFilter::ExcludeMultiSqlHasBeenSet() const
{
    return m_excludeMultiSqlHasBeenSet;
}

string AuditLogQueryFilter::GetSqlTemplateId() const
{
    return m_sqlTemplateId;
}

void AuditLogQueryFilter::SetSqlTemplateId(const string& _sqlTemplateId)
{
    m_sqlTemplateId = _sqlTemplateId;
    m_sqlTemplateIdHasBeenSet = true;
}

bool AuditLogQueryFilter::SqlTemplateIdHasBeenSet() const
{
    return m_sqlTemplateIdHasBeenSet;
}

string AuditLogQueryFilter::GetSqlStartTime() const
{
    return m_sqlStartTime;
}

void AuditLogQueryFilter::SetSqlStartTime(const string& _sqlStartTime)
{
    m_sqlStartTime = _sqlStartTime;
    m_sqlStartTimeHasBeenSet = true;
}

bool AuditLogQueryFilter::SqlStartTimeHasBeenSet() const
{
    return m_sqlStartTimeHasBeenSet;
}

string AuditLogQueryFilter::GetQueryId() const
{
    return m_queryId;
}

void AuditLogQueryFilter::SetQueryId(const string& _queryId)
{
    m_queryId = _queryId;
    m_queryIdHasBeenSet = true;
}

bool AuditLogQueryFilter::QueryIdHasBeenSet() const
{
    return m_queryIdHasBeenSet;
}


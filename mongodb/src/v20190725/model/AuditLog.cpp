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

#include <tencentcloud/mongodb/v20190725/model/AuditLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

AuditLog::AuditLog() :
    m_affectRowsHasBeenSet(false),
    m_atypeHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome AuditLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.AffectRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetUint64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("Atype") && !value["Atype"].IsNull())
    {
        if (!value["Atype"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Atype` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_atype = string(value["Atype"].GetString());
        m_atypeHasBeenSet = true;
    }

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.ExecTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetUint64();
        m_execTimeHasBeenSet = true;
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

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.Roles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roles = string(value["Roles"].GetString());
        m_rolesHasBeenSet = true;
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

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLog.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
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

    if (m_atypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Atype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_atype.c_str(), allocator).Move(), allocator);
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

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roles.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AuditLog::GetAffectRows() const
{
    return m_affectRows;
}

void AuditLog::SetAffectRows(const uint64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditLog::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

string AuditLog::GetAtype() const
{
    return m_atype;
}

void AuditLog::SetAtype(const string& _atype)
{
    m_atype = _atype;
    m_atypeHasBeenSet = true;
}

bool AuditLog::AtypeHasBeenSet() const
{
    return m_atypeHasBeenSet;
}

uint64_t AuditLog::GetExecTime() const
{
    return m_execTime;
}

void AuditLog::SetExecTime(const uint64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLog::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
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

string AuditLog::GetParam() const
{
    return m_param;
}

void AuditLog::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AuditLog::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

int64_t AuditLog::GetResult() const
{
    return m_result;
}

void AuditLog::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AuditLog::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string AuditLog::GetRoles() const
{
    return m_roles;
}

void AuditLog::SetRoles(const string& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool AuditLog::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
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


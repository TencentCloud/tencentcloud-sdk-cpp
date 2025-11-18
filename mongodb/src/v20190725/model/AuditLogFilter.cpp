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

#include <tencentcloud/mongodb/v20190725/model/AuditLogFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

AuditLogFilter::AuditLogFilter() :
    m_hostHasBeenSet(false),
    m_userHasBeenSet(false),
    m_execTimeHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_atypeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_paramHasBeenSet(false)
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

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.ExecTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetUint64();
        m_execTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.AffectRows` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetUint64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("Atype") && !value["Atype"].IsNull())
    {
        if (!value["Atype"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Atype` is not array type"));

        const rapidjson::Value &tmpValue = value["Atype"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_atype.push_back((*itr).GetString());
        }
        m_atypeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Result` is not array type"));

        const rapidjson::Value &tmpValue = value["Result"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_result.push_back((*itr).GetString());
        }
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.Param` is not array type"));

        const rapidjson::Value &tmpValue = value["Param"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_param.push_back((*itr).GetString());
        }
        m_paramHasBeenSet = true;
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

    if (m_atypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Atype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_atype.begin(); itr != m_atype.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_param.begin(); itr != m_param.end(); ++itr)
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

uint64_t AuditLogFilter::GetExecTime() const
{
    return m_execTime;
}

void AuditLogFilter::SetExecTime(const uint64_t& _execTime)
{
    m_execTime = _execTime;
    m_execTimeHasBeenSet = true;
}

bool AuditLogFilter::ExecTimeHasBeenSet() const
{
    return m_execTimeHasBeenSet;
}

uint64_t AuditLogFilter::GetAffectRows() const
{
    return m_affectRows;
}

void AuditLogFilter::SetAffectRows(const uint64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool AuditLogFilter::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

vector<string> AuditLogFilter::GetAtype() const
{
    return m_atype;
}

void AuditLogFilter::SetAtype(const vector<string>& _atype)
{
    m_atype = _atype;
    m_atypeHasBeenSet = true;
}

bool AuditLogFilter::AtypeHasBeenSet() const
{
    return m_atypeHasBeenSet;
}

vector<string> AuditLogFilter::GetResult() const
{
    return m_result;
}

void AuditLogFilter::SetResult(const vector<string>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AuditLogFilter::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<string> AuditLogFilter::GetParam() const
{
    return m_param;
}

void AuditLogFilter::SetParam(const vector<string>& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AuditLogFilter::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}


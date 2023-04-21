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

#include <tencentcloud/dbbrain/v20210527/model/AuditLogFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AuditLogFilter::AuditLogFilter() :
    m_hostHasBeenSet(false),
    m_dBNameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_execTimeHasBeenSet(false)
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

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.SentRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetInt64();
        m_sentRowsHasBeenSet = true;
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

    if (value.HasMember("ExecTime") && !value["ExecTime"].IsNull())
    {
        if (!value["ExecTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditLogFilter.ExecTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTime = value["ExecTime"].GetInt64();
        m_execTimeHasBeenSet = true;
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

    if (m_sentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRows, allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_execTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTime, allocator);
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

int64_t AuditLogFilter::GetSentRows() const
{
    return m_sentRows;
}

void AuditLogFilter::SetSentRows(const int64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool AuditLogFilter::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
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


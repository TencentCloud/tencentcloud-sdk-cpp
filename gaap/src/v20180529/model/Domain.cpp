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

#include <tencentcloud/gaap/v20180529/model/Domain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

Domain::Domain() :
    m_domainIdHasBeenSet(false),
    m_fullDomainHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_proxyCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_banStatusHasBeenSet(false)
{
}

CoreInternalOutcome Domain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("FullDomain") && !value["FullDomain"].IsNull())
    {
        if (!value["FullDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.FullDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullDomain = string(value["FullDomain"].GetString());
        m_fullDomainHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("ProxyCount") && !value["ProxyCount"].IsNull())
    {
        if (!value["ProxyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.ProxyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyCount = value["ProxyCount"].GetUint64();
        m_proxyCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Domain.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("BanStatus") && !value["BanStatus"].IsNull())
    {
        if (!value["BanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.BanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banStatus = string(value["BanStatus"].GetString());
        m_banStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Domain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_fullDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_banStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banStatus.c_str(), allocator).Move(), allocator);
    }

}


string Domain::GetDomainId() const
{
    return m_domainId;
}

void Domain::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool Domain::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string Domain::GetFullDomain() const
{
    return m_fullDomain;
}

void Domain::SetFullDomain(const string& _fullDomain)
{
    m_fullDomain = _fullDomain;
    m_fullDomainHasBeenSet = true;
}

bool Domain::FullDomainHasBeenSet() const
{
    return m_fullDomainHasBeenSet;
}

string Domain::GetAlias() const
{
    return m_alias;
}

void Domain::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool Domain::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string Domain::GetType() const
{
    return m_type;
}

void Domain::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Domain::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t Domain::GetStatus() const
{
    return m_status;
}

void Domain::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Domain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Domain::GetProjectId() const
{
    return m_projectId;
}

void Domain::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Domain::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Domain::GetDefaultValue() const
{
    return m_defaultValue;
}

void Domain::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool Domain::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

uint64_t Domain::GetProxyCount() const
{
    return m_proxyCount;
}

void Domain::SetProxyCount(const uint64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool Domain::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

uint64_t Domain::GetCreateTime() const
{
    return m_createTime;
}

void Domain::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Domain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t Domain::GetUpdateTime() const
{
    return m_updateTime;
}

void Domain::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Domain::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<TagPair> Domain::GetTagSet() const
{
    return m_tagSet;
}

void Domain::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool Domain::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string Domain::GetBanStatus() const
{
    return m_banStatus;
}

void Domain::SetBanStatus(const string& _banStatus)
{
    m_banStatus = _banStatus;
    m_banStatusHasBeenSet = true;
}

bool Domain::BanStatusHasBeenSet() const
{
    return m_banStatusHasBeenSet;
}


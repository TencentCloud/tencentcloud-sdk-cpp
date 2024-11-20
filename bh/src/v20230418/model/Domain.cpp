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

#include <tencentcloud/bh/v20230418/model/Domain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

Domain::Domain() :
    m_idHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_whiteIpSetHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_defaultHasBeenSet(false)
{
}

CoreInternalOutcome Domain::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("WhiteIpSet") && !value["WhiteIpSet"].IsNull())
    {
        if (!value["WhiteIpSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Domain.WhiteIpSet` is not array type"));

        const rapidjson::Value &tmpValue = value["WhiteIpSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteIpSet.push_back((*itr).GetString());
        }
        m_whiteIpSetHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Enabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetUint64();
        m_enabledHasBeenSet = true;
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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Domain.Default` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_default = value["Default"].GetUint64();
        m_defaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Domain::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteIpSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteIpSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteIpSet.begin(); itr != m_whiteIpSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_default, allocator);
    }

}


uint64_t Domain::GetId() const
{
    return m_id;
}

void Domain::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Domain::IdHasBeenSet() const
{
    return m_idHasBeenSet;
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

string Domain::GetDomainName() const
{
    return m_domainName;
}

void Domain::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool Domain::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string Domain::GetResourceId() const
{
    return m_resourceId;
}

void Domain::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Domain::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<string> Domain::GetWhiteIpSet() const
{
    return m_whiteIpSet;
}

void Domain::SetWhiteIpSet(const vector<string>& _whiteIpSet)
{
    m_whiteIpSet = _whiteIpSet;
    m_whiteIpSetHasBeenSet = true;
}

bool Domain::WhiteIpSetHasBeenSet() const
{
    return m_whiteIpSetHasBeenSet;
}

uint64_t Domain::GetEnabled() const
{
    return m_enabled;
}

void Domain::SetEnabled(const uint64_t& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Domain::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
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

string Domain::GetCreateTime() const
{
    return m_createTime;
}

void Domain::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Domain::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t Domain::GetDefault() const
{
    return m_default;
}

void Domain::SetDefault(const uint64_t& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool Domain::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}


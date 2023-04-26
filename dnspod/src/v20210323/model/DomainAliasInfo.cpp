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

#include <tencentcloud/dnspod/v20210323/model/DomainAliasInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainAliasInfo::DomainAliasInfo() :
    m_idHasBeenSet(false),
    m_domainAliasHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DomainAliasInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAliasInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DomainAlias") && !value["DomainAlias"].IsNull())
    {
        if (!value["DomainAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAliasInfo.DomainAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainAlias = string(value["DomainAlias"].GetString());
        m_domainAliasHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAliasInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainAliasInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_domainAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t DomainAliasInfo::GetId() const
{
    return m_id;
}

void DomainAliasInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DomainAliasInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DomainAliasInfo::GetDomainAlias() const
{
    return m_domainAlias;
}

void DomainAliasInfo::SetDomainAlias(const string& _domainAlias)
{
    m_domainAlias = _domainAlias;
    m_domainAliasHasBeenSet = true;
}

bool DomainAliasInfo::DomainAliasHasBeenSet() const
{
    return m_domainAliasHasBeenSet;
}

uint64_t DomainAliasInfo::GetStatus() const
{
    return m_status;
}

void DomainAliasInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainAliasInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


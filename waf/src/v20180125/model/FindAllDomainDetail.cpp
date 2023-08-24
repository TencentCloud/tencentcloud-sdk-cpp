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

#include <tencentcloud/waf/v20180125/model/FindAllDomainDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

FindAllDomainDetail::FindAllDomainDetail() :
    m_appidHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_ipsHasBeenSet(false),
    m_findTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_isWafDomainHasBeenSet(false)
{
}

CoreInternalOutcome FindAllDomainDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Ips") && !value["Ips"].IsNull())
    {
        if (!value["Ips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.Ips` is not array type"));

        const rapidjson::Value &tmpValue = value["Ips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ips.push_back((*itr).GetString());
        }
        m_ipsHasBeenSet = true;
    }

    if (value.HasMember("FindTime") && !value["FindTime"].IsNull())
    {
        if (!value["FindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.FindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_findTime = string(value["FindTime"].GetString());
        m_findTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("IsWafDomain") && !value["IsWafDomain"].IsNull())
    {
        if (!value["IsWafDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FindAllDomainDetail.IsWafDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isWafDomain = value["IsWafDomain"].GetUint64();
        m_isWafDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FindAllDomainDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ips.begin(); itr != m_ips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_findTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_findTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_isWafDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWafDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWafDomain, allocator);
    }

}


uint64_t FindAllDomainDetail::GetAppid() const
{
    return m_appid;
}

void FindAllDomainDetail::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool FindAllDomainDetail::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string FindAllDomainDetail::GetDomain() const
{
    return m_domain;
}

void FindAllDomainDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool FindAllDomainDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> FindAllDomainDetail::GetIps() const
{
    return m_ips;
}

void FindAllDomainDetail::SetIps(const vector<string>& _ips)
{
    m_ips = _ips;
    m_ipsHasBeenSet = true;
}

bool FindAllDomainDetail::IpsHasBeenSet() const
{
    return m_ipsHasBeenSet;
}

string FindAllDomainDetail::GetFindTime() const
{
    return m_findTime;
}

void FindAllDomainDetail::SetFindTime(const string& _findTime)
{
    m_findTime = _findTime;
    m_findTimeHasBeenSet = true;
}

bool FindAllDomainDetail::FindTimeHasBeenSet() const
{
    return m_findTimeHasBeenSet;
}

string FindAllDomainDetail::GetInstanceId() const
{
    return m_instanceId;
}

void FindAllDomainDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FindAllDomainDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FindAllDomainDetail::GetDomainId() const
{
    return m_domainId;
}

void FindAllDomainDetail::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool FindAllDomainDetail::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string FindAllDomainDetail::GetEdition() const
{
    return m_edition;
}

void FindAllDomainDetail::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool FindAllDomainDetail::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

uint64_t FindAllDomainDetail::GetIsWafDomain() const
{
    return m_isWafDomain;
}

void FindAllDomainDetail::SetIsWafDomain(const uint64_t& _isWafDomain)
{
    m_isWafDomain = _isWafDomain;
    m_isWafDomainHasBeenSet = true;
}

bool FindAllDomainDetail::IsWafDomainHasBeenSet() const
{
    return m_isWafDomainHasBeenSet;
}


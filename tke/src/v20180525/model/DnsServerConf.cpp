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

#include <tencentcloud/tke/v20180525/model/DnsServerConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DnsServerConf::DnsServerConf() :
    m_domainHasBeenSet(false),
    m_dnsServersHasBeenSet(false)
{
}

CoreInternalOutcome DnsServerConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DnsServerConf.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DnsServers") && !value["DnsServers"].IsNull())
    {
        if (!value["DnsServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DnsServerConf.DnsServers` is not array type"));

        const rapidjson::Value &tmpValue = value["DnsServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dnsServers.push_back((*itr).GetString());
        }
        m_dnsServersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DnsServerConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DnsServerConf::GetDomain() const
{
    return m_domain;
}

void DnsServerConf::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DnsServerConf::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> DnsServerConf::GetDnsServers() const
{
    return m_dnsServers;
}

void DnsServerConf::SetDnsServers(const vector<string>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool DnsServerConf::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}


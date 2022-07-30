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

#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DomainNameConfig::DomainNameConfig() :
    m_hostAliasesHasBeenSet(false),
    m_dNSConfigHasBeenSet(false)
{
}

CoreInternalOutcome DomainNameConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostAliases") && !value["HostAliases"].IsNull())
    {
        if (!value["HostAliases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainNameConfig.HostAliases` is not array type"));

        const rapidjson::Value &tmpValue = value["HostAliases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HostAlias item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostAliases.push_back(item);
        }
        m_hostAliasesHasBeenSet = true;
    }

    if (value.HasMember("DNSConfig") && !value["DNSConfig"].IsNull())
    {
        if (!value["DNSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainNameConfig.DNSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dNSConfig.Deserialize(value["DNSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dNSConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainNameConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostAliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostAliases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostAliases.begin(); itr != m_hostAliases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dNSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dNSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<HostAlias> DomainNameConfig::GetHostAliases() const
{
    return m_hostAliases;
}

void DomainNameConfig::SetHostAliases(const vector<HostAlias>& _hostAliases)
{
    m_hostAliases = _hostAliases;
    m_hostAliasesHasBeenSet = true;
}

bool DomainNameConfig::HostAliasesHasBeenSet() const
{
    return m_hostAliasesHasBeenSet;
}

DNSConfig DomainNameConfig::GetDNSConfig() const
{
    return m_dNSConfig;
}

void DomainNameConfig::SetDNSConfig(const DNSConfig& _dNSConfig)
{
    m_dNSConfig = _dNSConfig;
    m_dNSConfigHasBeenSet = true;
}

bool DomainNameConfig::DNSConfigHasBeenSet() const
{
    return m_dNSConfigHasBeenSet;
}


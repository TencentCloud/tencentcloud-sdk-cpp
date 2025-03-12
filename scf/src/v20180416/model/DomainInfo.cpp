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

#include <tencentcloud/scf/v20180416/model/DomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

DomainInfo::DomainInfo() :
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointsConfigHasBeenSet(false),
    m_certConfigHasBeenSet(false),
    m_wafConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("EndpointsConfig") && !value["EndpointsConfig"].IsNull())
    {
        if (!value["EndpointsConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.EndpointsConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["EndpointsConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointsConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointsConfig.push_back(item);
        }
        m_endpointsConfigHasBeenSet = true;
    }

    if (value.HasMember("CertConfig") && !value["CertConfig"].IsNull())
    {
        if (!value["CertConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CertConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certConfig.Deserialize(value["CertConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certConfigHasBeenSet = true;
    }

    if (value.HasMember("WafConfig") && !value["WafConfig"].IsNull())
    {
        if (!value["WafConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.WafConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wafConfig.Deserialize(value["WafConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointsConfig.begin(); itr != m_endpointsConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wafConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DomainInfo::GetDomain() const
{
    return m_domain;
}

void DomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainInfo::GetProtocol() const
{
    return m_protocol;
}

void DomainInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DomainInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<EndpointsConf> DomainInfo::GetEndpointsConfig() const
{
    return m_endpointsConfig;
}

void DomainInfo::SetEndpointsConfig(const vector<EndpointsConf>& _endpointsConfig)
{
    m_endpointsConfig = _endpointsConfig;
    m_endpointsConfigHasBeenSet = true;
}

bool DomainInfo::EndpointsConfigHasBeenSet() const
{
    return m_endpointsConfigHasBeenSet;
}

CertConf DomainInfo::GetCertConfig() const
{
    return m_certConfig;
}

void DomainInfo::SetCertConfig(const CertConf& _certConfig)
{
    m_certConfig = _certConfig;
    m_certConfigHasBeenSet = true;
}

bool DomainInfo::CertConfigHasBeenSet() const
{
    return m_certConfigHasBeenSet;
}

WafConf DomainInfo::GetWafConfig() const
{
    return m_wafConfig;
}

void DomainInfo::SetWafConfig(const WafConf& _wafConfig)
{
    m_wafConfig = _wafConfig;
    m_wafConfigHasBeenSet = true;
}

bool DomainInfo::WafConfigHasBeenSet() const
{
    return m_wafConfigHasBeenSet;
}

vector<Tag> DomainInfo::GetTags() const
{
    return m_tags;
}

void DomainInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DomainInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


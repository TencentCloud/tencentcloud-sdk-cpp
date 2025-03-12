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

#include <tencentcloud/scf/v20180416/model/CreateCustomDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

CreateCustomDomainRequest::CreateCustomDomainRequest() :
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointsConfigHasBeenSet(false),
    m_certConfigHasBeenSet(false),
    m_wafConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateCustomDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointsConfig.begin(); itr != m_endpointsConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_certConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_wafConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCustomDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateCustomDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateCustomDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateCustomDomainRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCustomDomainRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCustomDomainRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<EndpointsConf> CreateCustomDomainRequest::GetEndpointsConfig() const
{
    return m_endpointsConfig;
}

void CreateCustomDomainRequest::SetEndpointsConfig(const vector<EndpointsConf>& _endpointsConfig)
{
    m_endpointsConfig = _endpointsConfig;
    m_endpointsConfigHasBeenSet = true;
}

bool CreateCustomDomainRequest::EndpointsConfigHasBeenSet() const
{
    return m_endpointsConfigHasBeenSet;
}

CertConf CreateCustomDomainRequest::GetCertConfig() const
{
    return m_certConfig;
}

void CreateCustomDomainRequest::SetCertConfig(const CertConf& _certConfig)
{
    m_certConfig = _certConfig;
    m_certConfigHasBeenSet = true;
}

bool CreateCustomDomainRequest::CertConfigHasBeenSet() const
{
    return m_certConfigHasBeenSet;
}

WafConf CreateCustomDomainRequest::GetWafConfig() const
{
    return m_wafConfig;
}

void CreateCustomDomainRequest::SetWafConfig(const WafConf& _wafConfig)
{
    m_wafConfig = _wafConfig;
    m_wafConfigHasBeenSet = true;
}

bool CreateCustomDomainRequest::WafConfigHasBeenSet() const
{
    return m_wafConfigHasBeenSet;
}

vector<Tag> CreateCustomDomainRequest::GetTags() const
{
    return m_tags;
}

void CreateCustomDomainRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCustomDomainRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



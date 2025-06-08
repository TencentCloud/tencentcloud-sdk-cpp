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

#include <tencentcloud/tem/v20210701/model/ModifyGatewayIngressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

ModifyGatewayIngressRequest::ModifyGatewayIngressRequest() :
    m_environmentIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_mixedHasBeenSet(false),
    m_tlsHasBeenSet(false),
    m_rewriteTypeHasBeenSet(false)
{
}

string ModifyGatewayIngressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mixed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mixed, allocator);
    }

    if (m_tlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tls.begin(); itr != m_tls.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rewriteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rewriteType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGatewayIngressRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyGatewayIngressRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ModifyGatewayIngressRequest::GetGatewayName() const
{
    return m_gatewayName;
}

void ModifyGatewayIngressRequest::SetGatewayName(const string& _gatewayName)
{
    m_gatewayName = _gatewayName;
    m_gatewayNameHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::GatewayNameHasBeenSet() const
{
    return m_gatewayNameHasBeenSet;
}

string ModifyGatewayIngressRequest::GetGatewayType() const
{
    return m_gatewayType;
}

void ModifyGatewayIngressRequest::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string ModifyGatewayIngressRequest::GetName() const
{
    return m_name;
}

void ModifyGatewayIngressRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<IngressRule> ModifyGatewayIngressRequest::GetRules() const
{
    return m_rules;
}

void ModifyGatewayIngressRequest::SetRules(const vector<IngressRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

bool ModifyGatewayIngressRequest::GetMixed() const
{
    return m_mixed;
}

void ModifyGatewayIngressRequest::SetMixed(const bool& _mixed)
{
    m_mixed = _mixed;
    m_mixedHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::MixedHasBeenSet() const
{
    return m_mixedHasBeenSet;
}

vector<IngressTls> ModifyGatewayIngressRequest::GetTls() const
{
    return m_tls;
}

void ModifyGatewayIngressRequest::SetTls(const vector<IngressTls>& _tls)
{
    m_tls = _tls;
    m_tlsHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::TlsHasBeenSet() const
{
    return m_tlsHasBeenSet;
}

string ModifyGatewayIngressRequest::GetRewriteType() const
{
    return m_rewriteType;
}

void ModifyGatewayIngressRequest::SetRewriteType(const string& _rewriteType)
{
    m_rewriteType = _rewriteType;
    m_rewriteTypeHasBeenSet = true;
}

bool ModifyGatewayIngressRequest::RewriteTypeHasBeenSet() const
{
    return m_rewriteTypeHasBeenSet;
}



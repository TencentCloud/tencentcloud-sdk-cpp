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

#include <tencentcloud/cdn/v20180606/model/CreateScdnDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

CreateScdnDomainRequest::CreateScdnDomainRequest() :
    m_domainHasBeenSet(false),
    m_wafHasBeenSet(false),
    m_aclHasBeenSet(false),
    m_cCHasBeenSet(false),
    m_ddosHasBeenSet(false),
    m_botHasBeenSet(false)
{
}

string CreateScdnDomainRequest::ToJsonString() const
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

    if (m_wafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Waf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aclHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_acl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CC";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cC.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ddosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ddos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddos.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_botHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bot.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScdnDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateScdnDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateScdnDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

ScdnWafConfig CreateScdnDomainRequest::GetWaf() const
{
    return m_waf;
}

void CreateScdnDomainRequest::SetWaf(const ScdnWafConfig& _waf)
{
    m_waf = _waf;
    m_wafHasBeenSet = true;
}

bool CreateScdnDomainRequest::WafHasBeenSet() const
{
    return m_wafHasBeenSet;
}

ScdnAclConfig CreateScdnDomainRequest::GetAcl() const
{
    return m_acl;
}

void CreateScdnDomainRequest::SetAcl(const ScdnAclConfig& _acl)
{
    m_acl = _acl;
    m_aclHasBeenSet = true;
}

bool CreateScdnDomainRequest::AclHasBeenSet() const
{
    return m_aclHasBeenSet;
}

ScdnConfig CreateScdnDomainRequest::GetCC() const
{
    return m_cC;
}

void CreateScdnDomainRequest::SetCC(const ScdnConfig& _cC)
{
    m_cC = _cC;
    m_cCHasBeenSet = true;
}

bool CreateScdnDomainRequest::CCHasBeenSet() const
{
    return m_cCHasBeenSet;
}

ScdnDdosConfig CreateScdnDomainRequest::GetDdos() const
{
    return m_ddos;
}

void CreateScdnDomainRequest::SetDdos(const ScdnDdosConfig& _ddos)
{
    m_ddos = _ddos;
    m_ddosHasBeenSet = true;
}

bool CreateScdnDomainRequest::DdosHasBeenSet() const
{
    return m_ddosHasBeenSet;
}

ScdnBotConfig CreateScdnDomainRequest::GetBot() const
{
    return m_bot;
}

void CreateScdnDomainRequest::SetBot(const ScdnBotConfig& _bot)
{
    m_bot = _bot;
    m_botHasBeenSet = true;
}

bool CreateScdnDomainRequest::BotHasBeenSet() const
{
    return m_botHasBeenSet;
}



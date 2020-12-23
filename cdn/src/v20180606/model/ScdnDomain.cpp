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

#include <tencentcloud/cdn/v20180606/model/ScdnDomain.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

ScdnDomain::ScdnDomain() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_wafHasBeenSet(false),
    m_aclHasBeenSet(false),
    m_cCHasBeenSet(false),
    m_ddosHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_aclRuleNumbersHasBeenSet(false),
    m_botHasBeenSet(false)
{
}

CoreInternalOutcome ScdnDomain::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Waf") && !value["Waf"].IsNull())
    {
        if (!value["Waf"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Waf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_waf = string(value["Waf"].GetString());
        m_wafHasBeenSet = true;
    }

    if (value.HasMember("Acl") && !value["Acl"].IsNull())
    {
        if (!value["Acl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Acl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acl = string(value["Acl"].GetString());
        m_aclHasBeenSet = true;
    }

    if (value.HasMember("CC") && !value["CC"].IsNull())
    {
        if (!value["CC"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.CC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cC = string(value["CC"].GetString());
        m_cCHasBeenSet = true;
    }

    if (value.HasMember("Ddos") && !value["Ddos"].IsNull())
    {
        if (!value["Ddos"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Ddos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ddos = string(value["Ddos"].GetString());
        m_ddosHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AclRuleNumbers") && !value["AclRuleNumbers"].IsNull())
    {
        if (!value["AclRuleNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.AclRuleNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aclRuleNumbers = value["AclRuleNumbers"].GetUint64();
        m_aclRuleNumbersHasBeenSet = true;
    }

    if (value.HasMember("Bot") && !value["Bot"].IsNull())
    {
        if (!value["Bot"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScdnDomain.Bot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bot = string(value["Bot"].GetString());
        m_botHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnDomain::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_wafHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Waf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_waf.c_str(), allocator).Move(), allocator);
    }

    if (m_aclHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Acl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_acl.c_str(), allocator).Move(), allocator);
    }

    if (m_cCHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cC.c_str(), allocator).Move(), allocator);
    }

    if (m_ddosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ddos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ddos.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_aclRuleNumbersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclRuleNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclRuleNumbers, allocator);
    }

    if (m_botHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bot.c_str(), allocator).Move(), allocator);
    }

}


string ScdnDomain::GetDomain() const
{
    return m_domain;
}

void ScdnDomain::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ScdnDomain::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ScdnDomain::GetStatus() const
{
    return m_status;
}

void ScdnDomain::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScdnDomain::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScdnDomain::GetWaf() const
{
    return m_waf;
}

void ScdnDomain::SetWaf(const string& _waf)
{
    m_waf = _waf;
    m_wafHasBeenSet = true;
}

bool ScdnDomain::WafHasBeenSet() const
{
    return m_wafHasBeenSet;
}

string ScdnDomain::GetAcl() const
{
    return m_acl;
}

void ScdnDomain::SetAcl(const string& _acl)
{
    m_acl = _acl;
    m_aclHasBeenSet = true;
}

bool ScdnDomain::AclHasBeenSet() const
{
    return m_aclHasBeenSet;
}

string ScdnDomain::GetCC() const
{
    return m_cC;
}

void ScdnDomain::SetCC(const string& _cC)
{
    m_cC = _cC;
    m_cCHasBeenSet = true;
}

bool ScdnDomain::CCHasBeenSet() const
{
    return m_cCHasBeenSet;
}

string ScdnDomain::GetDdos() const
{
    return m_ddos;
}

void ScdnDomain::SetDdos(const string& _ddos)
{
    m_ddos = _ddos;
    m_ddosHasBeenSet = true;
}

bool ScdnDomain::DdosHasBeenSet() const
{
    return m_ddosHasBeenSet;
}

string ScdnDomain::GetProjectId() const
{
    return m_projectId;
}

void ScdnDomain::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ScdnDomain::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ScdnDomain::GetAclRuleNumbers() const
{
    return m_aclRuleNumbers;
}

void ScdnDomain::SetAclRuleNumbers(const uint64_t& _aclRuleNumbers)
{
    m_aclRuleNumbers = _aclRuleNumbers;
    m_aclRuleNumbersHasBeenSet = true;
}

bool ScdnDomain::AclRuleNumbersHasBeenSet() const
{
    return m_aclRuleNumbersHasBeenSet;
}

string ScdnDomain::GetBot() const
{
    return m_bot;
}

void ScdnDomain::SetBot(const string& _bot)
{
    m_bot = _bot;
    m_botHasBeenSet = true;
}

bool ScdnDomain::BotHasBeenSet() const
{
    return m_botHasBeenSet;
}


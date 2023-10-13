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

#include <tencentcloud/waf/v20180125/model/AddAttackWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddAttackWhiteRuleRequest::AddAttackWhiteRuleRequest() :
    m_domainHasBeenSet(false),
    m_signatureIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string AddAttackWhiteRuleRequest::ToJsonString() const
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

    if (m_signatureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signatureId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddAttackWhiteRuleRequest::GetDomain() const
{
    return m_domain;
}

void AddAttackWhiteRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AddAttackWhiteRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AddAttackWhiteRuleRequest::GetSignatureId() const
{
    return m_signatureId;
}

void AddAttackWhiteRuleRequest::SetSignatureId(const string& _signatureId)
{
    m_signatureId = _signatureId;
    m_signatureIdHasBeenSet = true;
}

bool AddAttackWhiteRuleRequest::SignatureIdHasBeenSet() const
{
    return m_signatureIdHasBeenSet;
}

uint64_t AddAttackWhiteRuleRequest::GetStatus() const
{
    return m_status;
}

void AddAttackWhiteRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AddAttackWhiteRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<UserWhiteRuleItem> AddAttackWhiteRuleRequest::GetRules() const
{
    return m_rules;
}

void AddAttackWhiteRuleRequest::SetRules(const vector<UserWhiteRuleItem>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AddAttackWhiteRuleRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

uint64_t AddAttackWhiteRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void AddAttackWhiteRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AddAttackWhiteRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}



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

#include <tencentcloud/waf/v20180125/model/ModifyAttackWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyAttackWhiteRuleRequest::ModifyAttackWhiteRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_signatureIdHasBeenSet(false),
    m_signatureIdsHasBeenSet(false),
    m_typeIdsHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string ModifyAttackWhiteRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_signatureIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signatureId.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signatureIds.begin(); itr != m_signatureIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeIds.begin(); itr != m_typeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAttackWhiteRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyAttackWhiteRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyAttackWhiteRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyAttackWhiteRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyAttackWhiteRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyAttackWhiteRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<UserWhiteRuleItem> ModifyAttackWhiteRuleRequest::GetRules() const
{
    return m_rules;
}

void ModifyAttackWhiteRuleRequest::SetRules(const vector<UserWhiteRuleItem>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string ModifyAttackWhiteRuleRequest::GetSignatureId() const
{
    return m_signatureId;
}

void ModifyAttackWhiteRuleRequest::SetSignatureId(const string& _signatureId)
{
    m_signatureId = _signatureId;
    m_signatureIdHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::SignatureIdHasBeenSet() const
{
    return m_signatureIdHasBeenSet;
}

vector<string> ModifyAttackWhiteRuleRequest::GetSignatureIds() const
{
    return m_signatureIds;
}

void ModifyAttackWhiteRuleRequest::SetSignatureIds(const vector<string>& _signatureIds)
{
    m_signatureIds = _signatureIds;
    m_signatureIdsHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::SignatureIdsHasBeenSet() const
{
    return m_signatureIdsHasBeenSet;
}

vector<string> ModifyAttackWhiteRuleRequest::GetTypeIds() const
{
    return m_typeIds;
}

void ModifyAttackWhiteRuleRequest::SetTypeIds(const vector<string>& _typeIds)
{
    m_typeIds = _typeIds;
    m_typeIdsHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::TypeIdsHasBeenSet() const
{
    return m_typeIdsHasBeenSet;
}

int64_t ModifyAttackWhiteRuleRequest::GetMode() const
{
    return m_mode;
}

void ModifyAttackWhiteRuleRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyAttackWhiteRuleRequest::GetName() const
{
    return m_name;
}

void ModifyAttackWhiteRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAttackWhiteRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}



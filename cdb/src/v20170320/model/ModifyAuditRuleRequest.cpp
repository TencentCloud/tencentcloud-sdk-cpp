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

#include <tencentcloud/cdb/v20170320/model/ModifyAuditRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyAuditRuleRequest::ModifyAuditRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleFiltersHasBeenSet(false),
    m_auditAllHasBeenSet(false)
{
}

string ModifyAuditRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleFiltersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleFilters.begin(); itr != m_ruleFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_auditAllHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuditAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditAll, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAuditRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyAuditRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyAuditRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyAuditRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyAuditRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyAuditRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ModifyAuditRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyAuditRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyAuditRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<AuditFilter> ModifyAuditRuleRequest::GetRuleFilters() const
{
    return m_ruleFilters;
}

void ModifyAuditRuleRequest::SetRuleFilters(const vector<AuditFilter>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool ModifyAuditRuleRequest::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

bool ModifyAuditRuleRequest::GetAuditAll() const
{
    return m_auditAll;
}

void ModifyAuditRuleRequest::SetAuditAll(const bool& _auditAll)
{
    m_auditAll = _auditAll;
    m_auditAllHasBeenSet = true;
}

bool ModifyAuditRuleRequest::AuditAllHasBeenSet() const
{
    return m_auditAllHasBeenSet;
}



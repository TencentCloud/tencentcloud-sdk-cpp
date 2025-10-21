/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/waf/v20180125/model/ModifyOwaspRuleTypeActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyOwaspRuleTypeActionRequest::ModifyOwaspRuleTypeActionRequest() :
    m_domainHasBeenSet(false),
    m_typeIDsHasBeenSet(false),
    m_ruleTypeActionHasBeenSet(false)
{
}

string ModifyOwaspRuleTypeActionRequest::ToJsonString() const
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

    if (m_typeIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeIDs.begin(); itr != m_typeIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTypeActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleTypeAction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOwaspRuleTypeActionRequest::GetDomain() const
{
    return m_domain;
}

void ModifyOwaspRuleTypeActionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyOwaspRuleTypeActionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> ModifyOwaspRuleTypeActionRequest::GetTypeIDs() const
{
    return m_typeIDs;
}

void ModifyOwaspRuleTypeActionRequest::SetTypeIDs(const vector<string>& _typeIDs)
{
    m_typeIDs = _typeIDs;
    m_typeIDsHasBeenSet = true;
}

bool ModifyOwaspRuleTypeActionRequest::TypeIDsHasBeenSet() const
{
    return m_typeIDsHasBeenSet;
}

int64_t ModifyOwaspRuleTypeActionRequest::GetRuleTypeAction() const
{
    return m_ruleTypeAction;
}

void ModifyOwaspRuleTypeActionRequest::SetRuleTypeAction(const int64_t& _ruleTypeAction)
{
    m_ruleTypeAction = _ruleTypeAction;
    m_ruleTypeActionHasBeenSet = true;
}

bool ModifyOwaspRuleTypeActionRequest::RuleTypeActionHasBeenSet() const
{
    return m_ruleTypeActionHasBeenSet;
}



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

#include <tencentcloud/waf/v20180125/model/ModifyOwaspRuleTypeLevelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyOwaspRuleTypeLevelRequest::ModifyOwaspRuleTypeLevelRequest() :
    m_domainHasBeenSet(false),
    m_typeIDsHasBeenSet(false),
    m_ruleTypeLevelHasBeenSet(false)
{
}

string ModifyOwaspRuleTypeLevelRequest::ToJsonString() const
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

    if (m_ruleTypeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleTypeLevel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOwaspRuleTypeLevelRequest::GetDomain() const
{
    return m_domain;
}

void ModifyOwaspRuleTypeLevelRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyOwaspRuleTypeLevelRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> ModifyOwaspRuleTypeLevelRequest::GetTypeIDs() const
{
    return m_typeIDs;
}

void ModifyOwaspRuleTypeLevelRequest::SetTypeIDs(const vector<string>& _typeIDs)
{
    m_typeIDs = _typeIDs;
    m_typeIDsHasBeenSet = true;
}

bool ModifyOwaspRuleTypeLevelRequest::TypeIDsHasBeenSet() const
{
    return m_typeIDsHasBeenSet;
}

int64_t ModifyOwaspRuleTypeLevelRequest::GetRuleTypeLevel() const
{
    return m_ruleTypeLevel;
}

void ModifyOwaspRuleTypeLevelRequest::SetRuleTypeLevel(const int64_t& _ruleTypeLevel)
{
    m_ruleTypeLevel = _ruleTypeLevel;
    m_ruleTypeLevelHasBeenSet = true;
}

bool ModifyOwaspRuleTypeLevelRequest::RuleTypeLevelHasBeenSet() const
{
    return m_ruleTypeLevelHasBeenSet;
}



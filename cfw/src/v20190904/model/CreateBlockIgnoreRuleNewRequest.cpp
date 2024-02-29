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

#include <tencentcloud/cfw/v20190904/model/CreateBlockIgnoreRuleNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateBlockIgnoreRuleNewRequest::CreateBlockIgnoreRuleNewRequest() :
    m_rulesHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_coverDuplicateHasBeenSet(false)
{
}

string CreateBlockIgnoreRuleNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_coverDuplicateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverDuplicate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coverDuplicate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<BanAndAllowRule> CreateBlockIgnoreRuleNewRequest::GetRules() const
{
    return m_rules;
}

void CreateBlockIgnoreRuleNewRequest::SetRules(const vector<BanAndAllowRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool CreateBlockIgnoreRuleNewRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

int64_t CreateBlockIgnoreRuleNewRequest::GetRuleType() const
{
    return m_ruleType;
}

void CreateBlockIgnoreRuleNewRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CreateBlockIgnoreRuleNewRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t CreateBlockIgnoreRuleNewRequest::GetCoverDuplicate() const
{
    return m_coverDuplicate;
}

void CreateBlockIgnoreRuleNewRequest::SetCoverDuplicate(const int64_t& _coverDuplicate)
{
    m_coverDuplicate = _coverDuplicate;
    m_coverDuplicateHasBeenSet = true;
}

bool CreateBlockIgnoreRuleNewRequest::CoverDuplicateHasBeenSet() const
{
    return m_coverDuplicateHasBeenSet;
}



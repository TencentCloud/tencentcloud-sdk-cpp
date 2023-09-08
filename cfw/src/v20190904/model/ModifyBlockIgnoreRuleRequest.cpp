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

#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyBlockIgnoreRuleRequest::ModifyBlockIgnoreRuleRequest() :
    m_ruleHasBeenSet(false),
    m_ruleTypeHasBeenSet(false)
{
}

string ModifyBlockIgnoreRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


IntrusionDefenseRule ModifyBlockIgnoreRuleRequest::GetRule() const
{
    return m_rule;
}

void ModifyBlockIgnoreRuleRequest::SetRule(const IntrusionDefenseRule& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ModifyBlockIgnoreRuleRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

int64_t ModifyBlockIgnoreRuleRequest::GetRuleType() const
{
    return m_ruleType;
}

void ModifyBlockIgnoreRuleRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ModifyBlockIgnoreRuleRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}



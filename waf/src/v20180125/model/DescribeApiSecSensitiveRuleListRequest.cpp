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

#include <tencentcloud/waf/v20180125/model/DescribeApiSecSensitiveRuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiSecSensitiveRuleListRequest::DescribeApiSecSensitiveRuleListRequest() :
    m_domainHasBeenSet(false),
    m_isQueryApiExtractRuleHasBeenSet(false),
    m_isQueryApiPrivilegeRuleHasBeenSet(false),
    m_isQueryApiSceneRuleHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_isQueryApiCustomEventRuleHasBeenSet(false),
    m_isQueryApiExcludeRuleHasBeenSet(false)
{
}

string DescribeApiSecSensitiveRuleListRequest::ToJsonString() const
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

    if (m_isQueryApiExtractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryApiExtractRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryApiExtractRule, allocator);
    }

    if (m_isQueryApiPrivilegeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryApiPrivilegeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryApiPrivilegeRule, allocator);
    }

    if (m_isQueryApiSceneRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryApiSceneRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryApiSceneRule, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryApiCustomEventRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryApiCustomEventRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryApiCustomEventRule, allocator);
    }

    if (m_isQueryApiExcludeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQueryApiExcludeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isQueryApiExcludeRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiSecSensitiveRuleListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeApiSecSensitiveRuleListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool DescribeApiSecSensitiveRuleListRequest::GetIsQueryApiExtractRule() const
{
    return m_isQueryApiExtractRule;
}

void DescribeApiSecSensitiveRuleListRequest::SetIsQueryApiExtractRule(const bool& _isQueryApiExtractRule)
{
    m_isQueryApiExtractRule = _isQueryApiExtractRule;
    m_isQueryApiExtractRuleHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::IsQueryApiExtractRuleHasBeenSet() const
{
    return m_isQueryApiExtractRuleHasBeenSet;
}

bool DescribeApiSecSensitiveRuleListRequest::GetIsQueryApiPrivilegeRule() const
{
    return m_isQueryApiPrivilegeRule;
}

void DescribeApiSecSensitiveRuleListRequest::SetIsQueryApiPrivilegeRule(const bool& _isQueryApiPrivilegeRule)
{
    m_isQueryApiPrivilegeRule = _isQueryApiPrivilegeRule;
    m_isQueryApiPrivilegeRuleHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::IsQueryApiPrivilegeRuleHasBeenSet() const
{
    return m_isQueryApiPrivilegeRuleHasBeenSet;
}

bool DescribeApiSecSensitiveRuleListRequest::GetIsQueryApiSceneRule() const
{
    return m_isQueryApiSceneRule;
}

void DescribeApiSecSensitiveRuleListRequest::SetIsQueryApiSceneRule(const bool& _isQueryApiSceneRule)
{
    m_isQueryApiSceneRule = _isQueryApiSceneRule;
    m_isQueryApiSceneRuleHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::IsQueryApiSceneRuleHasBeenSet() const
{
    return m_isQueryApiSceneRuleHasBeenSet;
}

string DescribeApiSecSensitiveRuleListRequest::GetRuleName() const
{
    return m_ruleName;
}

void DescribeApiSecSensitiveRuleListRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

bool DescribeApiSecSensitiveRuleListRequest::GetIsQueryApiCustomEventRule() const
{
    return m_isQueryApiCustomEventRule;
}

void DescribeApiSecSensitiveRuleListRequest::SetIsQueryApiCustomEventRule(const bool& _isQueryApiCustomEventRule)
{
    m_isQueryApiCustomEventRule = _isQueryApiCustomEventRule;
    m_isQueryApiCustomEventRuleHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::IsQueryApiCustomEventRuleHasBeenSet() const
{
    return m_isQueryApiCustomEventRuleHasBeenSet;
}

bool DescribeApiSecSensitiveRuleListRequest::GetIsQueryApiExcludeRule() const
{
    return m_isQueryApiExcludeRule;
}

void DescribeApiSecSensitiveRuleListRequest::SetIsQueryApiExcludeRule(const bool& _isQueryApiExcludeRule)
{
    m_isQueryApiExcludeRule = _isQueryApiExcludeRule;
    m_isQueryApiExcludeRuleHasBeenSet = true;
}

bool DescribeApiSecSensitiveRuleListRequest::IsQueryApiExcludeRuleHasBeenSet() const
{
    return m_isQueryApiExcludeRuleHasBeenSet;
}



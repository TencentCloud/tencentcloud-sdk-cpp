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

#include <tencentcloud/ckafka/v20190819/model/DescribeAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeAclRuleRequest::DescribeAclRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_patternTypeHasBeenSet(false),
    m_isSimplifiedHasBeenSet(false)
{
}

string DescribeAclRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_patternTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatternType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_patternType.c_str(), allocator).Move(), allocator);
    }

    if (m_isSimplifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSimplified";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSimplified, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAclRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAclRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAclRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeAclRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void DescribeAclRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool DescribeAclRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DescribeAclRuleRequest::GetPatternType() const
{
    return m_patternType;
}

void DescribeAclRuleRequest::SetPatternType(const string& _patternType)
{
    m_patternType = _patternType;
    m_patternTypeHasBeenSet = true;
}

bool DescribeAclRuleRequest::PatternTypeHasBeenSet() const
{
    return m_patternTypeHasBeenSet;
}

bool DescribeAclRuleRequest::GetIsSimplified() const
{
    return m_isSimplified;
}

void DescribeAclRuleRequest::SetIsSimplified(const bool& _isSimplified)
{
    m_isSimplified = _isSimplified;
    m_isSimplifiedHasBeenSet = true;
}

bool DescribeAclRuleRequest::IsSimplifiedHasBeenSet() const
{
    return m_isSimplifiedHasBeenSet;
}



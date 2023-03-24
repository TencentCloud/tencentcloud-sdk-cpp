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

#include <tencentcloud/ckafka/v20190819/model/CreateAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateAclRuleRequest::CreateAclRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_patternTypeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleListHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_isAppliedHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateAclRuleRequest::ToJsonString() const
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

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_patternTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatternType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_patternType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleList.begin(); itr != m_ruleList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_isAppliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsApplied";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isApplied, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAclRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAclRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAclRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAclRuleRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateAclRuleRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateAclRuleRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string CreateAclRuleRequest::GetPatternType() const
{
    return m_patternType;
}

void CreateAclRuleRequest::SetPatternType(const string& _patternType)
{
    m_patternType = _patternType;
    m_patternTypeHasBeenSet = true;
}

bool CreateAclRuleRequest::PatternTypeHasBeenSet() const
{
    return m_patternTypeHasBeenSet;
}

string CreateAclRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateAclRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateAclRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<AclRuleInfo> CreateAclRuleRequest::GetRuleList() const
{
    return m_ruleList;
}

void CreateAclRuleRequest::SetRuleList(const vector<AclRuleInfo>& _ruleList)
{
    m_ruleList = _ruleList;
    m_ruleListHasBeenSet = true;
}

bool CreateAclRuleRequest::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}

string CreateAclRuleRequest::GetPattern() const
{
    return m_pattern;
}

void CreateAclRuleRequest::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool CreateAclRuleRequest::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

int64_t CreateAclRuleRequest::GetIsApplied() const
{
    return m_isApplied;
}

void CreateAclRuleRequest::SetIsApplied(const int64_t& _isApplied)
{
    m_isApplied = _isApplied;
    m_isAppliedHasBeenSet = true;
}

bool CreateAclRuleRequest::IsAppliedHasBeenSet() const
{
    return m_isAppliedHasBeenSet;
}

string CreateAclRuleRequest::GetComment() const
{
    return m_comment;
}

void CreateAclRuleRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateAclRuleRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}



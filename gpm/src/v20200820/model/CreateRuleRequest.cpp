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

#include <tencentcloud/gpm/v20200820/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gpm::V20200820::Model;
using namespace rapidjson;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_ruleNameHasBeenSet(false),
    m_ruleScriptHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleScriptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleScript.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateRuleRequest::GetRuleScript() const
{
    return m_ruleScript;
}

void CreateRuleRequest::SetRuleScript(const string& _ruleScript)
{
    m_ruleScript = _ruleScript;
    m_ruleScriptHasBeenSet = true;
}

bool CreateRuleRequest::RuleScriptHasBeenSet() const
{
    return m_ruleScriptHasBeenSet;
}

string CreateRuleRequest::GetRuleDesc() const
{
    return m_ruleDesc;
}

void CreateRuleRequest::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool CreateRuleRequest::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

vector<StringKV> CreateRuleRequest::GetTags() const
{
    return m_tags;
}

void CreateRuleRequest::SetTags(const vector<StringKV>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateRuleRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



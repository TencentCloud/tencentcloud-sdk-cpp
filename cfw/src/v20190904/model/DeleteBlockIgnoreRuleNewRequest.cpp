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

#include <tencentcloud/cfw/v20190904/model/DeleteBlockIgnoreRuleNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DeleteBlockIgnoreRuleNewRequest::DeleteBlockIgnoreRuleNewRequest() :
    m_deleteAllHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_showTypeHasBeenSet(false)
{
}

string DeleteBlockIgnoreRuleNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deleteAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteAll, allocator);
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

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_showTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_showType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DeleteBlockIgnoreRuleNewRequest::GetDeleteAll() const
{
    return m_deleteAll;
}

void DeleteBlockIgnoreRuleNewRequest::SetDeleteAll(const int64_t& _deleteAll)
{
    m_deleteAll = _deleteAll;
    m_deleteAllHasBeenSet = true;
}

bool DeleteBlockIgnoreRuleNewRequest::DeleteAllHasBeenSet() const
{
    return m_deleteAllHasBeenSet;
}

vector<BanAndAllowRuleDel> DeleteBlockIgnoreRuleNewRequest::GetRules() const
{
    return m_rules;
}

void DeleteBlockIgnoreRuleNewRequest::SetRules(const vector<BanAndAllowRuleDel>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool DeleteBlockIgnoreRuleNewRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

int64_t DeleteBlockIgnoreRuleNewRequest::GetRuleType() const
{
    return m_ruleType;
}

void DeleteBlockIgnoreRuleNewRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DeleteBlockIgnoreRuleNewRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DeleteBlockIgnoreRuleNewRequest::GetShowType() const
{
    return m_showType;
}

void DeleteBlockIgnoreRuleNewRequest::SetShowType(const string& _showType)
{
    m_showType = _showType;
    m_showTypeHasBeenSet = true;
}

bool DeleteBlockIgnoreRuleNewRequest::ShowTypeHasBeenSet() const
{
    return m_showTypeHasBeenSet;
}



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

#include <tencentcloud/cdn/v20180606/model/KeyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

KeyRule::KeyRule() :
    m_rulePathsHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_fullUrlCacheHasBeenSet(false),
    m_ignoreCaseHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_ruleTagHasBeenSet(false)
{
}

CoreInternalOutcome KeyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KeyRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("FullUrlCache") && !value["FullUrlCache"].IsNull())
    {
        if (!value["FullUrlCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRule.FullUrlCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullUrlCache = string(value["FullUrlCache"].GetString());
        m_fullUrlCacheHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCase") && !value["IgnoreCase"].IsNull())
    {
        if (!value["IgnoreCase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRule.IgnoreCase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCase = string(value["IgnoreCase"].GetString());
        m_ignoreCaseHasBeenSet = true;
    }

    if (value.HasMember("QueryString") && !value["QueryString"].IsNull())
    {
        if (!value["QueryString"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRule.QueryString` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_queryString.Deserialize(value["QueryString"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_queryStringHasBeenSet = true;
    }

    if (value.HasMember("RuleTag") && !value["RuleTag"].IsNull())
    {
        if (!value["RuleTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyRule.RuleTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTag = string(value["RuleTag"].GetString());
        m_ruleTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rulePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_fullUrlCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullUrlCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullUrlCache.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreCase.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryString.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTag.c_str(), allocator).Move(), allocator);
    }

}


vector<string> KeyRule::GetRulePaths() const
{
    return m_rulePaths;
}

void KeyRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool KeyRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

string KeyRule::GetRuleType() const
{
    return m_ruleType;
}

void KeyRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool KeyRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string KeyRule::GetFullUrlCache() const
{
    return m_fullUrlCache;
}

void KeyRule::SetFullUrlCache(const string& _fullUrlCache)
{
    m_fullUrlCache = _fullUrlCache;
    m_fullUrlCacheHasBeenSet = true;
}

bool KeyRule::FullUrlCacheHasBeenSet() const
{
    return m_fullUrlCacheHasBeenSet;
}

string KeyRule::GetIgnoreCase() const
{
    return m_ignoreCase;
}

void KeyRule::SetIgnoreCase(const string& _ignoreCase)
{
    m_ignoreCase = _ignoreCase;
    m_ignoreCaseHasBeenSet = true;
}

bool KeyRule::IgnoreCaseHasBeenSet() const
{
    return m_ignoreCaseHasBeenSet;
}

RuleQueryString KeyRule::GetQueryString() const
{
    return m_queryString;
}

void KeyRule::SetQueryString(const RuleQueryString& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool KeyRule::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

string KeyRule::GetRuleTag() const
{
    return m_ruleTag;
}

void KeyRule::SetRuleTag(const string& _ruleTag)
{
    m_ruleTag = _ruleTag;
    m_ruleTagHasBeenSet = true;
}

bool KeyRule::RuleTagHasBeenSet() const
{
    return m_ruleTagHasBeenSet;
}


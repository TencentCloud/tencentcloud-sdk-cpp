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

#include <tencentcloud/cdn/v20180606/model/AccessControlRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AccessControlRule::AccessControlRule() :
    m_ruleTypeHasBeenSet(false),
    m_ruleContentHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_ruleHeaderHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("RuleHeader") && !value["RuleHeader"].IsNull())
    {
        if (!value["RuleHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRule.RuleHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleHeader = string(value["RuleHeader"].GetString());
        m_ruleHeaderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleHeader.c_str(), allocator).Move(), allocator);
    }

}


string AccessControlRule::GetRuleType() const
{
    return m_ruleType;
}

void AccessControlRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool AccessControlRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string AccessControlRule::GetRuleContent() const
{
    return m_ruleContent;
}

void AccessControlRule::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool AccessControlRule::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

string AccessControlRule::GetRegex() const
{
    return m_regex;
}

void AccessControlRule::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool AccessControlRule::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

string AccessControlRule::GetRuleHeader() const
{
    return m_ruleHeader;
}

void AccessControlRule::SetRuleHeader(const string& _ruleHeader)
{
    m_ruleHeader = _ruleHeader;
    m_ruleHeaderHasBeenSet = true;
}

bool AccessControlRule::RuleHeaderHasBeenSet() const
{
    return m_ruleHeaderHasBeenSet;
}


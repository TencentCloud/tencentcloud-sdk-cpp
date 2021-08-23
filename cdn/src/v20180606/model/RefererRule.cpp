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

#include <tencentcloud/cdn/v20180606/model/RefererRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RefererRule::RefererRule() :
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_refererTypeHasBeenSet(false),
    m_referersHasBeenSet(false),
    m_allowEmptyHasBeenSet(false)
{
}

CoreInternalOutcome RefererRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RefererRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("RefererType") && !value["RefererType"].IsNull())
    {
        if (!value["RefererType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefererRule.RefererType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refererType = string(value["RefererType"].GetString());
        m_refererTypeHasBeenSet = true;
    }

    if (value.HasMember("Referers") && !value["Referers"].IsNull())
    {
        if (!value["Referers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RefererRule.Referers` is not array type"));

        const rapidjson::Value &tmpValue = value["Referers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_referers.push_back((*itr).GetString());
        }
        m_referersHasBeenSet = true;
    }

    if (value.HasMember("AllowEmpty") && !value["AllowEmpty"].IsNull())
    {
        if (!value["AllowEmpty"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RefererRule.AllowEmpty` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowEmpty = value["AllowEmpty"].GetBool();
        m_allowEmptyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefererRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_refererTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefererType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refererType.c_str(), allocator).Move(), allocator);
    }

    if (m_referersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_referers.begin(); itr != m_referers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowEmpty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowEmpty, allocator);
    }

}


string RefererRule::GetRuleType() const
{
    return m_ruleType;
}

void RefererRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool RefererRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> RefererRule::GetRulePaths() const
{
    return m_rulePaths;
}

void RefererRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool RefererRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

string RefererRule::GetRefererType() const
{
    return m_refererType;
}

void RefererRule::SetRefererType(const string& _refererType)
{
    m_refererType = _refererType;
    m_refererTypeHasBeenSet = true;
}

bool RefererRule::RefererTypeHasBeenSet() const
{
    return m_refererTypeHasBeenSet;
}

vector<string> RefererRule::GetReferers() const
{
    return m_referers;
}

void RefererRule::SetReferers(const vector<string>& _referers)
{
    m_referers = _referers;
    m_referersHasBeenSet = true;
}

bool RefererRule::ReferersHasBeenSet() const
{
    return m_referersHasBeenSet;
}

bool RefererRule::GetAllowEmpty() const
{
    return m_allowEmpty;
}

void RefererRule::SetAllowEmpty(const bool& _allowEmpty)
{
    m_allowEmpty = _allowEmpty;
    m_allowEmptyHasBeenSet = true;
}

bool RefererRule::AllowEmptyHasBeenSet() const
{
    return m_allowEmptyHasBeenSet;
}


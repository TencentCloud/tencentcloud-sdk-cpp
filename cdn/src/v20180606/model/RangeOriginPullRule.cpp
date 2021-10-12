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

#include <tencentcloud/cdn/v20180606/model/RangeOriginPullRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RangeOriginPullRule::RangeOriginPullRule() :
    m_switchHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false)
{
}

CoreInternalOutcome RangeOriginPullRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeOriginPullRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RangeOriginPullRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RangeOriginPullRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RangeOriginPullRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

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

}


string RangeOriginPullRule::GetSwitch() const
{
    return m_switch;
}

void RangeOriginPullRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool RangeOriginPullRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string RangeOriginPullRule::GetRuleType() const
{
    return m_ruleType;
}

void RangeOriginPullRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool RangeOriginPullRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> RangeOriginPullRule::GetRulePaths() const
{
    return m_rulePaths;
}

void RangeOriginPullRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool RangeOriginPullRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}


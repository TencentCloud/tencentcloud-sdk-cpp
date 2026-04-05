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

#include <tencentcloud/ga2/v20250115/model/RuleAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

RuleAction::RuleAction() :
    m_ruleActionTypeHasBeenSet(false),
    m_ruleActionValueHasBeenSet(false)
{
}

CoreInternalOutcome RuleAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleActionType") && !value["RuleActionType"].IsNull())
    {
        if (!value["RuleActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RuleActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleActionType = string(value["RuleActionType"].GetString());
        m_ruleActionTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleActionValue") && !value["RuleActionValue"].IsNull())
    {
        if (!value["RuleActionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RuleActionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleActionValue = string(value["RuleActionValue"].GetString());
        m_ruleActionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleActionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleActionType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleActionValue.c_str(), allocator).Move(), allocator);
    }

}


string RuleAction::GetRuleActionType() const
{
    return m_ruleActionType;
}

void RuleAction::SetRuleActionType(const string& _ruleActionType)
{
    m_ruleActionType = _ruleActionType;
    m_ruleActionTypeHasBeenSet = true;
}

bool RuleAction::RuleActionTypeHasBeenSet() const
{
    return m_ruleActionTypeHasBeenSet;
}

string RuleAction::GetRuleActionValue() const
{
    return m_ruleActionValue;
}

void RuleAction::SetRuleActionValue(const string& _ruleActionValue)
{
    m_ruleActionValue = _ruleActionValue;
    m_ruleActionValueHasBeenSet = true;
}

bool RuleAction::RuleActionValueHasBeenSet() const
{
    return m_ruleActionValueHasBeenSet;
}


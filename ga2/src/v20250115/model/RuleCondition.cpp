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

#include <tencentcloud/ga2/v20250115/model/RuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

RuleCondition::RuleCondition() :
    m_ruleConditionTypeHasBeenSet(false),
    m_ruleConditionValueHasBeenSet(false)
{
}

CoreInternalOutcome RuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleConditionType") && !value["RuleConditionType"].IsNull())
    {
        if (!value["RuleConditionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.RuleConditionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleConditionType = string(value["RuleConditionType"].GetString());
        m_ruleConditionTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleConditionValue") && !value["RuleConditionValue"].IsNull())
    {
        if (!value["RuleConditionValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.RuleConditionValue` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleConditionValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleConditionValue.push_back((*itr).GetString());
        }
        m_ruleConditionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleConditionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleConditionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleConditionType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleConditionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleConditionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleConditionValue.begin(); itr != m_ruleConditionValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RuleCondition::GetRuleConditionType() const
{
    return m_ruleConditionType;
}

void RuleCondition::SetRuleConditionType(const string& _ruleConditionType)
{
    m_ruleConditionType = _ruleConditionType;
    m_ruleConditionTypeHasBeenSet = true;
}

bool RuleCondition::RuleConditionTypeHasBeenSet() const
{
    return m_ruleConditionTypeHasBeenSet;
}

vector<string> RuleCondition::GetRuleConditionValue() const
{
    return m_ruleConditionValue;
}

void RuleCondition::SetRuleConditionValue(const vector<string>& _ruleConditionValue)
{
    m_ruleConditionValue = _ruleConditionValue;
    m_ruleConditionValueHasBeenSet = true;
}

bool RuleCondition::RuleConditionValueHasBeenSet() const
{
    return m_ruleConditionValueHasBeenSet;
}


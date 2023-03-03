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

#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

AlarmPolicyCondition::AlarmPolicyCondition() :
    m_isUnionRuleHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_complexExpressionHasBeenSet(false)
{
}

CoreInternalOutcome AlarmPolicyCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsUnionRule") && !value["IsUnionRule"].IsNull())
    {
        if (!value["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyCondition.IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = value["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyCondition.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmPolicyRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("ComplexExpression") && !value["ComplexExpression"].IsNull())
    {
        if (!value["ComplexExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmPolicyCondition.ComplexExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complexExpression = string(value["ComplexExpression"].GetString());
        m_complexExpressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmPolicyCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_complexExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplexExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complexExpression.c_str(), allocator).Move(), allocator);
    }

}


int64_t AlarmPolicyCondition::GetIsUnionRule() const
{
    return m_isUnionRule;
}

void AlarmPolicyCondition::SetIsUnionRule(const int64_t& _isUnionRule)
{
    m_isUnionRule = _isUnionRule;
    m_isUnionRuleHasBeenSet = true;
}

bool AlarmPolicyCondition::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}

vector<AlarmPolicyRule> AlarmPolicyCondition::GetRules() const
{
    return m_rules;
}

void AlarmPolicyCondition::SetRules(const vector<AlarmPolicyRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AlarmPolicyCondition::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

string AlarmPolicyCondition::GetComplexExpression() const
{
    return m_complexExpression;
}

void AlarmPolicyCondition::SetComplexExpression(const string& _complexExpression)
{
    m_complexExpression = _complexExpression;
    m_complexExpressionHasBeenSet = true;
}

bool AlarmPolicyCondition::ComplexExpressionHasBeenSet() const
{
    return m_complexExpressionHasBeenSet;
}


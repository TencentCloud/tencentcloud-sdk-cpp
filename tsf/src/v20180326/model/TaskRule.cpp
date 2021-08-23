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

#include <tencentcloud/tsf/v20180326/model/TaskRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

TaskRule::TaskRule() :
    m_ruleTypeHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_repeatIntervalHasBeenSet(false)
{
}

CoreInternalOutcome TaskRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRule.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }

    if (value.HasMember("RepeatInterval") && !value["RepeatInterval"].IsNull())
    {
        if (!value["RepeatInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskRule.RepeatInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_repeatInterval = value["RepeatInterval"].GetUint64();
        m_repeatIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

    if (m_repeatIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repeatInterval, allocator);
    }

}


string TaskRule::GetRuleType() const
{
    return m_ruleType;
}

void TaskRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool TaskRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string TaskRule::GetExpression() const
{
    return m_expression;
}

void TaskRule::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool TaskRule::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

uint64_t TaskRule::GetRepeatInterval() const
{
    return m_repeatInterval;
}

void TaskRule::SetRepeatInterval(const uint64_t& _repeatInterval)
{
    m_repeatInterval = _repeatInterval;
    m_repeatIntervalHasBeenSet = true;
}

bool TaskRule::RepeatIntervalHasBeenSet() const
{
    return m_repeatIntervalHasBeenSet;
}


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

#include <tencentcloud/teo/v20220901/model/FunctionRuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FunctionRuleCondition::FunctionRuleCondition() :
    m_ruleConditionsHasBeenSet(false)
{
}

CoreInternalOutcome FunctionRuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleConditions") && !value["RuleConditions"].IsNull())
    {
        if (!value["RuleConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FunctionRuleCondition.RuleConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleConditions.push_back(item);
        }
        m_ruleConditionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionRuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleConditions.begin(); itr != m_ruleConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RuleCondition> FunctionRuleCondition::GetRuleConditions() const
{
    return m_ruleConditions;
}

void FunctionRuleCondition::SetRuleConditions(const vector<RuleCondition>& _ruleConditions)
{
    m_ruleConditions = _ruleConditions;
    m_ruleConditionsHasBeenSet = true;
}

bool FunctionRuleCondition::RuleConditionsHasBeenSet() const
{
    return m_ruleConditionsHasBeenSet;
}


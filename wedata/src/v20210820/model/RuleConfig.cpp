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

#include <tencentcloud/wedata/v20210820/model/RuleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleConfig::RuleConfig() :
    m_ruleIdHasBeenSet(false),
    m_conditionTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_targetConditionHasBeenSet(false)
{
}

CoreInternalOutcome RuleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleConfig.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ConditionType") && !value["ConditionType"].IsNull())
    {
        if (!value["ConditionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleConfig.ConditionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_conditionType = value["ConditionType"].GetUint64();
        m_conditionTypeHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleConfig.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TargetCondition") && !value["TargetCondition"].IsNull())
    {
        if (!value["TargetCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleConfig.TargetCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCondition = string(value["TargetCondition"].GetString());
        m_targetConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_conditionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conditionType, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCondition.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleConfig::GetRuleId() const
{
    return m_ruleId;
}

void RuleConfig::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleConfig::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t RuleConfig::GetConditionType() const
{
    return m_conditionType;
}

void RuleConfig::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool RuleConfig::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string RuleConfig::GetCondition() const
{
    return m_condition;
}

void RuleConfig::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool RuleConfig::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string RuleConfig::GetTargetCondition() const
{
    return m_targetCondition;
}

void RuleConfig::SetTargetCondition(const string& _targetCondition)
{
    m_targetCondition = _targetCondition;
    m_targetConditionHasBeenSet = true;
}

bool RuleConfig::TargetConditionHasBeenSet() const
{
    return m_targetConditionHasBeenSet;
}


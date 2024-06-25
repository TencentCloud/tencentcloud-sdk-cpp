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

#include <tencentcloud/cls/v20201016/model/ConditionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConditionInfo::ConditionInfo() :
    m_attributesHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_conditionValueHasBeenSet(false)
{
}

CoreInternalOutcome ConditionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionInfo.Attributes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributes = string(value["Attributes"].GetString());
        m_attributesHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionInfo.Rule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rule = value["Rule"].GetUint64();
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("ConditionValue") && !value["ConditionValue"].IsNull())
    {
        if (!value["ConditionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionInfo.ConditionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionValue = string(value["ConditionValue"].GetString());
        m_conditionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConditionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributes.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rule, allocator);
    }

    if (m_conditionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionValue.c_str(), allocator).Move(), allocator);
    }

}


string ConditionInfo::GetAttributes() const
{
    return m_attributes;
}

void ConditionInfo::SetAttributes(const string& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool ConditionInfo::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

uint64_t ConditionInfo::GetRule() const
{
    return m_rule;
}

void ConditionInfo::SetRule(const uint64_t& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool ConditionInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string ConditionInfo::GetConditionValue() const
{
    return m_conditionValue;
}

void ConditionInfo::SetConditionValue(const string& _conditionValue)
{
    m_conditionValue = _conditionValue;
    m_conditionValueHasBeenSet = true;
}

bool ConditionInfo::ConditionValueHasBeenSet() const
{
    return m_conditionValueHasBeenSet;
}


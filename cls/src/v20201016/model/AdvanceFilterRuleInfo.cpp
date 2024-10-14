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

#include <tencentcloud/cls/v20201016/model/AdvanceFilterRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AdvanceFilterRuleInfo::AdvanceFilterRuleInfo() :
    m_keyHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome AdvanceFilterRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceFilterRuleInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceFilterRuleInfo.Rule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rule = value["Rule"].GetUint64();
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvanceFilterRuleInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvanceFilterRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rule, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string AdvanceFilterRuleInfo::GetKey() const
{
    return m_key;
}

void AdvanceFilterRuleInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AdvanceFilterRuleInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

uint64_t AdvanceFilterRuleInfo::GetRule() const
{
    return m_rule;
}

void AdvanceFilterRuleInfo::SetRule(const uint64_t& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool AdvanceFilterRuleInfo::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string AdvanceFilterRuleInfo::GetValue() const
{
    return m_value;
}

void AdvanceFilterRuleInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AdvanceFilterRuleInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


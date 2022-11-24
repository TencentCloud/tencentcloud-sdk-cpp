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

#include <tencentcloud/teo/v20220901/model/RuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleCondition::RuleCondition() :
    m_operatorHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_ignoreCaseHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ignoreNameCaseHasBeenSet(false)
{
}

CoreInternalOutcome RuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleCondition.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCase") && !value["IgnoreCase"].IsNull())
    {
        if (!value["IgnoreCase"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.IgnoreCase` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCase = value["IgnoreCase"].GetBool();
        m_ignoreCaseHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IgnoreNameCase") && !value["IgnoreNameCase"].IsNull())
    {
        if (!value["IgnoreNameCase"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleCondition.IgnoreNameCase` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreNameCase = value["IgnoreNameCase"].GetBool();
        m_ignoreNameCaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ignoreCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreCase, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreNameCaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreNameCase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreNameCase, allocator);
    }

}


string RuleCondition::GetOperator() const
{
    return m_operator;
}

void RuleCondition::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool RuleCondition::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string RuleCondition::GetTarget() const
{
    return m_target;
}

void RuleCondition::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool RuleCondition::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<string> RuleCondition::GetValues() const
{
    return m_values;
}

void RuleCondition::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool RuleCondition::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

bool RuleCondition::GetIgnoreCase() const
{
    return m_ignoreCase;
}

void RuleCondition::SetIgnoreCase(const bool& _ignoreCase)
{
    m_ignoreCase = _ignoreCase;
    m_ignoreCaseHasBeenSet = true;
}

bool RuleCondition::IgnoreCaseHasBeenSet() const
{
    return m_ignoreCaseHasBeenSet;
}

string RuleCondition::GetName() const
{
    return m_name;
}

void RuleCondition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleCondition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool RuleCondition::GetIgnoreNameCase() const
{
    return m_ignoreNameCase;
}

void RuleCondition::SetIgnoreNameCase(const bool& _ignoreNameCase)
{
    m_ignoreNameCase = _ignoreNameCase;
    m_ignoreNameCaseHasBeenSet = true;
}

bool RuleCondition::IgnoreNameCaseHasBeenSet() const
{
    return m_ignoreNameCaseHasBeenSet;
}


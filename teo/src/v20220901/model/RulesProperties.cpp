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

#include <tencentcloud/teo/v20220901/model/RulesProperties.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RulesProperties::RulesProperties() :
    m_nameHasBeenSet(false),
    m_minHasBeenSet(false),
    m_choicesValueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_isMultipleHasBeenSet(false),
    m_isAllowEmptyHasBeenSet(false),
    m_choicePropertiesHasBeenSet(false),
    m_extraParameterHasBeenSet(false)
{
}

CoreInternalOutcome RulesProperties::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("ChoicesValue") && !value["ChoicesValue"].IsNull())
    {
        if (!value["ChoicesValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulesProperties.ChoicesValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ChoicesValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_choicesValue.push_back((*itr).GetString());
        }
        m_choicesValueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("IsMultiple") && !value["IsMultiple"].IsNull())
    {
        if (!value["IsMultiple"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.IsMultiple` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiple = value["IsMultiple"].GetBool();
        m_isMultipleHasBeenSet = true;
    }

    if (value.HasMember("IsAllowEmpty") && !value["IsAllowEmpty"].IsNull())
    {
        if (!value["IsAllowEmpty"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.IsAllowEmpty` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEmpty = value["IsAllowEmpty"].GetBool();
        m_isAllowEmptyHasBeenSet = true;
    }

    if (value.HasMember("ChoiceProperties") && !value["ChoiceProperties"].IsNull())
    {
        if (!value["ChoiceProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulesProperties.ChoiceProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["ChoiceProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleChoicePropertiesItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_choiceProperties.push_back(item);
        }
        m_choicePropertiesHasBeenSet = true;
    }

    if (value.HasMember("ExtraParameter") && !value["ExtraParameter"].IsNull())
    {
        if (!value["ExtraParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RulesProperties.ExtraParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraParameter.Deserialize(value["ExtraParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RulesProperties::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_choicesValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChoicesValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_choicesValue.begin(); itr != m_choicesValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_isMultipleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiple";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMultiple, allocator);
    }

    if (m_isAllowEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowEmpty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllowEmpty, allocator);
    }

    if (m_choicePropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChoiceProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_choiceProperties.begin(); itr != m_choiceProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RulesProperties::GetName() const
{
    return m_name;
}

void RulesProperties::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RulesProperties::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t RulesProperties::GetMin() const
{
    return m_min;
}

void RulesProperties::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool RulesProperties::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

vector<string> RulesProperties::GetChoicesValue() const
{
    return m_choicesValue;
}

void RulesProperties::SetChoicesValue(const vector<string>& _choicesValue)
{
    m_choicesValue = _choicesValue;
    m_choicesValueHasBeenSet = true;
}

bool RulesProperties::ChoicesValueHasBeenSet() const
{
    return m_choicesValueHasBeenSet;
}

string RulesProperties::GetType() const
{
    return m_type;
}

void RulesProperties::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RulesProperties::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RulesProperties::GetMax() const
{
    return m_max;
}

void RulesProperties::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool RulesProperties::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

bool RulesProperties::GetIsMultiple() const
{
    return m_isMultiple;
}

void RulesProperties::SetIsMultiple(const bool& _isMultiple)
{
    m_isMultiple = _isMultiple;
    m_isMultipleHasBeenSet = true;
}

bool RulesProperties::IsMultipleHasBeenSet() const
{
    return m_isMultipleHasBeenSet;
}

bool RulesProperties::GetIsAllowEmpty() const
{
    return m_isAllowEmpty;
}

void RulesProperties::SetIsAllowEmpty(const bool& _isAllowEmpty)
{
    m_isAllowEmpty = _isAllowEmpty;
    m_isAllowEmptyHasBeenSet = true;
}

bool RulesProperties::IsAllowEmptyHasBeenSet() const
{
    return m_isAllowEmptyHasBeenSet;
}

vector<RuleChoicePropertiesItem> RulesProperties::GetChoiceProperties() const
{
    return m_choiceProperties;
}

void RulesProperties::SetChoiceProperties(const vector<RuleChoicePropertiesItem>& _choiceProperties)
{
    m_choiceProperties = _choiceProperties;
    m_choicePropertiesHasBeenSet = true;
}

bool RulesProperties::ChoicePropertiesHasBeenSet() const
{
    return m_choicePropertiesHasBeenSet;
}

RuleExtraParameter RulesProperties::GetExtraParameter() const
{
    return m_extraParameter;
}

void RulesProperties::SetExtraParameter(const RuleExtraParameter& _extraParameter)
{
    m_extraParameter = _extraParameter;
    m_extraParameterHasBeenSet = true;
}

bool RulesProperties::ExtraParameterHasBeenSet() const
{
    return m_extraParameterHasBeenSet;
}


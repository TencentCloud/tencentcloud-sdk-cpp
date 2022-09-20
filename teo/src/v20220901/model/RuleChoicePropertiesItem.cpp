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

#include <tencentcloud/teo/v20220901/model/RuleChoicePropertiesItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleChoicePropertiesItem::RuleChoicePropertiesItem() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_choicesValueHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_isMultipleHasBeenSet(false),
    m_isAllowEmptyHasBeenSet(false),
    m_extraParameterHasBeenSet(false)
{
}

CoreInternalOutcome RuleChoicePropertiesItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ChoicesValue") && !value["ChoicesValue"].IsNull())
    {
        if (!value["ChoicesValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.ChoicesValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ChoicesValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_choicesValue.push_back((*itr).GetString());
        }
        m_choicesValueHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.Min` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetInt64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("IsMultiple") && !value["IsMultiple"].IsNull())
    {
        if (!value["IsMultiple"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.IsMultiple` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiple = value["IsMultiple"].GetBool();
        m_isMultipleHasBeenSet = true;
    }

    if (value.HasMember("IsAllowEmpty") && !value["IsAllowEmpty"].IsNull())
    {
        if (!value["IsAllowEmpty"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.IsAllowEmpty` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowEmpty = value["IsAllowEmpty"].GetBool();
        m_isAllowEmptyHasBeenSet = true;
    }

    if (value.HasMember("ExtraParameter") && !value["ExtraParameter"].IsNull())
    {
        if (!value["ExtraParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleChoicePropertiesItem.ExtraParameter` is not object type").SetRequestId(requestId));
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

void RuleChoicePropertiesItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
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

    if (m_extraParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RuleChoicePropertiesItem::GetName() const
{
    return m_name;
}

void RuleChoicePropertiesItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleChoicePropertiesItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleChoicePropertiesItem::GetType() const
{
    return m_type;
}

void RuleChoicePropertiesItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleChoicePropertiesItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> RuleChoicePropertiesItem::GetChoicesValue() const
{
    return m_choicesValue;
}

void RuleChoicePropertiesItem::SetChoicesValue(const vector<string>& _choicesValue)
{
    m_choicesValue = _choicesValue;
    m_choicesValueHasBeenSet = true;
}

bool RuleChoicePropertiesItem::ChoicesValueHasBeenSet() const
{
    return m_choicesValueHasBeenSet;
}

int64_t RuleChoicePropertiesItem::GetMin() const
{
    return m_min;
}

void RuleChoicePropertiesItem::SetMin(const int64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool RuleChoicePropertiesItem::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

int64_t RuleChoicePropertiesItem::GetMax() const
{
    return m_max;
}

void RuleChoicePropertiesItem::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool RuleChoicePropertiesItem::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

bool RuleChoicePropertiesItem::GetIsMultiple() const
{
    return m_isMultiple;
}

void RuleChoicePropertiesItem::SetIsMultiple(const bool& _isMultiple)
{
    m_isMultiple = _isMultiple;
    m_isMultipleHasBeenSet = true;
}

bool RuleChoicePropertiesItem::IsMultipleHasBeenSet() const
{
    return m_isMultipleHasBeenSet;
}

bool RuleChoicePropertiesItem::GetIsAllowEmpty() const
{
    return m_isAllowEmpty;
}

void RuleChoicePropertiesItem::SetIsAllowEmpty(const bool& _isAllowEmpty)
{
    m_isAllowEmpty = _isAllowEmpty;
    m_isAllowEmptyHasBeenSet = true;
}

bool RuleChoicePropertiesItem::IsAllowEmptyHasBeenSet() const
{
    return m_isAllowEmptyHasBeenSet;
}

RuleExtraParameter RuleChoicePropertiesItem::GetExtraParameter() const
{
    return m_extraParameter;
}

void RuleChoicePropertiesItem::SetExtraParameter(const RuleExtraParameter& _extraParameter)
{
    m_extraParameter = _extraParameter;
    m_extraParameterHasBeenSet = true;
}

bool RuleChoicePropertiesItem::ExtraParameterHasBeenSet() const
{
    return m_extraParameterHasBeenSet;
}


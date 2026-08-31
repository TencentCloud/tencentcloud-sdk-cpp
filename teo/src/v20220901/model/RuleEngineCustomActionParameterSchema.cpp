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

#include <tencentcloud/teo/v20220901/model/RuleEngineCustomActionParameterSchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleEngineCustomActionParameterSchema::RuleEngineCustomActionParameterSchema() :
    m_nameHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_minLengthHasBeenSet(false),
    m_maxLengthHasBeenSet(false),
    m_minItemsHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_uniqueItemsHasBeenSet(false),
    m_allowedPatternHasBeenSet(false),
    m_allowedValuesHasBeenSet(false),
    m_multipleOfHasBeenSet(false)
{
}

CoreInternalOutcome RuleEngineCustomActionParameterSchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("MinValue") && !value["MinValue"].IsNull())
    {
        if (!value["MinValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MinValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minValue = value["MinValue"].GetDouble();
        m_minValueHasBeenSet = true;
    }

    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MaxValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = value["MaxValue"].GetDouble();
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("MinLength") && !value["MinLength"].IsNull())
    {
        if (!value["MinLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MinLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minLength = value["MinLength"].GetInt64();
        m_minLengthHasBeenSet = true;
    }

    if (value.HasMember("MaxLength") && !value["MaxLength"].IsNull())
    {
        if (!value["MaxLength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MaxLength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLength = value["MaxLength"].GetInt64();
        m_maxLengthHasBeenSet = true;
    }

    if (value.HasMember("MinItems") && !value["MinItems"].IsNull())
    {
        if (!value["MinItems"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MinItems` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minItems = value["MinItems"].GetInt64();
        m_minItemsHasBeenSet = true;
    }

    if (value.HasMember("MaxItems") && !value["MaxItems"].IsNull())
    {
        if (!value["MaxItems"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MaxItems` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxItems = value["MaxItems"].GetInt64();
        m_maxItemsHasBeenSet = true;
    }

    if (value.HasMember("UniqueItems") && !value["UniqueItems"].IsNull())
    {
        if (!value["UniqueItems"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.UniqueItems` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueItems = value["UniqueItems"].GetBool();
        m_uniqueItemsHasBeenSet = true;
    }

    if (value.HasMember("AllowedPattern") && !value["AllowedPattern"].IsNull())
    {
        if (!value["AllowedPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.AllowedPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowedPattern = string(value["AllowedPattern"].GetString());
        m_allowedPatternHasBeenSet = true;
    }

    if (value.HasMember("AllowedValues") && !value["AllowedValues"].IsNull())
    {
        if (!value["AllowedValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.AllowedValues` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowedValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowedValues.push_back((*itr).GetString());
        }
        m_allowedValuesHasBeenSet = true;
    }

    if (value.HasMember("MultipleOf") && !value["MultipleOf"].IsNull())
    {
        if (!value["MultipleOf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineCustomActionParameterSchema.MultipleOf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multipleOf = string(value["MultipleOf"].GetString());
        m_multipleOfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleEngineCustomActionParameterSchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_minValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minValue, allocator);
    }

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxValue, allocator);
    }

    if (m_minLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minLength, allocator);
    }

    if (m_maxLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLength, allocator);
    }

    if (m_minItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minItems, allocator);
    }

    if (m_maxItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxItems, allocator);
    }

    if (m_uniqueItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uniqueItems, allocator);
    }

    if (m_allowedPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allowedPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_allowedValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowedValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowedValues.begin(); itr != m_allowedValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_multipleOfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultipleOf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multipleOf.c_str(), allocator).Move(), allocator);
    }

}


string RuleEngineCustomActionParameterSchema::GetName() const
{
    return m_name;
}

void RuleEngineCustomActionParameterSchema::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetValueType() const
{
    return m_valueType;
}

void RuleEngineCustomActionParameterSchema::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetDescription() const
{
    return m_description;
}

void RuleEngineCustomActionParameterSchema::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetDefault() const
{
    return m_default;
}

void RuleEngineCustomActionParameterSchema::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetUnit() const
{
    return m_unit;
}

void RuleEngineCustomActionParameterSchema::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

bool RuleEngineCustomActionParameterSchema::GetRequired() const
{
    return m_required;
}

void RuleEngineCustomActionParameterSchema::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

double RuleEngineCustomActionParameterSchema::GetMinValue() const
{
    return m_minValue;
}

void RuleEngineCustomActionParameterSchema::SetMinValue(const double& _minValue)
{
    m_minValue = _minValue;
    m_minValueHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MinValueHasBeenSet() const
{
    return m_minValueHasBeenSet;
}

double RuleEngineCustomActionParameterSchema::GetMaxValue() const
{
    return m_maxValue;
}

void RuleEngineCustomActionParameterSchema::SetMaxValue(const double& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

int64_t RuleEngineCustomActionParameterSchema::GetMinLength() const
{
    return m_minLength;
}

void RuleEngineCustomActionParameterSchema::SetMinLength(const int64_t& _minLength)
{
    m_minLength = _minLength;
    m_minLengthHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MinLengthHasBeenSet() const
{
    return m_minLengthHasBeenSet;
}

int64_t RuleEngineCustomActionParameterSchema::GetMaxLength() const
{
    return m_maxLength;
}

void RuleEngineCustomActionParameterSchema::SetMaxLength(const int64_t& _maxLength)
{
    m_maxLength = _maxLength;
    m_maxLengthHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MaxLengthHasBeenSet() const
{
    return m_maxLengthHasBeenSet;
}

int64_t RuleEngineCustomActionParameterSchema::GetMinItems() const
{
    return m_minItems;
}

void RuleEngineCustomActionParameterSchema::SetMinItems(const int64_t& _minItems)
{
    m_minItems = _minItems;
    m_minItemsHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MinItemsHasBeenSet() const
{
    return m_minItemsHasBeenSet;
}

int64_t RuleEngineCustomActionParameterSchema::GetMaxItems() const
{
    return m_maxItems;
}

void RuleEngineCustomActionParameterSchema::SetMaxItems(const int64_t& _maxItems)
{
    m_maxItems = _maxItems;
    m_maxItemsHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MaxItemsHasBeenSet() const
{
    return m_maxItemsHasBeenSet;
}

bool RuleEngineCustomActionParameterSchema::GetUniqueItems() const
{
    return m_uniqueItems;
}

void RuleEngineCustomActionParameterSchema::SetUniqueItems(const bool& _uniqueItems)
{
    m_uniqueItems = _uniqueItems;
    m_uniqueItemsHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::UniqueItemsHasBeenSet() const
{
    return m_uniqueItemsHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetAllowedPattern() const
{
    return m_allowedPattern;
}

void RuleEngineCustomActionParameterSchema::SetAllowedPattern(const string& _allowedPattern)
{
    m_allowedPattern = _allowedPattern;
    m_allowedPatternHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::AllowedPatternHasBeenSet() const
{
    return m_allowedPatternHasBeenSet;
}

vector<string> RuleEngineCustomActionParameterSchema::GetAllowedValues() const
{
    return m_allowedValues;
}

void RuleEngineCustomActionParameterSchema::SetAllowedValues(const vector<string>& _allowedValues)
{
    m_allowedValues = _allowedValues;
    m_allowedValuesHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::AllowedValuesHasBeenSet() const
{
    return m_allowedValuesHasBeenSet;
}

string RuleEngineCustomActionParameterSchema::GetMultipleOf() const
{
    return m_multipleOf;
}

void RuleEngineCustomActionParameterSchema::SetMultipleOf(const string& _multipleOf)
{
    m_multipleOf = _multipleOf;
    m_multipleOfHasBeenSet = true;
}

bool RuleEngineCustomActionParameterSchema::MultipleOfHasBeenSet() const
{
    return m_multipleOfHasBeenSet;
}


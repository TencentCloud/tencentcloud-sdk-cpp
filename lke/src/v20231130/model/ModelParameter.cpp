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

#include <tencentcloud/lke/v20231130/model/ModelParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModelParameter::ModelParameter() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_enumValuesHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome ModelParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("EnumValues") && !value["EnumValues"].IsNull())
    {
        if (!value["EnumValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelParameter.EnumValues` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValues.push_back((*itr).GetString());
        }
        m_enumValuesHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Default` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_default = value["Default"].GetDouble();
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValues.begin(); itr != m_enumValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_default, allocator);
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

}


string ModelParameter::GetName() const
{
    return m_name;
}

void ModelParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModelParameter::GetType() const
{
    return m_type;
}

void ModelParameter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModelParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModelParameter::GetDefaultValue() const
{
    return m_defaultValue;
}

void ModelParameter::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ModelParameter::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

vector<string> ModelParameter::GetEnumValues() const
{
    return m_enumValues;
}

void ModelParameter::SetEnumValues(const vector<string>& _enumValues)
{
    m_enumValues = _enumValues;
    m_enumValuesHasBeenSet = true;
}

bool ModelParameter::EnumValuesHasBeenSet() const
{
    return m_enumValuesHasBeenSet;
}

double ModelParameter::GetDefault() const
{
    return m_default;
}

void ModelParameter::SetDefault(const double& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ModelParameter::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

double ModelParameter::GetMin() const
{
    return m_min;
}

void ModelParameter::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ModelParameter::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

double ModelParameter::GetMax() const
{
    return m_max;
}

void ModelParameter::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ModelParameter::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}


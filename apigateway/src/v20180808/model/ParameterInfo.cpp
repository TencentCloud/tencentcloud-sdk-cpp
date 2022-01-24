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

#include <tencentcloud/apigateway/v20180808/model/ParameterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ParameterInfo::ParameterInfo() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_minimumHasBeenSet(false),
    m_maximumHasBeenSet(false),
    m_modifedTimeHasBeenSet(false),
    m_valueStringHasBeenSet(false),
    m_defaultValueStringHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome ParameterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Default` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_default = value["Default"].GetInt64();
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Minimum") && !value["Minimum"].IsNull())
    {
        if (!value["Minimum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Minimum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minimum = value["Minimum"].GetInt64();
        m_minimumHasBeenSet = true;
    }

    if (value.HasMember("Maximum") && !value["Maximum"].IsNull())
    {
        if (!value["Maximum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Maximum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximum = value["Maximum"].GetInt64();
        m_maximumHasBeenSet = true;
    }

    if (value.HasMember("ModifedTime") && !value["ModifedTime"].IsNull())
    {
        if (!value["ModifedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.ModifedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifedTime = string(value["ModifedTime"].GetString());
        m_modifedTimeHasBeenSet = true;
    }

    if (value.HasMember("ValueString") && !value["ValueString"].IsNull())
    {
        if (!value["ValueString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.ValueString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueString = string(value["ValueString"].GetString());
        m_valueStringHasBeenSet = true;
    }

    if (value.HasMember("DefaultValueString") && !value["DefaultValueString"].IsNull())
    {
        if (!value["DefaultValueString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.DefaultValueString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValueString = string(value["DefaultValueString"].GetString());
        m_defaultValueStringHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParameterInfo.Range` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_range = string(value["Range"].GetString());
        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParameterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_default, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_minimumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Minimum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minimum, allocator);
    }

    if (m_maximumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maximum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximum, allocator);
    }

    if (m_modifedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_valueStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueString.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValueString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValueString.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

}


string ParameterInfo::GetName() const
{
    return m_name;
}

void ParameterInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParameterInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ParameterInfo::GetValue() const
{
    return m_value;
}

void ParameterInfo::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ParameterInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t ParameterInfo::GetDefault() const
{
    return m_default;
}

void ParameterInfo::SetDefault(const int64_t& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ParameterInfo::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string ParameterInfo::GetUnit() const
{
    return m_unit;
}

void ParameterInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ParameterInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string ParameterInfo::GetType() const
{
    return m_type;
}

void ParameterInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ParameterInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ParameterInfo::GetMinimum() const
{
    return m_minimum;
}

void ParameterInfo::SetMinimum(const int64_t& _minimum)
{
    m_minimum = _minimum;
    m_minimumHasBeenSet = true;
}

bool ParameterInfo::MinimumHasBeenSet() const
{
    return m_minimumHasBeenSet;
}

int64_t ParameterInfo::GetMaximum() const
{
    return m_maximum;
}

void ParameterInfo::SetMaximum(const int64_t& _maximum)
{
    m_maximum = _maximum;
    m_maximumHasBeenSet = true;
}

bool ParameterInfo::MaximumHasBeenSet() const
{
    return m_maximumHasBeenSet;
}

string ParameterInfo::GetModifedTime() const
{
    return m_modifedTime;
}

void ParameterInfo::SetModifedTime(const string& _modifedTime)
{
    m_modifedTime = _modifedTime;
    m_modifedTimeHasBeenSet = true;
}

bool ParameterInfo::ModifedTimeHasBeenSet() const
{
    return m_modifedTimeHasBeenSet;
}

string ParameterInfo::GetValueString() const
{
    return m_valueString;
}

void ParameterInfo::SetValueString(const string& _valueString)
{
    m_valueString = _valueString;
    m_valueStringHasBeenSet = true;
}

bool ParameterInfo::ValueStringHasBeenSet() const
{
    return m_valueStringHasBeenSet;
}

string ParameterInfo::GetDefaultValueString() const
{
    return m_defaultValueString;
}

void ParameterInfo::SetDefaultValueString(const string& _defaultValueString)
{
    m_defaultValueString = _defaultValueString;
    m_defaultValueStringHasBeenSet = true;
}

bool ParameterInfo::DefaultValueStringHasBeenSet() const
{
    return m_defaultValueStringHasBeenSet;
}

string ParameterInfo::GetRange() const
{
    return m_range;
}

void ParameterInfo::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool ParameterInfo::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}


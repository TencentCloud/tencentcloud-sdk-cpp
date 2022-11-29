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

#include <tencentcloud/postgres/v20170312/model/ParamSpecRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ParamSpecRelation::ParamSpecRelation() :
    m_nameHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_enumValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamSpecRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamSpecRelation.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamSpecRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValue.begin(); itr != m_enumValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ParamSpecRelation::GetName() const
{
    return m_name;
}

void ParamSpecRelation::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParamSpecRelation::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParamSpecRelation::GetMemory() const
{
    return m_memory;
}

void ParamSpecRelation::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ParamSpecRelation::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ParamSpecRelation::GetValue() const
{
    return m_value;
}

void ParamSpecRelation::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ParamSpecRelation::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ParamSpecRelation::GetUnit() const
{
    return m_unit;
}

void ParamSpecRelation::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ParamSpecRelation::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

double ParamSpecRelation::GetMax() const
{
    return m_max;
}

void ParamSpecRelation::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ParamSpecRelation::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double ParamSpecRelation::GetMin() const
{
    return m_min;
}

void ParamSpecRelation::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ParamSpecRelation::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

vector<string> ParamSpecRelation::GetEnumValue() const
{
    return m_enumValue;
}

void ParamSpecRelation::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ParamSpecRelation::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}


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

#include <tencentcloud/postgres/v20170312/model/ParamVersionRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ParamVersionRelation::ParamVersionRelation() :
    m_nameHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_enumValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamVersionRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DBKernelVersion") && !value["DBKernelVersion"].IsNull())
    {
        if (!value["DBKernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.DBKernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernelVersion = string(value["DBKernelVersion"].GetString());
        m_dBKernelVersionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamVersionRelation.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamVersionRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
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


string ParamVersionRelation::GetName() const
{
    return m_name;
}

void ParamVersionRelation::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ParamVersionRelation::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ParamVersionRelation::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void ParamVersionRelation::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool ParamVersionRelation::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

string ParamVersionRelation::GetValue() const
{
    return m_value;
}

void ParamVersionRelation::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ParamVersionRelation::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ParamVersionRelation::GetUnit() const
{
    return m_unit;
}

void ParamVersionRelation::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ParamVersionRelation::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

double ParamVersionRelation::GetMax() const
{
    return m_max;
}

void ParamVersionRelation::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ParamVersionRelation::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

double ParamVersionRelation::GetMin() const
{
    return m_min;
}

void ParamVersionRelation::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ParamVersionRelation::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

vector<string> ParamVersionRelation::GetEnumValue() const
{
    return m_enumValue;
}

void ParamVersionRelation::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ParamVersionRelation::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}


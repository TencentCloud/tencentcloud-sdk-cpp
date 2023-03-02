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

#include <tencentcloud/mrs/v20200910/model/BodyTemperatureBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BodyTemperatureBlock::BodyTemperatureBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_normHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome BodyTemperatureBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyTemperatureBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyTemperatureBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Norm") && !value["Norm"].IsNull())
    {
        if (!value["Norm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyTemperatureBlock.Norm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_norm = string(value["Norm"].GetString());
        m_normHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyTemperatureBlock.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyTemperatureBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyTemperatureBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_normHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Norm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_norm.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string BodyTemperatureBlock::GetName() const
{
    return m_name;
}

void BodyTemperatureBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BodyTemperatureBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BodyTemperatureBlock::GetSrc() const
{
    return m_src;
}

void BodyTemperatureBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool BodyTemperatureBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string BodyTemperatureBlock::GetNorm() const
{
    return m_norm;
}

void BodyTemperatureBlock::SetNorm(const string& _norm)
{
    m_norm = _norm;
    m_normHasBeenSet = true;
}

bool BodyTemperatureBlock::NormHasBeenSet() const
{
    return m_normHasBeenSet;
}

string BodyTemperatureBlock::GetUnit() const
{
    return m_unit;
}

void BodyTemperatureBlock::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool BodyTemperatureBlock::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string BodyTemperatureBlock::GetValue() const
{
    return m_value;
}

void BodyTemperatureBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BodyTemperatureBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


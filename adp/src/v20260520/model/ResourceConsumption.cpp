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

#include <tencentcloud/adp/v20260520/model/ResourceConsumption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ResourceConsumption::ResourceConsumption() :
    m_labelHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConsumption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConsumption.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConsumption.Unit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unit = value["Unit"].GetInt64();
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConsumption.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConsumption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unit, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string ResourceConsumption::GetLabel() const
{
    return m_label;
}

void ResourceConsumption::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ResourceConsumption::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t ResourceConsumption::GetUnit() const
{
    return m_unit;
}

void ResourceConsumption::SetUnit(const int64_t& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ResourceConsumption::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

double ResourceConsumption::GetValue() const
{
    return m_value;
}

void ResourceConsumption::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ResourceConsumption::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


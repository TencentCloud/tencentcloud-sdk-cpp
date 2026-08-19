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

#include <tencentcloud/csip/v20221121/model/FieldConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

FieldConfig::FieldConfig() :
    m_labelHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_valueCountHasBeenSet(false)
{
}

CoreInternalOutcome FieldConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.Style` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_style.Deserialize(value["Style"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_styleHasBeenSet = true;
    }

    if (value.HasMember("ValueCount") && !value["ValueCount"].IsNull())
    {
        if (!value["ValueCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldConfig.ValueCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valueCount = value["ValueCount"].GetUint64();
        m_valueCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_style.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_valueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueCount, allocator);
    }

}


string FieldConfig::GetLabel() const
{
    return m_label;
}

void FieldConfig::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool FieldConfig::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string FieldConfig::GetValue() const
{
    return m_value;
}

void FieldConfig::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FieldConfig::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

FieldStyle FieldConfig::GetStyle() const
{
    return m_style;
}

void FieldConfig::SetStyle(const FieldStyle& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool FieldConfig::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

uint64_t FieldConfig::GetValueCount() const
{
    return m_valueCount;
}

void FieldConfig::SetValueCount(const uint64_t& _valueCount)
{
    m_valueCount = _valueCount;
    m_valueCountHasBeenSet = true;
}

bool FieldConfig::ValueCountHasBeenSet() const
{
    return m_valueCountHasBeenSet;
}


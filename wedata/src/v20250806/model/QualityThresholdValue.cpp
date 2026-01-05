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

#include <tencentcloud/wedata/v20250806/model/QualityThresholdValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityThresholdValue::QualityThresholdValue() :
    m_valueTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome QualityThresholdValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityThresholdValue.ValueType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = value["ValueType"].GetUint64();
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityThresholdValue.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityThresholdValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_valueType, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualityThresholdValue::GetValueType() const
{
    return m_valueType;
}

void QualityThresholdValue::SetValueType(const uint64_t& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool QualityThresholdValue::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string QualityThresholdValue::GetValue() const
{
    return m_value;
}

void QualityThresholdValue::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool QualityThresholdValue::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


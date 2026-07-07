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

#include <tencentcloud/alb/v20251030/model/InsertHTTPHeaderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

InsertHTTPHeaderInfo::InsertHTTPHeaderInfo() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueTypeHasBeenSet(false)
{
}

CoreInternalOutcome InsertHTTPHeaderInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsertHTTPHeaderInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsertHTTPHeaderInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsertHTTPHeaderInfo.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InsertHTTPHeaderInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

}


string InsertHTTPHeaderInfo::GetKey() const
{
    return m_key;
}

void InsertHTTPHeaderInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool InsertHTTPHeaderInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string InsertHTTPHeaderInfo::GetValue() const
{
    return m_value;
}

void InsertHTTPHeaderInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InsertHTTPHeaderInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string InsertHTTPHeaderInfo::GetValueType() const
{
    return m_valueType;
}

void InsertHTTPHeaderInfo::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool InsertHTTPHeaderInfo::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}


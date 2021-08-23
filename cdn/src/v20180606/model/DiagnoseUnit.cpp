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

#include <tencentcloud/cdn/v20180606/model/DiagnoseUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DiagnoseUnit::DiagnoseUnit() :
    m_keyHasBeenSet(false),
    m_keyTextHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueTextHasBeenSet(false)
{
}

CoreInternalOutcome DiagnoseUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseUnit.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("KeyText") && !value["KeyText"].IsNull())
    {
        if (!value["KeyText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseUnit.KeyText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyText = string(value["KeyText"].GetString());
        m_keyTextHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseUnit.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueText") && !value["ValueText"].IsNull())
    {
        if (!value["ValueText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagnoseUnit.ValueText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueText = string(value["ValueText"].GetString());
        m_valueTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagnoseUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyText.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueText.c_str(), allocator).Move(), allocator);
    }

}


string DiagnoseUnit::GetKey() const
{
    return m_key;
}

void DiagnoseUnit::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DiagnoseUnit::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DiagnoseUnit::GetKeyText() const
{
    return m_keyText;
}

void DiagnoseUnit::SetKeyText(const string& _keyText)
{
    m_keyText = _keyText;
    m_keyTextHasBeenSet = true;
}

bool DiagnoseUnit::KeyTextHasBeenSet() const
{
    return m_keyTextHasBeenSet;
}

string DiagnoseUnit::GetValue() const
{
    return m_value;
}

void DiagnoseUnit::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DiagnoseUnit::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DiagnoseUnit::GetValueText() const
{
    return m_valueText;
}

void DiagnoseUnit::SetValueText(const string& _valueText)
{
    m_valueText = _valueText;
    m_valueTextHasBeenSet = true;
}

bool DiagnoseUnit::ValueTextHasBeenSet() const
{
    return m_valueTextHasBeenSet;
}


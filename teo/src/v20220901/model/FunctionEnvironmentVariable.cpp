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

#include <tencentcloud/teo/v20220901/model/FunctionEnvironmentVariable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FunctionEnvironmentVariable::FunctionEnvironmentVariable() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome FunctionEnvironmentVariable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionEnvironmentVariable.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionEnvironmentVariable.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionEnvironmentVariable.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionEnvironmentVariable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string FunctionEnvironmentVariable::GetKey() const
{
    return m_key;
}

void FunctionEnvironmentVariable::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool FunctionEnvironmentVariable::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string FunctionEnvironmentVariable::GetValue() const
{
    return m_value;
}

void FunctionEnvironmentVariable::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FunctionEnvironmentVariable::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string FunctionEnvironmentVariable::GetType() const
{
    return m_type;
}

void FunctionEnvironmentVariable::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FunctionEnvironmentVariable::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


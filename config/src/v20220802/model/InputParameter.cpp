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

#include <tencentcloud/config/v20220802/model/InputParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

InputParameter::InputParameter() :
    m_parameterKeyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome InputParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParameterKey") && !value["ParameterKey"].IsNull())
    {
        if (!value["ParameterKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameter.ParameterKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterKey = string(value["ParameterKey"].GetString());
        m_parameterKeyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameter.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameter.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parameterKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterKey.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string InputParameter::GetParameterKey() const
{
    return m_parameterKey;
}

void InputParameter::SetParameterKey(const string& _parameterKey)
{
    m_parameterKey = _parameterKey;
    m_parameterKeyHasBeenSet = true;
}

bool InputParameter::ParameterKeyHasBeenSet() const
{
    return m_parameterKeyHasBeenSet;
}

string InputParameter::GetType() const
{
    return m_type;
}

void InputParameter::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputParameter::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InputParameter::GetValue() const
{
    return m_value;
}

void InputParameter::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InputParameter::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


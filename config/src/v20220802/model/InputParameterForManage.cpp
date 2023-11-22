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

#include <tencentcloud/config/v20220802/model/InputParameterForManage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

InputParameterForManage::InputParameterForManage() :
    m_valueTypeHasBeenSet(false),
    m_parameterKeyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome InputParameterForManage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ValueType") && !value["ValueType"].IsNull())
    {
        if (!value["ValueType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameterForManage.ValueType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_valueType = string(value["ValueType"].GetString());
        m_valueTypeHasBeenSet = true;
    }

    if (value.HasMember("ParameterKey") && !value["ParameterKey"].IsNull())
    {
        if (!value["ParameterKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameterForManage.ParameterKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterKey = string(value["ParameterKey"].GetString());
        m_parameterKeyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameterForManage.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameterForManage.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputParameterForManage.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputParameterForManage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_valueType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string InputParameterForManage::GetValueType() const
{
    return m_valueType;
}

void InputParameterForManage::SetValueType(const string& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool InputParameterForManage::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string InputParameterForManage::GetParameterKey() const
{
    return m_parameterKey;
}

void InputParameterForManage::SetParameterKey(const string& _parameterKey)
{
    m_parameterKey = _parameterKey;
    m_parameterKeyHasBeenSet = true;
}

bool InputParameterForManage::ParameterKeyHasBeenSet() const
{
    return m_parameterKeyHasBeenSet;
}

string InputParameterForManage::GetType() const
{
    return m_type;
}

void InputParameterForManage::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InputParameterForManage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InputParameterForManage::GetDefaultValue() const
{
    return m_defaultValue;
}

void InputParameterForManage::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool InputParameterForManage::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string InputParameterForManage::GetDescription() const
{
    return m_description;
}

void InputParameterForManage::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InputParameterForManage::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


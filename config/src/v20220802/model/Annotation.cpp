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

#include <tencentcloud/config/v20220802/model/Annotation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

Annotation::Annotation() :
    m_configurationHasBeenSet(false),
    m_desiredValueHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_propertyHasBeenSet(false)
{
}

CoreInternalOutcome Annotation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Configuration") && !value["Configuration"].IsNull())
    {
        if (!value["Configuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Annotation.Configuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configuration = string(value["Configuration"].GetString());
        m_configurationHasBeenSet = true;
    }

    if (value.HasMember("DesiredValue") && !value["DesiredValue"].IsNull())
    {
        if (!value["DesiredValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Annotation.DesiredValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desiredValue = string(value["DesiredValue"].GetString());
        m_desiredValueHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Annotation.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("Property") && !value["Property"].IsNull())
    {
        if (!value["Property"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Annotation.Property` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_property = string(value["Property"].GetString());
        m_propertyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Annotation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configuration.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desiredValue.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Property";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_property.c_str(), allocator).Move(), allocator);
    }

}


string Annotation::GetConfiguration() const
{
    return m_configuration;
}

void Annotation::SetConfiguration(const string& _configuration)
{
    m_configuration = _configuration;
    m_configurationHasBeenSet = true;
}

bool Annotation::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

string Annotation::GetDesiredValue() const
{
    return m_desiredValue;
}

void Annotation::SetDesiredValue(const string& _desiredValue)
{
    m_desiredValue = _desiredValue;
    m_desiredValueHasBeenSet = true;
}

bool Annotation::DesiredValueHasBeenSet() const
{
    return m_desiredValueHasBeenSet;
}

string Annotation::GetOperator() const
{
    return m_operator;
}

void Annotation::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Annotation::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string Annotation::GetProperty() const
{
    return m_property;
}

void Annotation::SetProperty(const string& _property)
{
    m_property = _property;
    m_propertyHasBeenSet = true;
}

bool Annotation::PropertyHasBeenSet() const
{
    return m_propertyHasBeenSet;
}


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

#include <tencentcloud/apigateway/v20180808/model/ServiceParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ServiceParameter::ServiceParameter() :
    m_nameHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_relevantRequestParameterPositionHasBeenSet(false),
    m_relevantRequestParameterNameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_relevantRequestParameterDescHasBeenSet(false),
    m_relevantRequestParameterTypeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("RelevantRequestParameterPosition") && !value["RelevantRequestParameterPosition"].IsNull())
    {
        if (!value["RelevantRequestParameterPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.RelevantRequestParameterPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relevantRequestParameterPosition = string(value["RelevantRequestParameterPosition"].GetString());
        m_relevantRequestParameterPositionHasBeenSet = true;
    }

    if (value.HasMember("RelevantRequestParameterName") && !value["RelevantRequestParameterName"].IsNull())
    {
        if (!value["RelevantRequestParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.RelevantRequestParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relevantRequestParameterName = string(value["RelevantRequestParameterName"].GetString());
        m_relevantRequestParameterNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("RelevantRequestParameterDesc") && !value["RelevantRequestParameterDesc"].IsNull())
    {
        if (!value["RelevantRequestParameterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.RelevantRequestParameterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relevantRequestParameterDesc = string(value["RelevantRequestParameterDesc"].GetString());
        m_relevantRequestParameterDescHasBeenSet = true;
    }

    if (value.HasMember("RelevantRequestParameterType") && !value["RelevantRequestParameterType"].IsNull())
    {
        if (!value["RelevantRequestParameterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceParameter.RelevantRequestParameterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relevantRequestParameterType = string(value["RelevantRequestParameterType"].GetString());
        m_relevantRequestParameterTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_relevantRequestParameterPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantRequestParameterPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relevantRequestParameterPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_relevantRequestParameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantRequestParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relevantRequestParameterName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_relevantRequestParameterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantRequestParameterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relevantRequestParameterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_relevantRequestParameterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelevantRequestParameterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relevantRequestParameterType.c_str(), allocator).Move(), allocator);
    }

}


string ServiceParameter::GetName() const
{
    return m_name;
}

void ServiceParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceParameter::GetPosition() const
{
    return m_position;
}

void ServiceParameter::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ServiceParameter::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string ServiceParameter::GetRelevantRequestParameterPosition() const
{
    return m_relevantRequestParameterPosition;
}

void ServiceParameter::SetRelevantRequestParameterPosition(const string& _relevantRequestParameterPosition)
{
    m_relevantRequestParameterPosition = _relevantRequestParameterPosition;
    m_relevantRequestParameterPositionHasBeenSet = true;
}

bool ServiceParameter::RelevantRequestParameterPositionHasBeenSet() const
{
    return m_relevantRequestParameterPositionHasBeenSet;
}

string ServiceParameter::GetRelevantRequestParameterName() const
{
    return m_relevantRequestParameterName;
}

void ServiceParameter::SetRelevantRequestParameterName(const string& _relevantRequestParameterName)
{
    m_relevantRequestParameterName = _relevantRequestParameterName;
    m_relevantRequestParameterNameHasBeenSet = true;
}

bool ServiceParameter::RelevantRequestParameterNameHasBeenSet() const
{
    return m_relevantRequestParameterNameHasBeenSet;
}

string ServiceParameter::GetDefaultValue() const
{
    return m_defaultValue;
}

void ServiceParameter::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ServiceParameter::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

string ServiceParameter::GetRelevantRequestParameterDesc() const
{
    return m_relevantRequestParameterDesc;
}

void ServiceParameter::SetRelevantRequestParameterDesc(const string& _relevantRequestParameterDesc)
{
    m_relevantRequestParameterDesc = _relevantRequestParameterDesc;
    m_relevantRequestParameterDescHasBeenSet = true;
}

bool ServiceParameter::RelevantRequestParameterDescHasBeenSet() const
{
    return m_relevantRequestParameterDescHasBeenSet;
}

string ServiceParameter::GetRelevantRequestParameterType() const
{
    return m_relevantRequestParameterType;
}

void ServiceParameter::SetRelevantRequestParameterType(const string& _relevantRequestParameterType)
{
    m_relevantRequestParameterType = _relevantRequestParameterType;
    m_relevantRequestParameterTypeHasBeenSet = true;
}

bool ServiceParameter::RelevantRequestParameterTypeHasBeenSet() const
{
    return m_relevantRequestParameterTypeHasBeenSet;
}


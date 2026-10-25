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

#include <tencentcloud/rum/v20210622/model/EventStack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

EventStack::EventStack() :
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_mechanismTypeHasBeenSet(false),
    m_mechanismHandledHasBeenSet(false)
{
}

CoreInternalOutcome EventStack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStack.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStack.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("MechanismType") && !value["MechanismType"].IsNull())
    {
        if (!value["MechanismType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStack.MechanismType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mechanismType = string(value["MechanismType"].GetString());
        m_mechanismTypeHasBeenSet = true;
    }

    if (value.HasMember("MechanismHandled") && !value["MechanismHandled"].IsNull())
    {
        if (!value["MechanismHandled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventStack.MechanismHandled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mechanismHandled = value["MechanismHandled"].GetInt64();
        m_mechanismHandledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventStack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_mechanismTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MechanismType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mechanismType.c_str(), allocator).Move(), allocator);
    }

    if (m_mechanismHandledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MechanismHandled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mechanismHandled, allocator);
    }

}


string EventStack::GetType() const
{
    return m_type;
}

void EventStack::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventStack::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EventStack::GetValue() const
{
    return m_value;
}

void EventStack::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool EventStack::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string EventStack::GetMechanismType() const
{
    return m_mechanismType;
}

void EventStack::SetMechanismType(const string& _mechanismType)
{
    m_mechanismType = _mechanismType;
    m_mechanismTypeHasBeenSet = true;
}

bool EventStack::MechanismTypeHasBeenSet() const
{
    return m_mechanismTypeHasBeenSet;
}

int64_t EventStack::GetMechanismHandled() const
{
    return m_mechanismHandled;
}

void EventStack::SetMechanismHandled(const int64_t& _mechanismHandled)
{
    m_mechanismHandled = _mechanismHandled;
    m_mechanismHandledHasBeenSet = true;
}

bool EventStack::MechanismHandledHasBeenSet() const
{
    return m_mechanismHandledHasBeenSet;
}


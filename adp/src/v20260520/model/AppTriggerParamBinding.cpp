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

#include <tencentcloud/adp/v20260520/model/AppTriggerParamBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerParamBinding::AppTriggerParamBinding() :
    m_paramNameHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerParamBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamBinding.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamBinding.ParamType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = value["ParamType"].GetInt64();
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamBinding.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerParamBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paramType, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AppTriggerParamBinding::GetParamName() const
{
    return m_paramName;
}

void AppTriggerParamBinding::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AppTriggerParamBinding::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

int64_t AppTriggerParamBinding::GetParamType() const
{
    return m_paramType;
}

void AppTriggerParamBinding::SetParamType(const int64_t& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool AppTriggerParamBinding::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

AppTriggerParamBindingValue AppTriggerParamBinding::GetValue() const
{
    return m_value;
}

void AppTriggerParamBinding::SetValue(const AppTriggerParamBindingValue& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AppTriggerParamBinding::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}


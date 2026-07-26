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

#include <tencentcloud/adp/v20260520/model/AppTriggerParamBindingValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerParamBindingValue::AppTriggerParamBindingValue() :
    m_paramValueHasBeenSet(false),
    m_variableNameHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerParamBindingValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamBindingValue.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }

    if (value.HasMember("VariableName") && !value["VariableName"].IsNull())
    {
        if (!value["VariableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerParamBindingValue.VariableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_variableName = string(value["VariableName"].GetString());
        m_variableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerParamBindingValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

    if (m_variableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_variableName.c_str(), allocator).Move(), allocator);
    }

}


string AppTriggerParamBindingValue::GetParamValue() const
{
    return m_paramValue;
}

void AppTriggerParamBindingValue::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool AppTriggerParamBindingValue::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

string AppTriggerParamBindingValue::GetVariableName() const
{
    return m_variableName;
}

void AppTriggerParamBindingValue::SetVariableName(const string& _variableName)
{
    m_variableName = _variableName;
    m_variableNameHasBeenSet = true;
}

bool AppTriggerParamBindingValue::VariableNameHasBeenSet() const
{
    return m_variableNameHasBeenSet;
}


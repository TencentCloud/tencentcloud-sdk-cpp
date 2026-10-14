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

#include <tencentcloud/adp/v20260520/model/AppVariableValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppVariableValue::AppVariableValue() :
    m_variableIdHasBeenSet(false),
    m_variableValueHasBeenSet(false)
{
}

CoreInternalOutcome AppVariableValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VariableId") && !value["VariableId"].IsNull())
    {
        if (!value["VariableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppVariableValue.VariableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_variableId = string(value["VariableId"].GetString());
        m_variableIdHasBeenSet = true;
    }

    if (value.HasMember("VariableValue") && !value["VariableValue"].IsNull())
    {
        if (!value["VariableValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppVariableValue.VariableValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_variableValue = string(value["VariableValue"].GetString());
        m_variableValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppVariableValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_variableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_variableId.c_str(), allocator).Move(), allocator);
    }

    if (m_variableValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VariableValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_variableValue.c_str(), allocator).Move(), allocator);
    }

}


string AppVariableValue::GetVariableId() const
{
    return m_variableId;
}

void AppVariableValue::SetVariableId(const string& _variableId)
{
    m_variableId = _variableId;
    m_variableIdHasBeenSet = true;
}

bool AppVariableValue::VariableIdHasBeenSet() const
{
    return m_variableIdHasBeenSet;
}

string AppVariableValue::GetVariableValue() const
{
    return m_variableValue;
}

void AppVariableValue::SetVariableValue(const string& _variableValue)
{
    m_variableValue = _variableValue;
    m_variableValueHasBeenSet = true;
}

bool AppVariableValue::VariableValueHasBeenSet() const
{
    return m_variableValueHasBeenSet;
}


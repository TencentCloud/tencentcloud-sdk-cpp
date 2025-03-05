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

#include <tencentcloud/cdwpg/v20201230/model/ConfigParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ConfigParams::ConfigParams() :
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_parameterOldValueHasBeenSet(false)
{
}

CoreInternalOutcome ConfigParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigParams.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }

    if (value.HasMember("ParameterValue") && !value["ParameterValue"].IsNull())
    {
        if (!value["ParameterValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigParams.ParameterValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterValue = string(value["ParameterValue"].GetString());
        m_parameterValueHasBeenSet = true;
    }

    if (value.HasMember("ParameterOldValue") && !value["ParameterOldValue"].IsNull())
    {
        if (!value["ParameterOldValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigParams.ParameterOldValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterOldValue = string(value["ParameterOldValue"].GetString());
        m_parameterOldValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterName.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterValue.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterOldValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterOldValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterOldValue.c_str(), allocator).Move(), allocator);
    }

}


string ConfigParams::GetParameterName() const
{
    return m_parameterName;
}

void ConfigParams::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool ConfigParams::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

string ConfigParams::GetParameterValue() const
{
    return m_parameterValue;
}

void ConfigParams::SetParameterValue(const string& _parameterValue)
{
    m_parameterValue = _parameterValue;
    m_parameterValueHasBeenSet = true;
}

bool ConfigParams::ParameterValueHasBeenSet() const
{
    return m_parameterValueHasBeenSet;
}

string ConfigParams::GetParameterOldValue() const
{
    return m_parameterOldValue;
}

void ConfigParams::SetParameterOldValue(const string& _parameterOldValue)
{
    m_parameterOldValue = _parameterOldValue;
    m_parameterOldValueHasBeenSet = true;
}

bool ConfigParams::ParameterOldValueHasBeenSet() const
{
    return m_parameterOldValueHasBeenSet;
}


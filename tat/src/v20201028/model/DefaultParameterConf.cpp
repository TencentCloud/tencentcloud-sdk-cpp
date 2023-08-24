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

#include <tencentcloud/tat/v20201028/model/DefaultParameterConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

DefaultParameterConf::DefaultParameterConf() :
    m_parameterNameHasBeenSet(false),
    m_parameterValueHasBeenSet(false),
    m_parameterDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DefaultParameterConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultParameterConf.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }

    if (value.HasMember("ParameterValue") && !value["ParameterValue"].IsNull())
    {
        if (!value["ParameterValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultParameterConf.ParameterValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterValue = string(value["ParameterValue"].GetString());
        m_parameterValueHasBeenSet = true;
    }

    if (value.HasMember("ParameterDescription") && !value["ParameterDescription"].IsNull())
    {
        if (!value["ParameterDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultParameterConf.ParameterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterDescription = string(value["ParameterDescription"].GetString());
        m_parameterDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultParameterConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_parameterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterDescription.c_str(), allocator).Move(), allocator);
    }

}


string DefaultParameterConf::GetParameterName() const
{
    return m_parameterName;
}

void DefaultParameterConf::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool DefaultParameterConf::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

string DefaultParameterConf::GetParameterValue() const
{
    return m_parameterValue;
}

void DefaultParameterConf::SetParameterValue(const string& _parameterValue)
{
    m_parameterValue = _parameterValue;
    m_parameterValueHasBeenSet = true;
}

bool DefaultParameterConf::ParameterValueHasBeenSet() const
{
    return m_parameterValueHasBeenSet;
}

string DefaultParameterConf::GetParameterDescription() const
{
    return m_parameterDescription;
}

void DefaultParameterConf::SetParameterDescription(const string& _parameterDescription)
{
    m_parameterDescription = _parameterDescription;
    m_parameterDescriptionHasBeenSet = true;
}

bool DefaultParameterConf::ParameterDescriptionHasBeenSet() const
{
    return m_parameterDescriptionHasBeenSet;
}


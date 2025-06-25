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

#include <tencentcloud/lke/v20231130/model/AgentPluginHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentPluginHeader::AgentPluginHeader() :
    m_paramNameHasBeenSet(false),
    m_paramValueHasBeenSet(false),
    m_globalHiddenHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_isRequiredHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginHeader.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginHeader.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }

    if (value.HasMember("GlobalHidden") && !value["GlobalHidden"].IsNull())
    {
        if (!value["GlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginHeader.GlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_globalHidden = value["GlobalHidden"].GetBool();
        m_globalHiddenHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginHeader.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginHeader.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramValue.c_str(), allocator).Move(), allocator);
    }

    if (m_globalHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalHidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalHidden, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

}


string AgentPluginHeader::GetParamName() const
{
    return m_paramName;
}

void AgentPluginHeader::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AgentPluginHeader::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string AgentPluginHeader::GetParamValue() const
{
    return m_paramValue;
}

void AgentPluginHeader::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool AgentPluginHeader::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

bool AgentPluginHeader::GetGlobalHidden() const
{
    return m_globalHidden;
}

void AgentPluginHeader::SetGlobalHidden(const bool& _globalHidden)
{
    m_globalHidden = _globalHidden;
    m_globalHiddenHasBeenSet = true;
}

bool AgentPluginHeader::GlobalHiddenHasBeenSet() const
{
    return m_globalHiddenHasBeenSet;
}

AgentInput AgentPluginHeader::GetInput() const
{
    return m_input;
}

void AgentPluginHeader::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentPluginHeader::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

bool AgentPluginHeader::GetIsRequired() const
{
    return m_isRequired;
}

void AgentPluginHeader::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AgentPluginHeader::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}


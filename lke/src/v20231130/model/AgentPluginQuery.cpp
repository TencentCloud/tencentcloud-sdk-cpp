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

#include <tencentcloud/lke/v20231130/model/AgentPluginQuery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentPluginQuery::AgentPluginQuery() :
    m_paramNameHasBeenSet(false),
    m_paramValueHasBeenSet(false),
    m_globalHiddenHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginQuery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginQuery.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("ParamValue") && !value["ParamValue"].IsNull())
    {
        if (!value["ParamValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginQuery.ParamValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramValue = string(value["ParamValue"].GetString());
        m_paramValueHasBeenSet = true;
    }

    if (value.HasMember("GlobalHidden") && !value["GlobalHidden"].IsNull())
    {
        if (!value["GlobalHidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginQuery.GlobalHidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_globalHidden = value["GlobalHidden"].GetBool();
        m_globalHiddenHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginQuery.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginQuery.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginQuery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_isRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRequired, allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentPluginQuery::GetParamName() const
{
    return m_paramName;
}

void AgentPluginQuery::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool AgentPluginQuery::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string AgentPluginQuery::GetParamValue() const
{
    return m_paramValue;
}

void AgentPluginQuery::SetParamValue(const string& _paramValue)
{
    m_paramValue = _paramValue;
    m_paramValueHasBeenSet = true;
}

bool AgentPluginQuery::ParamValueHasBeenSet() const
{
    return m_paramValueHasBeenSet;
}

bool AgentPluginQuery::GetGlobalHidden() const
{
    return m_globalHidden;
}

void AgentPluginQuery::SetGlobalHidden(const bool& _globalHidden)
{
    m_globalHidden = _globalHidden;
    m_globalHiddenHasBeenSet = true;
}

bool AgentPluginQuery::GlobalHiddenHasBeenSet() const
{
    return m_globalHiddenHasBeenSet;
}

bool AgentPluginQuery::GetIsRequired() const
{
    return m_isRequired;
}

void AgentPluginQuery::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AgentPluginQuery::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

AgentInput AgentPluginQuery::GetInput() const
{
    return m_input;
}

void AgentPluginQuery::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentPluginQuery::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}


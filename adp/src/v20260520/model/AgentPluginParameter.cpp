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

#include <tencentcloud/adp/v20260520/model/AgentPluginParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentPluginParameter::AgentPluginParameter() :
    m_nameHasBeenSet(false),
    m_isRequiredHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginParameter.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsRequired") && !value["IsRequired"].IsNull())
    {
        if (!value["IsRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginParameter.IsRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRequired = value["IsRequired"].GetBool();
        m_isRequiredHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginParameter.Input` is not object type").SetRequestId(requestId));
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

void AgentPluginParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string AgentPluginParameter::GetName() const
{
    return m_name;
}

void AgentPluginParameter::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentPluginParameter::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool AgentPluginParameter::GetIsRequired() const
{
    return m_isRequired;
}

void AgentPluginParameter::SetIsRequired(const bool& _isRequired)
{
    m_isRequired = _isRequired;
    m_isRequiredHasBeenSet = true;
}

bool AgentPluginParameter::IsRequiredHasBeenSet() const
{
    return m_isRequiredHasBeenSet;
}

AgentInput AgentPluginParameter::GetInput() const
{
    return m_input;
}

void AgentPluginParameter::SetInput(const AgentInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool AgentPluginParameter::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}


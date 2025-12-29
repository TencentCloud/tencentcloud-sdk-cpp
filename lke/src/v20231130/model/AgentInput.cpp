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

#include <tencentcloud/lke/v20231130/model/AgentInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentInput::AgentInput() :
    m_inputTypeHasBeenSet(false),
    m_userInputValueHasBeenSet(false),
    m_customVarIdHasBeenSet(false),
    m_envVarIdHasBeenSet(false),
    m_appVarIdHasBeenSet(false),
    m_systemVariableHasBeenSet(false),
    m_toolParamHasBeenSet(false)
{
}

CoreInternalOutcome AgentInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.InputType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = value["InputType"].GetUint64();
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("UserInputValue") && !value["UserInputValue"].IsNull())
    {
        if (!value["UserInputValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.UserInputValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInputValue.Deserialize(value["UserInputValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInputValueHasBeenSet = true;
    }

    if (value.HasMember("CustomVarId") && !value["CustomVarId"].IsNull())
    {
        if (!value["CustomVarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.CustomVarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customVarId = string(value["CustomVarId"].GetString());
        m_customVarIdHasBeenSet = true;
    }

    if (value.HasMember("EnvVarId") && !value["EnvVarId"].IsNull())
    {
        if (!value["EnvVarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.EnvVarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envVarId = string(value["EnvVarId"].GetString());
        m_envVarIdHasBeenSet = true;
    }

    if (value.HasMember("AppVarId") && !value["AppVarId"].IsNull())
    {
        if (!value["AppVarId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.AppVarId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVarId = string(value["AppVarId"].GetString());
        m_appVarIdHasBeenSet = true;
    }

    if (value.HasMember("SystemVariable") && !value["SystemVariable"].IsNull())
    {
        if (!value["SystemVariable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.SystemVariable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemVariable.Deserialize(value["SystemVariable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemVariableHasBeenSet = true;
    }

    if (value.HasMember("ToolParam") && !value["ToolParam"].IsNull())
    {
        if (!value["ToolParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.ToolParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolParam = string(value["ToolParam"].GetString());
        m_toolParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputType, allocator);
    }

    if (m_userInputValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInputValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInputValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customVarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customVarId.c_str(), allocator).Move(), allocator);
    }

    if (m_envVarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envVarId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVarIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVarId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVarId.c_str(), allocator).Move(), allocator);
    }

    if (m_systemVariableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemVariable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemVariable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolParam.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AgentInput::GetInputType() const
{
    return m_inputType;
}

void AgentInput::SetInputType(const uint64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool AgentInput::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

AgentInputUserInputValue AgentInput::GetUserInputValue() const
{
    return m_userInputValue;
}

void AgentInput::SetUserInputValue(const AgentInputUserInputValue& _userInputValue)
{
    m_userInputValue = _userInputValue;
    m_userInputValueHasBeenSet = true;
}

bool AgentInput::UserInputValueHasBeenSet() const
{
    return m_userInputValueHasBeenSet;
}

string AgentInput::GetCustomVarId() const
{
    return m_customVarId;
}

void AgentInput::SetCustomVarId(const string& _customVarId)
{
    m_customVarId = _customVarId;
    m_customVarIdHasBeenSet = true;
}

bool AgentInput::CustomVarIdHasBeenSet() const
{
    return m_customVarIdHasBeenSet;
}

string AgentInput::GetEnvVarId() const
{
    return m_envVarId;
}

void AgentInput::SetEnvVarId(const string& _envVarId)
{
    m_envVarId = _envVarId;
    m_envVarIdHasBeenSet = true;
}

bool AgentInput::EnvVarIdHasBeenSet() const
{
    return m_envVarIdHasBeenSet;
}

string AgentInput::GetAppVarId() const
{
    return m_appVarId;
}

void AgentInput::SetAppVarId(const string& _appVarId)
{
    m_appVarId = _appVarId;
    m_appVarIdHasBeenSet = true;
}

bool AgentInput::AppVarIdHasBeenSet() const
{
    return m_appVarIdHasBeenSet;
}

AgentInputSystemVariable AgentInput::GetSystemVariable() const
{
    return m_systemVariable;
}

void AgentInput::SetSystemVariable(const AgentInputSystemVariable& _systemVariable)
{
    m_systemVariable = _systemVariable;
    m_systemVariableHasBeenSet = true;
}

bool AgentInput::SystemVariableHasBeenSet() const
{
    return m_systemVariableHasBeenSet;
}

string AgentInput::GetToolParam() const
{
    return m_toolParam;
}

void AgentInput::SetToolParam(const string& _toolParam)
{
    m_toolParam = _toolParam;
    m_toolParamHasBeenSet = true;
}

bool AgentInput::ToolParamHasBeenSet() const
{
    return m_toolParamHasBeenSet;
}


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

#include <tencentcloud/adp/v20260520/model/AgentInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentInput::AgentInput() :
    m_inputTypeHasBeenSet(false),
    m_userInputValueHasBeenSet(false),
    m_systemVariableHasBeenSet(false),
    m_customVariableIdHasBeenSet(false),
    m_envVariableIdHasBeenSet(false),
    m_appVariableIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.InputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = value["InputType"].GetInt64();
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

    if (value.HasMember("CustomVariableId") && !value["CustomVariableId"].IsNull())
    {
        if (!value["CustomVariableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.CustomVariableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customVariableId = string(value["CustomVariableId"].GetString());
        m_customVariableIdHasBeenSet = true;
    }

    if (value.HasMember("EnvVariableId") && !value["EnvVariableId"].IsNull())
    {
        if (!value["EnvVariableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.EnvVariableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envVariableId = string(value["EnvVariableId"].GetString());
        m_envVariableIdHasBeenSet = true;
    }

    if (value.HasMember("AppVariableId") && !value["AppVariableId"].IsNull())
    {
        if (!value["AppVariableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInput.AppVariableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVariableId = string(value["AppVariableId"].GetString());
        m_appVariableIdHasBeenSet = true;
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

    if (m_systemVariableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemVariable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemVariable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customVariableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customVariableId.c_str(), allocator).Move(), allocator);
    }

    if (m_envVariableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVariableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envVariableId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVariableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVariableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVariableId.c_str(), allocator).Move(), allocator);
    }

}


int64_t AgentInput::GetInputType() const
{
    return m_inputType;
}

void AgentInput::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool AgentInput::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

AgentUserInputValue AgentInput::GetUserInputValue() const
{
    return m_userInputValue;
}

void AgentInput::SetUserInputValue(const AgentUserInputValue& _userInputValue)
{
    m_userInputValue = _userInputValue;
    m_userInputValueHasBeenSet = true;
}

bool AgentInput::UserInputValueHasBeenSet() const
{
    return m_userInputValueHasBeenSet;
}

AgentSystemVariable AgentInput::GetSystemVariable() const
{
    return m_systemVariable;
}

void AgentInput::SetSystemVariable(const AgentSystemVariable& _systemVariable)
{
    m_systemVariable = _systemVariable;
    m_systemVariableHasBeenSet = true;
}

bool AgentInput::SystemVariableHasBeenSet() const
{
    return m_systemVariableHasBeenSet;
}

string AgentInput::GetCustomVariableId() const
{
    return m_customVariableId;
}

void AgentInput::SetCustomVariableId(const string& _customVariableId)
{
    m_customVariableId = _customVariableId;
    m_customVariableIdHasBeenSet = true;
}

bool AgentInput::CustomVariableIdHasBeenSet() const
{
    return m_customVariableIdHasBeenSet;
}

string AgentInput::GetEnvVariableId() const
{
    return m_envVariableId;
}

void AgentInput::SetEnvVariableId(const string& _envVariableId)
{
    m_envVariableId = _envVariableId;
    m_envVariableIdHasBeenSet = true;
}

bool AgentInput::EnvVariableIdHasBeenSet() const
{
    return m_envVariableIdHasBeenSet;
}

string AgentInput::GetAppVariableId() const
{
    return m_appVariableId;
}

void AgentInput::SetAppVariableId(const string& _appVariableId)
{
    m_appVariableId = _appVariableId;
    m_appVariableIdHasBeenSet = true;
}

bool AgentInput::AppVariableIdHasBeenSet() const
{
    return m_appVariableIdHasBeenSet;
}


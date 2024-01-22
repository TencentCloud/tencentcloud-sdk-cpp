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

#include <tencentcloud/tke/v20220501/model/InstanceAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

InstanceAdvancedSettings::InstanceAdvancedSettings() :
    m_desiredPodNumberHasBeenSet(false),
    m_preStartUserScriptHasBeenSet(false),
    m_runtimeConfigHasBeenSet(false),
    m_userScriptHasBeenSet(false),
    m_extraArgsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DesiredPodNumber") && !value["DesiredPodNumber"].IsNull())
    {
        if (!value["DesiredPodNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.DesiredPodNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredPodNumber = value["DesiredPodNumber"].GetInt64();
        m_desiredPodNumberHasBeenSet = true;
    }

    if (value.HasMember("PreStartUserScript") && !value["PreStartUserScript"].IsNull())
    {
        if (!value["PreStartUserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.PreStartUserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStartUserScript = string(value["PreStartUserScript"].GetString());
        m_preStartUserScriptHasBeenSet = true;
    }

    if (value.HasMember("RuntimeConfig") && !value["RuntimeConfig"].IsNull())
    {
        if (!value["RuntimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.RuntimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_runtimeConfig.Deserialize(value["RuntimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_runtimeConfigHasBeenSet = true;
    }

    if (value.HasMember("UserScript") && !value["UserScript"].IsNull())
    {
        if (!value["UserScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.UserScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userScript = string(value["UserScript"].GetString());
        m_userScriptHasBeenSet = true;
    }

    if (value.HasMember("ExtraArgs") && !value["ExtraArgs"].IsNull())
    {
        if (!value["ExtraArgs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAdvancedSettings.ExtraArgs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraArgs.Deserialize(value["ExtraArgs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredPodNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredPodNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredPodNumber, allocator);
    }

    if (m_preStartUserScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartUserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStartUserScript.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_runtimeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userScript.c_str(), allocator).Move(), allocator);
    }

    if (m_extraArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraArgs.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t InstanceAdvancedSettings::GetDesiredPodNumber() const
{
    return m_desiredPodNumber;
}

void InstanceAdvancedSettings::SetDesiredPodNumber(const int64_t& _desiredPodNumber)
{
    m_desiredPodNumber = _desiredPodNumber;
    m_desiredPodNumberHasBeenSet = true;
}

bool InstanceAdvancedSettings::DesiredPodNumberHasBeenSet() const
{
    return m_desiredPodNumberHasBeenSet;
}

string InstanceAdvancedSettings::GetPreStartUserScript() const
{
    return m_preStartUserScript;
}

void InstanceAdvancedSettings::SetPreStartUserScript(const string& _preStartUserScript)
{
    m_preStartUserScript = _preStartUserScript;
    m_preStartUserScriptHasBeenSet = true;
}

bool InstanceAdvancedSettings::PreStartUserScriptHasBeenSet() const
{
    return m_preStartUserScriptHasBeenSet;
}

RuntimeConfig InstanceAdvancedSettings::GetRuntimeConfig() const
{
    return m_runtimeConfig;
}

void InstanceAdvancedSettings::SetRuntimeConfig(const RuntimeConfig& _runtimeConfig)
{
    m_runtimeConfig = _runtimeConfig;
    m_runtimeConfigHasBeenSet = true;
}

bool InstanceAdvancedSettings::RuntimeConfigHasBeenSet() const
{
    return m_runtimeConfigHasBeenSet;
}

string InstanceAdvancedSettings::GetUserScript() const
{
    return m_userScript;
}

void InstanceAdvancedSettings::SetUserScript(const string& _userScript)
{
    m_userScript = _userScript;
    m_userScriptHasBeenSet = true;
}

bool InstanceAdvancedSettings::UserScriptHasBeenSet() const
{
    return m_userScriptHasBeenSet;
}

InstanceExtraArgs InstanceAdvancedSettings::GetExtraArgs() const
{
    return m_extraArgs;
}

void InstanceAdvancedSettings::SetExtraArgs(const InstanceExtraArgs& _extraArgs)
{
    m_extraArgs = _extraArgs;
    m_extraArgsHasBeenSet = true;
}

bool InstanceAdvancedSettings::ExtraArgsHasBeenSet() const
{
    return m_extraArgsHasBeenSet;
}


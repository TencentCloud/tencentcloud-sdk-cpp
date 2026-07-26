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

#include <tencentcloud/adp/v20260520/model/AppTriggerPromptExecuteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerPromptExecuteConfig::AppTriggerPromptExecuteConfig() :
    m_executePromptHasBeenSet(false),
    m_paramBindingsApiHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerPromptExecuteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutePrompt") && !value["ExecutePrompt"].IsNull())
    {
        if (!value["ExecutePrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerPromptExecuteConfig.ExecutePrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executePrompt = string(value["ExecutePrompt"].GetString());
        m_executePromptHasBeenSet = true;
    }

    if (value.HasMember("ParamBindingsApi") && !value["ParamBindingsApi"].IsNull())
    {
        if (!value["ParamBindingsApi"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerPromptExecuteConfig.ParamBindingsApi` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paramBindingsApi.Deserialize(value["ParamBindingsApi"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramBindingsApiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerPromptExecuteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_paramBindingsApiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamBindingsApi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paramBindingsApi.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AppTriggerPromptExecuteConfig::GetExecutePrompt() const
{
    return m_executePrompt;
}

void AppTriggerPromptExecuteConfig::SetExecutePrompt(const string& _executePrompt)
{
    m_executePrompt = _executePrompt;
    m_executePromptHasBeenSet = true;
}

bool AppTriggerPromptExecuteConfig::ExecutePromptHasBeenSet() const
{
    return m_executePromptHasBeenSet;
}

AppTriggerParamBindingConfig AppTriggerPromptExecuteConfig::GetParamBindingsApi() const
{
    return m_paramBindingsApi;
}

void AppTriggerPromptExecuteConfig::SetParamBindingsApi(const AppTriggerParamBindingConfig& _paramBindingsApi)
{
    m_paramBindingsApi = _paramBindingsApi;
    m_paramBindingsApiHasBeenSet = true;
}

bool AppTriggerPromptExecuteConfig::ParamBindingsApiHasBeenSet() const
{
    return m_paramBindingsApiHasBeenSet;
}


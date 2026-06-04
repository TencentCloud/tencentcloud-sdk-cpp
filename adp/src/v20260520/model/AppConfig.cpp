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

#include <tencentcloud/adp/v20260520/model/AppConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppConfig::AppConfig() :
    m_experienceHasBeenSet(false),
    m_greetingHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_webSearchHasBeenSet(false),
    m_workflowHasBeenSet(false)
{
}

CoreInternalOutcome AppConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Experience") && !value["Experience"].IsNull())
    {
        if (!value["Experience"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Experience` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_experience.Deserialize(value["Experience"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_experienceHasBeenSet = true;
    }

    if (value.HasMember("Greeting") && !value["Greeting"].IsNull())
    {
        if (!value["Greeting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Greeting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_greeting.Deserialize(value["Greeting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_greetingHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Memory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memory.Deserialize(value["Memory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Mode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mode.Deserialize(value["Mode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("WebSearch") && !value["WebSearch"].IsNull())
    {
        if (!value["WebSearch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.WebSearch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSearch.Deserialize(value["WebSearch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSearchHasBeenSet = true;
    }

    if (value.HasMember("Workflow") && !value["Workflow"].IsNull())
    {
        if (!value["Workflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppConfig.Workflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflow.Deserialize(value["Workflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_experienceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Experience";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_experience.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_greetingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Greeting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_greeting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSearch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflow.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppExperienceConfig AppConfig::GetExperience() const
{
    return m_experience;
}

void AppConfig::SetExperience(const AppExperienceConfig& _experience)
{
    m_experience = _experience;
    m_experienceHasBeenSet = true;
}

bool AppConfig::ExperienceHasBeenSet() const
{
    return m_experienceHasBeenSet;
}

AppGreetingConfig AppConfig::GetGreeting() const
{
    return m_greeting;
}

void AppConfig::SetGreeting(const AppGreetingConfig& _greeting)
{
    m_greeting = _greeting;
    m_greetingHasBeenSet = true;
}

bool AppConfig::GreetingHasBeenSet() const
{
    return m_greetingHasBeenSet;
}

AppMemoryConfig AppConfig::GetMemory() const
{
    return m_memory;
}

void AppConfig::SetMemory(const AppMemoryConfig& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool AppConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

AppModeConfig AppConfig::GetMode() const
{
    return m_mode;
}

void AppConfig::SetMode(const AppModeConfig& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AppConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

AppModelConfig AppConfig::GetModel() const
{
    return m_model;
}

void AppConfig::SetModel(const AppModelConfig& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AppConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

AppWebSearchConfig AppConfig::GetWebSearch() const
{
    return m_webSearch;
}

void AppConfig::SetWebSearch(const AppWebSearchConfig& _webSearch)
{
    m_webSearch = _webSearch;
    m_webSearchHasBeenSet = true;
}

bool AppConfig::WebSearchHasBeenSet() const
{
    return m_webSearchHasBeenSet;
}

AppWorkflowConfig AppConfig::GetWorkflow() const
{
    return m_workflow;
}

void AppConfig::SetWorkflow(const AppWorkflowConfig& _workflow)
{
    m_workflow = _workflow;
    m_workflowHasBeenSet = true;
}

bool AppConfig::WorkflowHasBeenSet() const
{
    return m_workflowHasBeenSet;
}


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

#include <tencentcloud/adp/v20260520/model/ExecuteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ExecuteConfig::ExecuteConfig() :
    m_promptConfigHasBeenSet(false),
    m_workflowConfigHasBeenSet(false)
{
}

CoreInternalOutcome ExecuteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PromptConfig") && !value["PromptConfig"].IsNull())
    {
        if (!value["PromptConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecuteConfig.PromptConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promptConfig.Deserialize(value["PromptConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promptConfigHasBeenSet = true;
    }

    if (value.HasMember("WorkflowConfig") && !value["WorkflowConfig"].IsNull())
    {
        if (!value["WorkflowConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExecuteConfig.WorkflowConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflowConfig.Deserialize(value["WorkflowConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecuteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_promptConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflowConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppTriggerPromptExecuteConfig ExecuteConfig::GetPromptConfig() const
{
    return m_promptConfig;
}

void ExecuteConfig::SetPromptConfig(const AppTriggerPromptExecuteConfig& _promptConfig)
{
    m_promptConfig = _promptConfig;
    m_promptConfigHasBeenSet = true;
}

bool ExecuteConfig::PromptConfigHasBeenSet() const
{
    return m_promptConfigHasBeenSet;
}

AppTriggerWorkflowExecuteConfig ExecuteConfig::GetWorkflowConfig() const
{
    return m_workflowConfig;
}

void ExecuteConfig::SetWorkflowConfig(const AppTriggerWorkflowExecuteConfig& _workflowConfig)
{
    m_workflowConfig = _workflowConfig;
    m_workflowConfigHasBeenSet = true;
}

bool ExecuteConfig::WorkflowConfigHasBeenSet() const
{
    return m_workflowConfigHasBeenSet;
}


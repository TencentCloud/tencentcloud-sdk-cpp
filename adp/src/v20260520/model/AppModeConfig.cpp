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

#include <tencentcloud/adp/v20260520/model/AppModeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppModeConfig::AppModeConfig() :
    m_multiAgentConfigHasBeenSet(false),
    m_singleWorkflowConfigHasBeenSet(false)
{
}

CoreInternalOutcome AppModeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MultiAgentConfig") && !value["MultiAgentConfig"].IsNull())
    {
        if (!value["MultiAgentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModeConfig.MultiAgentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiAgentConfig.Deserialize(value["MultiAgentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiAgentConfigHasBeenSet = true;
    }

    if (value.HasMember("SingleWorkflowConfig") && !value["SingleWorkflowConfig"].IsNull())
    {
        if (!value["SingleWorkflowConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModeConfig.SingleWorkflowConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singleWorkflowConfig.Deserialize(value["SingleWorkflowConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singleWorkflowConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppModeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_multiAgentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiAgentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiAgentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_singleWorkflowConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleWorkflowConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singleWorkflowConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


MultiAgentConfig AppModeConfig::GetMultiAgentConfig() const
{
    return m_multiAgentConfig;
}

void AppModeConfig::SetMultiAgentConfig(const MultiAgentConfig& _multiAgentConfig)
{
    m_multiAgentConfig = _multiAgentConfig;
    m_multiAgentConfigHasBeenSet = true;
}

bool AppModeConfig::MultiAgentConfigHasBeenSet() const
{
    return m_multiAgentConfigHasBeenSet;
}

SingleWorkflowConfig AppModeConfig::GetSingleWorkflowConfig() const
{
    return m_singleWorkflowConfig;
}

void AppModeConfig::SetSingleWorkflowConfig(const SingleWorkflowConfig& _singleWorkflowConfig)
{
    m_singleWorkflowConfig = _singleWorkflowConfig;
    m_singleWorkflowConfigHasBeenSet = true;
}

bool AppModeConfig::SingleWorkflowConfigHasBeenSet() const
{
    return m_singleWorkflowConfigHasBeenSet;
}


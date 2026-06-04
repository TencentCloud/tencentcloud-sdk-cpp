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

#include <tencentcloud/adp/v20260520/model/AgentCollaborationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentCollaborationConfig::AgentCollaborationConfig() :
    m_agentCollaborationModeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
}

CoreInternalOutcome AgentCollaborationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentCollaborationMode") && !value["AgentCollaborationMode"].IsNull())
    {
        if (!value["AgentCollaborationMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentCollaborationConfig.AgentCollaborationMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentCollaborationMode = value["AgentCollaborationMode"].GetInt64();
        m_agentCollaborationModeHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentCollaborationConfig.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("WorkflowName") && !value["WorkflowName"].IsNull())
    {
        if (!value["WorkflowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentCollaborationConfig.WorkflowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowName = string(value["WorkflowName"].GetString());
        m_workflowNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentCollaborationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentCollaborationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCollaborationMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentCollaborationMode, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

}


int64_t AgentCollaborationConfig::GetAgentCollaborationMode() const
{
    return m_agentCollaborationMode;
}

void AgentCollaborationConfig::SetAgentCollaborationMode(const int64_t& _agentCollaborationMode)
{
    m_agentCollaborationMode = _agentCollaborationMode;
    m_agentCollaborationModeHasBeenSet = true;
}

bool AgentCollaborationConfig::AgentCollaborationModeHasBeenSet() const
{
    return m_agentCollaborationModeHasBeenSet;
}

string AgentCollaborationConfig::GetWorkflowId() const
{
    return m_workflowId;
}

void AgentCollaborationConfig::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool AgentCollaborationConfig::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string AgentCollaborationConfig::GetWorkflowName() const
{
    return m_workflowName;
}

void AgentCollaborationConfig::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool AgentCollaborationConfig::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}


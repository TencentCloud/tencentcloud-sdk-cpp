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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaAgent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaAgent::KnowledgeQaAgent() :
    m_agentCollaborationHasBeenSet(false),
    m_workflowHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaAgent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentCollaboration") && !value["AgentCollaboration"].IsNull())
    {
        if (!value["AgentCollaboration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaAgent.AgentCollaboration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentCollaboration = value["AgentCollaboration"].GetUint64();
        m_agentCollaborationHasBeenSet = true;
    }

    if (value.HasMember("Workflow") && !value["Workflow"].IsNull())
    {
        if (!value["Workflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaAgent.Workflow` is not object type").SetRequestId(requestId));
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

void KnowledgeQaAgent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentCollaborationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCollaboration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentCollaboration, allocator);
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


uint64_t KnowledgeQaAgent::GetAgentCollaboration() const
{
    return m_agentCollaboration;
}

void KnowledgeQaAgent::SetAgentCollaboration(const uint64_t& _agentCollaboration)
{
    m_agentCollaboration = _agentCollaboration;
    m_agentCollaborationHasBeenSet = true;
}

bool KnowledgeQaAgent::AgentCollaborationHasBeenSet() const
{
    return m_agentCollaborationHasBeenSet;
}

KnowledgeQaWorkflowInfo KnowledgeQaAgent::GetWorkflow() const
{
    return m_workflow;
}

void KnowledgeQaAgent::SetWorkflow(const KnowledgeQaWorkflowInfo& _workflow)
{
    m_workflow = _workflow;
    m_workflowHasBeenSet = true;
}

bool KnowledgeQaAgent::WorkflowHasBeenSet() const
{
    return m_workflowHasBeenSet;
}


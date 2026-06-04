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

#include <tencentcloud/adp/v20260520/model/MultiAgentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MultiAgentConfig::MultiAgentConfig() :
    m_agentCollaborationHasBeenSet(false)
{
}

CoreInternalOutcome MultiAgentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentCollaboration") && !value["AgentCollaboration"].IsNull())
    {
        if (!value["AgentCollaboration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiAgentConfig.AgentCollaboration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentCollaboration.Deserialize(value["AgentCollaboration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentCollaborationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiAgentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentCollaborationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCollaboration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentCollaboration.ToJsonObject(value[key.c_str()], allocator);
    }

}


AgentCollaborationConfig MultiAgentConfig::GetAgentCollaboration() const
{
    return m_agentCollaboration;
}

void MultiAgentConfig::SetAgentCollaboration(const AgentCollaborationConfig& _agentCollaboration)
{
    m_agentCollaboration = _agentCollaboration;
    m_agentCollaborationHasBeenSet = true;
}

bool MultiAgentConfig::AgentCollaborationHasBeenSet() const
{
    return m_agentCollaborationHasBeenSet;
}


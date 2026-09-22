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

#include <tencentcloud/workbuddyenterprise/v20260709/model/MigrateAgentSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

MigrateAgentSessionRequest::MigrateAgentSessionRequest() :
    m_sessionIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_targetVersionIdHasBeenSet(false)
{
}

string MigrateAgentSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetVersionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MigrateAgentSessionRequest::GetSessionId() const
{
    return m_sessionId;
}

void MigrateAgentSessionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool MigrateAgentSessionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string MigrateAgentSessionRequest::GetAgentId() const
{
    return m_agentId;
}

void MigrateAgentSessionRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool MigrateAgentSessionRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string MigrateAgentSessionRequest::GetTargetVersionId() const
{
    return m_targetVersionId;
}

void MigrateAgentSessionRequest::SetTargetVersionId(const string& _targetVersionId)
{
    m_targetVersionId = _targetVersionId;
    m_targetVersionIdHasBeenSet = true;
}

bool MigrateAgentSessionRequest::TargetVersionIdHasBeenSet() const
{
    return m_targetVersionIdHasBeenSet;
}



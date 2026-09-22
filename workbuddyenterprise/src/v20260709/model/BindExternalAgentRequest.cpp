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

#include <tencentcloud/workbuddyenterprise/v20260709/model/BindExternalAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

BindExternalAgentRequest::BindExternalAgentRequest() :
    m_agentIdHasBeenSet(false),
    m_a2AAgentIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string BindExternalAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_a2AAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "A2AAgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_a2AAgentId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindExternalAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void BindExternalAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool BindExternalAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string BindExternalAgentRequest::GetA2AAgentId() const
{
    return m_a2AAgentId;
}

void BindExternalAgentRequest::SetA2AAgentId(const string& _a2AAgentId)
{
    m_a2AAgentId = _a2AAgentId;
    m_a2AAgentIdHasBeenSet = true;
}

bool BindExternalAgentRequest::A2AAgentIdHasBeenSet() const
{
    return m_a2AAgentIdHasBeenSet;
}

string BindExternalAgentRequest::GetVersionId() const
{
    return m_versionId;
}

void BindExternalAgentRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool BindExternalAgentRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}



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

#include <tencentcloud/workbuddyenterprise/v20260709/model/UnbindExternalAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

UnbindExternalAgentRequest::UnbindExternalAgentRequest() :
    m_agentIdHasBeenSet(false),
    m_a2AAgentIdHasBeenSet(false),
    m_bindingIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string UnbindExternalAgentRequest::ToJsonString() const
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

    if (m_bindingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindingId.c_str(), allocator).Move(), allocator);
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


string UnbindExternalAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void UnbindExternalAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool UnbindExternalAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string UnbindExternalAgentRequest::GetA2AAgentId() const
{
    return m_a2AAgentId;
}

void UnbindExternalAgentRequest::SetA2AAgentId(const string& _a2AAgentId)
{
    m_a2AAgentId = _a2AAgentId;
    m_a2AAgentIdHasBeenSet = true;
}

bool UnbindExternalAgentRequest::A2AAgentIdHasBeenSet() const
{
    return m_a2AAgentIdHasBeenSet;
}

string UnbindExternalAgentRequest::GetBindingId() const
{
    return m_bindingId;
}

void UnbindExternalAgentRequest::SetBindingId(const string& _bindingId)
{
    m_bindingId = _bindingId;
    m_bindingIdHasBeenSet = true;
}

bool UnbindExternalAgentRequest::BindingIdHasBeenSet() const
{
    return m_bindingIdHasBeenSet;
}

string UnbindExternalAgentRequest::GetVersionId() const
{
    return m_versionId;
}

void UnbindExternalAgentRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool UnbindExternalAgentRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}



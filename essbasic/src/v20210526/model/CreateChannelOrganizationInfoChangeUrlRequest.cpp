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

#include <tencentcloud/essbasic/v20210526/model/CreateChannelOrganizationInfoChangeUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateChannelOrganizationInfoChangeUrlRequest::CreateChannelOrganizationInfoChangeUrlRequest() :
    m_agentHasBeenSet(false),
    m_changeTypeHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

string CreateChannelOrganizationInfoChangeUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_changeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_changeType, allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateChannelOrganizationInfoChangeUrlRequest::GetAgent() const
{
    return m_agent;
}

void CreateChannelOrganizationInfoChangeUrlRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateChannelOrganizationInfoChangeUrlRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

uint64_t CreateChannelOrganizationInfoChangeUrlRequest::GetChangeType() const
{
    return m_changeType;
}

void CreateChannelOrganizationInfoChangeUrlRequest::SetChangeType(const uint64_t& _changeType)
{
    m_changeType = _changeType;
    m_changeTypeHasBeenSet = true;
}

bool CreateChannelOrganizationInfoChangeUrlRequest::ChangeTypeHasBeenSet() const
{
    return m_changeTypeHasBeenSet;
}

string CreateChannelOrganizationInfoChangeUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateChannelOrganizationInfoChangeUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateChannelOrganizationInfoChangeUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}



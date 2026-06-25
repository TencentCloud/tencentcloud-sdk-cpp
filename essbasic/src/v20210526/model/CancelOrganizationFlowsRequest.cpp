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

#include <tencentcloud/essbasic/v20210526/model/CancelOrganizationFlowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CancelOrganizationFlowsRequest::CancelOrganizationFlowsRequest() :
    m_agentHasBeenSet(false),
    m_cancelMessageHasBeenSet(false),
    m_cancelMessageFormatHasBeenSet(false)
{
}

string CancelOrganizationFlowsRequest::ToJsonString() const
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

    if (m_cancelMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cancelMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelMessageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelMessageFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cancelMessageFormat, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CancelOrganizationFlowsRequest::GetAgent() const
{
    return m_agent;
}

void CancelOrganizationFlowsRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CancelOrganizationFlowsRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CancelOrganizationFlowsRequest::GetCancelMessage() const
{
    return m_cancelMessage;
}

void CancelOrganizationFlowsRequest::SetCancelMessage(const string& _cancelMessage)
{
    m_cancelMessage = _cancelMessage;
    m_cancelMessageHasBeenSet = true;
}

bool CancelOrganizationFlowsRequest::CancelMessageHasBeenSet() const
{
    return m_cancelMessageHasBeenSet;
}

int64_t CancelOrganizationFlowsRequest::GetCancelMessageFormat() const
{
    return m_cancelMessageFormat;
}

void CancelOrganizationFlowsRequest::SetCancelMessageFormat(const int64_t& _cancelMessageFormat)
{
    m_cancelMessageFormat = _cancelMessageFormat;
    m_cancelMessageFormatHasBeenSet = true;
}

bool CancelOrganizationFlowsRequest::CancelMessageFormatHasBeenSet() const
{
    return m_cancelMessageFormatHasBeenSet;
}



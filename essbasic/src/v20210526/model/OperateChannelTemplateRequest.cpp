/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

OperateChannelTemplateRequest::OperateChannelTemplateRequest() :
    m_agentHasBeenSet(false),
    m_operateTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_proxyOrganizationOpenIdsHasBeenSet(false),
    m_authTagHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string OperateChannelTemplateRequest::ToJsonString() const
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

    if (m_operateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOpenIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenIds.c_str(), allocator).Move(), allocator);
    }

    if (m_authTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authTag.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_available, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent OperateChannelTemplateRequest::GetAgent() const
{
    return m_agent;
}

void OperateChannelTemplateRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool OperateChannelTemplateRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string OperateChannelTemplateRequest::GetOperateType() const
{
    return m_operateType;
}

void OperateChannelTemplateRequest::SetOperateType(const string& _operateType)
{
    m_operateType = _operateType;
    m_operateTypeHasBeenSet = true;
}

bool OperateChannelTemplateRequest::OperateTypeHasBeenSet() const
{
    return m_operateTypeHasBeenSet;
}

string OperateChannelTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void OperateChannelTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool OperateChannelTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string OperateChannelTemplateRequest::GetProxyOrganizationOpenIds() const
{
    return m_proxyOrganizationOpenIds;
}

void OperateChannelTemplateRequest::SetProxyOrganizationOpenIds(const string& _proxyOrganizationOpenIds)
{
    m_proxyOrganizationOpenIds = _proxyOrganizationOpenIds;
    m_proxyOrganizationOpenIdsHasBeenSet = true;
}

bool OperateChannelTemplateRequest::ProxyOrganizationOpenIdsHasBeenSet() const
{
    return m_proxyOrganizationOpenIdsHasBeenSet;
}

string OperateChannelTemplateRequest::GetAuthTag() const
{
    return m_authTag;
}

void OperateChannelTemplateRequest::SetAuthTag(const string& _authTag)
{
    m_authTag = _authTag;
    m_authTagHasBeenSet = true;
}

bool OperateChannelTemplateRequest::AuthTagHasBeenSet() const
{
    return m_authTagHasBeenSet;
}

int64_t OperateChannelTemplateRequest::GetAvailable() const
{
    return m_available;
}

void OperateChannelTemplateRequest::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool OperateChannelTemplateRequest::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

UserInfo OperateChannelTemplateRequest::GetOperator() const
{
    return m_operator;
}

void OperateChannelTemplateRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool OperateChannelTemplateRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}



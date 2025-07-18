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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateConvertTaskApiRequest::ChannelCreateConvertTaskApiRequest() :
    m_agentHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_organizationHasBeenSet(false)
{
}

string ChannelCreateConvertTaskApiRequest::ToJsonString() const
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

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organization.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateConvertTaskApiRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateConvertTaskApiRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateConvertTaskApiRequest::GetResourceType() const
{
    return m_resourceType;
}

void ChannelCreateConvertTaskApiRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ChannelCreateConvertTaskApiRequest::GetResourceName() const
{
    return m_resourceName;
}

void ChannelCreateConvertTaskApiRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ChannelCreateConvertTaskApiRequest::GetResourceId() const
{
    return m_resourceId;
}

void ChannelCreateConvertTaskApiRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

UserInfo ChannelCreateConvertTaskApiRequest::GetOperator() const
{
    return m_operator;
}

void ChannelCreateConvertTaskApiRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

OrganizationInfo ChannelCreateConvertTaskApiRequest::GetOrganization() const
{
    return m_organization;
}

void ChannelCreateConvertTaskApiRequest::SetOrganization(const OrganizationInfo& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ChannelCreateConvertTaskApiRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}



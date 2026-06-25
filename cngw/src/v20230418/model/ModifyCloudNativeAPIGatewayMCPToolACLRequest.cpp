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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPToolACLRequest::ModifyCloudNativeAPIGatewayMCPToolACLRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_aCLTypeHasBeenSet(false),
    m_aCLConsumerIdsHasBeenSet(false),
    m_aCLConsumerGroupIdsHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPToolACLRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_aCLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aCLType.c_str(), allocator).Move(), allocator);
    }

    if (m_aCLConsumerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLConsumerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aCLConsumerIds.begin(); itr != m_aCLConsumerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aCLConsumerGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLConsumerGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aCLConsumerGroupIds.begin(); itr != m_aCLConsumerGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetToolId() const
{
    return m_toolId;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetACLType() const
{
    return m_aCLType;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetACLType(const string& _aCLType)
{
    m_aCLType = _aCLType;
    m_aCLTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::ACLTypeHasBeenSet() const
{
    return m_aCLTypeHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetACLConsumerIds() const
{
    return m_aCLConsumerIds;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetACLConsumerIds(const vector<string>& _aCLConsumerIds)
{
    m_aCLConsumerIds = _aCLConsumerIds;
    m_aCLConsumerIdsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::ACLConsumerIdsHasBeenSet() const
{
    return m_aCLConsumerIdsHasBeenSet;
}

vector<string> ModifyCloudNativeAPIGatewayMCPToolACLRequest::GetACLConsumerGroupIds() const
{
    return m_aCLConsumerGroupIds;
}

void ModifyCloudNativeAPIGatewayMCPToolACLRequest::SetACLConsumerGroupIds(const vector<string>& _aCLConsumerGroupIds)
{
    m_aCLConsumerGroupIds = _aCLConsumerGroupIds;
    m_aCLConsumerGroupIdsHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolACLRequest::ACLConsumerGroupIdsHasBeenSet() const
{
    return m_aCLConsumerGroupIdsHasBeenSet;
}



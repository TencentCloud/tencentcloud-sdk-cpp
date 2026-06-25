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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPToolStatusRequest::ModifyCloudNativeAPIGatewayMCPToolStatusRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_toolIdHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPToolStatusRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayMCPToolStatusRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPToolStatusRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolStatusRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolStatusRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPToolStatusRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolStatusRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyCloudNativeAPIGatewayMCPToolStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPToolStatusRequest::GetToolId() const
{
    return m_toolId;
}

void ModifyCloudNativeAPIGatewayMCPToolStatusRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPToolStatusRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}



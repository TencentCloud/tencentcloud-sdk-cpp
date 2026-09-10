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

#include <tencentcloud/cngw/v20230418/model/CompareCloudNativeAPIGatewayMCPToolVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CompareCloudNativeAPIGatewayMCPToolVersionRequest::CompareCloudNativeAPIGatewayMCPToolVersionRequest() :
    m_baseVersionHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_targetVersionHasBeenSet(false),
    m_toolIdHasBeenSet(false)
{
}

string CompareCloudNativeAPIGatewayMCPToolVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseVersion.c_str(), allocator).Move(), allocator);
    }

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

    if (m_targetVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetVersion.c_str(), allocator).Move(), allocator);
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


string CompareCloudNativeAPIGatewayMCPToolVersionRequest::GetBaseVersion() const
{
    return m_baseVersion;
}

void CompareCloudNativeAPIGatewayMCPToolVersionRequest::SetBaseVersion(const string& _baseVersion)
{
    m_baseVersion = _baseVersion;
    m_baseVersionHasBeenSet = true;
}

bool CompareCloudNativeAPIGatewayMCPToolVersionRequest::BaseVersionHasBeenSet() const
{
    return m_baseVersionHasBeenSet;
}

string CompareCloudNativeAPIGatewayMCPToolVersionRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CompareCloudNativeAPIGatewayMCPToolVersionRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CompareCloudNativeAPIGatewayMCPToolVersionRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CompareCloudNativeAPIGatewayMCPToolVersionRequest::GetServerId() const
{
    return m_serverId;
}

void CompareCloudNativeAPIGatewayMCPToolVersionRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool CompareCloudNativeAPIGatewayMCPToolVersionRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string CompareCloudNativeAPIGatewayMCPToolVersionRequest::GetTargetVersion() const
{
    return m_targetVersion;
}

void CompareCloudNativeAPIGatewayMCPToolVersionRequest::SetTargetVersion(const string& _targetVersion)
{
    m_targetVersion = _targetVersion;
    m_targetVersionHasBeenSet = true;
}

bool CompareCloudNativeAPIGatewayMCPToolVersionRequest::TargetVersionHasBeenSet() const
{
    return m_targetVersionHasBeenSet;
}

string CompareCloudNativeAPIGatewayMCPToolVersionRequest::GetToolId() const
{
    return m_toolId;
}

void CompareCloudNativeAPIGatewayMCPToolVersionRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool CompareCloudNativeAPIGatewayMCPToolVersionRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}



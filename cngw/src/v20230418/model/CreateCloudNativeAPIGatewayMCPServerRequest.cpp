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

#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CreateCloudNativeAPIGatewayMCPServerRequest::CreateCloudNativeAPIGatewayMCPServerRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_serverTypeHasBeenSet(false),
    m_transportHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_sessionConfigHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayMCPServerRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverType.c_str(), allocator).Move(), allocator);
    }

    if (m_transportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transport.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayMCPServerRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetDisplayName() const
{
    return m_displayName;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetServerType() const
{
    return m_serverType;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetServerType(const string& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetTransport() const
{
    return m_transport;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetTransport(const string& _transport)
{
    m_transport = _transport;
    m_transportHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::TransportHasBeenSet() const
{
    return m_transportHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

AIGWMCPUpstreamInfo CreateCloudNativeAPIGatewayMCPServerRequest::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetUpstreamInfo(const AIGWMCPUpstreamInfo& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

AIGWMCPSessionConfig CreateCloudNativeAPIGatewayMCPServerRequest::GetSessionConfig() const
{
    return m_sessionConfig;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetSessionConfig(const AIGWMCPSessionConfig& _sessionConfig)
{
    m_sessionConfig = _sessionConfig;
    m_sessionConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::SessionConfigHasBeenSet() const
{
    return m_sessionConfigHasBeenSet;
}

uint64_t CreateCloudNativeAPIGatewayMCPServerRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t CreateCloudNativeAPIGatewayMCPServerRequest::GetRetryCount() const
{
    return m_retryCount;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

string CreateCloudNativeAPIGatewayMCPServerRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

AIGWHealthCheckSetting CreateCloudNativeAPIGatewayMCPServerRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateCloudNativeAPIGatewayMCPServerRequest::SetHealthCheck(const AIGWHealthCheckSetting& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayMCPServerRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}



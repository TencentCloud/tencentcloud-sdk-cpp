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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPServerRequest::ModifyCloudNativeAPIGatewayMCPServerRequest() :
    m_gatewayIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_sessionConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPServerRequest::ToJsonString() const
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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_serverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
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


string ModifyCloudNativeAPIGatewayMCPServerRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerRequest::GetUpstreamType() const
{
    return m_upstreamType;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

uint64_t ModifyCloudNativeAPIGatewayMCPServerRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

uint64_t ModifyCloudNativeAPIGatewayMCPServerRequest::GetRetryCount() const
{
    return m_retryCount;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetRetryCount(const uint64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

AIGWMCPUpstreamInfo ModifyCloudNativeAPIGatewayMCPServerRequest::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetUpstreamInfo(const AIGWMCPUpstreamInfo& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

AIGWMCPSessionConfig ModifyCloudNativeAPIGatewayMCPServerRequest::GetSessionConfig() const
{
    return m_sessionConfig;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetSessionConfig(const AIGWMCPSessionConfig& _sessionConfig)
{
    m_sessionConfig = _sessionConfig;
    m_sessionConfigHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::SessionConfigHasBeenSet() const
{
    return m_sessionConfigHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerRequest::GetDescription() const
{
    return m_description;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

AIGWHealthCheckSetting ModifyCloudNativeAPIGatewayMCPServerRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyCloudNativeAPIGatewayMCPServerRequest::SetHealthCheck(const AIGWHealthCheckSetting& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}



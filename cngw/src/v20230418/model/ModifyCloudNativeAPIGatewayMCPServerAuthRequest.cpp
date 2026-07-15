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

#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

ModifyCloudNativeAPIGatewayMCPServerAuthRequest::ModifyCloudNativeAPIGatewayMCPServerAuthRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_jWTAuthConfigHasBeenSet(false),
    m_oAuthAuthConfigHasBeenSet(false),
    m_oIDCAuthConfigHasBeenSet(false)
{
}

string ModifyCloudNativeAPIGatewayMCPServerAuthRequest::ToJsonString() const
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

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_jWTAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jWTAuthConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_oAuthAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthAuthConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_oIDCAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OIDCAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oIDCAuthConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetServerId() const
{
    return m_serverId;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetServerId(const string& _serverId)
{
    m_serverId = _serverId;
    m_serverIdHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::ServerIdHasBeenSet() const
{
    return m_serverIdHasBeenSet;
}

string ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetAuthType() const
{
    return m_authType;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

AIGWJWTAuthPluginConfig ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetJWTAuthConfig() const
{
    return m_jWTAuthConfig;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetJWTAuthConfig(const AIGWJWTAuthPluginConfig& _jWTAuthConfig)
{
    m_jWTAuthConfig = _jWTAuthConfig;
    m_jWTAuthConfigHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::JWTAuthConfigHasBeenSet() const
{
    return m_jWTAuthConfigHasBeenSet;
}

AIGWOAuthAuthPluginConfig ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetOAuthAuthConfig() const
{
    return m_oAuthAuthConfig;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetOAuthAuthConfig(const AIGWOAuthAuthPluginConfig& _oAuthAuthConfig)
{
    m_oAuthAuthConfig = _oAuthAuthConfig;
    m_oAuthAuthConfigHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::OAuthAuthConfigHasBeenSet() const
{
    return m_oAuthAuthConfigHasBeenSet;
}

AIGWOIDCAuthPluginConfig ModifyCloudNativeAPIGatewayMCPServerAuthRequest::GetOIDCAuthConfig() const
{
    return m_oIDCAuthConfig;
}

void ModifyCloudNativeAPIGatewayMCPServerAuthRequest::SetOIDCAuthConfig(const AIGWOIDCAuthPluginConfig& _oIDCAuthConfig)
{
    m_oIDCAuthConfig = _oIDCAuthConfig;
    m_oIDCAuthConfigHasBeenSet = true;
}

bool ModifyCloudNativeAPIGatewayMCPServerAuthRequest::OIDCAuthConfigHasBeenSet() const
{
    return m_oIDCAuthConfigHasBeenSet;
}



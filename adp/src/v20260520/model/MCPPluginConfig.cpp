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

#include <tencentcloud/adp/v20260520/model/MCPPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MCPPluginConfig::MCPPluginConfig() :
    m_externalMCPServerUrlHasBeenSet(false),
    m_mCPServerUrlHasBeenSet(false),
    m_mCPTransportHasBeenSet(false),
    m_pluginHeaderHasBeenSet(false),
    m_pluginQueryHasBeenSet(false),
    m_sSEReadTimeoutHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_authConfigHasBeenSet(false)
{
}

CoreInternalOutcome MCPPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalMCPServerUrl") && !value["ExternalMCPServerUrl"].IsNull())
    {
        if (!value["ExternalMCPServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.ExternalMCPServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalMCPServerUrl = string(value["ExternalMCPServerUrl"].GetString());
        m_externalMCPServerUrlHasBeenSet = true;
    }

    if (value.HasMember("MCPServerUrl") && !value["MCPServerUrl"].IsNull())
    {
        if (!value["MCPServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.MCPServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mCPServerUrl = string(value["MCPServerUrl"].GetString());
        m_mCPServerUrlHasBeenSet = true;
    }

    if (value.HasMember("MCPTransport") && !value["MCPTransport"].IsNull())
    {
        if (!value["MCPTransport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.MCPTransport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mCPTransport = value["MCPTransport"].GetInt64();
        m_mCPTransportHasBeenSet = true;
    }

    if (value.HasMember("PluginHeader") && !value["PluginHeader"].IsNull())
    {
        if (!value["PluginHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.PluginHeader` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginHeader.push_back(item);
        }
        m_pluginHeaderHasBeenSet = true;
    }

    if (value.HasMember("PluginQuery") && !value["PluginQuery"].IsNull())
    {
        if (!value["PluginQuery"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.PluginQuery` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginQuery"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginQuery.push_back(item);
        }
        m_pluginQueryHasBeenSet = true;
    }

    if (value.HasMember("SSEReadTimeout") && !value["SSEReadTimeout"].IsNull())
    {
        if (!value["SSEReadTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.SSEReadTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sSEReadTimeout = value["SSEReadTimeout"].GetInt64();
        m_sSEReadTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("AuthConfig") && !value["AuthConfig"].IsNull())
    {
        if (!value["AuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MCPPluginConfig.AuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authConfig.Deserialize(value["AuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalMCPServerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalMCPServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalMCPServerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPServerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mCPServerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPTransportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPTransport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mCPTransport, allocator);
    }

    if (m_pluginHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginHeader.begin(); itr != m_pluginHeader.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pluginQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginQuery.begin(); itr != m_pluginQuery.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sSEReadTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSEReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sSEReadTimeout, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_authConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MCPPluginConfig::GetExternalMCPServerUrl() const
{
    return m_externalMCPServerUrl;
}

void MCPPluginConfig::SetExternalMCPServerUrl(const string& _externalMCPServerUrl)
{
    m_externalMCPServerUrl = _externalMCPServerUrl;
    m_externalMCPServerUrlHasBeenSet = true;
}

bool MCPPluginConfig::ExternalMCPServerUrlHasBeenSet() const
{
    return m_externalMCPServerUrlHasBeenSet;
}

string MCPPluginConfig::GetMCPServerUrl() const
{
    return m_mCPServerUrl;
}

void MCPPluginConfig::SetMCPServerUrl(const string& _mCPServerUrl)
{
    m_mCPServerUrl = _mCPServerUrl;
    m_mCPServerUrlHasBeenSet = true;
}

bool MCPPluginConfig::MCPServerUrlHasBeenSet() const
{
    return m_mCPServerUrlHasBeenSet;
}

int64_t MCPPluginConfig::GetMCPTransport() const
{
    return m_mCPTransport;
}

void MCPPluginConfig::SetMCPTransport(const int64_t& _mCPTransport)
{
    m_mCPTransport = _mCPTransport;
    m_mCPTransportHasBeenSet = true;
}

bool MCPPluginConfig::MCPTransportHasBeenSet() const
{
    return m_mCPTransportHasBeenSet;
}

vector<PluginParam> MCPPluginConfig::GetPluginHeader() const
{
    return m_pluginHeader;
}

void MCPPluginConfig::SetPluginHeader(const vector<PluginParam>& _pluginHeader)
{
    m_pluginHeader = _pluginHeader;
    m_pluginHeaderHasBeenSet = true;
}

bool MCPPluginConfig::PluginHeaderHasBeenSet() const
{
    return m_pluginHeaderHasBeenSet;
}

vector<PluginParam> MCPPluginConfig::GetPluginQuery() const
{
    return m_pluginQuery;
}

void MCPPluginConfig::SetPluginQuery(const vector<PluginParam>& _pluginQuery)
{
    m_pluginQuery = _pluginQuery;
    m_pluginQueryHasBeenSet = true;
}

bool MCPPluginConfig::PluginQueryHasBeenSet() const
{
    return m_pluginQueryHasBeenSet;
}

int64_t MCPPluginConfig::GetSSEReadTimeout() const
{
    return m_sSEReadTimeout;
}

void MCPPluginConfig::SetSSEReadTimeout(const int64_t& _sSEReadTimeout)
{
    m_sSEReadTimeout = _sSEReadTimeout;
    m_sSEReadTimeoutHasBeenSet = true;
}

bool MCPPluginConfig::SSEReadTimeoutHasBeenSet() const
{
    return m_sSEReadTimeoutHasBeenSet;
}

int64_t MCPPluginConfig::GetTimeout() const
{
    return m_timeout;
}

void MCPPluginConfig::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool MCPPluginConfig::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

AuthConfig MCPPluginConfig::GetAuthConfig() const
{
    return m_authConfig;
}

void MCPPluginConfig::SetAuthConfig(const AuthConfig& _authConfig)
{
    m_authConfig = _authConfig;
    m_authConfigHasBeenSet = true;
}

bool MCPPluginConfig::AuthConfigHasBeenSet() const
{
    return m_authConfigHasBeenSet;
}


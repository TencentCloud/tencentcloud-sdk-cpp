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

#include <tencentcloud/tke/v20180525/model/AgentPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

AgentPluginConfig::AgentPluginConfig() :
    m_chartVersionHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_portHasBeenSet(false),
    m_sSLModeHasBeenSet(false),
    m_serviceDomainHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

CoreInternalOutcome AgentPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChartVersion") && !value["ChartVersion"].IsNull())
    {
        if (!value["ChartVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.ChartVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chartVersion = string(value["ChartVersion"].GetString());
        m_chartVersionHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("SSLMode") && !value["SSLMode"].IsNull())
    {
        if (!value["SSLMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.SSLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLMode = string(value["SSLMode"].GetString());
        m_sSLModeHasBeenSet = true;
    }

    if (value.HasMember("ServiceDomain") && !value["ServiceDomain"].IsNull())
    {
        if (!value["ServiceDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.ServiceDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDomain = string(value["ServiceDomain"].GetString());
        m_serviceDomainHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPluginConfig.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_chartVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chartVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_sSLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

}


string AgentPluginConfig::GetChartVersion() const
{
    return m_chartVersion;
}

void AgentPluginConfig::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool AgentPluginConfig::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}

string AgentPluginConfig::GetHost() const
{
    return m_host;
}

void AgentPluginConfig::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool AgentPluginConfig::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string AgentPluginConfig::GetPassword() const
{
    return m_password;
}

void AgentPluginConfig::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AgentPluginConfig::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t AgentPluginConfig::GetPort() const
{
    return m_port;
}

void AgentPluginConfig::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AgentPluginConfig::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AgentPluginConfig::GetSSLMode() const
{
    return m_sSLMode;
}

void AgentPluginConfig::SetSSLMode(const string& _sSLMode)
{
    m_sSLMode = _sSLMode;
    m_sSLModeHasBeenSet = true;
}

bool AgentPluginConfig::SSLModeHasBeenSet() const
{
    return m_sSLModeHasBeenSet;
}

string AgentPluginConfig::GetServiceDomain() const
{
    return m_serviceDomain;
}

void AgentPluginConfig::SetServiceDomain(const string& _serviceDomain)
{
    m_serviceDomain = _serviceDomain;
    m_serviceDomainHasBeenSet = true;
}

bool AgentPluginConfig::ServiceDomainHasBeenSet() const
{
    return m_serviceDomainHasBeenSet;
}

string AgentPluginConfig::GetUsername() const
{
    return m_username;
}

void AgentPluginConfig::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AgentPluginConfig::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}


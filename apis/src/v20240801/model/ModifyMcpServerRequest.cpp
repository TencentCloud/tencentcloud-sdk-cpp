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

#include <tencentcloud/apis/v20240801/model/ModifyMcpServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ModifyMcpServerRequest::ModifyMcpServerRequest() :
    m_iDHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_mcpVersionHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_wrapServicesHasBeenSet(false),
    m_targetSelectHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteConfigHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackConfigHasBeenSet(false),
    m_targetHostTypeHasBeenSet(false),
    m_customHttpHostHasBeenSet(false),
    m_httpHostTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_mcpSecurityRulesHasBeenSet(false),
    m_toolConfigsHasBeenSet(false),
    m_wrapPaasIDHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false)
{
}

string ModifyMcpServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mcpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_wrapServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrapServices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wrapServices.begin(); itr != m_wrapServices.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSelect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetSelect.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHosts.begin(); itr != m_targetHosts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_httpProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTargetCertsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTargetCertsError";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkTargetCertsError, allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipWhiteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipWhiteStatus, allocator);
    }

    if (m_ipWhiteConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipWhiteConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipBlackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipBlackStatus, allocator);
    }

    if (m_ipBlackConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipBlackConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetHostType, allocator);
    }

    if (m_customHttpHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHttpHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customHttpHost.c_str(), allocator).Move(), allocator);
    }

    if (m_httpHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_httpHostType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_mcpSecurityRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpSecurityRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mcpSecurityRules.begin(); itr != m_mcpSecurityRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_toolConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolConfigs.begin(); itr != m_toolConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_wrapPaasIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrapPaasID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wrapPaasID.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginConfigs.begin(); itr != m_pluginConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMcpServerRequest::GetID() const
{
    return m_iD;
}

void ModifyMcpServerRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyMcpServerRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyMcpServerRequest::GetMode() const
{
    return m_mode;
}

void ModifyMcpServerRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyMcpServerRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyMcpServerRequest::GetMcpVersion() const
{
    return m_mcpVersion;
}

void ModifyMcpServerRequest::SetMcpVersion(const string& _mcpVersion)
{
    m_mcpVersion = _mcpVersion;
    m_mcpVersionHasBeenSet = true;
}

bool ModifyMcpServerRequest::McpVersionHasBeenSet() const
{
    return m_mcpVersionHasBeenSet;
}

string ModifyMcpServerRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyMcpServerRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyMcpServerRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyMcpServerRequest::GetName() const
{
    return m_name;
}

void ModifyMcpServerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMcpServerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyMcpServerRequest::GetDescription() const
{
    return m_description;
}

void ModifyMcpServerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyMcpServerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyMcpServerRequest::GetWrapServices() const
{
    return m_wrapServices;
}

void ModifyMcpServerRequest::SetWrapServices(const vector<string>& _wrapServices)
{
    m_wrapServices = _wrapServices;
    m_wrapServicesHasBeenSet = true;
}

bool ModifyMcpServerRequest::WrapServicesHasBeenSet() const
{
    return m_wrapServicesHasBeenSet;
}

string ModifyMcpServerRequest::GetTargetSelect() const
{
    return m_targetSelect;
}

void ModifyMcpServerRequest::SetTargetSelect(const string& _targetSelect)
{
    m_targetSelect = _targetSelect;
    m_targetSelectHasBeenSet = true;
}

bool ModifyMcpServerRequest::TargetSelectHasBeenSet() const
{
    return m_targetSelectHasBeenSet;
}

vector<TargetHostDTO> ModifyMcpServerRequest::GetTargetHosts() const
{
    return m_targetHosts;
}

void ModifyMcpServerRequest::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool ModifyMcpServerRequest::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

string ModifyMcpServerRequest::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void ModifyMcpServerRequest::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool ModifyMcpServerRequest::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

bool ModifyMcpServerRequest::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void ModifyMcpServerRequest::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool ModifyMcpServerRequest::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string ModifyMcpServerRequest::GetTargetPath() const
{
    return m_targetPath;
}

void ModifyMcpServerRequest::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool ModifyMcpServerRequest::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

bool ModifyMcpServerRequest::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void ModifyMcpServerRequest::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool ModifyMcpServerRequest::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO ModifyMcpServerRequest::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void ModifyMcpServerRequest::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool ModifyMcpServerRequest::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool ModifyMcpServerRequest::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void ModifyMcpServerRequest::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool ModifyMcpServerRequest::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

IpConfig ModifyMcpServerRequest::GetIpWhiteConfig() const
{
    return m_ipWhiteConfig;
}

void ModifyMcpServerRequest::SetIpWhiteConfig(const IpConfig& _ipWhiteConfig)
{
    m_ipWhiteConfig = _ipWhiteConfig;
    m_ipWhiteConfigHasBeenSet = true;
}

bool ModifyMcpServerRequest::IpWhiteConfigHasBeenSet() const
{
    return m_ipWhiteConfigHasBeenSet;
}

bool ModifyMcpServerRequest::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void ModifyMcpServerRequest::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool ModifyMcpServerRequest::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

IpConfig ModifyMcpServerRequest::GetIpBlackConfig() const
{
    return m_ipBlackConfig;
}

void ModifyMcpServerRequest::SetIpBlackConfig(const IpConfig& _ipBlackConfig)
{
    m_ipBlackConfig = _ipBlackConfig;
    m_ipBlackConfigHasBeenSet = true;
}

bool ModifyMcpServerRequest::IpBlackConfigHasBeenSet() const
{
    return m_ipBlackConfigHasBeenSet;
}

int64_t ModifyMcpServerRequest::GetTargetHostType() const
{
    return m_targetHostType;
}

void ModifyMcpServerRequest::SetTargetHostType(const int64_t& _targetHostType)
{
    m_targetHostType = _targetHostType;
    m_targetHostTypeHasBeenSet = true;
}

bool ModifyMcpServerRequest::TargetHostTypeHasBeenSet() const
{
    return m_targetHostTypeHasBeenSet;
}

string ModifyMcpServerRequest::GetCustomHttpHost() const
{
    return m_customHttpHost;
}

void ModifyMcpServerRequest::SetCustomHttpHost(const string& _customHttpHost)
{
    m_customHttpHost = _customHttpHost;
    m_customHttpHostHasBeenSet = true;
}

bool ModifyMcpServerRequest::CustomHttpHostHasBeenSet() const
{
    return m_customHttpHostHasBeenSet;
}

string ModifyMcpServerRequest::GetHttpHostType() const
{
    return m_httpHostType;
}

void ModifyMcpServerRequest::SetHttpHostType(const string& _httpHostType)
{
    m_httpHostType = _httpHostType;
    m_httpHostTypeHasBeenSet = true;
}

bool ModifyMcpServerRequest::HttpHostTypeHasBeenSet() const
{
    return m_httpHostTypeHasBeenSet;
}

uint64_t ModifyMcpServerRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyMcpServerRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyMcpServerRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

vector<McpSecurityRule> ModifyMcpServerRequest::GetMcpSecurityRules() const
{
    return m_mcpSecurityRules;
}

void ModifyMcpServerRequest::SetMcpSecurityRules(const vector<McpSecurityRule>& _mcpSecurityRules)
{
    m_mcpSecurityRules = _mcpSecurityRules;
    m_mcpSecurityRulesHasBeenSet = true;
}

bool ModifyMcpServerRequest::McpSecurityRulesHasBeenSet() const
{
    return m_mcpSecurityRulesHasBeenSet;
}

vector<ToolConfigDTO> ModifyMcpServerRequest::GetToolConfigs() const
{
    return m_toolConfigs;
}

void ModifyMcpServerRequest::SetToolConfigs(const vector<ToolConfigDTO>& _toolConfigs)
{
    m_toolConfigs = _toolConfigs;
    m_toolConfigsHasBeenSet = true;
}

bool ModifyMcpServerRequest::ToolConfigsHasBeenSet() const
{
    return m_toolConfigsHasBeenSet;
}

string ModifyMcpServerRequest::GetWrapPaasID() const
{
    return m_wrapPaasID;
}

void ModifyMcpServerRequest::SetWrapPaasID(const string& _wrapPaasID)
{
    m_wrapPaasID = _wrapPaasID;
    m_wrapPaasIDHasBeenSet = true;
}

bool ModifyMcpServerRequest::WrapPaasIDHasBeenSet() const
{
    return m_wrapPaasIDHasBeenSet;
}

vector<PluginConfigDTO> ModifyMcpServerRequest::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void ModifyMcpServerRequest::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool ModifyMcpServerRequest::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}



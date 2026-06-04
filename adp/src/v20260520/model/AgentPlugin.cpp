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

#include <tencentcloud/adp/v20260520/model/AgentPlugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentPlugin::AgentPlugin() :
    m_configHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pluginClassHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_authConfigStatusHasBeenSet(false)
{
}

CoreInternalOutcome AgentPlugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PluginClass") && !value["PluginClass"].IsNull())
    {
        if (!value["PluginClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.PluginClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginClass = value["PluginClass"].GetInt64();
        m_pluginClassHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AuthConfigStatus") && !value["AuthConfigStatus"].IsNull())
    {
        if (!value["AuthConfigStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentPlugin.AuthConfigStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authConfigStatus = value["AuthConfigStatus"].GetInt64();
        m_authConfigStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentPlugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginClass, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_authConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authConfigStatus, allocator);
    }

}


AgentPluginConfig AgentPlugin::GetConfig() const
{
    return m_config;
}

void AgentPlugin::SetConfig(const AgentPluginConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool AgentPlugin::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string AgentPlugin::GetName() const
{
    return m_name;
}

void AgentPlugin::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentPlugin::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentPlugin::GetIconUrl() const
{
    return m_iconUrl;
}

void AgentPlugin::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool AgentPlugin::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string AgentPlugin::GetDescription() const
{
    return m_description;
}

void AgentPlugin::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentPlugin::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t AgentPlugin::GetPluginClass() const
{
    return m_pluginClass;
}

void AgentPlugin::SetPluginClass(const int64_t& _pluginClass)
{
    m_pluginClass = _pluginClass;
    m_pluginClassHasBeenSet = true;
}

bool AgentPlugin::PluginClassHasBeenSet() const
{
    return m_pluginClassHasBeenSet;
}

int64_t AgentPlugin::GetStatus() const
{
    return m_status;
}

void AgentPlugin::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentPlugin::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AgentPlugin::GetAuthConfigStatus() const
{
    return m_authConfigStatus;
}

void AgentPlugin::SetAuthConfigStatus(const int64_t& _authConfigStatus)
{
    m_authConfigStatus = _authConfigStatus;
    m_authConfigStatusHasBeenSet = true;
}

bool AgentPlugin::AuthConfigStatusHasBeenSet() const
{
    return m_authConfigStatusHasBeenSet;
}


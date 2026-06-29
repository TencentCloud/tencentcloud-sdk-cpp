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

#include <tencentcloud/adp/v20260520/model/AgentProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentProfile::AgentProfile() :
    m_nameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_developerHasBeenSet(false),
    m_parentAgentIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.Role` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_role = value["Role"].GetInt64();
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("Developer") && !value["Developer"].IsNull())
    {
        if (!value["Developer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.Developer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developer = string(value["Developer"].GetString());
        m_developerHasBeenSet = true;
    }

    if (value.HasMember("ParentAgentId") && !value["ParentAgentId"].IsNull())
    {
        if (!value["ParentAgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentProfile.ParentAgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentAgentId = string(value["ParentAgentId"].GetString());
        m_parentAgentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_role, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_developerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Developer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_developer.c_str(), allocator).Move(), allocator);
    }

    if (m_parentAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentAgentId.c_str(), allocator).Move(), allocator);
    }

}


string AgentProfile::GetName() const
{
    return m_name;
}

void AgentProfile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentProfile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentProfile::GetIconUrl() const
{
    return m_iconUrl;
}

void AgentProfile::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool AgentProfile::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

int64_t AgentProfile::GetRole() const
{
    return m_role;
}

void AgentProfile::SetRole(const int64_t& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool AgentProfile::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string AgentProfile::GetDescription() const
{
    return m_description;
}

void AgentProfile::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentProfile::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AgentProfile::GetAppName() const
{
    return m_appName;
}

void AgentProfile::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AgentProfile::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AgentProfile::GetDeveloper() const
{
    return m_developer;
}

void AgentProfile::SetDeveloper(const string& _developer)
{
    m_developer = _developer;
    m_developerHasBeenSet = true;
}

bool AgentProfile::DeveloperHasBeenSet() const
{
    return m_developerHasBeenSet;
}

string AgentProfile::GetParentAgentId() const
{
    return m_parentAgentId;
}

void AgentProfile::SetParentAgentId(const string& _parentAgentId)
{
    m_parentAgentId = _parentAgentId;
    m_parentAgentIdHasBeenSet = true;
}

bool AgentProfile::ParentAgentIdHasBeenSet() const
{
    return m_parentAgentIdHasBeenSet;
}


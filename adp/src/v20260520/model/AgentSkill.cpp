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

#include <tencentcloud/adp/v20260520/model/AgentSkill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentSkill::AgentSkill() :
    m_skillIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_displayDescriptionHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

CoreInternalOutcome AgentSkill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkillId") && !value["SkillId"].IsNull())
    {
        if (!value["SkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.SkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillId = string(value["SkillId"].GetString());
        m_skillIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("DisplayDescription") && !value["DisplayDescription"].IsNull())
    {
        if (!value["DisplayDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.DisplayDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayDescription = string(value["DisplayDescription"].GetString());
        m_displayDescriptionHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersion") && !value["CurrentVersion"].IsNull())
    {
        if (!value["CurrentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSkill.CurrentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentVersion = string(value["CurrentVersion"].GetString());
        m_currentVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSkill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_displayDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_currentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentVersion.c_str(), allocator).Move(), allocator);
    }

}


string AgentSkill::GetSkillId() const
{
    return m_skillId;
}

void AgentSkill::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool AgentSkill::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string AgentSkill::GetName() const
{
    return m_name;
}

void AgentSkill::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentSkill::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentSkill::GetDescription() const
{
    return m_description;
}

void AgentSkill::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentSkill::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AgentSkill::GetDisplayName() const
{
    return m_displayName;
}

void AgentSkill::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool AgentSkill::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string AgentSkill::GetDisplayDescription() const
{
    return m_displayDescription;
}

void AgentSkill::SetDisplayDescription(const string& _displayDescription)
{
    m_displayDescription = _displayDescription;
    m_displayDescriptionHasBeenSet = true;
}

bool AgentSkill::DisplayDescriptionHasBeenSet() const
{
    return m_displayDescriptionHasBeenSet;
}

string AgentSkill::GetIconUrl() const
{
    return m_iconUrl;
}

void AgentSkill::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool AgentSkill::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

int64_t AgentSkill::GetSourceType() const
{
    return m_sourceType;
}

void AgentSkill::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool AgentSkill::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string AgentSkill::GetCurrentVersion() const
{
    return m_currentVersion;
}

void AgentSkill::SetCurrentVersion(const string& _currentVersion)
{
    m_currentVersion = _currentVersion;
    m_currentVersionHasBeenSet = true;
}

bool AgentSkill::CurrentVersionHasBeenSet() const
{
    return m_currentVersionHasBeenSet;
}


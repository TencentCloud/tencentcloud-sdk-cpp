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

#include <tencentcloud/adp/v20260520/model/SkillProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillProfile::SkillProfile() :
    m_createTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayDescriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SkillProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DisplayDescription") && !value["DisplayDescription"].IsNull())
    {
        if (!value["DisplayDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.DisplayDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayDescription = string(value["DisplayDescription"].GetString());
        m_displayDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillProfile.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_displayDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string SkillProfile::GetCreateTime() const
{
    return m_createTime;
}

void SkillProfile::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SkillProfile::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SkillProfile::GetCreator() const
{
    return m_creator;
}

void SkillProfile::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool SkillProfile::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string SkillProfile::GetDescription() const
{
    return m_description;
}

void SkillProfile::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SkillProfile::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SkillProfile::GetDisplayDescription() const
{
    return m_displayDescription;
}

void SkillProfile::SetDisplayDescription(const string& _displayDescription)
{
    m_displayDescription = _displayDescription;
    m_displayDescriptionHasBeenSet = true;
}

bool SkillProfile::DisplayDescriptionHasBeenSet() const
{
    return m_displayDescriptionHasBeenSet;
}

string SkillProfile::GetDisplayName() const
{
    return m_displayName;
}

void SkillProfile::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool SkillProfile::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string SkillProfile::GetIconUrl() const
{
    return m_iconUrl;
}

void SkillProfile::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool SkillProfile::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string SkillProfile::GetName() const
{
    return m_name;
}

void SkillProfile::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SkillProfile::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SkillProfile::GetUpdateTime() const
{
    return m_updateTime;
}

void SkillProfile::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SkillProfile::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


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

#include <tencentcloud/adp/v20260520/model/ModifySkillRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifySkillRequest::ModifySkillRequest() :
    m_skillIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_displayDescriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_skillVersionHasBeenSet(false),
    m_updateDescriptionHasBeenSet(false)
{
}

string ModifySkillRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_skillVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skillVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySkillRequest::GetSkillId() const
{
    return m_skillId;
}

void ModifySkillRequest::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool ModifySkillRequest::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string ModifySkillRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifySkillRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifySkillRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ModifySkillRequest::GetDisplayDescription() const
{
    return m_displayDescription;
}

void ModifySkillRequest::SetDisplayDescription(const string& _displayDescription)
{
    m_displayDescription = _displayDescription;
    m_displayDescriptionHasBeenSet = true;
}

bool ModifySkillRequest::DisplayDescriptionHasBeenSet() const
{
    return m_displayDescriptionHasBeenSet;
}

string ModifySkillRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifySkillRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifySkillRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModifySkillRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void ModifySkillRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool ModifySkillRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string ModifySkillRequest::GetIconUrl() const
{
    return m_iconUrl;
}

void ModifySkillRequest::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ModifySkillRequest::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ModifySkillRequest::GetSkillVersion() const
{
    return m_skillVersion;
}

void ModifySkillRequest::SetSkillVersion(const string& _skillVersion)
{
    m_skillVersion = _skillVersion;
    m_skillVersionHasBeenSet = true;
}

bool ModifySkillRequest::SkillVersionHasBeenSet() const
{
    return m_skillVersionHasBeenSet;
}

string ModifySkillRequest::GetUpdateDescription() const
{
    return m_updateDescription;
}

void ModifySkillRequest::SetUpdateDescription(const string& _updateDescription)
{
    m_updateDescription = _updateDescription;
    m_updateDescriptionHasBeenSet = true;
}

bool ModifySkillRequest::UpdateDescriptionHasBeenSet() const
{
    return m_updateDescriptionHasBeenSet;
}



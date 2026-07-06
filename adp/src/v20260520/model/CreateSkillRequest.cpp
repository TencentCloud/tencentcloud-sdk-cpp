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

#include <tencentcloud/adp/v20260520/model/CreateSkillRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreateSkillRequest::CreateSkillRequest() :
    m_createTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_displayDescriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_skillVersionHasBeenSet(false),
    m_updateDescriptionHasBeenSet(false)
{
}

string CreateSkillRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createType, allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
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

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


int64_t CreateSkillRequest::GetCreateType() const
{
    return m_createType;
}

void CreateSkillRequest::SetCreateType(const int64_t& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool CreateSkillRequest::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

string CreateSkillRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void CreateSkillRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool CreateSkillRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string CreateSkillRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreateSkillRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreateSkillRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string CreateSkillRequest::GetDisplayDescription() const
{
    return m_displayDescription;
}

void CreateSkillRequest::SetDisplayDescription(const string& _displayDescription)
{
    m_displayDescription = _displayDescription;
    m_displayDescriptionHasBeenSet = true;
}

bool CreateSkillRequest::DisplayDescriptionHasBeenSet() const
{
    return m_displayDescriptionHasBeenSet;
}

string CreateSkillRequest::GetDisplayName() const
{
    return m_displayName;
}

void CreateSkillRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool CreateSkillRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string CreateSkillRequest::GetIconUrl() const
{
    return m_iconUrl;
}

void CreateSkillRequest::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool CreateSkillRequest::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string CreateSkillRequest::GetName() const
{
    return m_name;
}

void CreateSkillRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSkillRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSkillRequest::GetSkillVersion() const
{
    return m_skillVersion;
}

void CreateSkillRequest::SetSkillVersion(const string& _skillVersion)
{
    m_skillVersion = _skillVersion;
    m_skillVersionHasBeenSet = true;
}

bool CreateSkillRequest::SkillVersionHasBeenSet() const
{
    return m_skillVersionHasBeenSet;
}

string CreateSkillRequest::GetUpdateDescription() const
{
    return m_updateDescription;
}

void CreateSkillRequest::SetUpdateDescription(const string& _updateDescription)
{
    m_updateDescription = _updateDescription;
    m_updateDescriptionHasBeenSet = true;
}

bool CreateSkillRequest::UpdateDescriptionHasBeenSet() const
{
    return m_updateDescriptionHasBeenSet;
}



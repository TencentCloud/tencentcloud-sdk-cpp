/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceTemplateInfo::WorkspaceTemplateInfo() :
    m_idHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptionENHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false),
    m_versionControlUrlHasBeenSet(false),
    m_versionControlDescHasBeenSet(false),
    m_versionControlOwnerHasBeenSet(false),
    m_versionControlRefHasBeenSet(false),
    m_versionControlRefTypeHasBeenSet(false),
    m_userVersionControlUrlHasBeenSet(false),
    m_userVersionControlTypeHasBeenSet(false),
    m_userVersionControlRefHasBeenSet(false),
    m_userVersionControlRefTypeHasBeenSet(false),
    m_devFileHasBeenSet(false),
    m_pluginFileHasBeenSet(false),
    m_prebuildFileHasBeenSet(false),
    m_markedHasBeenSet(false),
    m_markAtHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_snapshotUidHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_meHasBeenSet(false),
    m_authorAvatarHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DescriptionEN") && !value["DescriptionEN"].IsNull())
    {
        if (!value["DescriptionEN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.DescriptionEN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionEN = string(value["DescriptionEN"].GetString());
        m_descriptionENHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("VersionControlType") && !value["VersionControlType"].IsNull())
    {
        if (!value["VersionControlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlType = string(value["VersionControlType"].GetString());
        m_versionControlTypeHasBeenSet = true;
    }

    if (value.HasMember("VersionControlUrl") && !value["VersionControlUrl"].IsNull())
    {
        if (!value["VersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlUrl = string(value["VersionControlUrl"].GetString());
        m_versionControlUrlHasBeenSet = true;
    }

    if (value.HasMember("VersionControlDesc") && !value["VersionControlDesc"].IsNull())
    {
        if (!value["VersionControlDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlDesc = string(value["VersionControlDesc"].GetString());
        m_versionControlDescHasBeenSet = true;
    }

    if (value.HasMember("VersionControlOwner") && !value["VersionControlOwner"].IsNull())
    {
        if (!value["VersionControlOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlOwner = string(value["VersionControlOwner"].GetString());
        m_versionControlOwnerHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRef") && !value["VersionControlRef"].IsNull())
    {
        if (!value["VersionControlRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRef = string(value["VersionControlRef"].GetString());
        m_versionControlRefHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRefType") && !value["VersionControlRefType"].IsNull())
    {
        if (!value["VersionControlRefType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.VersionControlRefType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRefType = string(value["VersionControlRefType"].GetString());
        m_versionControlRefTypeHasBeenSet = true;
    }

    if (value.HasMember("UserVersionControlUrl") && !value["UserVersionControlUrl"].IsNull())
    {
        if (!value["UserVersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.UserVersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVersionControlUrl = string(value["UserVersionControlUrl"].GetString());
        m_userVersionControlUrlHasBeenSet = true;
    }

    if (value.HasMember("UserVersionControlType") && !value["UserVersionControlType"].IsNull())
    {
        if (!value["UserVersionControlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.UserVersionControlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVersionControlType = string(value["UserVersionControlType"].GetString());
        m_userVersionControlTypeHasBeenSet = true;
    }

    if (value.HasMember("UserVersionControlRef") && !value["UserVersionControlRef"].IsNull())
    {
        if (!value["UserVersionControlRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.UserVersionControlRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVersionControlRef = string(value["UserVersionControlRef"].GetString());
        m_userVersionControlRefHasBeenSet = true;
    }

    if (value.HasMember("UserVersionControlRefType") && !value["UserVersionControlRefType"].IsNull())
    {
        if (!value["UserVersionControlRefType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.UserVersionControlRefType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userVersionControlRefType = string(value["UserVersionControlRefType"].GetString());
        m_userVersionControlRefTypeHasBeenSet = true;
    }

    if (value.HasMember("DevFile") && !value["DevFile"].IsNull())
    {
        if (!value["DevFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.DevFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devFile = string(value["DevFile"].GetString());
        m_devFileHasBeenSet = true;
    }

    if (value.HasMember("PluginFile") && !value["PluginFile"].IsNull())
    {
        if (!value["PluginFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.PluginFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginFile = string(value["PluginFile"].GetString());
        m_pluginFileHasBeenSet = true;
    }

    if (value.HasMember("PrebuildFile") && !value["PrebuildFile"].IsNull())
    {
        if (!value["PrebuildFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.PrebuildFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prebuildFile = string(value["PrebuildFile"].GetString());
        m_prebuildFileHasBeenSet = true;
    }

    if (value.HasMember("Marked") && !value["Marked"].IsNull())
    {
        if (!value["Marked"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Marked` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_marked = value["Marked"].GetBool();
        m_markedHasBeenSet = true;
    }

    if (value.HasMember("MarkAt") && !value["MarkAt"].IsNull())
    {
        if (!value["MarkAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.MarkAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_markAt = value["MarkAt"].GetInt64();
        m_markAtHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.LastModified` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = string(value["LastModified"].GetString());
        m_lastModifiedHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("SnapshotUid") && !value["SnapshotUid"].IsNull())
    {
        if (!value["SnapshotUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.SnapshotUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotUid = string(value["SnapshotUid"].GetString());
        m_snapshotUidHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.UserId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetInt64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Me") && !value["Me"].IsNull())
    {
        if (!value["Me"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.Me` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_me = value["Me"].GetBool();
        m_meHasBeenSet = true;
    }

    if (value.HasMember("AuthorAvatar") && !value["AuthorAvatar"].IsNull())
    {
        if (!value["AuthorAvatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceTemplateInfo.AuthorAvatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorAvatar = string(value["AuthorAvatar"].GetString());
        m_authorAvatarHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionENHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionEN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionEN.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlRef.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlRefTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlRefType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlRefType.c_str(), allocator).Move(), allocator);
    }

    if (m_userVersionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVersionControlUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userVersionControlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVersionControlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVersionControlType.c_str(), allocator).Move(), allocator);
    }

    if (m_userVersionControlRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVersionControlRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVersionControlRef.c_str(), allocator).Move(), allocator);
    }

    if (m_userVersionControlRefTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVersionControlRefType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userVersionControlRefType.c_str(), allocator).Move(), allocator);
    }

    if (m_devFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devFile.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginFile.c_str(), allocator).Move(), allocator);
    }

    if (m_prebuildFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrebuildFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prebuildFile.c_str(), allocator).Move(), allocator);
    }

    if (m_markedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marked, allocator);
    }

    if (m_markAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_markAt, allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModified.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_snapshotUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotUid.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_meHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Me";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_me, allocator);
    }

    if (m_authorAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorAvatar.c_str(), allocator).Move(), allocator);
    }

}


int64_t WorkspaceTemplateInfo::GetId() const
{
    return m_id;
}

void WorkspaceTemplateInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WorkspaceTemplateInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WorkspaceTemplateInfo::GetCategory() const
{
    return m_category;
}

void WorkspaceTemplateInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool WorkspaceTemplateInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string WorkspaceTemplateInfo::GetName() const
{
    return m_name;
}

void WorkspaceTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkspaceTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WorkspaceTemplateInfo::GetDescription() const
{
    return m_description;
}

void WorkspaceTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string WorkspaceTemplateInfo::GetDescriptionEN() const
{
    return m_descriptionEN;
}

void WorkspaceTemplateInfo::SetDescriptionEN(const string& _descriptionEN)
{
    m_descriptionEN = _descriptionEN;
    m_descriptionENHasBeenSet = true;
}

bool WorkspaceTemplateInfo::DescriptionENHasBeenSet() const
{
    return m_descriptionENHasBeenSet;
}

string WorkspaceTemplateInfo::GetTags() const
{
    return m_tags;
}

void WorkspaceTemplateInfo::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool WorkspaceTemplateInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string WorkspaceTemplateInfo::GetIcon() const
{
    return m_icon;
}

void WorkspaceTemplateInfo::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool WorkspaceTemplateInfo::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlType() const
{
    return m_versionControlType;
}

void WorkspaceTemplateInfo::SetVersionControlType(const string& _versionControlType)
{
    m_versionControlType = _versionControlType;
    m_versionControlTypeHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlTypeHasBeenSet() const
{
    return m_versionControlTypeHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlUrl() const
{
    return m_versionControlUrl;
}

void WorkspaceTemplateInfo::SetVersionControlUrl(const string& _versionControlUrl)
{
    m_versionControlUrl = _versionControlUrl;
    m_versionControlUrlHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlUrlHasBeenSet() const
{
    return m_versionControlUrlHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlDesc() const
{
    return m_versionControlDesc;
}

void WorkspaceTemplateInfo::SetVersionControlDesc(const string& _versionControlDesc)
{
    m_versionControlDesc = _versionControlDesc;
    m_versionControlDescHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlDescHasBeenSet() const
{
    return m_versionControlDescHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlOwner() const
{
    return m_versionControlOwner;
}

void WorkspaceTemplateInfo::SetVersionControlOwner(const string& _versionControlOwner)
{
    m_versionControlOwner = _versionControlOwner;
    m_versionControlOwnerHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlOwnerHasBeenSet() const
{
    return m_versionControlOwnerHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlRef() const
{
    return m_versionControlRef;
}

void WorkspaceTemplateInfo::SetVersionControlRef(const string& _versionControlRef)
{
    m_versionControlRef = _versionControlRef;
    m_versionControlRefHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlRefHasBeenSet() const
{
    return m_versionControlRefHasBeenSet;
}

string WorkspaceTemplateInfo::GetVersionControlRefType() const
{
    return m_versionControlRefType;
}

void WorkspaceTemplateInfo::SetVersionControlRefType(const string& _versionControlRefType)
{
    m_versionControlRefType = _versionControlRefType;
    m_versionControlRefTypeHasBeenSet = true;
}

bool WorkspaceTemplateInfo::VersionControlRefTypeHasBeenSet() const
{
    return m_versionControlRefTypeHasBeenSet;
}

string WorkspaceTemplateInfo::GetUserVersionControlUrl() const
{
    return m_userVersionControlUrl;
}

void WorkspaceTemplateInfo::SetUserVersionControlUrl(const string& _userVersionControlUrl)
{
    m_userVersionControlUrl = _userVersionControlUrl;
    m_userVersionControlUrlHasBeenSet = true;
}

bool WorkspaceTemplateInfo::UserVersionControlUrlHasBeenSet() const
{
    return m_userVersionControlUrlHasBeenSet;
}

string WorkspaceTemplateInfo::GetUserVersionControlType() const
{
    return m_userVersionControlType;
}

void WorkspaceTemplateInfo::SetUserVersionControlType(const string& _userVersionControlType)
{
    m_userVersionControlType = _userVersionControlType;
    m_userVersionControlTypeHasBeenSet = true;
}

bool WorkspaceTemplateInfo::UserVersionControlTypeHasBeenSet() const
{
    return m_userVersionControlTypeHasBeenSet;
}

string WorkspaceTemplateInfo::GetUserVersionControlRef() const
{
    return m_userVersionControlRef;
}

void WorkspaceTemplateInfo::SetUserVersionControlRef(const string& _userVersionControlRef)
{
    m_userVersionControlRef = _userVersionControlRef;
    m_userVersionControlRefHasBeenSet = true;
}

bool WorkspaceTemplateInfo::UserVersionControlRefHasBeenSet() const
{
    return m_userVersionControlRefHasBeenSet;
}

string WorkspaceTemplateInfo::GetUserVersionControlRefType() const
{
    return m_userVersionControlRefType;
}

void WorkspaceTemplateInfo::SetUserVersionControlRefType(const string& _userVersionControlRefType)
{
    m_userVersionControlRefType = _userVersionControlRefType;
    m_userVersionControlRefTypeHasBeenSet = true;
}

bool WorkspaceTemplateInfo::UserVersionControlRefTypeHasBeenSet() const
{
    return m_userVersionControlRefTypeHasBeenSet;
}

string WorkspaceTemplateInfo::GetDevFile() const
{
    return m_devFile;
}

void WorkspaceTemplateInfo::SetDevFile(const string& _devFile)
{
    m_devFile = _devFile;
    m_devFileHasBeenSet = true;
}

bool WorkspaceTemplateInfo::DevFileHasBeenSet() const
{
    return m_devFileHasBeenSet;
}

string WorkspaceTemplateInfo::GetPluginFile() const
{
    return m_pluginFile;
}

void WorkspaceTemplateInfo::SetPluginFile(const string& _pluginFile)
{
    m_pluginFile = _pluginFile;
    m_pluginFileHasBeenSet = true;
}

bool WorkspaceTemplateInfo::PluginFileHasBeenSet() const
{
    return m_pluginFileHasBeenSet;
}

string WorkspaceTemplateInfo::GetPrebuildFile() const
{
    return m_prebuildFile;
}

void WorkspaceTemplateInfo::SetPrebuildFile(const string& _prebuildFile)
{
    m_prebuildFile = _prebuildFile;
    m_prebuildFileHasBeenSet = true;
}

bool WorkspaceTemplateInfo::PrebuildFileHasBeenSet() const
{
    return m_prebuildFileHasBeenSet;
}

bool WorkspaceTemplateInfo::GetMarked() const
{
    return m_marked;
}

void WorkspaceTemplateInfo::SetMarked(const bool& _marked)
{
    m_marked = _marked;
    m_markedHasBeenSet = true;
}

bool WorkspaceTemplateInfo::MarkedHasBeenSet() const
{
    return m_markedHasBeenSet;
}

int64_t WorkspaceTemplateInfo::GetMarkAt() const
{
    return m_markAt;
}

void WorkspaceTemplateInfo::SetMarkAt(const int64_t& _markAt)
{
    m_markAt = _markAt;
    m_markAtHasBeenSet = true;
}

bool WorkspaceTemplateInfo::MarkAtHasBeenSet() const
{
    return m_markAtHasBeenSet;
}

string WorkspaceTemplateInfo::GetCreateDate() const
{
    return m_createDate;
}

void WorkspaceTemplateInfo::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool WorkspaceTemplateInfo::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string WorkspaceTemplateInfo::GetLastModified() const
{
    return m_lastModified;
}

void WorkspaceTemplateInfo::SetLastModified(const string& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool WorkspaceTemplateInfo::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

int64_t WorkspaceTemplateInfo::GetSort() const
{
    return m_sort;
}

void WorkspaceTemplateInfo::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool WorkspaceTemplateInfo::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string WorkspaceTemplateInfo::GetSnapshotUid() const
{
    return m_snapshotUid;
}

void WorkspaceTemplateInfo::SetSnapshotUid(const string& _snapshotUid)
{
    m_snapshotUid = _snapshotUid;
    m_snapshotUidHasBeenSet = true;
}

bool WorkspaceTemplateInfo::SnapshotUidHasBeenSet() const
{
    return m_snapshotUidHasBeenSet;
}

int64_t WorkspaceTemplateInfo::GetUserId() const
{
    return m_userId;
}

void WorkspaceTemplateInfo::SetUserId(const int64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool WorkspaceTemplateInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string WorkspaceTemplateInfo::GetAuthor() const
{
    return m_author;
}

void WorkspaceTemplateInfo::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool WorkspaceTemplateInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

bool WorkspaceTemplateInfo::GetMe() const
{
    return m_me;
}

void WorkspaceTemplateInfo::SetMe(const bool& _me)
{
    m_me = _me;
    m_meHasBeenSet = true;
}

bool WorkspaceTemplateInfo::MeHasBeenSet() const
{
    return m_meHasBeenSet;
}

string WorkspaceTemplateInfo::GetAuthorAvatar() const
{
    return m_authorAvatar;
}

void WorkspaceTemplateInfo::SetAuthorAvatar(const string& _authorAvatar)
{
    m_authorAvatar = _authorAvatar;
    m_authorAvatarHasBeenSet = true;
}

bool WorkspaceTemplateInfo::AuthorAvatarHasBeenSet() const
{
    return m_authorAvatarHasBeenSet;
}


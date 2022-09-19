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

#include <tencentcloud/cloudstudio/v20210524/model/ImageUserDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

ImageUserDTO::ImageUserDTO() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptionCNHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_visibleHasBeenSet(false),
    m_workspaceVersionHasBeenSet(false),
    m_sortHasBeenSet(false)
{
}

CoreInternalOutcome ImageUserDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DescriptionCN") && !value["DescriptionCN"].IsNull())
    {
        if (!value["DescriptionCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.DescriptionCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionCN = string(value["DescriptionCN"].GetString());
        m_descriptionCNHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Visible") && !value["Visible"].IsNull())
    {
        if (!value["Visible"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Visible` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visible = string(value["Visible"].GetString());
        m_visibleHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceVersion") && !value["WorkspaceVersion"].IsNull())
    {
        if (!value["WorkspaceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.WorkspaceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceVersion = value["WorkspaceVersion"].GetInt64();
        m_workspaceVersionHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUserDTO.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageUserDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionCN.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_visibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visible.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceVersion, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

}


string ImageUserDTO::GetId() const
{
    return m_id;
}

void ImageUserDTO::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageUserDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageUserDTO::GetName() const
{
    return m_name;
}

void ImageUserDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageUserDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageUserDTO::GetTag() const
{
    return m_tag;
}

void ImageUserDTO::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ImageUserDTO::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string ImageUserDTO::GetDescription() const
{
    return m_description;
}

void ImageUserDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImageUserDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImageUserDTO::GetDescriptionCN() const
{
    return m_descriptionCN;
}

void ImageUserDTO::SetDescriptionCN(const string& _descriptionCN)
{
    m_descriptionCN = _descriptionCN;
    m_descriptionCNHasBeenSet = true;
}

bool ImageUserDTO::DescriptionCNHasBeenSet() const
{
    return m_descriptionCNHasBeenSet;
}

string ImageUserDTO::GetIconUrl() const
{
    return m_iconUrl;
}

void ImageUserDTO::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ImageUserDTO::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string ImageUserDTO::GetAuthor() const
{
    return m_author;
}

void ImageUserDTO::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool ImageUserDTO::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string ImageUserDTO::GetVisible() const
{
    return m_visible;
}

void ImageUserDTO::SetVisible(const string& _visible)
{
    m_visible = _visible;
    m_visibleHasBeenSet = true;
}

bool ImageUserDTO::VisibleHasBeenSet() const
{
    return m_visibleHasBeenSet;
}

int64_t ImageUserDTO::GetWorkspaceVersion() const
{
    return m_workspaceVersion;
}

void ImageUserDTO::SetWorkspaceVersion(const int64_t& _workspaceVersion)
{
    m_workspaceVersion = _workspaceVersion;
    m_workspaceVersionHasBeenSet = true;
}

bool ImageUserDTO::WorkspaceVersionHasBeenSet() const
{
    return m_workspaceVersionHasBeenSet;
}

int64_t ImageUserDTO::GetSort() const
{
    return m_sort;
}

void ImageUserDTO::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ImageUserDTO::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}


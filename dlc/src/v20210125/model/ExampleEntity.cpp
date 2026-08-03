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

#include <tencentcloud/dlc/v20210125/model/ExampleEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ExampleEntity::ExampleEntity() :
    m_idHasBeenSet(false),
    m_exampleIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_readmeHasBeenSet(false),
    m_codeArchiveUrlHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_labImageHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_popularityHasBeenSet(false),
    m_difficultyHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome ExampleEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ExampleId") && !value["ExampleId"].IsNull())
    {
        if (!value["ExampleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.ExampleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleId = string(value["ExampleId"].GetString());
        m_exampleIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Readme") && !value["Readme"].IsNull())
    {
        if (!value["Readme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Readme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readme = string(value["Readme"].GetString());
        m_readmeHasBeenSet = true;
    }

    if (value.HasMember("CodeArchiveUrl") && !value["CodeArchiveUrl"].IsNull())
    {
        if (!value["CodeArchiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.CodeArchiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeArchiveUrl = string(value["CodeArchiveUrl"].GetString());
        m_codeArchiveUrlHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("LabImage") && !value["LabImage"].IsNull())
    {
        if (!value["LabImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.LabImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImage = string(value["LabImage"].GetString());
        m_labImageHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Popularity") && !value["Popularity"].IsNull())
    {
        if (!value["Popularity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Popularity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_popularity = value["Popularity"].GetInt64();
        m_popularityHasBeenSet = true;
    }

    if (value.HasMember("Difficulty") && !value["Difficulty"].IsNull())
    {
        if (!value["Difficulty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Difficulty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_difficulty = string(value["Difficulty"].GetString());
        m_difficultyHasBeenSet = true;
    }

    if (value.HasMember("EstimatedTime") && !value["EstimatedTime"].IsNull())
    {
        if (!value["EstimatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.EstimatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = value["EstimatedTime"].GetInt64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (value.HasMember("SortOrder") && !value["SortOrder"].IsNull())
    {
        if (!value["SortOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.SortOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortOrder = value["SortOrder"].GetInt64();
        m_sortOrderHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.IsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetBool();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleEntity.Deleted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = value["Deleted"].GetInt64();
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExampleEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_exampleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exampleId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_readmeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Readme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readme.c_str(), allocator).Move(), allocator);
    }

    if (m_codeArchiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeArchiveUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeArchiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_labImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labImage.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_popularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Popularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_popularity, allocator);
    }

    if (m_difficultyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Difficulty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_difficulty.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_estimatedTime, allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortOrder, allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleted, allocator);
    }

}


uint64_t ExampleEntity::GetId() const
{
    return m_id;
}

void ExampleEntity::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ExampleEntity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ExampleEntity::GetExampleId() const
{
    return m_exampleId;
}

void ExampleEntity::SetExampleId(const string& _exampleId)
{
    m_exampleId = _exampleId;
    m_exampleIdHasBeenSet = true;
}

bool ExampleEntity::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

string ExampleEntity::GetTitle() const
{
    return m_title;
}

void ExampleEntity::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ExampleEntity::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ExampleEntity::GetDescription() const
{
    return m_description;
}

void ExampleEntity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ExampleEntity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ExampleEntity::GetReadme() const
{
    return m_readme;
}

void ExampleEntity::SetReadme(const string& _readme)
{
    m_readme = _readme;
    m_readmeHasBeenSet = true;
}

bool ExampleEntity::ReadmeHasBeenSet() const
{
    return m_readmeHasBeenSet;
}

string ExampleEntity::GetCodeArchiveUrl() const
{
    return m_codeArchiveUrl;
}

void ExampleEntity::SetCodeArchiveUrl(const string& _codeArchiveUrl)
{
    m_codeArchiveUrl = _codeArchiveUrl;
    m_codeArchiveUrlHasBeenSet = true;
}

bool ExampleEntity::CodeArchiveUrlHasBeenSet() const
{
    return m_codeArchiveUrlHasBeenSet;
}

string ExampleEntity::GetImage() const
{
    return m_image;
}

void ExampleEntity::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ExampleEntity::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string ExampleEntity::GetLabImage() const
{
    return m_labImage;
}

void ExampleEntity::SetLabImage(const string& _labImage)
{
    m_labImage = _labImage;
    m_labImageHasBeenSet = true;
}

bool ExampleEntity::LabImageHasBeenSet() const
{
    return m_labImageHasBeenSet;
}

string ExampleEntity::GetResourceConfig() const
{
    return m_resourceConfig;
}

void ExampleEntity::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool ExampleEntity::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string ExampleEntity::GetCategory() const
{
    return m_category;
}

void ExampleEntity::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ExampleEntity::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<string> ExampleEntity::GetTags() const
{
    return m_tags;
}

void ExampleEntity::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ExampleEntity::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ExampleEntity::GetPopularity() const
{
    return m_popularity;
}

void ExampleEntity::SetPopularity(const int64_t& _popularity)
{
    m_popularity = _popularity;
    m_popularityHasBeenSet = true;
}

bool ExampleEntity::PopularityHasBeenSet() const
{
    return m_popularityHasBeenSet;
}

string ExampleEntity::GetDifficulty() const
{
    return m_difficulty;
}

void ExampleEntity::SetDifficulty(const string& _difficulty)
{
    m_difficulty = _difficulty;
    m_difficultyHasBeenSet = true;
}

bool ExampleEntity::DifficultyHasBeenSet() const
{
    return m_difficultyHasBeenSet;
}

int64_t ExampleEntity::GetEstimatedTime() const
{
    return m_estimatedTime;
}

void ExampleEntity::SetEstimatedTime(const int64_t& _estimatedTime)
{
    m_estimatedTime = _estimatedTime;
    m_estimatedTimeHasBeenSet = true;
}

bool ExampleEntity::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

int64_t ExampleEntity::GetSortOrder() const
{
    return m_sortOrder;
}

void ExampleEntity::SetSortOrder(const int64_t& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool ExampleEntity::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

bool ExampleEntity::GetIsEnabled() const
{
    return m_isEnabled;
}

void ExampleEntity::SetIsEnabled(const bool& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool ExampleEntity::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

uint64_t ExampleEntity::GetCreateTime() const
{
    return m_createTime;
}

void ExampleEntity::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExampleEntity::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ExampleEntity::GetUpdateTime() const
{
    return m_updateTime;
}

void ExampleEntity::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ExampleEntity::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ExampleEntity::GetDeleted() const
{
    return m_deleted;
}

void ExampleEntity::SetDeleted(const int64_t& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool ExampleEntity::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}


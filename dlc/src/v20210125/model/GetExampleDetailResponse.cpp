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

#include <tencentcloud/dlc/v20210125/model/GetExampleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

GetExampleDetailResponse::GetExampleDetailResponse() :
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
    m_difficultyHasBeenSet(false),
    m_estimatedTimeHasBeenSet(false),
    m_sortOrderHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_popularityHasBeenSet(false)
{
}

CoreInternalOutcome GetExampleDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("ExampleId") && !rsp["ExampleId"].IsNull())
    {
        if (!rsp["ExampleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExampleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleId = string(rsp["ExampleId"].GetString());
        m_exampleIdHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Readme") && !rsp["Readme"].IsNull())
    {
        if (!rsp["Readme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Readme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readme = string(rsp["Readme"].GetString());
        m_readmeHasBeenSet = true;
    }

    if (rsp.HasMember("CodeArchiveUrl") && !rsp["CodeArchiveUrl"].IsNull())
    {
        if (!rsp["CodeArchiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeArchiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeArchiveUrl = string(rsp["CodeArchiveUrl"].GetString());
        m_codeArchiveUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("LabImage") && !rsp["LabImage"].IsNull())
    {
        if (!rsp["LabImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labImage = string(rsp["LabImage"].GetString());
        m_labImageHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceConfig") && !rsp["ResourceConfig"].IsNull())
    {
        if (!rsp["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(rsp["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Category") && !rsp["Category"].IsNull())
    {
        if (!rsp["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(rsp["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("Difficulty") && !rsp["Difficulty"].IsNull())
    {
        if (!rsp["Difficulty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Difficulty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_difficulty = string(rsp["Difficulty"].GetString());
        m_difficultyHasBeenSet = true;
    }

    if (rsp.HasMember("EstimatedTime") && !rsp["EstimatedTime"].IsNull())
    {
        if (!rsp["EstimatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EstimatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedTime = rsp["EstimatedTime"].GetInt64();
        m_estimatedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SortOrder") && !rsp["SortOrder"].IsNull())
    {
        if (!rsp["SortOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SortOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortOrder = rsp["SortOrder"].GetInt64();
        m_sortOrderHasBeenSet = true;
    }

    if (rsp.HasMember("IsEnabled") && !rsp["IsEnabled"].IsNull())
    {
        if (!rsp["IsEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = rsp["IsEnabled"].GetBool();
        m_isEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Deleted") && !rsp["Deleted"].IsNull())
    {
        if (!rsp["Deleted"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Deleted` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = rsp["Deleted"].GetInt64();
        m_deletedHasBeenSet = true;
    }

    if (rsp.HasMember("Popularity") && !rsp["Popularity"].IsNull())
    {
        if (!rsp["Popularity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Popularity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_popularity = rsp["Popularity"].GetInt64();
        m_popularityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetExampleDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_popularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Popularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_popularity, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t GetExampleDetailResponse::GetId() const
{
    return m_id;
}

bool GetExampleDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string GetExampleDetailResponse::GetExampleId() const
{
    return m_exampleId;
}

bool GetExampleDetailResponse::ExampleIdHasBeenSet() const
{
    return m_exampleIdHasBeenSet;
}

string GetExampleDetailResponse::GetTitle() const
{
    return m_title;
}

bool GetExampleDetailResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string GetExampleDetailResponse::GetDescription() const
{
    return m_description;
}

bool GetExampleDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetExampleDetailResponse::GetReadme() const
{
    return m_readme;
}

bool GetExampleDetailResponse::ReadmeHasBeenSet() const
{
    return m_readmeHasBeenSet;
}

string GetExampleDetailResponse::GetCodeArchiveUrl() const
{
    return m_codeArchiveUrl;
}

bool GetExampleDetailResponse::CodeArchiveUrlHasBeenSet() const
{
    return m_codeArchiveUrlHasBeenSet;
}

string GetExampleDetailResponse::GetImage() const
{
    return m_image;
}

bool GetExampleDetailResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string GetExampleDetailResponse::GetLabImage() const
{
    return m_labImage;
}

bool GetExampleDetailResponse::LabImageHasBeenSet() const
{
    return m_labImageHasBeenSet;
}

string GetExampleDetailResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool GetExampleDetailResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string GetExampleDetailResponse::GetCategory() const
{
    return m_category;
}

bool GetExampleDetailResponse::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<string> GetExampleDetailResponse::GetTags() const
{
    return m_tags;
}

bool GetExampleDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string GetExampleDetailResponse::GetDifficulty() const
{
    return m_difficulty;
}

bool GetExampleDetailResponse::DifficultyHasBeenSet() const
{
    return m_difficultyHasBeenSet;
}

int64_t GetExampleDetailResponse::GetEstimatedTime() const
{
    return m_estimatedTime;
}

bool GetExampleDetailResponse::EstimatedTimeHasBeenSet() const
{
    return m_estimatedTimeHasBeenSet;
}

int64_t GetExampleDetailResponse::GetSortOrder() const
{
    return m_sortOrder;
}

bool GetExampleDetailResponse::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}

bool GetExampleDetailResponse::GetIsEnabled() const
{
    return m_isEnabled;
}

bool GetExampleDetailResponse::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

uint64_t GetExampleDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool GetExampleDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t GetExampleDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool GetExampleDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t GetExampleDetailResponse::GetDeleted() const
{
    return m_deleted;
}

bool GetExampleDetailResponse::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

int64_t GetExampleDetailResponse::GetPopularity() const
{
    return m_popularity;
}

bool GetExampleDetailResponse::PopularityHasBeenSet() const
{
    return m_popularityHasBeenSet;
}



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

#include <tencentcloud/databuddy/v20260715/model/SearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

SearchResult::SearchResult() :
    m_fullNameHasBeenSet(false),
    m_assetGuidHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_userActivityInfoHasBeenSet(false),
    m_popularityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_workspaceFolderPathHasBeenSet(false),
    m_highlightingHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_workspacePathHasBeenSet(false),
    m_fieldInfoHasBeenSet(false),
    m_signalLevelHasBeenSet(false),
    m_popularityQuantityHasBeenSet(false),
    m_highlightingInfoHasBeenSet(false),
    m_fieldTagsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_catalogSourceHasBeenSet(false)
{
}

CoreInternalOutcome SearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("UserActivityInfo") && !value["UserActivityInfo"].IsNull())
    {
        if (!value["UserActivityInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.UserActivityInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userActivityInfo.Deserialize(value["UserActivityInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userActivityInfoHasBeenSet = true;
    }

    if (value.HasMember("Popularity") && !value["Popularity"].IsNull())
    {
        if (!value["Popularity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Popularity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_popularity = string(value["Popularity"].GetString());
        m_popularityHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceFolderPath") && !value["WorkspaceFolderPath"].IsNull())
    {
        if (!value["WorkspaceFolderPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.WorkspaceFolderPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceFolderPath = string(value["WorkspaceFolderPath"].GetString());
        m_workspaceFolderPathHasBeenSet = true;
    }

    if (value.HasMember("Highlighting") && !value["Highlighting"].IsNull())
    {
        if (!value["Highlighting"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.Highlighting` is not array type"));

        const rapidjson::Value &tmpValue = value["Highlighting"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Highlighting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlighting.push_back(item);
        }
        m_highlightingHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("WorkspacePath") && !value["WorkspacePath"].IsNull())
    {
        if (!value["WorkspacePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.WorkspacePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspacePath = string(value["WorkspacePath"].GetString());
        m_workspacePathHasBeenSet = true;
    }

    if (value.HasMember("FieldInfo") && !value["FieldInfo"].IsNull())
    {
        if (!value["FieldInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.FieldInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldInfo.push_back(item);
        }
        m_fieldInfoHasBeenSet = true;
    }

    if (value.HasMember("SignalLevel") && !value["SignalLevel"].IsNull())
    {
        if (!value["SignalLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.SignalLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signalLevel = string(value["SignalLevel"].GetString());
        m_signalLevelHasBeenSet = true;
    }

    if (value.HasMember("PopularityQuantity") && !value["PopularityQuantity"].IsNull())
    {
        if (!value["PopularityQuantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.PopularityQuantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_popularityQuantity = string(value["PopularityQuantity"].GetString());
        m_popularityQuantityHasBeenSet = true;
    }

    if (value.HasMember("HighlightingInfo") && !value["HighlightingInfo"].IsNull())
    {
        if (!value["HighlightingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.HighlightingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightingInfo.Deserialize(value["HighlightingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightingInfoHasBeenSet = true;
    }

    if (value.HasMember("FieldTags") && !value["FieldTags"].IsNull())
    {
        if (!value["FieldTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.FieldTags` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldTags.push_back(item);
        }
        m_fieldTagsHasBeenSet = true;
    }

    if (value.HasMember("Aliases") && !value["Aliases"].IsNull())
    {
        if (!value["Aliases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchResult.Aliases` is not array type"));

        const rapidjson::Value &tmpValue = value["Aliases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aliases.push_back((*itr).GetString());
        }
        m_aliasesHasBeenSet = true;
    }

    if (value.HasMember("CatalogSource") && !value["CatalogSource"].IsNull())
    {
        if (!value["CatalogSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.CatalogSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogSource = string(value["CatalogSource"].GetString());
        m_catalogSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_userActivityInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserActivityInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userActivityInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_popularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Popularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_popularity.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceFolderPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_highlightingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Highlighting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlighting.begin(); itr != m_highlighting.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workspacePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspacePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspacePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldInfo.begin(); itr != m_fieldInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signalLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignalLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signalLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_popularityQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PopularityQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_popularityQuantity.c_str(), allocator).Move(), allocator);
    }

    if (m_highlightingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highlightingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fieldTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldTags.begin(); itr != m_fieldTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aliasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aliases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aliases.begin(); itr != m_aliases.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_catalogSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogSource.c_str(), allocator).Move(), allocator);
    }

}


string SearchResult::GetFullName() const
{
    return m_fullName;
}

void SearchResult::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool SearchResult::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string SearchResult::GetAssetGuid() const
{
    return m_assetGuid;
}

void SearchResult::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool SearchResult::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

string SearchResult::GetAssetId() const
{
    return m_assetId;
}

void SearchResult::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool SearchResult::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string SearchResult::GetAssetName() const
{
    return m_assetName;
}

void SearchResult::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool SearchResult::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string SearchResult::GetAssetType() const
{
    return m_assetType;
}

void SearchResult::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool SearchResult::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

UserActivityInfo SearchResult::GetUserActivityInfo() const
{
    return m_userActivityInfo;
}

void SearchResult::SetUserActivityInfo(const UserActivityInfo& _userActivityInfo)
{
    m_userActivityInfo = _userActivityInfo;
    m_userActivityInfoHasBeenSet = true;
}

bool SearchResult::UserActivityInfoHasBeenSet() const
{
    return m_userActivityInfoHasBeenSet;
}

string SearchResult::GetPopularity() const
{
    return m_popularity;
}

void SearchResult::SetPopularity(const string& _popularity)
{
    m_popularity = _popularity;
    m_popularityHasBeenSet = true;
}

bool SearchResult::PopularityHasBeenSet() const
{
    return m_popularityHasBeenSet;
}

vector<TagInfo> SearchResult::GetTags() const
{
    return m_tags;
}

void SearchResult::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SearchResult::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

Owner SearchResult::GetOwner() const
{
    return m_owner;
}

void SearchResult::SetOwner(const Owner& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool SearchResult::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string SearchResult::GetModifiedTime() const
{
    return m_modifiedTime;
}

void SearchResult::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool SearchResult::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string SearchResult::GetComment() const
{
    return m_comment;
}

void SearchResult::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SearchResult::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string SearchResult::GetWorkspaceId() const
{
    return m_workspaceId;
}

void SearchResult::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool SearchResult::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string SearchResult::GetWorkspaceFolderPath() const
{
    return m_workspaceFolderPath;
}

void SearchResult::SetWorkspaceFolderPath(const string& _workspaceFolderPath)
{
    m_workspaceFolderPath = _workspaceFolderPath;
    m_workspaceFolderPathHasBeenSet = true;
}

bool SearchResult::WorkspaceFolderPathHasBeenSet() const
{
    return m_workspaceFolderPathHasBeenSet;
}

vector<Highlighting> SearchResult::GetHighlighting() const
{
    return m_highlighting;
}

void SearchResult::SetHighlighting(const vector<Highlighting>& _highlighting)
{
    m_highlighting = _highlighting;
    m_highlightingHasBeenSet = true;
}

bool SearchResult::HighlightingHasBeenSet() const
{
    return m_highlightingHasBeenSet;
}

vector<KVPair> SearchResult::GetProperties() const
{
    return m_properties;
}

void SearchResult::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool SearchResult::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string SearchResult::GetWorkspacePath() const
{
    return m_workspacePath;
}

void SearchResult::SetWorkspacePath(const string& _workspacePath)
{
    m_workspacePath = _workspacePath;
    m_workspacePathHasBeenSet = true;
}

bool SearchResult::WorkspacePathHasBeenSet() const
{
    return m_workspacePathHasBeenSet;
}

vector<FieldInfo> SearchResult::GetFieldInfo() const
{
    return m_fieldInfo;
}

void SearchResult::SetFieldInfo(const vector<FieldInfo>& _fieldInfo)
{
    m_fieldInfo = _fieldInfo;
    m_fieldInfoHasBeenSet = true;
}

bool SearchResult::FieldInfoHasBeenSet() const
{
    return m_fieldInfoHasBeenSet;
}

string SearchResult::GetSignalLevel() const
{
    return m_signalLevel;
}

void SearchResult::SetSignalLevel(const string& _signalLevel)
{
    m_signalLevel = _signalLevel;
    m_signalLevelHasBeenSet = true;
}

bool SearchResult::SignalLevelHasBeenSet() const
{
    return m_signalLevelHasBeenSet;
}

string SearchResult::GetPopularityQuantity() const
{
    return m_popularityQuantity;
}

void SearchResult::SetPopularityQuantity(const string& _popularityQuantity)
{
    m_popularityQuantity = _popularityQuantity;
    m_popularityQuantityHasBeenSet = true;
}

bool SearchResult::PopularityQuantityHasBeenSet() const
{
    return m_popularityQuantityHasBeenSet;
}

HighlightingInfo SearchResult::GetHighlightingInfo() const
{
    return m_highlightingInfo;
}

void SearchResult::SetHighlightingInfo(const HighlightingInfo& _highlightingInfo)
{
    m_highlightingInfo = _highlightingInfo;
    m_highlightingInfoHasBeenSet = true;
}

bool SearchResult::HighlightingInfoHasBeenSet() const
{
    return m_highlightingInfoHasBeenSet;
}

vector<FieldTagInfo> SearchResult::GetFieldTags() const
{
    return m_fieldTags;
}

void SearchResult::SetFieldTags(const vector<FieldTagInfo>& _fieldTags)
{
    m_fieldTags = _fieldTags;
    m_fieldTagsHasBeenSet = true;
}

bool SearchResult::FieldTagsHasBeenSet() const
{
    return m_fieldTagsHasBeenSet;
}

vector<string> SearchResult::GetAliases() const
{
    return m_aliases;
}

void SearchResult::SetAliases(const vector<string>& _aliases)
{
    m_aliases = _aliases;
    m_aliasesHasBeenSet = true;
}

bool SearchResult::AliasesHasBeenSet() const
{
    return m_aliasesHasBeenSet;
}

string SearchResult::GetCatalogSource() const
{
    return m_catalogSource;
}

void SearchResult::SetCatalogSource(const string& _catalogSource)
{
    m_catalogSource = _catalogSource;
    m_catalogSourceHasBeenSet = true;
}

bool SearchResult::CatalogSourceHasBeenSet() const
{
    return m_catalogSourceHasBeenSet;
}


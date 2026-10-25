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

#include <tencentcloud/databuddy/v20260715/model/FeatureTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FeatureTable::FeatureTable() :
    m_nameHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_assetGuidHasBeenSet(false)
{
}

CoreInternalOutcome FeatureTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("FullName") && !value["FullName"].IsNull())
    {
        if (!value["FullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.FullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullName = string(value["FullName"].GetString());
        m_fullNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FeatureTable.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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
            return CoreInternalOutcome(Core::Error("response `FeatureTable.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureTable.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FeatureTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

}


string FeatureTable::GetName() const
{
    return m_name;
}

void FeatureTable::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FeatureTable::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FeatureTable::GetFullName() const
{
    return m_fullName;
}

void FeatureTable::SetFullName(const string& _fullName)
{
    m_fullName = _fullName;
    m_fullNameHasBeenSet = true;
}

bool FeatureTable::FullNameHasBeenSet() const
{
    return m_fullNameHasBeenSet;
}

string FeatureTable::GetComment() const
{
    return m_comment;
}

void FeatureTable::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool FeatureTable::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string FeatureTable::GetDatabaseName() const
{
    return m_databaseName;
}

void FeatureTable::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool FeatureTable::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string FeatureTable::GetModifiedTime() const
{
    return m_modifiedTime;
}

void FeatureTable::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool FeatureTable::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string FeatureTable::GetCreateTime() const
{
    return m_createTime;
}

void FeatureTable::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FeatureTable::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<Tag> FeatureTable::GetTags() const
{
    return m_tags;
}

void FeatureTable::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FeatureTable::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

Owner FeatureTable::GetOwner() const
{
    return m_owner;
}

void FeatureTable::SetOwner(const Owner& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool FeatureTable::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string FeatureTable::GetWorkspaceId() const
{
    return m_workspaceId;
}

void FeatureTable::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool FeatureTable::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string FeatureTable::GetAssetGuid() const
{
    return m_assetGuid;
}

void FeatureTable::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool FeatureTable::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}


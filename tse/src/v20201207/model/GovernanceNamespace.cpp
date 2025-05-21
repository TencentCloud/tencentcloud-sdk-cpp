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

#include <tencentcloud/tse/v20201207/model/GovernanceNamespace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceNamespace::GovernanceNamespace() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_totalServiceCountHasBeenSet(false),
    m_totalHealthInstanceCountHasBeenSet(false),
    m_totalInstanceCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false),
    m_removeGroupIdsHasBeenSet(false),
    m_serviceExportToHasBeenSet(false),
    m_syncToGlobalRegistryHasBeenSet(false),
    m_metadatasHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceNamespace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalServiceCount") && !value["TotalServiceCount"].IsNull())
    {
        if (!value["TotalServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.TotalServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalServiceCount = value["TotalServiceCount"].GetInt64();
        m_totalServiceCountHasBeenSet = true;
    }

    if (value.HasMember("TotalHealthInstanceCount") && !value["TotalHealthInstanceCount"].IsNull())
    {
        if (!value["TotalHealthInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.TotalHealthInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalHealthInstanceCount = value["TotalHealthInstanceCount"].GetInt64();
        m_totalHealthInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("TotalInstanceCount") && !value["TotalInstanceCount"].IsNull())
    {
        if (!value["TotalInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.TotalInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInstanceCount = value["TotalInstanceCount"].GetInt64();
        m_totalInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.UserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIds.push_back((*itr).GetString());
        }
        m_userIdsHasBeenSet = true;
    }

    if (value.HasMember("GroupIds") && !value["GroupIds"].IsNull())
    {
        if (!value["GroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetString());
        }
        m_groupIdsHasBeenSet = true;
    }

    if (value.HasMember("RemoveUserIds") && !value["RemoveUserIds"].IsNull())
    {
        if (!value["RemoveUserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.RemoveUserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveUserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_removeUserIds.push_back((*itr).GetString());
        }
        m_removeUserIdsHasBeenSet = true;
    }

    if (value.HasMember("RemoveGroupIds") && !value["RemoveGroupIds"].IsNull())
    {
        if (!value["RemoveGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.RemoveGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_removeGroupIds.push_back((*itr).GetString());
        }
        m_removeGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("ServiceExportTo") && !value["ServiceExportTo"].IsNull())
    {
        if (!value["ServiceExportTo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.ServiceExportTo` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceExportTo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_serviceExportTo.push_back((*itr).GetString());
        }
        m_serviceExportToHasBeenSet = true;
    }

    if (value.HasMember("SyncToGlobalRegistry") && !value["SyncToGlobalRegistry"].IsNull())
    {
        if (!value["SyncToGlobalRegistry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.SyncToGlobalRegistry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncToGlobalRegistry = value["SyncToGlobalRegistry"].GetBool();
        m_syncToGlobalRegistryHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespace.Metadatas` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metadata item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadatas.push_back(item);
        }
        m_metadatasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceNamespace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalServiceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalServiceCount, allocator);
    }

    if (m_totalHealthInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalHealthInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalHealthInstanceCount, allocator);
    }

    if (m_totalInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalInstanceCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_removeUserIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveUserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removeUserIds.begin(); itr != m_removeUserIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_removeGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removeGroupIds.begin(); itr != m_removeGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceExportToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceExportTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceExportTo.begin(); itr != m_serviceExportTo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_syncToGlobalRegistryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncToGlobalRegistry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncToGlobalRegistry, allocator);
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GovernanceNamespace::GetName() const
{
    return m_name;
}

void GovernanceNamespace::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceNamespace::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceNamespace::GetComment() const
{
    return m_comment;
}

void GovernanceNamespace::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceNamespace::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string GovernanceNamespace::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceNamespace::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceNamespace::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceNamespace::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceNamespace::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceNamespace::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t GovernanceNamespace::GetTotalServiceCount() const
{
    return m_totalServiceCount;
}

void GovernanceNamespace::SetTotalServiceCount(const int64_t& _totalServiceCount)
{
    m_totalServiceCount = _totalServiceCount;
    m_totalServiceCountHasBeenSet = true;
}

bool GovernanceNamespace::TotalServiceCountHasBeenSet() const
{
    return m_totalServiceCountHasBeenSet;
}

int64_t GovernanceNamespace::GetTotalHealthInstanceCount() const
{
    return m_totalHealthInstanceCount;
}

void GovernanceNamespace::SetTotalHealthInstanceCount(const int64_t& _totalHealthInstanceCount)
{
    m_totalHealthInstanceCount = _totalHealthInstanceCount;
    m_totalHealthInstanceCountHasBeenSet = true;
}

bool GovernanceNamespace::TotalHealthInstanceCountHasBeenSet() const
{
    return m_totalHealthInstanceCountHasBeenSet;
}

int64_t GovernanceNamespace::GetTotalInstanceCount() const
{
    return m_totalInstanceCount;
}

void GovernanceNamespace::SetTotalInstanceCount(const int64_t& _totalInstanceCount)
{
    m_totalInstanceCount = _totalInstanceCount;
    m_totalInstanceCountHasBeenSet = true;
}

bool GovernanceNamespace::TotalInstanceCountHasBeenSet() const
{
    return m_totalInstanceCountHasBeenSet;
}

string GovernanceNamespace::GetId() const
{
    return m_id;
}

void GovernanceNamespace::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GovernanceNamespace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool GovernanceNamespace::GetEditable() const
{
    return m_editable;
}

void GovernanceNamespace::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool GovernanceNamespace::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

vector<string> GovernanceNamespace::GetUserIds() const
{
    return m_userIds;
}

void GovernanceNamespace::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool GovernanceNamespace::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> GovernanceNamespace::GetGroupIds() const
{
    return m_groupIds;
}

void GovernanceNamespace::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool GovernanceNamespace::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> GovernanceNamespace::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void GovernanceNamespace::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool GovernanceNamespace::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}

vector<string> GovernanceNamespace::GetRemoveGroupIds() const
{
    return m_removeGroupIds;
}

void GovernanceNamespace::SetRemoveGroupIds(const vector<string>& _removeGroupIds)
{
    m_removeGroupIds = _removeGroupIds;
    m_removeGroupIdsHasBeenSet = true;
}

bool GovernanceNamespace::RemoveGroupIdsHasBeenSet() const
{
    return m_removeGroupIdsHasBeenSet;
}

vector<string> GovernanceNamespace::GetServiceExportTo() const
{
    return m_serviceExportTo;
}

void GovernanceNamespace::SetServiceExportTo(const vector<string>& _serviceExportTo)
{
    m_serviceExportTo = _serviceExportTo;
    m_serviceExportToHasBeenSet = true;
}

bool GovernanceNamespace::ServiceExportToHasBeenSet() const
{
    return m_serviceExportToHasBeenSet;
}

bool GovernanceNamespace::GetSyncToGlobalRegistry() const
{
    return m_syncToGlobalRegistry;
}

void GovernanceNamespace::SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry)
{
    m_syncToGlobalRegistry = _syncToGlobalRegistry;
    m_syncToGlobalRegistryHasBeenSet = true;
}

bool GovernanceNamespace::SyncToGlobalRegistryHasBeenSet() const
{
    return m_syncToGlobalRegistryHasBeenSet;
}

vector<Metadata> GovernanceNamespace::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceNamespace::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceNamespace::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}


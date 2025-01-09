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

#include <tencentcloud/tse/v20201207/model/GovernanceNamespaceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceNamespaceInput::GovernanceNamespaceInput() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false),
    m_removeGroupIdsHasBeenSet(false),
    m_serviceExportToHasBeenSet(false),
    m_syncToGlobalRegistryHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceNamespaceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.UserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.GroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.RemoveUserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.RemoveGroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.ServiceExportTo` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceNamespaceInput.SyncToGlobalRegistry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncToGlobalRegistry = value["SyncToGlobalRegistry"].GetBool();
        m_syncToGlobalRegistryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceNamespaceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string GovernanceNamespaceInput::GetName() const
{
    return m_name;
}

void GovernanceNamespaceInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceNamespaceInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceNamespaceInput::GetComment() const
{
    return m_comment;
}

void GovernanceNamespaceInput::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceNamespaceInput::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<string> GovernanceNamespaceInput::GetUserIds() const
{
    return m_userIds;
}

void GovernanceNamespaceInput::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool GovernanceNamespaceInput::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> GovernanceNamespaceInput::GetGroupIds() const
{
    return m_groupIds;
}

void GovernanceNamespaceInput::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool GovernanceNamespaceInput::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> GovernanceNamespaceInput::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void GovernanceNamespaceInput::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool GovernanceNamespaceInput::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}

vector<string> GovernanceNamespaceInput::GetRemoveGroupIds() const
{
    return m_removeGroupIds;
}

void GovernanceNamespaceInput::SetRemoveGroupIds(const vector<string>& _removeGroupIds)
{
    m_removeGroupIds = _removeGroupIds;
    m_removeGroupIdsHasBeenSet = true;
}

bool GovernanceNamespaceInput::RemoveGroupIdsHasBeenSet() const
{
    return m_removeGroupIdsHasBeenSet;
}

vector<string> GovernanceNamespaceInput::GetServiceExportTo() const
{
    return m_serviceExportTo;
}

void GovernanceNamespaceInput::SetServiceExportTo(const vector<string>& _serviceExportTo)
{
    m_serviceExportTo = _serviceExportTo;
    m_serviceExportToHasBeenSet = true;
}

bool GovernanceNamespaceInput::ServiceExportToHasBeenSet() const
{
    return m_serviceExportToHasBeenSet;
}

bool GovernanceNamespaceInput::GetSyncToGlobalRegistry() const
{
    return m_syncToGlobalRegistry;
}

void GovernanceNamespaceInput::SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry)
{
    m_syncToGlobalRegistry = _syncToGlobalRegistry;
    m_syncToGlobalRegistryHasBeenSet = true;
}

bool GovernanceNamespaceInput::SyncToGlobalRegistryHasBeenSet() const
{
    return m_syncToGlobalRegistryHasBeenSet;
}


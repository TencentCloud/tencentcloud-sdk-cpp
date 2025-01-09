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

#include <tencentcloud/tse/v20201207/model/GovernanceServiceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceServiceInput::GovernanceServiceInput() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false),
    m_removeGroupIdsHasBeenSet(false),
    m_exportToHasBeenSet(false),
    m_syncToGlobalRegistryHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceServiceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Metadatas` is not array type"));

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

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.UserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.GroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.RemoveUserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.RemoveGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_removeGroupIds.push_back((*itr).GetString());
        }
        m_removeGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("ExportTo") && !value["ExportTo"].IsNull())
    {
        if (!value["ExportTo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.ExportTo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExportTo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exportTo.push_back((*itr).GetString());
        }
        m_exportToHasBeenSet = true;
    }

    if (value.HasMember("SyncToGlobalRegistry") && !value["SyncToGlobalRegistry"].IsNull())
    {
        if (!value["SyncToGlobalRegistry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceInput.SyncToGlobalRegistry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncToGlobalRegistry = value["SyncToGlobalRegistry"].GetBool();
        m_syncToGlobalRegistryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceServiceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
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

    if (m_exportToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exportTo.begin(); itr != m_exportTo.end(); ++itr)
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


string GovernanceServiceInput::GetName() const
{
    return m_name;
}

void GovernanceServiceInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceServiceInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceServiceInput::GetNamespace() const
{
    return m_namespace;
}

void GovernanceServiceInput::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceServiceInput::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GovernanceServiceInput::GetComment() const
{
    return m_comment;
}

void GovernanceServiceInput::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceServiceInput::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<Metadata> GovernanceServiceInput::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceServiceInput::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceServiceInput::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

string GovernanceServiceInput::GetDepartment() const
{
    return m_department;
}

void GovernanceServiceInput::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool GovernanceServiceInput::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string GovernanceServiceInput::GetBusiness() const
{
    return m_business;
}

void GovernanceServiceInput::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool GovernanceServiceInput::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<string> GovernanceServiceInput::GetUserIds() const
{
    return m_userIds;
}

void GovernanceServiceInput::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool GovernanceServiceInput::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> GovernanceServiceInput::GetGroupIds() const
{
    return m_groupIds;
}

void GovernanceServiceInput::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool GovernanceServiceInput::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> GovernanceServiceInput::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void GovernanceServiceInput::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool GovernanceServiceInput::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}

vector<string> GovernanceServiceInput::GetRemoveGroupIds() const
{
    return m_removeGroupIds;
}

void GovernanceServiceInput::SetRemoveGroupIds(const vector<string>& _removeGroupIds)
{
    m_removeGroupIds = _removeGroupIds;
    m_removeGroupIdsHasBeenSet = true;
}

bool GovernanceServiceInput::RemoveGroupIdsHasBeenSet() const
{
    return m_removeGroupIdsHasBeenSet;
}

vector<string> GovernanceServiceInput::GetExportTo() const
{
    return m_exportTo;
}

void GovernanceServiceInput::SetExportTo(const vector<string>& _exportTo)
{
    m_exportTo = _exportTo;
    m_exportToHasBeenSet = true;
}

bool GovernanceServiceInput::ExportToHasBeenSet() const
{
    return m_exportToHasBeenSet;
}

bool GovernanceServiceInput::GetSyncToGlobalRegistry() const
{
    return m_syncToGlobalRegistry;
}

void GovernanceServiceInput::SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry)
{
    m_syncToGlobalRegistry = _syncToGlobalRegistry;
    m_syncToGlobalRegistryHasBeenSet = true;
}

bool GovernanceServiceInput::SyncToGlobalRegistryHasBeenSet() const
{
    return m_syncToGlobalRegistryHasBeenSet;
}


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

#include <tencentcloud/tse/v20201207/model/GovernanceService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceService::GovernanceService() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_healthyInstanceCountHasBeenSet(false),
    m_totalInstanceCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false),
    m_removeGroupIdsHasBeenSet(false),
    m_exportToHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_syncToGlobalRegistryHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Metadatas` is not array type"));

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

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("HealthyInstanceCount") && !value["HealthyInstanceCount"].IsNull())
    {
        if (!value["HealthyInstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.HealthyInstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthyInstanceCount = value["HealthyInstanceCount"].GetUint64();
        m_healthyInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("TotalInstanceCount") && !value["TotalInstanceCount"].IsNull())
    {
        if (!value["TotalInstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.TotalInstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalInstanceCount = value["TotalInstanceCount"].GetUint64();
        m_totalInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceService.UserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceService.GroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceService.RemoveUserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceService.RemoveGroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GovernanceService.ExportTo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExportTo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_exportTo.push_back((*itr).GetString());
        }
        m_exportToHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.Revision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revision = string(value["Revision"].GetString());
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("SyncToGlobalRegistry") && !value["SyncToGlobalRegistry"].IsNull())
    {
        if (!value["SyncToGlobalRegistry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceService.SyncToGlobalRegistry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncToGlobalRegistry = value["SyncToGlobalRegistry"].GetBool();
        m_syncToGlobalRegistryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_healthyInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthyInstanceCount, allocator);
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

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revision.c_str(), allocator).Move(), allocator);
    }

    if (m_syncToGlobalRegistryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncToGlobalRegistry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncToGlobalRegistry, allocator);
    }

}


string GovernanceService::GetName() const
{
    return m_name;
}

void GovernanceService::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceService::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceService::GetNamespace() const
{
    return m_namespace;
}

void GovernanceService::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceService::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<Metadata> GovernanceService::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceService::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceService::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

string GovernanceService::GetComment() const
{
    return m_comment;
}

void GovernanceService::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceService::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string GovernanceService::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceService::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceService::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceService::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceService::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceService::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string GovernanceService::GetDepartment() const
{
    return m_department;
}

void GovernanceService::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool GovernanceService::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string GovernanceService::GetBusiness() const
{
    return m_business;
}

void GovernanceService::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool GovernanceService::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

uint64_t GovernanceService::GetHealthyInstanceCount() const
{
    return m_healthyInstanceCount;
}

void GovernanceService::SetHealthyInstanceCount(const uint64_t& _healthyInstanceCount)
{
    m_healthyInstanceCount = _healthyInstanceCount;
    m_healthyInstanceCountHasBeenSet = true;
}

bool GovernanceService::HealthyInstanceCountHasBeenSet() const
{
    return m_healthyInstanceCountHasBeenSet;
}

uint64_t GovernanceService::GetTotalInstanceCount() const
{
    return m_totalInstanceCount;
}

void GovernanceService::SetTotalInstanceCount(const uint64_t& _totalInstanceCount)
{
    m_totalInstanceCount = _totalInstanceCount;
    m_totalInstanceCountHasBeenSet = true;
}

bool GovernanceService::TotalInstanceCountHasBeenSet() const
{
    return m_totalInstanceCountHasBeenSet;
}

string GovernanceService::GetId() const
{
    return m_id;
}

void GovernanceService::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GovernanceService::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool GovernanceService::GetEditable() const
{
    return m_editable;
}

void GovernanceService::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool GovernanceService::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

vector<string> GovernanceService::GetUserIds() const
{
    return m_userIds;
}

void GovernanceService::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool GovernanceService::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> GovernanceService::GetGroupIds() const
{
    return m_groupIds;
}

void GovernanceService::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool GovernanceService::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> GovernanceService::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void GovernanceService::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool GovernanceService::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}

vector<string> GovernanceService::GetRemoveGroupIds() const
{
    return m_removeGroupIds;
}

void GovernanceService::SetRemoveGroupIds(const vector<string>& _removeGroupIds)
{
    m_removeGroupIds = _removeGroupIds;
    m_removeGroupIdsHasBeenSet = true;
}

bool GovernanceService::RemoveGroupIdsHasBeenSet() const
{
    return m_removeGroupIdsHasBeenSet;
}

vector<string> GovernanceService::GetExportTo() const
{
    return m_exportTo;
}

void GovernanceService::SetExportTo(const vector<string>& _exportTo)
{
    m_exportTo = _exportTo;
    m_exportToHasBeenSet = true;
}

bool GovernanceService::ExportToHasBeenSet() const
{
    return m_exportToHasBeenSet;
}

string GovernanceService::GetRevision() const
{
    return m_revision;
}

void GovernanceService::SetRevision(const string& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool GovernanceService::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

bool GovernanceService::GetSyncToGlobalRegistry() const
{
    return m_syncToGlobalRegistry;
}

void GovernanceService::SetSyncToGlobalRegistry(const bool& _syncToGlobalRegistry)
{
    m_syncToGlobalRegistry = _syncToGlobalRegistry;
    m_syncToGlobalRegistryHasBeenSet = true;
}

bool GovernanceService::SyncToGlobalRegistryHasBeenSet() const
{
    return m_syncToGlobalRegistryHasBeenSet;
}


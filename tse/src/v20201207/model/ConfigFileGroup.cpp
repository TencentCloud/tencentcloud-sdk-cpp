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

#include <tencentcloud/tse/v20201207/model/ConfigFileGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFileGroup::ConfigFileGroup() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_modifyByHasBeenSet(false),
    m_fileCountHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_removeUserIdsHasBeenSet(false),
    m_removeGroupIdsHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_configFileGroupTagsHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFileGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyBy") && !value["ModifyBy"].IsNull())
    {
        if (!value["ModifyBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.ModifyBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyBy = string(value["ModifyBy"].GetString());
        m_modifyByHasBeenSet = true;
    }

    if (value.HasMember("FileCount") && !value["FileCount"].IsNull())
    {
        if (!value["FileCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.FileCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileCount = value["FileCount"].GetUint64();
        m_fileCountHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.UserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.GroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.RemoveUserIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.RemoveGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoveGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_removeGroupIds.push_back((*itr).GetString());
        }
        m_removeGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("Business") && !value["Business"].IsNull())
    {
        if (!value["Business"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.Business` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_business = string(value["Business"].GetString());
        m_businessHasBeenSet = true;
    }

    if (value.HasMember("ConfigFileGroupTags") && !value["ConfigFileGroupTags"].IsNull())
    {
        if (!value["ConfigFileGroupTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigFileGroup.ConfigFileGroupTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigFileGroupTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigFileGroupTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configFileGroupTags.push_back(item);
        }
        m_configFileGroupTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigFileGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyBy.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileCount, allocator);
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

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
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

    if (m_configFileGroupTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileGroupTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configFileGroupTags.begin(); itr != m_configFileGroupTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ConfigFileGroup::GetId() const
{
    return m_id;
}

void ConfigFileGroup::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ConfigFileGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ConfigFileGroup::GetName() const
{
    return m_name;
}

void ConfigFileGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigFileGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigFileGroup::GetNamespace() const
{
    return m_namespace;
}

void ConfigFileGroup::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ConfigFileGroup::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ConfigFileGroup::GetComment() const
{
    return m_comment;
}

void ConfigFileGroup::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ConfigFileGroup::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ConfigFileGroup::GetCreateTime() const
{
    return m_createTime;
}

void ConfigFileGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigFileGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigFileGroup::GetCreateBy() const
{
    return m_createBy;
}

void ConfigFileGroup::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool ConfigFileGroup::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string ConfigFileGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void ConfigFileGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ConfigFileGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ConfigFileGroup::GetModifyBy() const
{
    return m_modifyBy;
}

void ConfigFileGroup::SetModifyBy(const string& _modifyBy)
{
    m_modifyBy = _modifyBy;
    m_modifyByHasBeenSet = true;
}

bool ConfigFileGroup::ModifyByHasBeenSet() const
{
    return m_modifyByHasBeenSet;
}

uint64_t ConfigFileGroup::GetFileCount() const
{
    return m_fileCount;
}

void ConfigFileGroup::SetFileCount(const uint64_t& _fileCount)
{
    m_fileCount = _fileCount;
    m_fileCountHasBeenSet = true;
}

bool ConfigFileGroup::FileCountHasBeenSet() const
{
    return m_fileCountHasBeenSet;
}

vector<string> ConfigFileGroup::GetUserIds() const
{
    return m_userIds;
}

void ConfigFileGroup::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool ConfigFileGroup::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

vector<string> ConfigFileGroup::GetGroupIds() const
{
    return m_groupIds;
}

void ConfigFileGroup::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool ConfigFileGroup::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<string> ConfigFileGroup::GetRemoveUserIds() const
{
    return m_removeUserIds;
}

void ConfigFileGroup::SetRemoveUserIds(const vector<string>& _removeUserIds)
{
    m_removeUserIds = _removeUserIds;
    m_removeUserIdsHasBeenSet = true;
}

bool ConfigFileGroup::RemoveUserIdsHasBeenSet() const
{
    return m_removeUserIdsHasBeenSet;
}

vector<string> ConfigFileGroup::GetRemoveGroupIds() const
{
    return m_removeGroupIds;
}

void ConfigFileGroup::SetRemoveGroupIds(const vector<string>& _removeGroupIds)
{
    m_removeGroupIds = _removeGroupIds;
    m_removeGroupIdsHasBeenSet = true;
}

bool ConfigFileGroup::RemoveGroupIdsHasBeenSet() const
{
    return m_removeGroupIdsHasBeenSet;
}

bool ConfigFileGroup::GetEditable() const
{
    return m_editable;
}

void ConfigFileGroup::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool ConfigFileGroup::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

string ConfigFileGroup::GetOwner() const
{
    return m_owner;
}

void ConfigFileGroup::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ConfigFileGroup::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string ConfigFileGroup::GetDepartment() const
{
    return m_department;
}

void ConfigFileGroup::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool ConfigFileGroup::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string ConfigFileGroup::GetBusiness() const
{
    return m_business;
}

void ConfigFileGroup::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ConfigFileGroup::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<ConfigFileGroupTag> ConfigFileGroup::GetConfigFileGroupTags() const
{
    return m_configFileGroupTags;
}

void ConfigFileGroup::SetConfigFileGroupTags(const vector<ConfigFileGroupTag>& _configFileGroupTags)
{
    m_configFileGroupTags = _configFileGroupTags;
    m_configFileGroupTagsHasBeenSet = true;
}

bool ConfigFileGroup::ConfigFileGroupTagsHasBeenSet() const
{
    return m_configFileGroupTagsHasBeenSet;
}


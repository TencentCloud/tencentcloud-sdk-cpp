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

#include <tencentcloud/dsgc/v20190723/model/ComplianceGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ComplianceGroupDetail::ComplianceGroupDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceGroupTypeHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_levelGroupNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_isAliasHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ComplianceGroupType") && !value["ComplianceGroupType"].IsNull())
    {
        if (!value["ComplianceGroupType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.ComplianceGroupType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceGroupType = value["ComplianceGroupType"].GetInt64();
        m_complianceGroupTypeHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupId") && !value["LevelGroupId"].IsNull())
    {
        if (!value["LevelGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = value["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupName") && !value["LevelGroupName"].IsNull())
    {
        if (!value["LevelGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.LevelGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupName = string(value["LevelGroupName"].GetString());
        m_levelGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAlias") && !value["IsAlias"].IsNull())
    {
        if (!value["IsAlias"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceGroupDetail.IsAlias` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAlias = value["IsAlias"].GetBool();
        m_isAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceGroupType, allocator);
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelGroupId, allocator);
    }

    if (m_levelGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelGroupName.c_str(), allocator).Move(), allocator);
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

    if (m_isAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlias, allocator);
    }

}


uint64_t ComplianceGroupDetail::GetId() const
{
    return m_id;
}

void ComplianceGroupDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ComplianceGroupDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ComplianceGroupDetail::GetName() const
{
    return m_name;
}

void ComplianceGroupDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceGroupDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ComplianceGroupDetail::GetDescription() const
{
    return m_description;
}

void ComplianceGroupDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComplianceGroupDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ComplianceGroupDetail::GetComplianceGroupType() const
{
    return m_complianceGroupType;
}

void ComplianceGroupDetail::SetComplianceGroupType(const int64_t& _complianceGroupType)
{
    m_complianceGroupType = _complianceGroupType;
    m_complianceGroupTypeHasBeenSet = true;
}

bool ComplianceGroupDetail::ComplianceGroupTypeHasBeenSet() const
{
    return m_complianceGroupTypeHasBeenSet;
}

uint64_t ComplianceGroupDetail::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void ComplianceGroupDetail::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool ComplianceGroupDetail::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

string ComplianceGroupDetail::GetLevelGroupName() const
{
    return m_levelGroupName;
}

void ComplianceGroupDetail::SetLevelGroupName(const string& _levelGroupName)
{
    m_levelGroupName = _levelGroupName;
    m_levelGroupNameHasBeenSet = true;
}

bool ComplianceGroupDetail::LevelGroupNameHasBeenSet() const
{
    return m_levelGroupNameHasBeenSet;
}

string ComplianceGroupDetail::GetCreateTime() const
{
    return m_createTime;
}

void ComplianceGroupDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ComplianceGroupDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ComplianceGroupDetail::GetModifyTime() const
{
    return m_modifyTime;
}

void ComplianceGroupDetail::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ComplianceGroupDetail::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

bool ComplianceGroupDetail::GetIsAlias() const
{
    return m_isAlias;
}

void ComplianceGroupDetail::SetIsAlias(const bool& _isAlias)
{
    m_isAlias = _isAlias;
    m_isAliasHasBeenSet = true;
}

bool ComplianceGroupDetail::IsAliasHasBeenSet() const
{
    return m_isAliasHasBeenSet;
}


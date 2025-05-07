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

#include <tencentcloud/dlc/v20210125/model/UserRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UserRole::UserRole() :
    m_roleIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_cosPermissionListHasBeenSet(false),
    m_permissionJsonHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

CoreInternalOutcome UserRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Arn") && !value["Arn"].IsNull())
    {
        if (!value["Arn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.Arn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arn = string(value["Arn"].GetString());
        m_arnHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CosPermissionList") && !value["CosPermissionList"].IsNull())
    {
        if (!value["CosPermissionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserRole.CosPermissionList` is not array type"));

        const rapidjson::Value &tmpValue = value["CosPermissionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosPermission item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cosPermissionList.push_back(item);
        }
        m_cosPermissionListHasBeenSet = true;
    }

    if (value.HasMember("PermissionJson") && !value["PermissionJson"].IsNull())
    {
        if (!value["PermissionJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.PermissionJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissionJson = string(value["PermissionJson"].GetString());
        m_permissionJsonHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRole.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_arnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPermissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPermissionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cosPermissionList.begin(); itr != m_cosPermissionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_permissionJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissionJson.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

}


int64_t UserRole::GetRoleId() const
{
    return m_roleId;
}

void UserRole::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool UserRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string UserRole::GetAppId() const
{
    return m_appId;
}

void UserRole::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UserRole::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UserRole::GetUin() const
{
    return m_uin;
}

void UserRole::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UserRole::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UserRole::GetArn() const
{
    return m_arn;
}

void UserRole::SetArn(const string& _arn)
{
    m_arn = _arn;
    m_arnHasBeenSet = true;
}

bool UserRole::ArnHasBeenSet() const
{
    return m_arnHasBeenSet;
}

int64_t UserRole::GetModifyTime() const
{
    return m_modifyTime;
}

void UserRole::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool UserRole::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string UserRole::GetDesc() const
{
    return m_desc;
}

void UserRole::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool UserRole::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string UserRole::GetRoleName() const
{
    return m_roleName;
}

void UserRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool UserRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string UserRole::GetCreator() const
{
    return m_creator;
}

void UserRole::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool UserRole::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

vector<CosPermission> UserRole::GetCosPermissionList() const
{
    return m_cosPermissionList;
}

void UserRole::SetCosPermissionList(const vector<CosPermission>& _cosPermissionList)
{
    m_cosPermissionList = _cosPermissionList;
    m_cosPermissionListHasBeenSet = true;
}

bool UserRole::CosPermissionListHasBeenSet() const
{
    return m_cosPermissionListHasBeenSet;
}

string UserRole::GetPermissionJson() const
{
    return m_permissionJson;
}

void UserRole::SetPermissionJson(const string& _permissionJson)
{
    m_permissionJson = _permissionJson;
    m_permissionJsonHasBeenSet = true;
}

bool UserRole::PermissionJsonHasBeenSet() const
{
    return m_permissionJsonHasBeenSet;
}

int64_t UserRole::GetIsDefault() const
{
    return m_isDefault;
}

void UserRole::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool UserRole::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}


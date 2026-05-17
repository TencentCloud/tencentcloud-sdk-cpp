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

#include <tencentcloud/csip/v20221121/model/CosRoleAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRoleAccessInfo::CosRoleAccessInfo() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleDescriptionHasBeenSet(false),
    m_permissionCountHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CosRoleAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRoleAccessInfo.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRoleAccessInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleDescription") && !value["RoleDescription"].IsNull())
    {
        if (!value["RoleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRoleAccessInfo.RoleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleDescription = string(value["RoleDescription"].GetString());
        m_roleDescriptionHasBeenSet = true;
    }

    if (value.HasMember("PermissionCount") && !value["PermissionCount"].IsNull())
    {
        if (!value["PermissionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRoleAccessInfo.PermissionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_permissionCount = value["PermissionCount"].GetUint64();
        m_permissionCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRoleAccessInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRoleAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permissionCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string CosRoleAccessInfo::GetRoleId() const
{
    return m_roleId;
}

void CosRoleAccessInfo::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool CosRoleAccessInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string CosRoleAccessInfo::GetRoleName() const
{
    return m_roleName;
}

void CosRoleAccessInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CosRoleAccessInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string CosRoleAccessInfo::GetRoleDescription() const
{
    return m_roleDescription;
}

void CosRoleAccessInfo::SetRoleDescription(const string& _roleDescription)
{
    m_roleDescription = _roleDescription;
    m_roleDescriptionHasBeenSet = true;
}

bool CosRoleAccessInfo::RoleDescriptionHasBeenSet() const
{
    return m_roleDescriptionHasBeenSet;
}

uint64_t CosRoleAccessInfo::GetPermissionCount() const
{
    return m_permissionCount;
}

void CosRoleAccessInfo::SetPermissionCount(const uint64_t& _permissionCount)
{
    m_permissionCount = _permissionCount;
    m_permissionCountHasBeenSet = true;
}

bool CosRoleAccessInfo::PermissionCountHasBeenSet() const
{
    return m_permissionCountHasBeenSet;
}

uint64_t CosRoleAccessInfo::GetCreateTime() const
{
    return m_createTime;
}

void CosRoleAccessInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CosRoleAccessInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


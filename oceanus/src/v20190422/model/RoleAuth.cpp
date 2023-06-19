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

#include <tencentcloud/oceanus/v20190422/model/RoleAuth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

RoleAuth::RoleAuth() :
    m_appIdHasBeenSet(false),
    m_workSpaceSerialIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_authSubAccountUinHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

CoreInternalOutcome RoleAuth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceSerialId") && !value["WorkSpaceSerialId"].IsNull())
    {
        if (!value["WorkSpaceSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.WorkSpaceSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceSerialId = string(value["WorkSpaceSerialId"].GetString());
        m_workSpaceSerialIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("AuthSubAccountUin") && !value["AuthSubAccountUin"].IsNull())
    {
        if (!value["AuthSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.AuthSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authSubAccountUin = string(value["AuthSubAccountUin"].GetString());
        m_authSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.Permission` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permission = value["Permission"].GetInt64();
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceId") && !value["WorkSpaceId"].IsNull())
    {
        if (!value["WorkSpaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.WorkSpaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceId = value["WorkSpaceId"].GetInt64();
        m_workSpaceIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleAuth.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleAuth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_workSpaceSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_authSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permission, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workSpaceId, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

}


int64_t RoleAuth::GetAppId() const
{
    return m_appId;
}

void RoleAuth::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RoleAuth::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RoleAuth::GetWorkSpaceSerialId() const
{
    return m_workSpaceSerialId;
}

void RoleAuth::SetWorkSpaceSerialId(const string& _workSpaceSerialId)
{
    m_workSpaceSerialId = _workSpaceSerialId;
    m_workSpaceSerialIdHasBeenSet = true;
}

bool RoleAuth::WorkSpaceSerialIdHasBeenSet() const
{
    return m_workSpaceSerialIdHasBeenSet;
}

string RoleAuth::GetOwnerUin() const
{
    return m_ownerUin;
}

void RoleAuth::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool RoleAuth::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string RoleAuth::GetCreatorUin() const
{
    return m_creatorUin;
}

void RoleAuth::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool RoleAuth::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string RoleAuth::GetAuthSubAccountUin() const
{
    return m_authSubAccountUin;
}

void RoleAuth::SetAuthSubAccountUin(const string& _authSubAccountUin)
{
    m_authSubAccountUin = _authSubAccountUin;
    m_authSubAccountUinHasBeenSet = true;
}

bool RoleAuth::AuthSubAccountUinHasBeenSet() const
{
    return m_authSubAccountUinHasBeenSet;
}

int64_t RoleAuth::GetPermission() const
{
    return m_permission;
}

void RoleAuth::SetPermission(const int64_t& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool RoleAuth::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string RoleAuth::GetCreateTime() const
{
    return m_createTime;
}

void RoleAuth::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleAuth::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoleAuth::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleAuth::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleAuth::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RoleAuth::GetStatus() const
{
    return m_status;
}

void RoleAuth::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RoleAuth::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RoleAuth::GetId() const
{
    return m_id;
}

void RoleAuth::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RoleAuth::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t RoleAuth::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void RoleAuth::SetWorkSpaceId(const int64_t& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool RoleAuth::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string RoleAuth::GetRoleName() const
{
    return m_roleName;
}

void RoleAuth::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleAuth::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}


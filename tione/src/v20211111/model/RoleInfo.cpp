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

#include <tencentcloud/tione/v20211111/model/RoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

RoleInfo::RoleInfo() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userCountHasBeenSet(false)
{
}

CoreInternalOutcome RoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.UserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetInt64();
        m_userCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

}


string RoleInfo::GetRoleId() const
{
    return m_roleId;
}

void RoleInfo::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool RoleInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string RoleInfo::GetRoleName() const
{
    return m_roleName;
}

void RoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleInfo::GetRoleType() const
{
    return m_roleType;
}

void RoleInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RoleInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

string RoleInfo::GetDescription() const
{
    return m_description;
}

void RoleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RoleInfo::GetCreateTime() const
{
    return m_createTime;
}

void RoleInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t RoleInfo::GetUserCount() const
{
    return m_userCount;
}

void RoleInfo::SetUserCount(const int64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool RoleInfo::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}


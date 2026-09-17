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

#include <tencentcloud/rce/v20260130/model/Role.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Role::Role() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleSignatureHasBeenSet(false),
    m_roleLevelHasBeenSet(false),
    m_roleCeHasBeenSet(false),
    m_roleCreateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Role::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleSignature") && !value["RoleSignature"].IsNull())
    {
        if (!value["RoleSignature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleSignature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleSignature = string(value["RoleSignature"].GetString());
        m_roleSignatureHasBeenSet = true;
    }

    if (value.HasMember("RoleLevel") && !value["RoleLevel"].IsNull())
    {
        if (!value["RoleLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleLevel = string(value["RoleLevel"].GetString());
        m_roleLevelHasBeenSet = true;
    }

    if (value.HasMember("RoleCe") && !value["RoleCe"].IsNull())
    {
        if (!value["RoleCe"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleCe` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_roleCe = value["RoleCe"].GetDouble();
        m_roleCeHasBeenSet = true;
    }

    if (value.HasMember("RoleCreateTime") && !value["RoleCreateTime"].IsNull())
    {
        if (!value["RoleCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role.RoleCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleCreateTime = string(value["RoleCreateTime"].GetString());
        m_roleCreateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Role::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_roleSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleSignature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_roleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_roleCeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleCe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleCe, allocator);
    }

    if (m_roleCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleCreateTime.c_str(), allocator).Move(), allocator);
    }

}


string Role::GetRoleId() const
{
    return m_roleId;
}

void Role::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool Role::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string Role::GetRoleName() const
{
    return m_roleName;
}

void Role::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool Role::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string Role::GetRoleSignature() const
{
    return m_roleSignature;
}

void Role::SetRoleSignature(const string& _roleSignature)
{
    m_roleSignature = _roleSignature;
    m_roleSignatureHasBeenSet = true;
}

bool Role::RoleSignatureHasBeenSet() const
{
    return m_roleSignatureHasBeenSet;
}

string Role::GetRoleLevel() const
{
    return m_roleLevel;
}

void Role::SetRoleLevel(const string& _roleLevel)
{
    m_roleLevel = _roleLevel;
    m_roleLevelHasBeenSet = true;
}

bool Role::RoleLevelHasBeenSet() const
{
    return m_roleLevelHasBeenSet;
}

double Role::GetRoleCe() const
{
    return m_roleCe;
}

void Role::SetRoleCe(const double& _roleCe)
{
    m_roleCe = _roleCe;
    m_roleCeHasBeenSet = true;
}

bool Role::RoleCeHasBeenSet() const
{
    return m_roleCeHasBeenSet;
}

string Role::GetRoleCreateTime() const
{
    return m_roleCreateTime;
}

void Role::SetRoleCreateTime(const string& _roleCreateTime)
{
    m_roleCreateTime = _roleCreateTime;
    m_roleCreateTimeHasBeenSet = true;
}

bool Role::RoleCreateTimeHasBeenSet() const
{
    return m_roleCreateTimeHasBeenSet;
}


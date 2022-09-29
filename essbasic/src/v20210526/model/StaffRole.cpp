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

#include <tencentcloud/essbasic/v20210526/model/StaffRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

StaffRole::StaffRole() :
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

CoreInternalOutcome StaffRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffRole.RoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = string(value["RoleId"].GetString());
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StaffRole.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StaffRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string StaffRole::GetRoleId() const
{
    return m_roleId;
}

void StaffRole::SetRoleId(const string& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool StaffRole::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

string StaffRole::GetRoleName() const
{
    return m_roleName;
}

void StaffRole::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool StaffRole::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}


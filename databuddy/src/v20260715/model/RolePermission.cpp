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

#include <tencentcloud/databuddy/v20260715/model/RolePermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

RolePermission::RolePermission() :
    m_moduleIdHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

CoreInternalOutcome RolePermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModuleId") && !value["ModuleId"].IsNull())
    {
        if (!value["ModuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePermission.ModuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleId = string(value["ModuleId"].GetString());
        m_moduleIdHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RolePermission.Permissions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissions = string(value["Permissions"].GetString());
        m_permissionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RolePermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissions.c_str(), allocator).Move(), allocator);
    }

}


string RolePermission::GetModuleId() const
{
    return m_moduleId;
}

void RolePermission::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool RolePermission::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

string RolePermission::GetPermissions() const
{
    return m_permissions;
}

void RolePermission::SetPermissions(const string& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool RolePermission::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}


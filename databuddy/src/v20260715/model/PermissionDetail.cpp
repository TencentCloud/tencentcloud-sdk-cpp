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

#include <tencentcloud/databuddy/v20260715/model/PermissionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

PermissionDetail::PermissionDetail() :
    m_permissionsHasBeenSet(false),
    m_catalogWorkspacePrivilegeHasBeenSet(false),
    m_denyPrivilegeListHasBeenSet(false)
{
}

CoreInternalOutcome PermissionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionDetail.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissions.push_back((*itr).GetString());
        }
        m_permissionsHasBeenSet = true;
    }

    if (value.HasMember("CatalogWorkspacePrivilege") && !value["CatalogWorkspacePrivilege"].IsNull())
    {
        if (!value["CatalogWorkspacePrivilege"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionDetail.CatalogWorkspacePrivilege` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogWorkspacePrivilege = string(value["CatalogWorkspacePrivilege"].GetString());
        m_catalogWorkspacePrivilegeHasBeenSet = true;
    }

    if (value.HasMember("DenyPrivilegeList") && !value["DenyPrivilegeList"].IsNull())
    {
        if (!value["DenyPrivilegeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PermissionDetail.DenyPrivilegeList` is not array type"));

        const rapidjson::Value &tmpValue = value["DenyPrivilegeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_denyPrivilegeList.push_back((*itr).GetString());
        }
        m_denyPrivilegeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_catalogWorkspacePrivilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogWorkspacePrivilege";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogWorkspacePrivilege.c_str(), allocator).Move(), allocator);
    }

    if (m_denyPrivilegeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyPrivilegeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_denyPrivilegeList.begin(); itr != m_denyPrivilegeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> PermissionDetail::GetPermissions() const
{
    return m_permissions;
}

void PermissionDetail::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool PermissionDetail::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string PermissionDetail::GetCatalogWorkspacePrivilege() const
{
    return m_catalogWorkspacePrivilege;
}

void PermissionDetail::SetCatalogWorkspacePrivilege(const string& _catalogWorkspacePrivilege)
{
    m_catalogWorkspacePrivilege = _catalogWorkspacePrivilege;
    m_catalogWorkspacePrivilegeHasBeenSet = true;
}

bool PermissionDetail::CatalogWorkspacePrivilegeHasBeenSet() const
{
    return m_catalogWorkspacePrivilegeHasBeenSet;
}

vector<string> PermissionDetail::GetDenyPrivilegeList() const
{
    return m_denyPrivilegeList;
}

void PermissionDetail::SetDenyPrivilegeList(const vector<string>& _denyPrivilegeList)
{
    m_denyPrivilegeList = _denyPrivilegeList;
    m_denyPrivilegeListHasBeenSet = true;
}

bool PermissionDetail::DenyPrivilegeListHasBeenSet() const
{
    return m_denyPrivilegeListHasBeenSet;
}


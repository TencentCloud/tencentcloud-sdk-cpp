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

#include <tencentcloud/tke/v20180525/model/PermissionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PermissionItem::PermissionItem() :
    m_clusterIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_isCustomHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome PermissionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionItem.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionItem.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("IsCustom") && !value["IsCustom"].IsNull())
    {
        if (!value["IsCustom"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionItem.IsCustom` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustom = value["IsCustom"].GetBool();
        m_isCustomHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_isCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustom, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

}


string PermissionItem::GetClusterId() const
{
    return m_clusterId;
}

void PermissionItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool PermissionItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string PermissionItem::GetRoleName() const
{
    return m_roleName;
}

void PermissionItem::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool PermissionItem::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string PermissionItem::GetRoleType() const
{
    return m_roleType;
}

void PermissionItem::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool PermissionItem::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

bool PermissionItem::GetIsCustom() const
{
    return m_isCustom;
}

void PermissionItem::SetIsCustom(const bool& _isCustom)
{
    m_isCustom = _isCustom;
    m_isCustomHasBeenSet = true;
}

bool PermissionItem::IsCustomHasBeenSet() const
{
    return m_isCustomHasBeenSet;
}

string PermissionItem::GetNamespace() const
{
    return m_namespace;
}

void PermissionItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool PermissionItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


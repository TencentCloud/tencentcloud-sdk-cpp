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

#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQEnvironmentRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRocketMQEnvironmentRoleRequest::ModifyRocketMQEnvironmentRoleRequest() :
    m_environmentIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_detailedPermsHasBeenSet(false)
{
}

string ModifyRocketMQEnvironmentRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailedPermsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailedPerms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailedPerms.begin(); itr != m_detailedPerms.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRocketMQEnvironmentRoleRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyRocketMQEnvironmentRoleRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyRocketMQEnvironmentRoleRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ModifyRocketMQEnvironmentRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void ModifyRocketMQEnvironmentRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool ModifyRocketMQEnvironmentRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

vector<string> ModifyRocketMQEnvironmentRoleRequest::GetPermissions() const
{
    return m_permissions;
}

void ModifyRocketMQEnvironmentRoleRequest::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool ModifyRocketMQEnvironmentRoleRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

string ModifyRocketMQEnvironmentRoleRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyRocketMQEnvironmentRoleRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyRocketMQEnvironmentRoleRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<DetailedRolePerm> ModifyRocketMQEnvironmentRoleRequest::GetDetailedPerms() const
{
    return m_detailedPerms;
}

void ModifyRocketMQEnvironmentRoleRequest::SetDetailedPerms(const vector<DetailedRolePerm>& _detailedPerms)
{
    m_detailedPerms = _detailedPerms;
    m_detailedPermsHasBeenSet = true;
}

bool ModifyRocketMQEnvironmentRoleRequest::DetailedPermsHasBeenSet() const
{
    return m_detailedPermsHasBeenSet;
}



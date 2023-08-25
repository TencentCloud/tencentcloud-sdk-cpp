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

#include <tencentcloud/tdmq/v20200217/model/ModifyRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRoleRequest::ModifyRoleRequest() :
    m_roleNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_environmentRoleSetsHasBeenSet(false),
    m_unbindAllEnvironmentHasBeenSet(false)
{
}

string ModifyRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentRoleSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentRoleSets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environmentRoleSets.begin(); itr != m_environmentRoleSets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_unbindAllEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnbindAllEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unbindAllEnvironment, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void ModifyRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool ModifyRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string ModifyRoleRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyRoleRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyRoleRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyRoleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRoleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRoleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<EnvironmentRoleSet> ModifyRoleRequest::GetEnvironmentRoleSets() const
{
    return m_environmentRoleSets;
}

void ModifyRoleRequest::SetEnvironmentRoleSets(const vector<EnvironmentRoleSet>& _environmentRoleSets)
{
    m_environmentRoleSets = _environmentRoleSets;
    m_environmentRoleSetsHasBeenSet = true;
}

bool ModifyRoleRequest::EnvironmentRoleSetsHasBeenSet() const
{
    return m_environmentRoleSetsHasBeenSet;
}

bool ModifyRoleRequest::GetUnbindAllEnvironment() const
{
    return m_unbindAllEnvironment;
}

void ModifyRoleRequest::SetUnbindAllEnvironment(const bool& _unbindAllEnvironment)
{
    m_unbindAllEnvironment = _unbindAllEnvironment;
    m_unbindAllEnvironmentHasBeenSet = true;
}

bool ModifyRoleRequest::UnbindAllEnvironmentHasBeenSet() const
{
    return m_unbindAllEnvironmentHasBeenSet;
}



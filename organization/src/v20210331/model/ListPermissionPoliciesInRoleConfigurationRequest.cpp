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

#include <tencentcloud/organization/v20210331/model/ListPermissionPoliciesInRoleConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListPermissionPoliciesInRoleConfigurationRequest::ListPermissionPoliciesInRoleConfigurationRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_rolePolicyTypeHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string ListPermissionPoliciesInRoleConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_rolePolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolePolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rolePolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListPermissionPoliciesInRoleConfigurationRequest::GetZoneId() const
{
    return m_zoneId;
}

void ListPermissionPoliciesInRoleConfigurationRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ListPermissionPoliciesInRoleConfigurationRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ListPermissionPoliciesInRoleConfigurationRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void ListPermissionPoliciesInRoleConfigurationRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool ListPermissionPoliciesInRoleConfigurationRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string ListPermissionPoliciesInRoleConfigurationRequest::GetRolePolicyType() const
{
    return m_rolePolicyType;
}

void ListPermissionPoliciesInRoleConfigurationRequest::SetRolePolicyType(const string& _rolePolicyType)
{
    m_rolePolicyType = _rolePolicyType;
    m_rolePolicyTypeHasBeenSet = true;
}

bool ListPermissionPoliciesInRoleConfigurationRequest::RolePolicyTypeHasBeenSet() const
{
    return m_rolePolicyTypeHasBeenSet;
}

string ListPermissionPoliciesInRoleConfigurationRequest::GetFilter() const
{
    return m_filter;
}

void ListPermissionPoliciesInRoleConfigurationRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ListPermissionPoliciesInRoleConfigurationRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}



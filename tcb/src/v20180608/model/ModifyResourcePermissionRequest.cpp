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

#include <tencentcloud/tcb/v20180608/model/ModifyResourcePermissionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyResourcePermissionRequest::ModifyResourcePermissionRequest() :
    m_envIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_securityRuleHasBeenSet(false)
{
}

string ModifyResourcePermissionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_securityRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityRule.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourcePermissionRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyResourcePermissionRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyResourcePermissionRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ModifyResourcePermissionRequest::GetResourceType() const
{
    return m_resourceType;
}

void ModifyResourcePermissionRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ModifyResourcePermissionRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ModifyResourcePermissionRequest::GetPermission() const
{
    return m_permission;
}

void ModifyResourcePermissionRequest::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ModifyResourcePermissionRequest::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string ModifyResourcePermissionRequest::GetResource() const
{
    return m_resource;
}

void ModifyResourcePermissionRequest::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ModifyResourcePermissionRequest::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ModifyResourcePermissionRequest::GetSecurityRule() const
{
    return m_securityRule;
}

void ModifyResourcePermissionRequest::SetSecurityRule(const string& _securityRule)
{
    m_securityRule = _securityRule;
    m_securityRuleHasBeenSet = true;
}

bool ModifyResourcePermissionRequest::SecurityRuleHasBeenSet() const
{
    return m_securityRuleHasBeenSet;
}



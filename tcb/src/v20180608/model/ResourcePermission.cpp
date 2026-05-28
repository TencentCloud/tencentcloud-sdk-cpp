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

#include <tencentcloud/tcb/v20180608/model/ResourcePermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ResourcePermission::ResourcePermission() :
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_securityRuleHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("SecurityRule") && !value["SecurityRule"].IsNull())
    {
        if (!value["SecurityRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePermission.SecurityRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityRule = string(value["SecurityRule"].GetString());
        m_securityRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
    }

    if (m_securityRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityRule.c_str(), allocator).Move(), allocator);
    }

}


string ResourcePermission::GetResourceType() const
{
    return m_resourceType;
}

void ResourcePermission::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourcePermission::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourcePermission::GetResource() const
{
    return m_resource;
}

void ResourcePermission::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourcePermission::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ResourcePermission::GetPermission() const
{
    return m_permission;
}

void ResourcePermission::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool ResourcePermission::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string ResourcePermission::GetSecurityRule() const
{
    return m_securityRule;
}

void ResourcePermission::SetSecurityRule(const string& _securityRule)
{
    m_securityRule = _securityRule;
    m_securityRuleHasBeenSet = true;
}

bool ResourcePermission::SecurityRuleHasBeenSet() const
{
    return m_securityRuleHasBeenSet;
}


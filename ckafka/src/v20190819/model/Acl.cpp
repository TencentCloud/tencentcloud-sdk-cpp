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

#include <tencentcloud/ckafka/v20190819/model/Acl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Acl::Acl() :
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_permissionTypeHasBeenSet(false)
{
}

CoreInternalOutcome Acl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.ResourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetInt64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Principal") && !value["Principal"].IsNull())
    {
        if (!value["Principal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Principal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principal = string(value["Principal"].GetString());
        m_principalHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.Operation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operation = value["Operation"].GetInt64();
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("PermissionType") && !value["PermissionType"].IsNull())
    {
        if (!value["PermissionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Acl.PermissionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_permissionType = value["PermissionType"].GetInt64();
        m_permissionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Acl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_principalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Principal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principal.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operation, allocator);
    }

    if (m_permissionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permissionType, allocator);
    }

}


int64_t Acl::GetResourceType() const
{
    return m_resourceType;
}

void Acl::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool Acl::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string Acl::GetResourceName() const
{
    return m_resourceName;
}

void Acl::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool Acl::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string Acl::GetPrincipal() const
{
    return m_principal;
}

void Acl::SetPrincipal(const string& _principal)
{
    m_principal = _principal;
    m_principalHasBeenSet = true;
}

bool Acl::PrincipalHasBeenSet() const
{
    return m_principalHasBeenSet;
}

string Acl::GetHost() const
{
    return m_host;
}

void Acl::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool Acl::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t Acl::GetOperation() const
{
    return m_operation;
}

void Acl::SetOperation(const int64_t& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool Acl::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

int64_t Acl::GetPermissionType() const
{
    return m_permissionType;
}

void Acl::SetPermissionType(const int64_t& _permissionType)
{
    m_permissionType = _permissionType;
    m_permissionTypeHasBeenSet = true;
}

bool Acl::PermissionTypeHasBeenSet() const
{
    return m_permissionTypeHasBeenSet;
}


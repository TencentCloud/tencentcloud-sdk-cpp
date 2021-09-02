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

#include <tencentcloud/ckafka/v20190819/model/CreateAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateAclRequest::CreateAclRequest() :
    m_instanceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_permissionTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceNameListHasBeenSet(false)
{
}

string CreateAclRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operation, allocator);
    }

    if (m_permissionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_permissionType, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_principalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Principal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_principal.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceNameList.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAclRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAclRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAclRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateAclRequest::GetResourceType() const
{
    return m_resourceType;
}

void CreateAclRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool CreateAclRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

int64_t CreateAclRequest::GetOperation() const
{
    return m_operation;
}

void CreateAclRequest::SetOperation(const int64_t& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateAclRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

int64_t CreateAclRequest::GetPermissionType() const
{
    return m_permissionType;
}

void CreateAclRequest::SetPermissionType(const int64_t& _permissionType)
{
    m_permissionType = _permissionType;
    m_permissionTypeHasBeenSet = true;
}

bool CreateAclRequest::PermissionTypeHasBeenSet() const
{
    return m_permissionTypeHasBeenSet;
}

string CreateAclRequest::GetResourceName() const
{
    return m_resourceName;
}

void CreateAclRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CreateAclRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CreateAclRequest::GetHost() const
{
    return m_host;
}

void CreateAclRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateAclRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CreateAclRequest::GetPrincipal() const
{
    return m_principal;
}

void CreateAclRequest::SetPrincipal(const string& _principal)
{
    m_principal = _principal;
    m_principalHasBeenSet = true;
}

bool CreateAclRequest::PrincipalHasBeenSet() const
{
    return m_principalHasBeenSet;
}

string CreateAclRequest::GetResourceNameList() const
{
    return m_resourceNameList;
}

void CreateAclRequest::SetResourceNameList(const string& _resourceNameList)
{
    m_resourceNameList = _resourceNameList;
    m_resourceNameListHasBeenSet = true;
}

bool CreateAclRequest::ResourceNameListHasBeenSet() const
{
    return m_resourceNameListHasBeenSet;
}



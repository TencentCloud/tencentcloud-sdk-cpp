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

#include <tencentcloud/igtm/v20231024/model/CreateInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

CreateInstanceRequest::CreateInstanceRequest() :
    m_domainHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_globalTtlHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_accessDomainHasBeenSet(false),
    m_accessSubDomainHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

string CreateInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_globalTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalTtl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_globalTtl, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessSubDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessSubDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessSubDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceRequest::GetDomain() const
{
    return m_domain;
}

void CreateInstanceRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateInstanceRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateInstanceRequest::GetAccessType() const
{
    return m_accessType;
}

void CreateInstanceRequest::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CreateInstanceRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

uint64_t CreateInstanceRequest::GetGlobalTtl() const
{
    return m_globalTtl;
}

void CreateInstanceRequest::SetGlobalTtl(const uint64_t& _globalTtl)
{
    m_globalTtl = _globalTtl;
    m_globalTtlHasBeenSet = true;
}

bool CreateInstanceRequest::GlobalTtlHasBeenSet() const
{
    return m_globalTtlHasBeenSet;
}

string CreateInstanceRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateInstanceRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateInstanceRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string CreateInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateInstanceRequest::GetAccessDomain() const
{
    return m_accessDomain;
}

void CreateInstanceRequest::SetAccessDomain(const string& _accessDomain)
{
    m_accessDomain = _accessDomain;
    m_accessDomainHasBeenSet = true;
}

bool CreateInstanceRequest::AccessDomainHasBeenSet() const
{
    return m_accessDomainHasBeenSet;
}

string CreateInstanceRequest::GetAccessSubDomain() const
{
    return m_accessSubDomain;
}

void CreateInstanceRequest::SetAccessSubDomain(const string& _accessSubDomain)
{
    m_accessSubDomain = _accessSubDomain;
    m_accessSubDomainHasBeenSet = true;
}

bool CreateInstanceRequest::AccessSubDomainHasBeenSet() const
{
    return m_accessSubDomainHasBeenSet;
}

string CreateInstanceRequest::GetRemark() const
{
    return m_remark;
}

void CreateInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateInstanceRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateInstanceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateInstanceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}



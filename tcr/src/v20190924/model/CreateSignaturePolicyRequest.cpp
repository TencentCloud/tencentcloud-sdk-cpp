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

#include <tencentcloud/tcr/v20190924/model/CreateSignaturePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateSignaturePolicyRequest::CreateSignaturePolicyRequest() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_kmsIdHasBeenSet(false),
    m_kmsRegionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_disabledHasBeenSet(false)
{
}

string CreateSignaturePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsId.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSignaturePolicyRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateSignaturePolicyRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateSignaturePolicyRequest::GetName() const
{
    return m_name;
}

void CreateSignaturePolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSignaturePolicyRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void CreateSignaturePolicyRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string CreateSignaturePolicyRequest::GetKmsId() const
{
    return m_kmsId;
}

void CreateSignaturePolicyRequest::SetKmsId(const string& _kmsId)
{
    m_kmsId = _kmsId;
    m_kmsIdHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::KmsIdHasBeenSet() const
{
    return m_kmsIdHasBeenSet;
}

string CreateSignaturePolicyRequest::GetKmsRegion() const
{
    return m_kmsRegion;
}

void CreateSignaturePolicyRequest::SetKmsRegion(const string& _kmsRegion)
{
    m_kmsRegion = _kmsRegion;
    m_kmsRegionHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::KmsRegionHasBeenSet() const
{
    return m_kmsRegionHasBeenSet;
}

string CreateSignaturePolicyRequest::GetDomain() const
{
    return m_domain;
}

void CreateSignaturePolicyRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool CreateSignaturePolicyRequest::GetDisabled() const
{
    return m_disabled;
}

void CreateSignaturePolicyRequest::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool CreateSignaturePolicyRequest::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}



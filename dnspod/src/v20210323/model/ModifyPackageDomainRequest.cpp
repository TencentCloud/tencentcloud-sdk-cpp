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

#include <tencentcloud/dnspod/v20210323/model/ModifyPackageDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ModifyPackageDomainRequest::ModifyPackageDomainRequest() :
    m_operationHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_newDomainIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

string ModifyPackageDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }

    if (m_newDomainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newDomainId, allocator);
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


string ModifyPackageDomainRequest::GetOperation() const
{
    return m_operation;
}

void ModifyPackageDomainRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool ModifyPackageDomainRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t ModifyPackageDomainRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyPackageDomainRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyPackageDomainRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

uint64_t ModifyPackageDomainRequest::GetNewDomainId() const
{
    return m_newDomainId;
}

void ModifyPackageDomainRequest::SetNewDomainId(const uint64_t& _newDomainId)
{
    m_newDomainId = _newDomainId;
    m_newDomainIdHasBeenSet = true;
}

bool ModifyPackageDomainRequest::NewDomainIdHasBeenSet() const
{
    return m_newDomainIdHasBeenSet;
}

string ModifyPackageDomainRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyPackageDomainRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyPackageDomainRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}



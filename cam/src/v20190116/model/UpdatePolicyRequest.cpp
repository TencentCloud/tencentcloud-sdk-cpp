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

#include <tencentcloud/cam/v20190116/model/UpdatePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

UpdatePolicyRequest::UpdatePolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

string UpdatePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdatePolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void UpdatePolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool UpdatePolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string UpdatePolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void UpdatePolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool UpdatePolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string UpdatePolicyRequest::GetDescription() const
{
    return m_description;
}

void UpdatePolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdatePolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdatePolicyRequest::GetPolicyDocument() const
{
    return m_policyDocument;
}

void UpdatePolicyRequest::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool UpdatePolicyRequest::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string UpdatePolicyRequest::GetAlias() const
{
    return m_alias;
}

void UpdatePolicyRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool UpdatePolicyRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}



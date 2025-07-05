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

#include <tencentcloud/cam/v20190116/model/CreatePolicyVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

CreatePolicyVersionRequest::CreatePolicyVersionRequest() :
    m_policyIdHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_setAsDefaultHasBeenSet(false)
{
}

string CreatePolicyVersionRequest::ToJsonString() const
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

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_setAsDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetAsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_setAsDefault, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreatePolicyVersionRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreatePolicyVersionRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreatePolicyVersionRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreatePolicyVersionRequest::GetPolicyDocument() const
{
    return m_policyDocument;
}

void CreatePolicyVersionRequest::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool CreatePolicyVersionRequest::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

bool CreatePolicyVersionRequest::GetSetAsDefault() const
{
    return m_setAsDefault;
}

void CreatePolicyVersionRequest::SetSetAsDefault(const bool& _setAsDefault)
{
    m_setAsDefault = _setAsDefault;
    m_setAsDefaultHasBeenSet = true;
}

bool CreatePolicyVersionRequest::SetAsDefaultHasBeenSet() const
{
    return m_setAsDefaultHasBeenSet;
}



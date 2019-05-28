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

#include <tencentcloud/cam/v20190116/model/CreatePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

CreatePolicyRequest::CreatePolicyRequest() :
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreatePolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreatePolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreatePolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CreatePolicyRequest::GetPolicyDocument() const
{
    return m_policyDocument;
}

void CreatePolicyRequest::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool CreatePolicyRequest::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

string CreatePolicyRequest::GetDescription() const
{
    return m_description;
}

void CreatePolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreatePolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}



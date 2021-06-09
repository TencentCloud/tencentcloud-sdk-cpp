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

#include <tencentcloud/cam/v20190116/model/AttachRolePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AttachRolePolicyRequest::AttachRolePolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_attachRoleIdHasBeenSet(false),
    m_attachRoleNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

string AttachRolePolicyRequest::ToJsonString() const
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

    if (m_attachRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachRoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attachRoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attachRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t AttachRolePolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void AttachRolePolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool AttachRolePolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string AttachRolePolicyRequest::GetAttachRoleId() const
{
    return m_attachRoleId;
}

void AttachRolePolicyRequest::SetAttachRoleId(const string& _attachRoleId)
{
    m_attachRoleId = _attachRoleId;
    m_attachRoleIdHasBeenSet = true;
}

bool AttachRolePolicyRequest::AttachRoleIdHasBeenSet() const
{
    return m_attachRoleIdHasBeenSet;
}

string AttachRolePolicyRequest::GetAttachRoleName() const
{
    return m_attachRoleName;
}

void AttachRolePolicyRequest::SetAttachRoleName(const string& _attachRoleName)
{
    m_attachRoleName = _attachRoleName;
    m_attachRoleNameHasBeenSet = true;
}

bool AttachRolePolicyRequest::AttachRoleNameHasBeenSet() const
{
    return m_attachRoleNameHasBeenSet;
}

string AttachRolePolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void AttachRolePolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool AttachRolePolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}



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

#include <tencentcloud/cam/v20190116/model/DetachRolePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DetachRolePolicyRequest::DetachRolePolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_detachRoleIdHasBeenSet(false),
    m_detachRoleNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

string DetachRolePolicyRequest::ToJsonString() const
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

    if (m_detachRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetachRoleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detachRoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_detachRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetachRoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detachRoleName.c_str(), allocator).Move(), allocator);
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


uint64_t DetachRolePolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void DetachRolePolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DetachRolePolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DetachRolePolicyRequest::GetDetachRoleId() const
{
    return m_detachRoleId;
}

void DetachRolePolicyRequest::SetDetachRoleId(const string& _detachRoleId)
{
    m_detachRoleId = _detachRoleId;
    m_detachRoleIdHasBeenSet = true;
}

bool DetachRolePolicyRequest::DetachRoleIdHasBeenSet() const
{
    return m_detachRoleIdHasBeenSet;
}

string DetachRolePolicyRequest::GetDetachRoleName() const
{
    return m_detachRoleName;
}

void DetachRolePolicyRequest::SetDetachRoleName(const string& _detachRoleName)
{
    m_detachRoleName = _detachRoleName;
    m_detachRoleNameHasBeenSet = true;
}

bool DetachRolePolicyRequest::DetachRoleNameHasBeenSet() const
{
    return m_detachRoleNameHasBeenSet;
}

string DetachRolePolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void DetachRolePolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool DetachRolePolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}



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

#include <tencentcloud/organization/v20210331/model/DetachPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DetachPolicyRequest::DetachPolicyRequest() :
    m_targetIdHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DetachPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetId, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DetachPolicyRequest::GetTargetId() const
{
    return m_targetId;
}

void DetachPolicyRequest::SetTargetId(const uint64_t& _targetId)
{
    m_targetId = _targetId;
    m_targetIdHasBeenSet = true;
}

bool DetachPolicyRequest::TargetIdHasBeenSet() const
{
    return m_targetIdHasBeenSet;
}

string DetachPolicyRequest::GetTargetType() const
{
    return m_targetType;
}

void DetachPolicyRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool DetachPolicyRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

uint64_t DetachPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void DetachPolicyRequest::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DetachPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DetachPolicyRequest::GetType() const
{
    return m_type;
}

void DetachPolicyRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DetachPolicyRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}



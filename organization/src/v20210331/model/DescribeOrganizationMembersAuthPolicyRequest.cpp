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

#include <tencentcloud/organization/v20210331/model/DescribeOrganizationMembersAuthPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

DescribeOrganizationMembersAuthPolicyRequest::DescribeOrganizationMembersAuthPolicyRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_orgSubAccountUinHasBeenSet(false),
    m_policyIdHasBeenSet(false)
{
}

string DescribeOrganizationMembersAuthPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_orgSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orgSubAccountUin, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeOrganizationMembersAuthPolicyRequest::GetOffset() const
{
    return m_offset;
}

void DescribeOrganizationMembersAuthPolicyRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeOrganizationMembersAuthPolicyRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeOrganizationMembersAuthPolicyRequest::GetLimit() const
{
    return m_limit;
}

void DescribeOrganizationMembersAuthPolicyRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeOrganizationMembersAuthPolicyRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeOrganizationMembersAuthPolicyRequest::GetMemberUin() const
{
    return m_memberUin;
}

void DescribeOrganizationMembersAuthPolicyRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool DescribeOrganizationMembersAuthPolicyRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

int64_t DescribeOrganizationMembersAuthPolicyRequest::GetOrgSubAccountUin() const
{
    return m_orgSubAccountUin;
}

void DescribeOrganizationMembersAuthPolicyRequest::SetOrgSubAccountUin(const int64_t& _orgSubAccountUin)
{
    m_orgSubAccountUin = _orgSubAccountUin;
    m_orgSubAccountUinHasBeenSet = true;
}

bool DescribeOrganizationMembersAuthPolicyRequest::OrgSubAccountUinHasBeenSet() const
{
    return m_orgSubAccountUinHasBeenSet;
}

int64_t DescribeOrganizationMembersAuthPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void DescribeOrganizationMembersAuthPolicyRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DescribeOrganizationMembersAuthPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}



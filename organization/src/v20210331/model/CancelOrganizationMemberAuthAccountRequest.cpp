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

#include <tencentcloud/organization/v20210331/model/CancelOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CancelOrganizationMemberAuthAccountRequest::CancelOrganizationMemberAuthAccountRequest() :
    m_memberUinHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_orgSubAccountUinHasBeenSet(false)
{
}

string CancelOrganizationMemberAuthAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_orgSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orgSubAccountUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CancelOrganizationMemberAuthAccountRequest::GetMemberUin() const
{
    return m_memberUin;
}

void CancelOrganizationMemberAuthAccountRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool CancelOrganizationMemberAuthAccountRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

int64_t CancelOrganizationMemberAuthAccountRequest::GetPolicyId() const
{
    return m_policyId;
}

void CancelOrganizationMemberAuthAccountRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CancelOrganizationMemberAuthAccountRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t CancelOrganizationMemberAuthAccountRequest::GetOrgSubAccountUin() const
{
    return m_orgSubAccountUin;
}

void CancelOrganizationMemberAuthAccountRequest::SetOrgSubAccountUin(const int64_t& _orgSubAccountUin)
{
    m_orgSubAccountUin = _orgSubAccountUin;
    m_orgSubAccountUinHasBeenSet = true;
}

bool CancelOrganizationMemberAuthAccountRequest::OrgSubAccountUinHasBeenSet() const
{
    return m_orgSubAccountUinHasBeenSet;
}



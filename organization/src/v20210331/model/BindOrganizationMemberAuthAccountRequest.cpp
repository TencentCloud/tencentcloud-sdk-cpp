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

#include <tencentcloud/organization/v20210331/model/BindOrganizationMemberAuthAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

BindOrganizationMemberAuthAccountRequest::BindOrganizationMemberAuthAccountRequest() :
    m_memberUinHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_orgSubAccountUinsHasBeenSet(false)
{
}

string BindOrganizationMemberAuthAccountRequest::ToJsonString() const
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

    if (m_orgSubAccountUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orgSubAccountUins.begin(); itr != m_orgSubAccountUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t BindOrganizationMemberAuthAccountRequest::GetMemberUin() const
{
    return m_memberUin;
}

void BindOrganizationMemberAuthAccountRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool BindOrganizationMemberAuthAccountRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

int64_t BindOrganizationMemberAuthAccountRequest::GetPolicyId() const
{
    return m_policyId;
}

void BindOrganizationMemberAuthAccountRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool BindOrganizationMemberAuthAccountRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

vector<int64_t> BindOrganizationMemberAuthAccountRequest::GetOrgSubAccountUins() const
{
    return m_orgSubAccountUins;
}

void BindOrganizationMemberAuthAccountRequest::SetOrgSubAccountUins(const vector<int64_t>& _orgSubAccountUins)
{
    m_orgSubAccountUins = _orgSubAccountUins;
    m_orgSubAccountUinsHasBeenSet = true;
}

bool BindOrganizationMemberAuthAccountRequest::OrgSubAccountUinsHasBeenSet() const
{
    return m_orgSubAccountUinsHasBeenSet;
}



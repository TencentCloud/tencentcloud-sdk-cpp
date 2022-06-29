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

#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateOrganizationMemberPolicyRequest::CreateOrganizationMemberPolicyRequest() :
    m_memberUinHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateOrganizationMemberPolicyRequest::ToJsonString() const
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

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identityId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateOrganizationMemberPolicyRequest::GetMemberUin() const
{
    return m_memberUin;
}

void CreateOrganizationMemberPolicyRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool CreateOrganizationMemberPolicyRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string CreateOrganizationMemberPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreateOrganizationMemberPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreateOrganizationMemberPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t CreateOrganizationMemberPolicyRequest::GetIdentityId() const
{
    return m_identityId;
}

void CreateOrganizationMemberPolicyRequest::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool CreateOrganizationMemberPolicyRequest::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string CreateOrganizationMemberPolicyRequest::GetDescription() const
{
    return m_description;
}

void CreateOrganizationMemberPolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateOrganizationMemberPolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}



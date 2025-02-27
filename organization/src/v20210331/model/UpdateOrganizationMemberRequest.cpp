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

#include <tencentcloud/organization/v20210331/model/UpdateOrganizationMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateOrganizationMemberRequest::UpdateOrganizationMemberRequest() :
    m_memberUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_permissionIdsHasBeenSet(false),
    m_isAllowQuitHasBeenSet(false),
    m_payUinHasBeenSet(false),
    m_isModifyNickNameHasBeenSet(false)
{
}

string UpdateOrganizationMemberRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyType.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionIds.begin(); itr != m_permissionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isAllowQuitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllowQuit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isAllowQuit.c_str(), allocator).Move(), allocator);
    }

    if (m_payUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payUin.c_str(), allocator).Move(), allocator);
    }

    if (m_isModifyNickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifyNickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModifyNickName, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateOrganizationMemberRequest::GetMemberUin() const
{
    return m_memberUin;
}

void UpdateOrganizationMemberRequest::SetMemberUin(const uint64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetName() const
{
    return m_name;
}

void UpdateOrganizationMemberRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetRemark() const
{
    return m_remark;
}

void UpdateOrganizationMemberRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetPolicyType() const
{
    return m_policyType;
}

void UpdateOrganizationMemberRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

vector<uint64_t> UpdateOrganizationMemberRequest::GetPermissionIds() const
{
    return m_permissionIds;
}

void UpdateOrganizationMemberRequest::SetPermissionIds(const vector<uint64_t>& _permissionIds)
{
    m_permissionIds = _permissionIds;
    m_permissionIdsHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::PermissionIdsHasBeenSet() const
{
    return m_permissionIdsHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetIsAllowQuit() const
{
    return m_isAllowQuit;
}

void UpdateOrganizationMemberRequest::SetIsAllowQuit(const string& _isAllowQuit)
{
    m_isAllowQuit = _isAllowQuit;
    m_isAllowQuitHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::IsAllowQuitHasBeenSet() const
{
    return m_isAllowQuitHasBeenSet;
}

string UpdateOrganizationMemberRequest::GetPayUin() const
{
    return m_payUin;
}

void UpdateOrganizationMemberRequest::SetPayUin(const string& _payUin)
{
    m_payUin = _payUin;
    m_payUinHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::PayUinHasBeenSet() const
{
    return m_payUinHasBeenSet;
}

uint64_t UpdateOrganizationMemberRequest::GetIsModifyNickName() const
{
    return m_isModifyNickName;
}

void UpdateOrganizationMemberRequest::SetIsModifyNickName(const uint64_t& _isModifyNickName)
{
    m_isModifyNickName = _isModifyNickName;
    m_isModifyNickNameHasBeenSet = true;
}

bool UpdateOrganizationMemberRequest::IsModifyNickNameHasBeenSet() const
{
    return m_isModifyNickNameHasBeenSet;
}



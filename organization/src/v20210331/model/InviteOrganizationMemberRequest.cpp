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

#include <tencentcloud/organization/v20210331/model/InviteOrganizationMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

InviteOrganizationMemberRequest::InviteOrganizationMemberRequest() :
    m_memberUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_permissionIdsHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_isAllowQuitHasBeenSet(false),
    m_payUinHasBeenSet(false),
    m_relationAuthNameHasBeenSet(false),
    m_authFileHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string InviteOrganizationMemberRequest::ToJsonString() const
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

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_relationAuthNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationAuthName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relationAuthName.c_str(), allocator).Move(), allocator);
    }

    if (m_authFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authFile.begin(); itr != m_authFile.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t InviteOrganizationMemberRequest::GetMemberUin() const
{
    return m_memberUin;
}

void InviteOrganizationMemberRequest::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string InviteOrganizationMemberRequest::GetName() const
{
    return m_name;
}

void InviteOrganizationMemberRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string InviteOrganizationMemberRequest::GetPolicyType() const
{
    return m_policyType;
}

void InviteOrganizationMemberRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

vector<uint64_t> InviteOrganizationMemberRequest::GetPermissionIds() const
{
    return m_permissionIds;
}

void InviteOrganizationMemberRequest::SetPermissionIds(const vector<uint64_t>& _permissionIds)
{
    m_permissionIds = _permissionIds;
    m_permissionIdsHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::PermissionIdsHasBeenSet() const
{
    return m_permissionIdsHasBeenSet;
}

int64_t InviteOrganizationMemberRequest::GetNodeId() const
{
    return m_nodeId;
}

void InviteOrganizationMemberRequest::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string InviteOrganizationMemberRequest::GetRemark() const
{
    return m_remark;
}

void InviteOrganizationMemberRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string InviteOrganizationMemberRequest::GetIsAllowQuit() const
{
    return m_isAllowQuit;
}

void InviteOrganizationMemberRequest::SetIsAllowQuit(const string& _isAllowQuit)
{
    m_isAllowQuit = _isAllowQuit;
    m_isAllowQuitHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::IsAllowQuitHasBeenSet() const
{
    return m_isAllowQuitHasBeenSet;
}

string InviteOrganizationMemberRequest::GetPayUin() const
{
    return m_payUin;
}

void InviteOrganizationMemberRequest::SetPayUin(const string& _payUin)
{
    m_payUin = _payUin;
    m_payUinHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::PayUinHasBeenSet() const
{
    return m_payUinHasBeenSet;
}

string InviteOrganizationMemberRequest::GetRelationAuthName() const
{
    return m_relationAuthName;
}

void InviteOrganizationMemberRequest::SetRelationAuthName(const string& _relationAuthName)
{
    m_relationAuthName = _relationAuthName;
    m_relationAuthNameHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::RelationAuthNameHasBeenSet() const
{
    return m_relationAuthNameHasBeenSet;
}

vector<AuthRelationFile> InviteOrganizationMemberRequest::GetAuthFile() const
{
    return m_authFile;
}

void InviteOrganizationMemberRequest::SetAuthFile(const vector<AuthRelationFile>& _authFile)
{
    m_authFile = _authFile;
    m_authFileHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::AuthFileHasBeenSet() const
{
    return m_authFileHasBeenSet;
}

vector<Tag> InviteOrganizationMemberRequest::GetTags() const
{
    return m_tags;
}

void InviteOrganizationMemberRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InviteOrganizationMemberRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



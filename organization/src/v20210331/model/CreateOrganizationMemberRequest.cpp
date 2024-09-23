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

#include <tencentcloud/organization/v20210331/model/CreateOrganizationMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateOrganizationMemberRequest::CreateOrganizationMemberRequest() :
    m_nameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_permissionIdsHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_payUinHasBeenSet(false),
    m_identityRoleIDHasBeenSet(false),
    m_authRelationIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateOrganizationMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_payUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payUin.c_str(), allocator).Move(), allocator);
    }

    if (m_identityRoleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityRoleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_identityRoleID.begin(); itr != m_identityRoleID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authRelationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRelationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authRelationId, allocator);
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


string CreateOrganizationMemberRequest::GetName() const
{
    return m_name;
}

void CreateOrganizationMemberRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateOrganizationMemberRequest::GetPolicyType() const
{
    return m_policyType;
}

void CreateOrganizationMemberRequest::SetPolicyType(const string& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

vector<uint64_t> CreateOrganizationMemberRequest::GetPermissionIds() const
{
    return m_permissionIds;
}

void CreateOrganizationMemberRequest::SetPermissionIds(const vector<uint64_t>& _permissionIds)
{
    m_permissionIds = _permissionIds;
    m_permissionIdsHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::PermissionIdsHasBeenSet() const
{
    return m_permissionIdsHasBeenSet;
}

int64_t CreateOrganizationMemberRequest::GetNodeId() const
{
    return m_nodeId;
}

void CreateOrganizationMemberRequest::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string CreateOrganizationMemberRequest::GetAccountName() const
{
    return m_accountName;
}

void CreateOrganizationMemberRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string CreateOrganizationMemberRequest::GetRemark() const
{
    return m_remark;
}

void CreateOrganizationMemberRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateOrganizationMemberRequest::GetRecordId() const
{
    return m_recordId;
}

void CreateOrganizationMemberRequest::SetRecordId(const int64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string CreateOrganizationMemberRequest::GetPayUin() const
{
    return m_payUin;
}

void CreateOrganizationMemberRequest::SetPayUin(const string& _payUin)
{
    m_payUin = _payUin;
    m_payUinHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::PayUinHasBeenSet() const
{
    return m_payUinHasBeenSet;
}

vector<uint64_t> CreateOrganizationMemberRequest::GetIdentityRoleID() const
{
    return m_identityRoleID;
}

void CreateOrganizationMemberRequest::SetIdentityRoleID(const vector<uint64_t>& _identityRoleID)
{
    m_identityRoleID = _identityRoleID;
    m_identityRoleIDHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::IdentityRoleIDHasBeenSet() const
{
    return m_identityRoleIDHasBeenSet;
}

int64_t CreateOrganizationMemberRequest::GetAuthRelationId() const
{
    return m_authRelationId;
}

void CreateOrganizationMemberRequest::SetAuthRelationId(const int64_t& _authRelationId)
{
    m_authRelationId = _authRelationId;
    m_authRelationIdHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::AuthRelationIdHasBeenSet() const
{
    return m_authRelationIdHasBeenSet;
}

vector<Tag> CreateOrganizationMemberRequest::GetTags() const
{
    return m_tags;
}

void CreateOrganizationMemberRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateOrganizationMemberRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}



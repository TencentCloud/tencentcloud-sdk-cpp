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

#include <tencentcloud/organization/v20210331/model/OrgMembersAuthPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgMembersAuthPolicy::OrgMembersAuthPolicy() :
    m_identityIdHasBeenSet(false),
    m_identityRoleNameHasBeenSet(false),
    m_identityRoleAliasNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_orgSubAccountUinHasBeenSet(false),
    m_orgSubAccountNameHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_membersHasBeenSet(false)
{
}

CoreInternalOutcome OrgMembersAuthPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentityId") && !value["IdentityId"].IsNull())
    {
        if (!value["IdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.IdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identityId = value["IdentityId"].GetInt64();
        m_identityIdHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleName") && !value["IdentityRoleName"].IsNull())
    {
        if (!value["IdentityRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.IdentityRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleName = string(value["IdentityRoleName"].GetString());
        m_identityRoleNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleAliasName") && !value["IdentityRoleAliasName"].IsNull())
    {
        if (!value["IdentityRoleAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.IdentityRoleAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleAliasName = string(value["IdentityRoleAliasName"].GetString());
        m_identityRoleAliasNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }

    if (value.HasMember("OrgSubAccountUin") && !value["OrgSubAccountUin"].IsNull())
    {
        if (!value["OrgSubAccountUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.OrgSubAccountUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgSubAccountUin = value["OrgSubAccountUin"].GetInt64();
        m_orgSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("OrgSubAccountName") && !value["OrgSubAccountName"].IsNull())
    {
        if (!value["OrgSubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.OrgSubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgSubAccountName = string(value["OrgSubAccountName"].GetString());
        m_orgSubAccountNameHasBeenSet = true;
    }

    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.BindType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = value["BindType"].GetUint64();
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("Members") && !value["Members"].IsNull())
    {
        if (!value["Members"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgMembersAuthPolicy.Members` is not array type"));

        const rapidjson::Value &tmpValue = value["Members"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberMainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_members.push_back(item);
        }
        m_membersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgMembersAuthPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityId, allocator);
    }

    if (m_identityRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityRoleAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityRoleAliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityRoleAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_orgSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgSubAccountUin, allocator);
    }

    if (m_orgSubAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgSubAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindType, allocator);
    }

    if (m_membersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Members";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_members.begin(); itr != m_members.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t OrgMembersAuthPolicy::GetIdentityId() const
{
    return m_identityId;
}

void OrgMembersAuthPolicy::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool OrgMembersAuthPolicy::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string OrgMembersAuthPolicy::GetIdentityRoleName() const
{
    return m_identityRoleName;
}

void OrgMembersAuthPolicy::SetIdentityRoleName(const string& _identityRoleName)
{
    m_identityRoleName = _identityRoleName;
    m_identityRoleNameHasBeenSet = true;
}

bool OrgMembersAuthPolicy::IdentityRoleNameHasBeenSet() const
{
    return m_identityRoleNameHasBeenSet;
}

string OrgMembersAuthPolicy::GetIdentityRoleAliasName() const
{
    return m_identityRoleAliasName;
}

void OrgMembersAuthPolicy::SetIdentityRoleAliasName(const string& _identityRoleAliasName)
{
    m_identityRoleAliasName = _identityRoleAliasName;
    m_identityRoleAliasNameHasBeenSet = true;
}

bool OrgMembersAuthPolicy::IdentityRoleAliasNameHasBeenSet() const
{
    return m_identityRoleAliasNameHasBeenSet;
}

string OrgMembersAuthPolicy::GetCreateTime() const
{
    return m_createTime;
}

void OrgMembersAuthPolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrgMembersAuthPolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t OrgMembersAuthPolicy::GetPolicyId() const
{
    return m_policyId;
}

void OrgMembersAuthPolicy::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool OrgMembersAuthPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string OrgMembersAuthPolicy::GetPolicyName() const
{
    return m_policyName;
}

void OrgMembersAuthPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool OrgMembersAuthPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t OrgMembersAuthPolicy::GetMemberUin() const
{
    return m_memberUin;
}

void OrgMembersAuthPolicy::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool OrgMembersAuthPolicy::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string OrgMembersAuthPolicy::GetMemberName() const
{
    return m_memberName;
}

void OrgMembersAuthPolicy::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool OrgMembersAuthPolicy::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

int64_t OrgMembersAuthPolicy::GetOrgSubAccountUin() const
{
    return m_orgSubAccountUin;
}

void OrgMembersAuthPolicy::SetOrgSubAccountUin(const int64_t& _orgSubAccountUin)
{
    m_orgSubAccountUin = _orgSubAccountUin;
    m_orgSubAccountUinHasBeenSet = true;
}

bool OrgMembersAuthPolicy::OrgSubAccountUinHasBeenSet() const
{
    return m_orgSubAccountUinHasBeenSet;
}

string OrgMembersAuthPolicy::GetOrgSubAccountName() const
{
    return m_orgSubAccountName;
}

void OrgMembersAuthPolicy::SetOrgSubAccountName(const string& _orgSubAccountName)
{
    m_orgSubAccountName = _orgSubAccountName;
    m_orgSubAccountNameHasBeenSet = true;
}

bool OrgMembersAuthPolicy::OrgSubAccountNameHasBeenSet() const
{
    return m_orgSubAccountNameHasBeenSet;
}

uint64_t OrgMembersAuthPolicy::GetBindType() const
{
    return m_bindType;
}

void OrgMembersAuthPolicy::SetBindType(const uint64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool OrgMembersAuthPolicy::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

vector<MemberMainInfo> OrgMembersAuthPolicy::GetMembers() const
{
    return m_members;
}

void OrgMembersAuthPolicy::SetMembers(const vector<MemberMainInfo>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool OrgMembersAuthPolicy::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}


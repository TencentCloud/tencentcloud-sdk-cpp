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

#include <tencentcloud/organization/v20210331/model/OrgMemberAuthAccount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrgMemberAuthAccount::OrgMemberAuthAccount() :
    m_orgSubAccountUinHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_identityRoleNameHasBeenSet(false),
    m_identityRoleAliasNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_orgSubAccountNameHasBeenSet(false)
{
}

CoreInternalOutcome OrgMemberAuthAccount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrgSubAccountUin") && !value["OrgSubAccountUin"].IsNull())
    {
        if (!value["OrgSubAccountUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.OrgSubAccountUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgSubAccountUin = value["OrgSubAccountUin"].GetInt64();
        m_orgSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityId") && !value["IdentityId"].IsNull())
    {
        if (!value["IdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.IdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identityId = value["IdentityId"].GetInt64();
        m_identityIdHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleName") && !value["IdentityRoleName"].IsNull())
    {
        if (!value["IdentityRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.IdentityRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleName = string(value["IdentityRoleName"].GetString());
        m_identityRoleNameHasBeenSet = true;
    }

    if (value.HasMember("IdentityRoleAliasName") && !value["IdentityRoleAliasName"].IsNull())
    {
        if (!value["IdentityRoleAliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.IdentityRoleAliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityRoleAliasName = string(value["IdentityRoleAliasName"].GetString());
        m_identityRoleAliasNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OrgSubAccountName") && !value["OrgSubAccountName"].IsNull())
    {
        if (!value["OrgSubAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgMemberAuthAccount.OrgSubAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgSubAccountName = string(value["OrgSubAccountName"].GetString());
        m_orgSubAccountNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgMemberAuthAccount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orgSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgSubAccountUin, allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_orgSubAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgSubAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgSubAccountName.c_str(), allocator).Move(), allocator);
    }

}


int64_t OrgMemberAuthAccount::GetOrgSubAccountUin() const
{
    return m_orgSubAccountUin;
}

void OrgMemberAuthAccount::SetOrgSubAccountUin(const int64_t& _orgSubAccountUin)
{
    m_orgSubAccountUin = _orgSubAccountUin;
    m_orgSubAccountUinHasBeenSet = true;
}

bool OrgMemberAuthAccount::OrgSubAccountUinHasBeenSet() const
{
    return m_orgSubAccountUinHasBeenSet;
}

int64_t OrgMemberAuthAccount::GetPolicyId() const
{
    return m_policyId;
}

void OrgMemberAuthAccount::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool OrgMemberAuthAccount::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string OrgMemberAuthAccount::GetPolicyName() const
{
    return m_policyName;
}

void OrgMemberAuthAccount::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool OrgMemberAuthAccount::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t OrgMemberAuthAccount::GetIdentityId() const
{
    return m_identityId;
}

void OrgMemberAuthAccount::SetIdentityId(const int64_t& _identityId)
{
    m_identityId = _identityId;
    m_identityIdHasBeenSet = true;
}

bool OrgMemberAuthAccount::IdentityIdHasBeenSet() const
{
    return m_identityIdHasBeenSet;
}

string OrgMemberAuthAccount::GetIdentityRoleName() const
{
    return m_identityRoleName;
}

void OrgMemberAuthAccount::SetIdentityRoleName(const string& _identityRoleName)
{
    m_identityRoleName = _identityRoleName;
    m_identityRoleNameHasBeenSet = true;
}

bool OrgMemberAuthAccount::IdentityRoleNameHasBeenSet() const
{
    return m_identityRoleNameHasBeenSet;
}

string OrgMemberAuthAccount::GetIdentityRoleAliasName() const
{
    return m_identityRoleAliasName;
}

void OrgMemberAuthAccount::SetIdentityRoleAliasName(const string& _identityRoleAliasName)
{
    m_identityRoleAliasName = _identityRoleAliasName;
    m_identityRoleAliasNameHasBeenSet = true;
}

bool OrgMemberAuthAccount::IdentityRoleAliasNameHasBeenSet() const
{
    return m_identityRoleAliasNameHasBeenSet;
}

string OrgMemberAuthAccount::GetCreateTime() const
{
    return m_createTime;
}

void OrgMemberAuthAccount::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrgMemberAuthAccount::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OrgMemberAuthAccount::GetUpdateTime() const
{
    return m_updateTime;
}

void OrgMemberAuthAccount::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OrgMemberAuthAccount::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OrgMemberAuthAccount::GetOrgSubAccountName() const
{
    return m_orgSubAccountName;
}

void OrgMemberAuthAccount::SetOrgSubAccountName(const string& _orgSubAccountName)
{
    m_orgSubAccountName = _orgSubAccountName;
    m_orgSubAccountNameHasBeenSet = true;
}

bool OrgMemberAuthAccount::OrgSubAccountNameHasBeenSet() const
{
    return m_orgSubAccountNameHasBeenSet;
}


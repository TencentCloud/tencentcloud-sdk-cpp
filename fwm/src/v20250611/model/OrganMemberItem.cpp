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

#include <tencentcloud/fwm/v20250611/model/OrganMemberItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

OrganMemberItem::OrganMemberItem() :
    m_memberIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_subAccountCountHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_roleDisplayHasBeenSet(false),
    m_accountGroupHasBeenSet(false),
    m_cfwManagedHasBeenSet(false),
    m_cfwShareRoleHasBeenSet(false),
    m_cfwShareRoleDisplayHasBeenSet(false),
    m_cfwSharerAppIdHasBeenSet(false),
    m_cfwInstanceIdHasBeenSet(false),
    m_policyAnalysisEnabledHasBeenSet(false),
    m_memberCreateTimeHasBeenSet(false),
    m_joinTypeHasBeenSet(false)
{
}

CoreInternalOutcome OrganMemberItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("SubAccountCount") && !value["SubAccountCount"].IsNull())
    {
        if (!value["SubAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.SubAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountCount = value["SubAccountCount"].GetInt64();
        m_subAccountCountHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("RoleDisplay") && !value["RoleDisplay"].IsNull())
    {
        if (!value["RoleDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.RoleDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleDisplay = string(value["RoleDisplay"].GetString());
        m_roleDisplayHasBeenSet = true;
    }

    if (value.HasMember("AccountGroup") && !value["AccountGroup"].IsNull())
    {
        if (!value["AccountGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.AccountGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accountGroup.Deserialize(value["AccountGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountGroupHasBeenSet = true;
    }

    if (value.HasMember("CfwManaged") && !value["CfwManaged"].IsNull())
    {
        if (!value["CfwManaged"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.CfwManaged` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cfwManaged = value["CfwManaged"].GetInt64();
        m_cfwManagedHasBeenSet = true;
    }

    if (value.HasMember("CfwShareRole") && !value["CfwShareRole"].IsNull())
    {
        if (!value["CfwShareRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.CfwShareRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwShareRole = string(value["CfwShareRole"].GetString());
        m_cfwShareRoleHasBeenSet = true;
    }

    if (value.HasMember("CfwShareRoleDisplay") && !value["CfwShareRoleDisplay"].IsNull())
    {
        if (!value["CfwShareRoleDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.CfwShareRoleDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwShareRoleDisplay = string(value["CfwShareRoleDisplay"].GetString());
        m_cfwShareRoleDisplayHasBeenSet = true;
    }

    if (value.HasMember("CfwSharerAppId") && !value["CfwSharerAppId"].IsNull())
    {
        if (!value["CfwSharerAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.CfwSharerAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwSharerAppId = string(value["CfwSharerAppId"].GetString());
        m_cfwSharerAppIdHasBeenSet = true;
    }

    if (value.HasMember("CfwInstanceId") && !value["CfwInstanceId"].IsNull())
    {
        if (!value["CfwInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.CfwInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwInstanceId = string(value["CfwInstanceId"].GetString());
        m_cfwInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyAnalysisEnabled") && !value["PolicyAnalysisEnabled"].IsNull())
    {
        if (!value["PolicyAnalysisEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.PolicyAnalysisEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyAnalysisEnabled = value["PolicyAnalysisEnabled"].GetInt64();
        m_policyAnalysisEnabledHasBeenSet = true;
    }

    if (value.HasMember("MemberCreateTime") && !value["MemberCreateTime"].IsNull())
    {
        if (!value["MemberCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.MemberCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberCreateTime = string(value["MemberCreateTime"].GetString());
        m_memberCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("JoinType") && !value["JoinType"].IsNull())
    {
        if (!value["JoinType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganMemberItem.JoinType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinType = string(value["JoinType"].GetString());
        m_joinTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganMemberItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAccountCount, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_roleDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accountGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cfwManagedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwManaged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cfwManaged, allocator);
    }

    if (m_cfwShareRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwShareRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwShareRole.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwShareRoleDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwShareRoleDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwShareRoleDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwSharerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwSharerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwSharerAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyAnalysisEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyAnalysisEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyAnalysisEnabled, allocator);
    }

    if (m_memberCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_joinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinType.c_str(), allocator).Move(), allocator);
    }

}


string OrganMemberItem::GetMemberId() const
{
    return m_memberId;
}

void OrganMemberItem::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool OrganMemberItem::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string OrganMemberItem::GetAppId() const
{
    return m_appId;
}

void OrganMemberItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool OrganMemberItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string OrganMemberItem::GetUin() const
{
    return m_uin;
}

void OrganMemberItem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OrganMemberItem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string OrganMemberItem::GetNickname() const
{
    return m_nickname;
}

void OrganMemberItem::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool OrganMemberItem::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

int64_t OrganMemberItem::GetSubAccountCount() const
{
    return m_subAccountCount;
}

void OrganMemberItem::SetSubAccountCount(const int64_t& _subAccountCount)
{
    m_subAccountCount = _subAccountCount;
    m_subAccountCountHasBeenSet = true;
}

bool OrganMemberItem::SubAccountCountHasBeenSet() const
{
    return m_subAccountCountHasBeenSet;
}

string OrganMemberItem::GetNodeName() const
{
    return m_nodeName;
}

void OrganMemberItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool OrganMemberItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string OrganMemberItem::GetRole() const
{
    return m_role;
}

void OrganMemberItem::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool OrganMemberItem::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string OrganMemberItem::GetRoleDisplay() const
{
    return m_roleDisplay;
}

void OrganMemberItem::SetRoleDisplay(const string& _roleDisplay)
{
    m_roleDisplay = _roleDisplay;
    m_roleDisplayHasBeenSet = true;
}

bool OrganMemberItem::RoleDisplayHasBeenSet() const
{
    return m_roleDisplayHasBeenSet;
}

AccountGroupInfo OrganMemberItem::GetAccountGroup() const
{
    return m_accountGroup;
}

void OrganMemberItem::SetAccountGroup(const AccountGroupInfo& _accountGroup)
{
    m_accountGroup = _accountGroup;
    m_accountGroupHasBeenSet = true;
}

bool OrganMemberItem::AccountGroupHasBeenSet() const
{
    return m_accountGroupHasBeenSet;
}

int64_t OrganMemberItem::GetCfwManaged() const
{
    return m_cfwManaged;
}

void OrganMemberItem::SetCfwManaged(const int64_t& _cfwManaged)
{
    m_cfwManaged = _cfwManaged;
    m_cfwManagedHasBeenSet = true;
}

bool OrganMemberItem::CfwManagedHasBeenSet() const
{
    return m_cfwManagedHasBeenSet;
}

string OrganMemberItem::GetCfwShareRole() const
{
    return m_cfwShareRole;
}

void OrganMemberItem::SetCfwShareRole(const string& _cfwShareRole)
{
    m_cfwShareRole = _cfwShareRole;
    m_cfwShareRoleHasBeenSet = true;
}

bool OrganMemberItem::CfwShareRoleHasBeenSet() const
{
    return m_cfwShareRoleHasBeenSet;
}

string OrganMemberItem::GetCfwShareRoleDisplay() const
{
    return m_cfwShareRoleDisplay;
}

void OrganMemberItem::SetCfwShareRoleDisplay(const string& _cfwShareRoleDisplay)
{
    m_cfwShareRoleDisplay = _cfwShareRoleDisplay;
    m_cfwShareRoleDisplayHasBeenSet = true;
}

bool OrganMemberItem::CfwShareRoleDisplayHasBeenSet() const
{
    return m_cfwShareRoleDisplayHasBeenSet;
}

string OrganMemberItem::GetCfwSharerAppId() const
{
    return m_cfwSharerAppId;
}

void OrganMemberItem::SetCfwSharerAppId(const string& _cfwSharerAppId)
{
    m_cfwSharerAppId = _cfwSharerAppId;
    m_cfwSharerAppIdHasBeenSet = true;
}

bool OrganMemberItem::CfwSharerAppIdHasBeenSet() const
{
    return m_cfwSharerAppIdHasBeenSet;
}

string OrganMemberItem::GetCfwInstanceId() const
{
    return m_cfwInstanceId;
}

void OrganMemberItem::SetCfwInstanceId(const string& _cfwInstanceId)
{
    m_cfwInstanceId = _cfwInstanceId;
    m_cfwInstanceIdHasBeenSet = true;
}

bool OrganMemberItem::CfwInstanceIdHasBeenSet() const
{
    return m_cfwInstanceIdHasBeenSet;
}

int64_t OrganMemberItem::GetPolicyAnalysisEnabled() const
{
    return m_policyAnalysisEnabled;
}

void OrganMemberItem::SetPolicyAnalysisEnabled(const int64_t& _policyAnalysisEnabled)
{
    m_policyAnalysisEnabled = _policyAnalysisEnabled;
    m_policyAnalysisEnabledHasBeenSet = true;
}

bool OrganMemberItem::PolicyAnalysisEnabledHasBeenSet() const
{
    return m_policyAnalysisEnabledHasBeenSet;
}

string OrganMemberItem::GetMemberCreateTime() const
{
    return m_memberCreateTime;
}

void OrganMemberItem::SetMemberCreateTime(const string& _memberCreateTime)
{
    m_memberCreateTime = _memberCreateTime;
    m_memberCreateTimeHasBeenSet = true;
}

bool OrganMemberItem::MemberCreateTimeHasBeenSet() const
{
    return m_memberCreateTimeHasBeenSet;
}

string OrganMemberItem::GetJoinType() const
{
    return m_joinType;
}

void OrganMemberItem::SetJoinType(const string& _joinType)
{
    m_joinType = _joinType;
    m_joinTypeHasBeenSet = true;
}

bool OrganMemberItem::JoinTypeHasBeenSet() const
{
    return m_joinTypeHasBeenSet;
}


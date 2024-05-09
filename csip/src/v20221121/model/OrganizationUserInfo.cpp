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

#include <tencentcloud/csip/v20221121/model/OrganizationUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

OrganizationUserInfo::OrganizationUserInfo() :
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_attackCountHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_joinTypeHasBeenSet(false),
    m_cFWProtectHasBeenSet(false),
    m_wAFProtectHasBeenSet(false),
    m_cWPProtectHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_cSIPProtectHasBeenSet(false),
    m_quotaConsumerHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_syncFrequencyHasBeenSet(false),
    m_isExpiredHasBeenSet(false),
    m_permissionListHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_tcMemberTypeHasBeenSet(false),
    m_subUserCountHasBeenSet(false),
    m_joinTypeInfoHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.AssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetInt64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("AttackCount") && !value["AttackCount"].IsNull())
    {
        if (!value["AttackCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.AttackCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = value["AttackCount"].GetInt64();
        m_attackCountHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("JoinType") && !value["JoinType"].IsNull())
    {
        if (!value["JoinType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.JoinType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinType = string(value["JoinType"].GetString());
        m_joinTypeHasBeenSet = true;
    }

    if (value.HasMember("CFWProtect") && !value["CFWProtect"].IsNull())
    {
        if (!value["CFWProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.CFWProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFWProtect = string(value["CFWProtect"].GetString());
        m_cFWProtectHasBeenSet = true;
    }

    if (value.HasMember("WAFProtect") && !value["WAFProtect"].IsNull())
    {
        if (!value["WAFProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.WAFProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wAFProtect = string(value["WAFProtect"].GetString());
        m_wAFProtectHasBeenSet = true;
    }

    if (value.HasMember("CWPProtect") && !value["CWPProtect"].IsNull())
    {
        if (!value["CWPProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.CWPProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPProtect = string(value["CWPProtect"].GetString());
        m_cWPProtectHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CSIPProtect") && !value["CSIPProtect"].IsNull())
    {
        if (!value["CSIPProtect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.CSIPProtect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSIPProtect = string(value["CSIPProtect"].GetString());
        m_cSIPProtectHasBeenSet = true;
    }

    if (value.HasMember("QuotaConsumer") && !value["QuotaConsumer"].IsNull())
    {
        if (!value["QuotaConsumer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.QuotaConsumer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaConsumer = value["QuotaConsumer"].GetInt64();
        m_quotaConsumerHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("SyncFrequency") && !value["SyncFrequency"].IsNull())
    {
        if (!value["SyncFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.SyncFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncFrequency = value["SyncFrequency"].GetInt64();
        m_syncFrequencyHasBeenSet = true;
    }

    if (value.HasMember("IsExpired") && !value["IsExpired"].IsNull())
    {
        if (!value["IsExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.IsExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExpired = value["IsExpired"].GetBool();
        m_isExpiredHasBeenSet = true;
    }

    if (value.HasMember("PermissionList") && !value["PermissionList"].IsNull())
    {
        if (!value["PermissionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.PermissionList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionList.push_back((*itr).GetString());
        }
        m_permissionListHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("TcMemberType") && !value["TcMemberType"].IsNull())
    {
        if (!value["TcMemberType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.TcMemberType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tcMemberType = value["TcMemberType"].GetInt64();
        m_tcMemberTypeHasBeenSet = true;
    }

    if (value.HasMember("SubUserCount") && !value["SubUserCount"].IsNull())
    {
        if (!value["SubUserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.SubUserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subUserCount = value["SubUserCount"].GetInt64();
        m_subUserCountHasBeenSet = true;
    }

    if (value.HasMember("JoinTypeInfo") && !value["JoinTypeInfo"].IsNull())
    {
        if (!value["JoinTypeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationUserInfo.JoinTypeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinTypeInfo = string(value["JoinTypeInfo"].GetString());
        m_joinTypeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

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

    if (m_joinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinType.c_str(), allocator).Move(), allocator);
    }

    if (m_cFWProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFWProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_wAFProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WAFProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wAFProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_cSIPProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSIPProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSIPProtect.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaConsumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaConsumer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaConsumer, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

    if (m_syncFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncFrequency, allocator);
    }

    if (m_isExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpired, allocator);
    }

    if (m_permissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionList.begin(); itr != m_permissionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_tcMemberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcMemberType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcMemberType, allocator);
    }

    if (m_subUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUserCount, allocator);
    }

    if (m_joinTypeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinTypeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_joinTypeInfo.c_str(), allocator).Move(), allocator);
    }

}


string OrganizationUserInfo::GetUin() const
{
    return m_uin;
}

void OrganizationUserInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool OrganizationUserInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string OrganizationUserInfo::GetNickName() const
{
    return m_nickName;
}

void OrganizationUserInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool OrganizationUserInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string OrganizationUserInfo::GetNodeName() const
{
    return m_nodeName;
}

void OrganizationUserInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool OrganizationUserInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

int64_t OrganizationUserInfo::GetAssetCount() const
{
    return m_assetCount;
}

void OrganizationUserInfo::SetAssetCount(const int64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool OrganizationUserInfo::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

int64_t OrganizationUserInfo::GetRiskCount() const
{
    return m_riskCount;
}

void OrganizationUserInfo::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool OrganizationUserInfo::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

int64_t OrganizationUserInfo::GetAttackCount() const
{
    return m_attackCount;
}

void OrganizationUserInfo::SetAttackCount(const int64_t& _attackCount)
{
    m_attackCount = _attackCount;
    m_attackCountHasBeenSet = true;
}

bool OrganizationUserInfo::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

string OrganizationUserInfo::GetRole() const
{
    return m_role;
}

void OrganizationUserInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool OrganizationUserInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string OrganizationUserInfo::GetMemberId() const
{
    return m_memberId;
}

void OrganizationUserInfo::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool OrganizationUserInfo::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string OrganizationUserInfo::GetAppId() const
{
    return m_appId;
}

void OrganizationUserInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool OrganizationUserInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string OrganizationUserInfo::GetJoinType() const
{
    return m_joinType;
}

void OrganizationUserInfo::SetJoinType(const string& _joinType)
{
    m_joinType = _joinType;
    m_joinTypeHasBeenSet = true;
}

bool OrganizationUserInfo::JoinTypeHasBeenSet() const
{
    return m_joinTypeHasBeenSet;
}

string OrganizationUserInfo::GetCFWProtect() const
{
    return m_cFWProtect;
}

void OrganizationUserInfo::SetCFWProtect(const string& _cFWProtect)
{
    m_cFWProtect = _cFWProtect;
    m_cFWProtectHasBeenSet = true;
}

bool OrganizationUserInfo::CFWProtectHasBeenSet() const
{
    return m_cFWProtectHasBeenSet;
}

string OrganizationUserInfo::GetWAFProtect() const
{
    return m_wAFProtect;
}

void OrganizationUserInfo::SetWAFProtect(const string& _wAFProtect)
{
    m_wAFProtect = _wAFProtect;
    m_wAFProtectHasBeenSet = true;
}

bool OrganizationUserInfo::WAFProtectHasBeenSet() const
{
    return m_wAFProtectHasBeenSet;
}

string OrganizationUserInfo::GetCWPProtect() const
{
    return m_cWPProtect;
}

void OrganizationUserInfo::SetCWPProtect(const string& _cWPProtect)
{
    m_cWPProtect = _cWPProtect;
    m_cWPProtectHasBeenSet = true;
}

bool OrganizationUserInfo::CWPProtectHasBeenSet() const
{
    return m_cWPProtectHasBeenSet;
}

int64_t OrganizationUserInfo::GetEnable() const
{
    return m_enable;
}

void OrganizationUserInfo::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool OrganizationUserInfo::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string OrganizationUserInfo::GetCSIPProtect() const
{
    return m_cSIPProtect;
}

void OrganizationUserInfo::SetCSIPProtect(const string& _cSIPProtect)
{
    m_cSIPProtect = _cSIPProtect;
    m_cSIPProtectHasBeenSet = true;
}

bool OrganizationUserInfo::CSIPProtectHasBeenSet() const
{
    return m_cSIPProtectHasBeenSet;
}

int64_t OrganizationUserInfo::GetQuotaConsumer() const
{
    return m_quotaConsumer;
}

void OrganizationUserInfo::SetQuotaConsumer(const int64_t& _quotaConsumer)
{
    m_quotaConsumer = _quotaConsumer;
    m_quotaConsumerHasBeenSet = true;
}

bool OrganizationUserInfo::QuotaConsumerHasBeenSet() const
{
    return m_quotaConsumerHasBeenSet;
}

int64_t OrganizationUserInfo::GetCloudType() const
{
    return m_cloudType;
}

void OrganizationUserInfo::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool OrganizationUserInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

int64_t OrganizationUserInfo::GetSyncFrequency() const
{
    return m_syncFrequency;
}

void OrganizationUserInfo::SetSyncFrequency(const int64_t& _syncFrequency)
{
    m_syncFrequency = _syncFrequency;
    m_syncFrequencyHasBeenSet = true;
}

bool OrganizationUserInfo::SyncFrequencyHasBeenSet() const
{
    return m_syncFrequencyHasBeenSet;
}

bool OrganizationUserInfo::GetIsExpired() const
{
    return m_isExpired;
}

void OrganizationUserInfo::SetIsExpired(const bool& _isExpired)
{
    m_isExpired = _isExpired;
    m_isExpiredHasBeenSet = true;
}

bool OrganizationUserInfo::IsExpiredHasBeenSet() const
{
    return m_isExpiredHasBeenSet;
}

vector<string> OrganizationUserInfo::GetPermissionList() const
{
    return m_permissionList;
}

void OrganizationUserInfo::SetPermissionList(const vector<string>& _permissionList)
{
    m_permissionList = _permissionList;
    m_permissionListHasBeenSet = true;
}

bool OrganizationUserInfo::PermissionListHasBeenSet() const
{
    return m_permissionListHasBeenSet;
}

int64_t OrganizationUserInfo::GetAuthType() const
{
    return m_authType;
}

void OrganizationUserInfo::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool OrganizationUserInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

int64_t OrganizationUserInfo::GetTcMemberType() const
{
    return m_tcMemberType;
}

void OrganizationUserInfo::SetTcMemberType(const int64_t& _tcMemberType)
{
    m_tcMemberType = _tcMemberType;
    m_tcMemberTypeHasBeenSet = true;
}

bool OrganizationUserInfo::TcMemberTypeHasBeenSet() const
{
    return m_tcMemberTypeHasBeenSet;
}

int64_t OrganizationUserInfo::GetSubUserCount() const
{
    return m_subUserCount;
}

void OrganizationUserInfo::SetSubUserCount(const int64_t& _subUserCount)
{
    m_subUserCount = _subUserCount;
    m_subUserCountHasBeenSet = true;
}

bool OrganizationUserInfo::SubUserCountHasBeenSet() const
{
    return m_subUserCountHasBeenSet;
}

string OrganizationUserInfo::GetJoinTypeInfo() const
{
    return m_joinTypeInfo;
}

void OrganizationUserInfo::SetJoinTypeInfo(const string& _joinTypeInfo)
{
    m_joinTypeInfo = _joinTypeInfo;
    m_joinTypeInfoHasBeenSet = true;
}

bool OrganizationUserInfo::JoinTypeInfoHasBeenSet() const
{
    return m_joinTypeInfoHasBeenSet;
}


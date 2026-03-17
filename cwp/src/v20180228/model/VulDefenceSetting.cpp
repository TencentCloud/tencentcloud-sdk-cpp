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

#include <tencentcloud/cwp/v20180228/model/VulDefenceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefenceSetting::VulDefenceSetting() :
    m_strategyNameHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_threatLevelHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_supportVulNumHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_strategyActionHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_defenceTypeHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_strategyIdHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyName") && !value["StrategyName"].IsNull())
    {
        if (!value["StrategyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.StrategyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyName = string(value["StrategyName"].GetString());
        m_strategyNameHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.StrategyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = value["StrategyType"].GetUint64();
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("ThreatLevel") && !value["ThreatLevel"].IsNull())
    {
        if (!value["ThreatLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.ThreatLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_threatLevel = value["ThreatLevel"].GetUint64();
        m_threatLevelHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("SupportVulNum") && !value["SupportVulNum"].IsNull())
    {
        if (!value["SupportVulNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.SupportVulNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportVulNum = value["SupportVulNum"].GetUint64();
        m_supportVulNumHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyAction") && !value["StrategyAction"].IsNull())
    {
        if (!value["StrategyAction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.StrategyAction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyAction = value["StrategyAction"].GetUint64();
        m_strategyActionHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("DefenceType") && !value["DefenceType"].IsNull())
    {
        if (!value["DefenceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.DefenceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defenceType = value["DefenceType"].GetUint64();
        m_defenceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.InstanceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetUint64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceSetting.StrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = string(value["StrategyId"].GetString());
        m_strategyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefenceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyName.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyType, allocator);
    }

    if (m_threatLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threatLevel, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_supportVulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportVulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportVulNum, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyAction, allocator);
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

    if (m_defenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenceType, allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyId.c_str(), allocator).Move(), allocator);
    }

}


string VulDefenceSetting::GetStrategyName() const
{
    return m_strategyName;
}

void VulDefenceSetting::SetStrategyName(const string& _strategyName)
{
    m_strategyName = _strategyName;
    m_strategyNameHasBeenSet = true;
}

bool VulDefenceSetting::StrategyNameHasBeenSet() const
{
    return m_strategyNameHasBeenSet;
}

uint64_t VulDefenceSetting::GetStrategyType() const
{
    return m_strategyType;
}

void VulDefenceSetting::SetStrategyType(const uint64_t& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool VulDefenceSetting::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

uint64_t VulDefenceSetting::GetThreatLevel() const
{
    return m_threatLevel;
}

void VulDefenceSetting::SetThreatLevel(const uint64_t& _threatLevel)
{
    m_threatLevel = _threatLevel;
    m_threatLevelHasBeenSet = true;
}

bool VulDefenceSetting::ThreatLevelHasBeenSet() const
{
    return m_threatLevelHasBeenSet;
}

uint64_t VulDefenceSetting::GetScope() const
{
    return m_scope;
}

void VulDefenceSetting::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool VulDefenceSetting::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t VulDefenceSetting::GetSupportVulNum() const
{
    return m_supportVulNum;
}

void VulDefenceSetting::SetSupportVulNum(const uint64_t& _supportVulNum)
{
    m_supportVulNum = _supportVulNum;
    m_supportVulNumHasBeenSet = true;
}

bool VulDefenceSetting::SupportVulNumHasBeenSet() const
{
    return m_supportVulNumHasBeenSet;
}

uint64_t VulDefenceSetting::GetEnable() const
{
    return m_enable;
}

void VulDefenceSetting::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool VulDefenceSetting::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t VulDefenceSetting::GetAppId() const
{
    return m_appId;
}

void VulDefenceSetting::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VulDefenceSetting::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VulDefenceSetting::GetMemberId() const
{
    return m_memberId;
}

void VulDefenceSetting::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool VulDefenceSetting::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

uint64_t VulDefenceSetting::GetStrategyAction() const
{
    return m_strategyAction;
}

void VulDefenceSetting::SetStrategyAction(const uint64_t& _strategyAction)
{
    m_strategyAction = _strategyAction;
    m_strategyActionHasBeenSet = true;
}

bool VulDefenceSetting::StrategyActionHasBeenSet() const
{
    return m_strategyActionHasBeenSet;
}

string VulDefenceSetting::GetUin() const
{
    return m_uin;
}

void VulDefenceSetting::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool VulDefenceSetting::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string VulDefenceSetting::GetNickname() const
{
    return m_nickname;
}

void VulDefenceSetting::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool VulDefenceSetting::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

uint64_t VulDefenceSetting::GetDefenceType() const
{
    return m_defenceType;
}

void VulDefenceSetting::SetDefenceType(const uint64_t& _defenceType)
{
    m_defenceType = _defenceType;
    m_defenceTypeHasBeenSet = true;
}

bool VulDefenceSetting::DefenceTypeHasBeenSet() const
{
    return m_defenceTypeHasBeenSet;
}

uint64_t VulDefenceSetting::GetInstanceNum() const
{
    return m_instanceNum;
}

void VulDefenceSetting::SetInstanceNum(const uint64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool VulDefenceSetting::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string VulDefenceSetting::GetStrategyId() const
{
    return m_strategyId;
}

void VulDefenceSetting::SetStrategyId(const string& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool VulDefenceSetting::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}


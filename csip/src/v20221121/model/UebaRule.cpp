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

#include <tencentcloud/csip/v20221121/model/UebaRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

UebaRule::UebaRule() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_ruleLevelHasBeenSet(false),
    m_ruleContentHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_hitCountHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_memberIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_customRuleDetailHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome UebaRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = value["RuleLevel"].GetInt64();
        m_ruleLevelHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.RuleStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetBool();
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("HitCount") && !value["HitCount"].IsNull())
    {
        if (!value["HitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.HitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hitCount = value["HitCount"].GetUint64();
        m_hitCountHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.AppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appID = string(value["AppID"].GetString());
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("MemberID") && !value["MemberID"].IsNull())
    {
        if (!value["MemberID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.MemberID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberID = string(value["MemberID"].GetString());
        m_memberIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("CustomRuleDetail") && !value["CustomRuleDetail"].IsNull())
    {
        if (!value["CustomRuleDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.CustomRuleDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRuleDetail.Deserialize(value["CustomRuleDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRuleDetailHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UebaRule.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UebaRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_ruleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleLevel, allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_hitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitCount, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appID.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberID.c_str(), allocator).Move(), allocator);
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

    if (m_customRuleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRuleDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRuleDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

}


string UebaRule::GetRuleID() const
{
    return m_ruleID;
}

void UebaRule::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool UebaRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string UebaRule::GetRuleName() const
{
    return m_ruleName;
}

void UebaRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool UebaRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t UebaRule::GetRuleType() const
{
    return m_ruleType;
}

void UebaRule::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool UebaRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t UebaRule::GetRuleLevel() const
{
    return m_ruleLevel;
}

void UebaRule::SetRuleLevel(const int64_t& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool UebaRule::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

string UebaRule::GetRuleContent() const
{
    return m_ruleContent;
}

void UebaRule::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool UebaRule::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

bool UebaRule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void UebaRule::SetRuleStatus(const bool& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool UebaRule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

uint64_t UebaRule::GetHitCount() const
{
    return m_hitCount;
}

void UebaRule::SetHitCount(const uint64_t& _hitCount)
{
    m_hitCount = _hitCount;
    m_hitCountHasBeenSet = true;
}

bool UebaRule::HitCountHasBeenSet() const
{
    return m_hitCountHasBeenSet;
}

string UebaRule::GetAppID() const
{
    return m_appID;
}

void UebaRule::SetAppID(const string& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool UebaRule::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string UebaRule::GetMemberID() const
{
    return m_memberID;
}

void UebaRule::SetMemberID(const string& _memberID)
{
    m_memberID = _memberID;
    m_memberIDHasBeenSet = true;
}

bool UebaRule::MemberIDHasBeenSet() const
{
    return m_memberIDHasBeenSet;
}

string UebaRule::GetUin() const
{
    return m_uin;
}

void UebaRule::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool UebaRule::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string UebaRule::GetNickname() const
{
    return m_nickname;
}

void UebaRule::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool UebaRule::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

UebaCustomRule UebaRule::GetCustomRuleDetail() const
{
    return m_customRuleDetail;
}

void UebaRule::SetCustomRuleDetail(const UebaCustomRule& _customRuleDetail)
{
    m_customRuleDetail = _customRuleDetail;
    m_customRuleDetailHasBeenSet = true;
}

bool UebaRule::CustomRuleDetailHasBeenSet() const
{
    return m_customRuleDetailHasBeenSet;
}

int64_t UebaRule::GetCloudType() const
{
    return m_cloudType;
}

void UebaRule::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool UebaRule::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}


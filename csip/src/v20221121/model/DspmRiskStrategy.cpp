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

#include <tencentcloud/csip/v20221121/model/DspmRiskStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmRiskStrategy::DspmRiskStrategy() :
    m_strategyTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hitCountHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_strategyIdHasBeenSet(false)
{
}

CoreInternalOutcome DspmRiskStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StrategyCategory") && !value["StrategyCategory"].IsNull())
    {
        if (!value["StrategyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.StrategyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCategory = string(value["StrategyCategory"].GetString());
        m_strategyCategoryHasBeenSet = true;
    }

    if (value.HasMember("IsEnabled") && !value["IsEnabled"].IsNull())
    {
        if (!value["IsEnabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.IsEnabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEnabled = value["IsEnabled"].GetInt64();
        m_isEnabledHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("HitCount") && !value["HitCount"].IsNull())
    {
        if (!value["HitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.HitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitCount = value["HitCount"].GetInt64();
        m_hitCountHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("StrategyId") && !value["StrategyId"].IsNull())
    {
        if (!value["StrategyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRiskStrategy.StrategyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyId = value["StrategyId"].GetUint64();
        m_strategyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmRiskStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_hitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitCount, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyId, allocator);
    }

}


string DspmRiskStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void DspmRiskStrategy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool DspmRiskStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DspmRiskStrategy::GetName() const
{
    return m_name;
}

void DspmRiskStrategy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmRiskStrategy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmRiskStrategy::GetStrategyCategory() const
{
    return m_strategyCategory;
}

void DspmRiskStrategy::SetStrategyCategory(const string& _strategyCategory)
{
    m_strategyCategory = _strategyCategory;
    m_strategyCategoryHasBeenSet = true;
}

bool DspmRiskStrategy::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}

int64_t DspmRiskStrategy::GetIsEnabled() const
{
    return m_isEnabled;
}

void DspmRiskStrategy::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool DspmRiskStrategy::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string DspmRiskStrategy::GetRiskLevel() const
{
    return m_riskLevel;
}

void DspmRiskStrategy::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DspmRiskStrategy::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DspmRiskStrategy::GetRule() const
{
    return m_rule;
}

void DspmRiskStrategy::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool DspmRiskStrategy::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string DspmRiskStrategy::GetRemark() const
{
    return m_remark;
}

void DspmRiskStrategy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmRiskStrategy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DspmRiskStrategy::GetDescription() const
{
    return m_description;
}

void DspmRiskStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspmRiskStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspmRiskStrategy::GetHitCount() const
{
    return m_hitCount;
}

void DspmRiskStrategy::SetHitCount(const int64_t& _hitCount)
{
    m_hitCount = _hitCount;
    m_hitCountHasBeenSet = true;
}

bool DspmRiskStrategy::HitCountHasBeenSet() const
{
    return m_hitCountHasBeenSet;
}

string DspmRiskStrategy::GetRiskType() const
{
    return m_riskType;
}

void DspmRiskStrategy::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DspmRiskStrategy::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

uint64_t DspmRiskStrategy::GetAppId() const
{
    return m_appId;
}

void DspmRiskStrategy::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmRiskStrategy::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmRiskStrategy::GetNickName() const
{
    return m_nickName;
}

void DspmRiskStrategy::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmRiskStrategy::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmRiskStrategy::GetUin() const
{
    return m_uin;
}

void DspmRiskStrategy::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmRiskStrategy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t DspmRiskStrategy::GetStrategyId() const
{
    return m_strategyId;
}

void DspmRiskStrategy::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool DspmRiskStrategy::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}


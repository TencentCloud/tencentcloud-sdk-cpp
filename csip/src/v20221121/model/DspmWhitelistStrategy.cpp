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

#include <tencentcloud/csip/v20221121/model/DspmWhitelistStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmWhitelistStrategy::DspmWhitelistStrategy() :
    m_whitelistStrategyIdHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DspmWhitelistStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhitelistStrategyId") && !value["WhitelistStrategyId"].IsNull())
    {
        if (!value["WhitelistStrategyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.WhitelistStrategyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whitelistStrategyId = string(value["WhitelistStrategyId"].GetString());
        m_whitelistStrategyIdHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StrategyCategory") && !value["StrategyCategory"].IsNull())
    {
        if (!value["StrategyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.StrategyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCategory = string(value["StrategyCategory"].GetString());
        m_strategyCategoryHasBeenSet = true;
    }

    if (value.HasMember("Rule") && !value["Rule"].IsNull())
    {
        if (!value["Rule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Rule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rule = string(value["Rule"].GetString());
        m_ruleHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmWhitelistStrategy.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmWhitelistStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whitelistStrategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistStrategyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whitelistStrategyId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

}


string DspmWhitelistStrategy::GetWhitelistStrategyId() const
{
    return m_whitelistStrategyId;
}

void DspmWhitelistStrategy::SetWhitelistStrategyId(const string& _whitelistStrategyId)
{
    m_whitelistStrategyId = _whitelistStrategyId;
    m_whitelistStrategyIdHasBeenSet = true;
}

bool DspmWhitelistStrategy::WhitelistStrategyIdHasBeenSet() const
{
    return m_whitelistStrategyIdHasBeenSet;
}

string DspmWhitelistStrategy::GetStrategyType() const
{
    return m_strategyType;
}

void DspmWhitelistStrategy::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool DspmWhitelistStrategy::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DspmWhitelistStrategy::GetName() const
{
    return m_name;
}

void DspmWhitelistStrategy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmWhitelistStrategy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspmWhitelistStrategy::GetStrategyCategory() const
{
    return m_strategyCategory;
}

void DspmWhitelistStrategy::SetStrategyCategory(const string& _strategyCategory)
{
    m_strategyCategory = _strategyCategory;
    m_strategyCategoryHasBeenSet = true;
}

bool DspmWhitelistStrategy::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}

string DspmWhitelistStrategy::GetRule() const
{
    return m_rule;
}

void DspmWhitelistStrategy::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool DspmWhitelistStrategy::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string DspmWhitelistStrategy::GetRemark() const
{
    return m_remark;
}

void DspmWhitelistStrategy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmWhitelistStrategy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DspmWhitelistStrategy::GetModifyTime() const
{
    return m_modifyTime;
}

void DspmWhitelistStrategy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DspmWhitelistStrategy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DspmWhitelistStrategy::GetAssetId() const
{
    return m_assetId;
}

void DspmWhitelistStrategy::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmWhitelistStrategy::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmWhitelistStrategy::GetAccount() const
{
    return m_account;
}

void DspmWhitelistStrategy::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DspmWhitelistStrategy::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DspmWhitelistStrategy::GetHost() const
{
    return m_host;
}

void DspmWhitelistStrategy::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmWhitelistStrategy::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DspmWhitelistStrategy::GetDescription() const
{
    return m_description;
}

void DspmWhitelistStrategy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspmWhitelistStrategy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DspmWhitelistStrategy::GetRiskType() const
{
    return m_riskType;
}

void DspmWhitelistStrategy::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DspmWhitelistStrategy::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

uint64_t DspmWhitelistStrategy::GetAppId() const
{
    return m_appId;
}

void DspmWhitelistStrategy::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmWhitelistStrategy::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmWhitelistStrategy::GetNickName() const
{
    return m_nickName;
}

void DspmWhitelistStrategy::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmWhitelistStrategy::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmWhitelistStrategy::GetUin() const
{
    return m_uin;
}

void DspmWhitelistStrategy::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmWhitelistStrategy::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/DspmRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmRisk::DspmRisk() :
    m_riskIdHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskNameEnHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetRegionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_identifyIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_personHasBeenSet(false),
    m_riskDataHasBeenSet(false),
    m_isAssetManagerHasBeenSet(false),
    m_dataBeginTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DspmRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("RiskName") && !value["RiskName"].IsNull())
    {
        if (!value["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(value["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (value.HasMember("RiskNameEn") && !value["RiskNameEn"].IsNull())
    {
        if (!value["RiskNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskNameEn = string(value["RiskNameEn"].GetString());
        m_riskNameEnHasBeenSet = true;
    }

    if (value.HasMember("StrategyType") && !value["StrategyType"].IsNull())
    {
        if (!value["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(value["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (value.HasMember("StrategyCategory") && !value["StrategyCategory"].IsNull())
    {
        if (!value["StrategyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.StrategyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCategory = string(value["StrategyCategory"].GetString());
        m_strategyCategoryHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetRegion") && !value["AssetRegion"].IsNull())
    {
        if (!value["AssetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AssetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRegion = string(value["AssetRegion"].GetString());
        m_assetRegionHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(value["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (value.HasMember("RiskData") && !value["RiskData"].IsNull())
    {
        if (!value["RiskData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskData = string(value["RiskData"].GetString());
        m_riskDataHasBeenSet = true;
    }

    if (value.HasMember("IsAssetManager") && !value["IsAssetManager"].IsNull())
    {
        if (!value["IsAssetManager"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.IsAssetManager` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAssetManager = value["IsAssetManager"].GetInt64();
        m_isAssetManagerHasBeenSet = true;
    }

    if (value.HasMember("DataBeginTime") && !value["DataBeginTime"].IsNull())
    {
        if (!value["DataBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.DataBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBeginTime = string(value["DataBeginTime"].GetString());
        m_dataBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("DataEndTime") && !value["DataEndTime"].IsNull())
    {
        if (!value["DataEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.DataEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEndTime = string(value["DataEndTime"].GetString());
        m_dataEndTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRegion.c_str(), allocator).Move(), allocator);
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

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskData.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssetManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssetManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssetManager, allocator);
    }

    if (m_dataBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEndTime.c_str(), allocator).Move(), allocator);
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


string DspmRisk::GetRiskId() const
{
    return m_riskId;
}

void DspmRisk::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool DspmRisk::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string DspmRisk::GetRiskName() const
{
    return m_riskName;
}

void DspmRisk::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool DspmRisk::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string DspmRisk::GetRiskNameEn() const
{
    return m_riskNameEn;
}

void DspmRisk::SetRiskNameEn(const string& _riskNameEn)
{
    m_riskNameEn = _riskNameEn;
    m_riskNameEnHasBeenSet = true;
}

bool DspmRisk::RiskNameEnHasBeenSet() const
{
    return m_riskNameEnHasBeenSet;
}

string DspmRisk::GetStrategyType() const
{
    return m_strategyType;
}

void DspmRisk::SetStrategyType(const string& _strategyType)
{
    m_strategyType = _strategyType;
    m_strategyTypeHasBeenSet = true;
}

bool DspmRisk::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DspmRisk::GetStrategyCategory() const
{
    return m_strategyCategory;
}

void DspmRisk::SetStrategyCategory(const string& _strategyCategory)
{
    m_strategyCategory = _strategyCategory;
    m_strategyCategoryHasBeenSet = true;
}

bool DspmRisk::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}

string DspmRisk::GetRiskLevel() const
{
    return m_riskLevel;
}

void DspmRisk::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool DspmRisk::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DspmRisk::GetAssetId() const
{
    return m_assetId;
}

void DspmRisk::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmRisk::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmRisk::GetAssetType() const
{
    return m_assetType;
}

void DspmRisk::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DspmRisk::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DspmRisk::GetAssetName() const
{
    return m_assetName;
}

void DspmRisk::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool DspmRisk::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DspmRisk::GetAssetRegion() const
{
    return m_assetRegion;
}

void DspmRisk::SetAssetRegion(const string& _assetRegion)
{
    m_assetRegion = _assetRegion;
    m_assetRegionHasBeenSet = true;
}

bool DspmRisk::AssetRegionHasBeenSet() const
{
    return m_assetRegionHasBeenSet;
}

string DspmRisk::GetAccount() const
{
    return m_account;
}

void DspmRisk::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DspmRisk::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DspmRisk::GetHost() const
{
    return m_host;
}

void DspmRisk::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmRisk::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

int64_t DspmRisk::GetAccountType() const
{
    return m_accountType;
}

void DspmRisk::SetAccountType(const int64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool DspmRisk::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string DspmRisk::GetDetectTime() const
{
    return m_detectTime;
}

void DspmRisk::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool DspmRisk::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

int64_t DspmRisk::GetStatus() const
{
    return m_status;
}

void DspmRisk::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspmRisk::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmRisk::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmRisk::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

DspmUinUser DspmRisk::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmRisk::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmRisk::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmPersonUser DspmRisk::GetPerson() const
{
    return m_person;
}

void DspmRisk::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmRisk::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

string DspmRisk::GetRiskData() const
{
    return m_riskData;
}

void DspmRisk::SetRiskData(const string& _riskData)
{
    m_riskData = _riskData;
    m_riskDataHasBeenSet = true;
}

bool DspmRisk::RiskDataHasBeenSet() const
{
    return m_riskDataHasBeenSet;
}

int64_t DspmRisk::GetIsAssetManager() const
{
    return m_isAssetManager;
}

void DspmRisk::SetIsAssetManager(const int64_t& _isAssetManager)
{
    m_isAssetManager = _isAssetManager;
    m_isAssetManagerHasBeenSet = true;
}

bool DspmRisk::IsAssetManagerHasBeenSet() const
{
    return m_isAssetManagerHasBeenSet;
}

string DspmRisk::GetDataBeginTime() const
{
    return m_dataBeginTime;
}

void DspmRisk::SetDataBeginTime(const string& _dataBeginTime)
{
    m_dataBeginTime = _dataBeginTime;
    m_dataBeginTimeHasBeenSet = true;
}

bool DspmRisk::DataBeginTimeHasBeenSet() const
{
    return m_dataBeginTimeHasBeenSet;
}

string DspmRisk::GetDataEndTime() const
{
    return m_dataEndTime;
}

void DspmRisk::SetDataEndTime(const string& _dataEndTime)
{
    m_dataEndTime = _dataEndTime;
    m_dataEndTimeHasBeenSet = true;
}

bool DspmRisk::DataEndTimeHasBeenSet() const
{
    return m_dataEndTimeHasBeenSet;
}

string DspmRisk::GetRiskType() const
{
    return m_riskType;
}

void DspmRisk::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DspmRisk::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

uint64_t DspmRisk::GetAppId() const
{
    return m_appId;
}

void DspmRisk::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DspmRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DspmRisk::GetNickName() const
{
    return m_nickName;
}

void DspmRisk::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool DspmRisk::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string DspmRisk::GetUin() const
{
    return m_uin;
}

void DspmRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DspmRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/PublicAssetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

PublicAssetInfo::PublicAssetInfo() :
    m_appIDHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_cloudAccountIDHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressTypeHasBeenSet(false),
    m_resolvedAddressHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_firstSyncTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_criticalRiskCountHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_mediumRiskCountHasBeenSet(false),
    m_lowRiskCountHasBeenSet(false),
    m_assetRIDHasBeenSet(false),
    m_customTagsHasBeenSet(false),
    m_assetTypeIconURLHasBeenSet(false)
{
}

CoreInternalOutcome PublicAssetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountID") && !value["CloudAccountID"].IsNull())
    {
        if (!value["CloudAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.CloudAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountID = string(value["CloudAccountID"].GetString());
        m_cloudAccountIDHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AddressType") && !value["AddressType"].IsNull())
    {
        if (!value["AddressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AddressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressType = string(value["AddressType"].GetString());
        m_addressTypeHasBeenSet = true;
    }

    if (value.HasMember("ResolvedAddress") && !value["ResolvedAddress"].IsNull())
    {
        if (!value["ResolvedAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.ResolvedAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["ResolvedAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resolvedAddress.push_back((*itr).GetString());
        }
        m_resolvedAddressHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.ProtectStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetUint64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("FirstSyncTime") && !value["FirstSyncTime"].IsNull())
    {
        if (!value["FirstSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.FirstSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSyncTime = string(value["FirstSyncTime"].GetString());
        m_firstSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CriticalRiskCount") && !value["CriticalRiskCount"].IsNull())
    {
        if (!value["CriticalRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.CriticalRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRiskCount = value["CriticalRiskCount"].GetUint64();
        m_criticalRiskCountHasBeenSet = true;
    }

    if (value.HasMember("HighRiskCount") && !value["HighRiskCount"].IsNull())
    {
        if (!value["HighRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.HighRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = value["HighRiskCount"].GetUint64();
        m_highRiskCountHasBeenSet = true;
    }

    if (value.HasMember("MediumRiskCount") && !value["MediumRiskCount"].IsNull())
    {
        if (!value["MediumRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.MediumRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumRiskCount = value["MediumRiskCount"].GetUint64();
        m_mediumRiskCountHasBeenSet = true;
    }

    if (value.HasMember("LowRiskCount") && !value["LowRiskCount"].IsNull())
    {
        if (!value["LowRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.LowRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowRiskCount = value["LowRiskCount"].GetUint64();
        m_lowRiskCountHasBeenSet = true;
    }

    if (value.HasMember("AssetRID") && !value["AssetRID"].IsNull())
    {
        if (!value["AssetRID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetRID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRID = string(value["AssetRID"].GetString());
        m_assetRIDHasBeenSet = true;
    }

    if (value.HasMember("CustomTags") && !value["CustomTags"].IsNull())
    {
        if (!value["CustomTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.CustomTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customTags.push_back(item);
        }
        m_customTagsHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeIconURL") && !value["AssetTypeIconURL"].IsNull())
    {
        if (!value["AssetTypeIconURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAssetInfo.AssetTypeIconURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeIconURL = string(value["AssetTypeIconURL"].GetString());
        m_assetTypeIconURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicAssetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_providerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountID.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }

    if (m_resolvedAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolvedAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resolvedAddress.begin(); itr != m_resolvedAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_protectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectStatus, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_firstSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSyncTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_criticalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CriticalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_criticalRiskCount, allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_mediumRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumRiskCount, allocator);
    }

    if (m_lowRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowRiskCount, allocator);
    }

    if (m_assetRIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRID.c_str(), allocator).Move(), allocator);
    }

    if (m_customTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customTags.begin(); itr != m_customTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetTypeIconURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeIconURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeIconURL.c_str(), allocator).Move(), allocator);
    }

}


uint64_t PublicAssetInfo::GetAppID() const
{
    return m_appID;
}

void PublicAssetInfo::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool PublicAssetInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string PublicAssetInfo::GetProvider() const
{
    return m_provider;
}

void PublicAssetInfo::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool PublicAssetInfo::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string PublicAssetInfo::GetProviderName() const
{
    return m_providerName;
}

void PublicAssetInfo::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool PublicAssetInfo::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

string PublicAssetInfo::GetCloudAccountID() const
{
    return m_cloudAccountID;
}

void PublicAssetInfo::SetCloudAccountID(const string& _cloudAccountID)
{
    m_cloudAccountID = _cloudAccountID;
    m_cloudAccountIDHasBeenSet = true;
}

bool PublicAssetInfo::CloudAccountIDHasBeenSet() const
{
    return m_cloudAccountIDHasBeenSet;
}

string PublicAssetInfo::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void PublicAssetInfo::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool PublicAssetInfo::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string PublicAssetInfo::GetAssetID() const
{
    return m_assetID;
}

void PublicAssetInfo::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool PublicAssetInfo::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string PublicAssetInfo::GetAssetName() const
{
    return m_assetName;
}

void PublicAssetInfo::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool PublicAssetInfo::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string PublicAssetInfo::GetAssetType() const
{
    return m_assetType;
}

void PublicAssetInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool PublicAssetInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string PublicAssetInfo::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void PublicAssetInfo::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool PublicAssetInfo::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

vector<AssetTag> PublicAssetInfo::GetTags() const
{
    return m_tags;
}

void PublicAssetInfo::SetTags(const vector<AssetTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PublicAssetInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string PublicAssetInfo::GetAddress() const
{
    return m_address;
}

void PublicAssetInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool PublicAssetInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string PublicAssetInfo::GetAddressType() const
{
    return m_addressType;
}

void PublicAssetInfo::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool PublicAssetInfo::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}

vector<string> PublicAssetInfo::GetResolvedAddress() const
{
    return m_resolvedAddress;
}

void PublicAssetInfo::SetResolvedAddress(const vector<string>& _resolvedAddress)
{
    m_resolvedAddress = _resolvedAddress;
    m_resolvedAddressHasBeenSet = true;
}

bool PublicAssetInfo::ResolvedAddressHasBeenSet() const
{
    return m_resolvedAddressHasBeenSet;
}

string PublicAssetInfo::GetRegion() const
{
    return m_region;
}

void PublicAssetInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PublicAssetInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

uint64_t PublicAssetInfo::GetProtectStatus() const
{
    return m_protectStatus;
}

void PublicAssetInfo::SetProtectStatus(const uint64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool PublicAssetInfo::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

uint64_t PublicAssetInfo::GetRiskCount() const
{
    return m_riskCount;
}

void PublicAssetInfo::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool PublicAssetInfo::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t PublicAssetInfo::GetAlarmCount() const
{
    return m_alarmCount;
}

void PublicAssetInfo::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool PublicAssetInfo::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string PublicAssetInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void PublicAssetInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool PublicAssetInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string PublicAssetInfo::GetFirstSyncTime() const
{
    return m_firstSyncTime;
}

void PublicAssetInfo::SetFirstSyncTime(const string& _firstSyncTime)
{
    m_firstSyncTime = _firstSyncTime;
    m_firstSyncTimeHasBeenSet = true;
}

bool PublicAssetInfo::FirstSyncTimeHasBeenSet() const
{
    return m_firstSyncTimeHasBeenSet;
}

string PublicAssetInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PublicAssetInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PublicAssetInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t PublicAssetInfo::GetCriticalRiskCount() const
{
    return m_criticalRiskCount;
}

void PublicAssetInfo::SetCriticalRiskCount(const uint64_t& _criticalRiskCount)
{
    m_criticalRiskCount = _criticalRiskCount;
    m_criticalRiskCountHasBeenSet = true;
}

bool PublicAssetInfo::CriticalRiskCountHasBeenSet() const
{
    return m_criticalRiskCountHasBeenSet;
}

uint64_t PublicAssetInfo::GetHighRiskCount() const
{
    return m_highRiskCount;
}

void PublicAssetInfo::SetHighRiskCount(const uint64_t& _highRiskCount)
{
    m_highRiskCount = _highRiskCount;
    m_highRiskCountHasBeenSet = true;
}

bool PublicAssetInfo::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

uint64_t PublicAssetInfo::GetMediumRiskCount() const
{
    return m_mediumRiskCount;
}

void PublicAssetInfo::SetMediumRiskCount(const uint64_t& _mediumRiskCount)
{
    m_mediumRiskCount = _mediumRiskCount;
    m_mediumRiskCountHasBeenSet = true;
}

bool PublicAssetInfo::MediumRiskCountHasBeenSet() const
{
    return m_mediumRiskCountHasBeenSet;
}

uint64_t PublicAssetInfo::GetLowRiskCount() const
{
    return m_lowRiskCount;
}

void PublicAssetInfo::SetLowRiskCount(const uint64_t& _lowRiskCount)
{
    m_lowRiskCount = _lowRiskCount;
    m_lowRiskCountHasBeenSet = true;
}

bool PublicAssetInfo::LowRiskCountHasBeenSet() const
{
    return m_lowRiskCountHasBeenSet;
}

string PublicAssetInfo::GetAssetRID() const
{
    return m_assetRID;
}

void PublicAssetInfo::SetAssetRID(const string& _assetRID)
{
    m_assetRID = _assetRID;
    m_assetRIDHasBeenSet = true;
}

bool PublicAssetInfo::AssetRIDHasBeenSet() const
{
    return m_assetRIDHasBeenSet;
}

vector<CustomTag> PublicAssetInfo::GetCustomTags() const
{
    return m_customTags;
}

void PublicAssetInfo::SetCustomTags(const vector<CustomTag>& _customTags)
{
    m_customTags = _customTags;
    m_customTagsHasBeenSet = true;
}

bool PublicAssetInfo::CustomTagsHasBeenSet() const
{
    return m_customTagsHasBeenSet;
}

string PublicAssetInfo::GetAssetTypeIconURL() const
{
    return m_assetTypeIconURL;
}

void PublicAssetInfo::SetAssetTypeIconURL(const string& _assetTypeIconURL)
{
    m_assetTypeIconURL = _assetTypeIconURL;
    m_assetTypeIconURLHasBeenSet = true;
}

bool PublicAssetInfo::AssetTypeIconURLHasBeenSet() const
{
    return m_assetTypeIconURLHasBeenSet;
}


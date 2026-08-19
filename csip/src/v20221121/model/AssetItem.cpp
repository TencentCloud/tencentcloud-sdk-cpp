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

#include <tencentcloud/csip/v20221121/model/AssetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetItem::AssetItem() :
    m_appIDHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_providerNameHasBeenSet(false),
    m_cloudAccountIDHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_assetStatusHasBeenSet(false),
    m_publicExposeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_privateDomainHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_firstSyncTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_criticalRiskCountHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_mediumRiskCountHasBeenSet(false),
    m_lowRiskCountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_assetRIDHasBeenSet(false),
    m_customTagsHasBeenSet(false),
    m_assetTypeIconURLHasBeenSet(false)
{
}

CoreInternalOutcome AssetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountID") && !value["CloudAccountID"].IsNull())
    {
        if (!value["CloudAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.CloudAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountID = string(value["CloudAccountID"].GetString());
        m_cloudAccountIDHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AssetStatus") && !value["AssetStatus"].IsNull())
    {
        if (!value["AssetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatus = string(value["AssetStatus"].GetString());
        m_assetStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicExpose") && !value["PublicExpose"].IsNull())
    {
        if (!value["PublicExpose"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.PublicExpose` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicExpose = value["PublicExpose"].GetUint64();
        m_publicExposeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetItem.Tags` is not array type"));

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

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("PrivateDomain") && !value["PrivateDomain"].IsNull())
    {
        if (!value["PrivateDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.PrivateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateDomain = string(value["PrivateDomain"].GetString());
        m_privateDomainHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.ProtectStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetUint64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("FirstSyncTime") && !value["FirstSyncTime"].IsNull())
    {
        if (!value["FirstSyncTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.FirstSyncTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSyncTime = string(value["FirstSyncTime"].GetString());
        m_firstSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("CriticalRiskCount") && !value["CriticalRiskCount"].IsNull())
    {
        if (!value["CriticalRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.CriticalRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_criticalRiskCount = value["CriticalRiskCount"].GetUint64();
        m_criticalRiskCountHasBeenSet = true;
    }

    if (value.HasMember("HighRiskCount") && !value["HighRiskCount"].IsNull())
    {
        if (!value["HighRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.HighRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = value["HighRiskCount"].GetUint64();
        m_highRiskCountHasBeenSet = true;
    }

    if (value.HasMember("MediumRiskCount") && !value["MediumRiskCount"].IsNull())
    {
        if (!value["MediumRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.MediumRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumRiskCount = value["MediumRiskCount"].GetUint64();
        m_mediumRiskCountHasBeenSet = true;
    }

    if (value.HasMember("LowRiskCount") && !value["LowRiskCount"].IsNull())
    {
        if (!value["LowRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.LowRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lowRiskCount = value["LowRiskCount"].GetUint64();
        m_lowRiskCountHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("AssetRID") && !value["AssetRID"].IsNull())
    {
        if (!value["AssetRID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetRID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRID = string(value["AssetRID"].GetString());
        m_assetRIDHasBeenSet = true;
    }

    if (value.HasMember("CustomTags") && !value["CustomTags"].IsNull())
    {
        if (!value["CustomTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetItem.CustomTags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AssetItem.AssetTypeIconURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeIconURL = string(value["AssetTypeIconURL"].GetString());
        m_assetTypeIconURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_assetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicExposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicExpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicExpose, allocator);
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

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIP.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_privateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateDomain.c_str(), allocator).Move(), allocator);
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

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
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


uint64_t AssetItem::GetAppID() const
{
    return m_appID;
}

void AssetItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AssetItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AssetItem::GetProvider() const
{
    return m_provider;
}

void AssetItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool AssetItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string AssetItem::GetProviderName() const
{
    return m_providerName;
}

void AssetItem::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool AssetItem::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

string AssetItem::GetCloudAccountID() const
{
    return m_cloudAccountID;
}

void AssetItem::SetCloudAccountID(const string& _cloudAccountID)
{
    m_cloudAccountID = _cloudAccountID;
    m_cloudAccountIDHasBeenSet = true;
}

bool AssetItem::CloudAccountIDHasBeenSet() const
{
    return m_cloudAccountIDHasBeenSet;
}

string AssetItem::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void AssetItem::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool AssetItem::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string AssetItem::GetAssetID() const
{
    return m_assetID;
}

void AssetItem::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool AssetItem::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string AssetItem::GetAssetName() const
{
    return m_assetName;
}

void AssetItem::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetItem::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string AssetItem::GetAssetType() const
{
    return m_assetType;
}

void AssetItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetItem::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void AssetItem::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool AssetItem::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

string AssetItem::GetAssetStatus() const
{
    return m_assetStatus;
}

void AssetItem::SetAssetStatus(const string& _assetStatus)
{
    m_assetStatus = _assetStatus;
    m_assetStatusHasBeenSet = true;
}

bool AssetItem::AssetStatusHasBeenSet() const
{
    return m_assetStatusHasBeenSet;
}

uint64_t AssetItem::GetPublicExpose() const
{
    return m_publicExpose;
}

void AssetItem::SetPublicExpose(const uint64_t& _publicExpose)
{
    m_publicExpose = _publicExpose;
    m_publicExposeHasBeenSet = true;
}

bool AssetItem::PublicExposeHasBeenSet() const
{
    return m_publicExposeHasBeenSet;
}

vector<AssetTag> AssetItem::GetTags() const
{
    return m_tags;
}

void AssetItem::SetTags(const vector<AssetTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AssetItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string AssetItem::GetPublicIP() const
{
    return m_publicIP;
}

void AssetItem::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool AssetItem::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string AssetItem::GetPrivateIP() const
{
    return m_privateIP;
}

void AssetItem::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool AssetItem::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string AssetItem::GetPublicDomain() const
{
    return m_publicDomain;
}

void AssetItem::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool AssetItem::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string AssetItem::GetPrivateDomain() const
{
    return m_privateDomain;
}

void AssetItem::SetPrivateDomain(const string& _privateDomain)
{
    m_privateDomain = _privateDomain;
    m_privateDomainHasBeenSet = true;
}

bool AssetItem::PrivateDomainHasBeenSet() const
{
    return m_privateDomainHasBeenSet;
}

uint64_t AssetItem::GetProtectStatus() const
{
    return m_protectStatus;
}

void AssetItem::SetProtectStatus(const uint64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool AssetItem::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

uint64_t AssetItem::GetRiskCount() const
{
    return m_riskCount;
}

void AssetItem::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool AssetItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t AssetItem::GetAlarmCount() const
{
    return m_alarmCount;
}

void AssetItem::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool AssetItem::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string AssetItem::GetCreatedAt() const
{
    return m_createdAt;
}

void AssetItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AssetItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string AssetItem::GetFirstSyncTime() const
{
    return m_firstSyncTime;
}

void AssetItem::SetFirstSyncTime(const string& _firstSyncTime)
{
    m_firstSyncTime = _firstSyncTime;
    m_firstSyncTimeHasBeenSet = true;
}

bool AssetItem::FirstSyncTimeHasBeenSet() const
{
    return m_firstSyncTimeHasBeenSet;
}

string AssetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetItem::GetOsName() const
{
    return m_osName;
}

void AssetItem::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool AssetItem::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

uint64_t AssetItem::GetCriticalRiskCount() const
{
    return m_criticalRiskCount;
}

void AssetItem::SetCriticalRiskCount(const uint64_t& _criticalRiskCount)
{
    m_criticalRiskCount = _criticalRiskCount;
    m_criticalRiskCountHasBeenSet = true;
}

bool AssetItem::CriticalRiskCountHasBeenSet() const
{
    return m_criticalRiskCountHasBeenSet;
}

uint64_t AssetItem::GetHighRiskCount() const
{
    return m_highRiskCount;
}

void AssetItem::SetHighRiskCount(const uint64_t& _highRiskCount)
{
    m_highRiskCount = _highRiskCount;
    m_highRiskCountHasBeenSet = true;
}

bool AssetItem::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

uint64_t AssetItem::GetMediumRiskCount() const
{
    return m_mediumRiskCount;
}

void AssetItem::SetMediumRiskCount(const uint64_t& _mediumRiskCount)
{
    m_mediumRiskCount = _mediumRiskCount;
    m_mediumRiskCountHasBeenSet = true;
}

bool AssetItem::MediumRiskCountHasBeenSet() const
{
    return m_mediumRiskCountHasBeenSet;
}

uint64_t AssetItem::GetLowRiskCount() const
{
    return m_lowRiskCount;
}

void AssetItem::SetLowRiskCount(const uint64_t& _lowRiskCount)
{
    m_lowRiskCount = _lowRiskCount;
    m_lowRiskCountHasBeenSet = true;
}

bool AssetItem::LowRiskCountHasBeenSet() const
{
    return m_lowRiskCountHasBeenSet;
}

string AssetItem::GetRegion() const
{
    return m_region;
}

void AssetItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AssetItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AssetItem::GetRegionName() const
{
    return m_regionName;
}

void AssetItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool AssetItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string AssetItem::GetAssetRID() const
{
    return m_assetRID;
}

void AssetItem::SetAssetRID(const string& _assetRID)
{
    m_assetRID = _assetRID;
    m_assetRIDHasBeenSet = true;
}

bool AssetItem::AssetRIDHasBeenSet() const
{
    return m_assetRIDHasBeenSet;
}

vector<CustomTag> AssetItem::GetCustomTags() const
{
    return m_customTags;
}

void AssetItem::SetCustomTags(const vector<CustomTag>& _customTags)
{
    m_customTags = _customTags;
    m_customTagsHasBeenSet = true;
}

bool AssetItem::CustomTagsHasBeenSet() const
{
    return m_customTagsHasBeenSet;
}

string AssetItem::GetAssetTypeIconURL() const
{
    return m_assetTypeIconURL;
}

void AssetItem::SetAssetTypeIconURL(const string& _assetTypeIconURL)
{
    m_assetTypeIconURL = _assetTypeIconURL;
    m_assetTypeIconURLHasBeenSet = true;
}

bool AssetItem::AssetTypeIconURLHasBeenSet() const
{
    return m_assetTypeIconURLHasBeenSet;
}


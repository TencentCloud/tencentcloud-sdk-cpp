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

#include <tencentcloud/csip/v20221121/model/AssetDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetDetailItem::AssetDetailItem() :
    m_appIDHasBeenSet(false),
    m_cloudAccountNameHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityGroupIDsHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_privateDomainHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_customTagsHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_assetTypeIconURLHasBeenSet(false),
    m_assetRIDHasBeenSet(false)
{
}

CoreInternalOutcome AssetDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("CloudAccountName") && !value["CloudAccountName"].IsNull())
    {
        if (!value["CloudAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.CloudAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudAccountName = string(value["CloudAccountName"].GetString());
        m_cloudAccountNameHasBeenSet = true;
    }

    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.Tags` is not array type"));

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

    if (value.HasMember("SecurityGroupIDs") && !value["SecurityGroupIDs"].IsNull())
    {
        if (!value["SecurityGroupIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.SecurityGroupIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIDs.push_back((*itr).GetString());
        }
        m_securityGroupIDsHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("PrivateDomain") && !value["PrivateDomain"].IsNull())
    {
        if (!value["PrivateDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.PrivateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateDomain = string(value["PrivateDomain"].GetString());
        m_privateDomainHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("CustomTags") && !value["CustomTags"].IsNull())
    {
        if (!value["CustomTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.CustomTags` is not array type"));

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

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeIconURL") && !value["AssetTypeIconURL"].IsNull())
    {
        if (!value["AssetTypeIconURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetTypeIconURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeIconURL = string(value["AssetTypeIconURL"].GetString());
        m_assetTypeIconURLHasBeenSet = true;
    }

    if (value.HasMember("AssetRID") && !value["AssetRID"].IsNull())
    {
        if (!value["AssetRID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDetailItem.AssetRID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRID = string(value["AssetRID"].GetString());
        m_assetRIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
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

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
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

    if (m_securityGroupIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIDs.begin(); itr != m_securityGroupIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
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

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeIconURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeIconURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeIconURL.c_str(), allocator).Move(), allocator);
    }

    if (m_assetRIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRID.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AssetDetailItem::GetAppID() const
{
    return m_appID;
}

void AssetDetailItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AssetDetailItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AssetDetailItem::GetCloudAccountName() const
{
    return m_cloudAccountName;
}

void AssetDetailItem::SetCloudAccountName(const string& _cloudAccountName)
{
    m_cloudAccountName = _cloudAccountName;
    m_cloudAccountNameHasBeenSet = true;
}

bool AssetDetailItem::CloudAccountNameHasBeenSet() const
{
    return m_cloudAccountNameHasBeenSet;
}

string AssetDetailItem::GetAssetID() const
{
    return m_assetID;
}

void AssetDetailItem::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool AssetDetailItem::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string AssetDetailItem::GetAssetType() const
{
    return m_assetType;
}

void AssetDetailItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetDetailItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<AssetTag> AssetDetailItem::GetTags() const
{
    return m_tags;
}

void AssetDetailItem::SetTags(const vector<AssetTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool AssetDetailItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> AssetDetailItem::GetSecurityGroupIDs() const
{
    return m_securityGroupIDs;
}

void AssetDetailItem::SetSecurityGroupIDs(const vector<string>& _securityGroupIDs)
{
    m_securityGroupIDs = _securityGroupIDs;
    m_securityGroupIDsHasBeenSet = true;
}

bool AssetDetailItem::SecurityGroupIDsHasBeenSet() const
{
    return m_securityGroupIDsHasBeenSet;
}

string AssetDetailItem::GetPublicIP() const
{
    return m_publicIP;
}

void AssetDetailItem::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool AssetDetailItem::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string AssetDetailItem::GetPrivateIP() const
{
    return m_privateIP;
}

void AssetDetailItem::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool AssetDetailItem::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string AssetDetailItem::GetPublicDomain() const
{
    return m_publicDomain;
}

void AssetDetailItem::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool AssetDetailItem::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string AssetDetailItem::GetPrivateDomain() const
{
    return m_privateDomain;
}

void AssetDetailItem::SetPrivateDomain(const string& _privateDomain)
{
    m_privateDomain = _privateDomain;
    m_privateDomainHasBeenSet = true;
}

bool AssetDetailItem::PrivateDomainHasBeenSet() const
{
    return m_privateDomainHasBeenSet;
}

uint64_t AssetDetailItem::GetRiskCount() const
{
    return m_riskCount;
}

void AssetDetailItem::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool AssetDetailItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t AssetDetailItem::GetAlarmCount() const
{
    return m_alarmCount;
}

void AssetDetailItem::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool AssetDetailItem::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

string AssetDetailItem::GetAssetName() const
{
    return m_assetName;
}

void AssetDetailItem::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetDetailItem::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

vector<CustomTag> AssetDetailItem::GetCustomTags() const
{
    return m_customTags;
}

void AssetDetailItem::SetCustomTags(const vector<CustomTag>& _customTags)
{
    m_customTags = _customTags;
    m_customTagsHasBeenSet = true;
}

bool AssetDetailItem::CustomTagsHasBeenSet() const
{
    return m_customTagsHasBeenSet;
}

string AssetDetailItem::GetProvider() const
{
    return m_provider;
}

void AssetDetailItem::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool AssetDetailItem::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string AssetDetailItem::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void AssetDetailItem::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool AssetDetailItem::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

string AssetDetailItem::GetAssetTypeIconURL() const
{
    return m_assetTypeIconURL;
}

void AssetDetailItem::SetAssetTypeIconURL(const string& _assetTypeIconURL)
{
    m_assetTypeIconURL = _assetTypeIconURL;
    m_assetTypeIconURLHasBeenSet = true;
}

bool AssetDetailItem::AssetTypeIconURLHasBeenSet() const
{
    return m_assetTypeIconURLHasBeenSet;
}

string AssetDetailItem::GetAssetRID() const
{
    return m_assetRID;
}

void AssetDetailItem::SetAssetRID(const string& _assetRID)
{
    m_assetRID = _assetRID;
    m_assetRIDHasBeenSet = true;
}

bool AssetDetailItem::AssetRIDHasBeenSet() const
{
    return m_assetRIDHasBeenSet;
}


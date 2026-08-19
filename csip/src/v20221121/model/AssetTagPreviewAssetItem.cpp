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

#include <tencentcloud/csip/v20221121/model/AssetTagPreviewAssetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetTagPreviewAssetItem::AssetTagPreviewAssetItem() :
    m_assetIDHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_privateIPHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_privateDomainHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_assetTypeIconURLHasBeenSet(false)
{
}

CoreInternalOutcome AssetTagPreviewAssetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetID") && !value["AssetID"].IsNull())
    {
        if (!value["AssetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.AssetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetID = string(value["AssetID"].GetString());
        m_assetIDHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PrivateIP") && !value["PrivateIP"].IsNull())
    {
        if (!value["PrivateIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.PrivateIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIP = string(value["PrivateIP"].GetString());
        m_privateIPHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("PrivateDomain") && !value["PrivateDomain"].IsNull())
    {
        if (!value["PrivateDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.PrivateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateDomain = string(value["PrivateDomain"].GetString());
        m_privateDomainHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeIconURL") && !value["AssetTypeIconURL"].IsNull())
    {
        if (!value["AssetTypeIconURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagPreviewAssetItem.AssetTypeIconURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeIconURL = string(value["AssetTypeIconURL"].GetString());
        m_assetTypeIconURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTagPreviewAssetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_assetTypeIconURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeIconURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeIconURL.c_str(), allocator).Move(), allocator);
    }

}


string AssetTagPreviewAssetItem::GetAssetID() const
{
    return m_assetID;
}

void AssetTagPreviewAssetItem::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string AssetTagPreviewAssetItem::GetAssetName() const
{
    return m_assetName;
}

void AssetTagPreviewAssetItem::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string AssetTagPreviewAssetItem::GetPublicIP() const
{
    return m_publicIP;
}

void AssetTagPreviewAssetItem::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string AssetTagPreviewAssetItem::GetPrivateIP() const
{
    return m_privateIP;
}

void AssetTagPreviewAssetItem::SetPrivateIP(const string& _privateIP)
{
    m_privateIP = _privateIP;
    m_privateIPHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::PrivateIPHasBeenSet() const
{
    return m_privateIPHasBeenSet;
}

string AssetTagPreviewAssetItem::GetPublicDomain() const
{
    return m_publicDomain;
}

void AssetTagPreviewAssetItem::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string AssetTagPreviewAssetItem::GetPrivateDomain() const
{
    return m_privateDomain;
}

void AssetTagPreviewAssetItem::SetPrivateDomain(const string& _privateDomain)
{
    m_privateDomain = _privateDomain;
    m_privateDomainHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::PrivateDomainHasBeenSet() const
{
    return m_privateDomainHasBeenSet;
}

string AssetTagPreviewAssetItem::GetAssetType() const
{
    return m_assetType;
}

void AssetTagPreviewAssetItem::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetTagPreviewAssetItem::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void AssetTagPreviewAssetItem::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

string AssetTagPreviewAssetItem::GetAssetTypeIconURL() const
{
    return m_assetTypeIconURL;
}

void AssetTagPreviewAssetItem::SetAssetTypeIconURL(const string& _assetTypeIconURL)
{
    m_assetTypeIconURL = _assetTypeIconURL;
    m_assetTypeIconURLHasBeenSet = true;
}

bool AssetTagPreviewAssetItem::AssetTypeIconURLHasBeenSet() const
{
    return m_assetTypeIconURLHasBeenSet;
}


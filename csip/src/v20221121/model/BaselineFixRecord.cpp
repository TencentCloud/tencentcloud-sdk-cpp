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

#include <tencentcloud/csip/v20221121/model/BaselineFixRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineFixRecord::BaselineFixRecord() :
    m_iDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_itemInfoHasBeenSet(false),
    m_hostInfoHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_fixTimeHasBeenSet(false),
    m_discoveryTimeHasBeenSet(false)
{
}

CoreInternalOutcome BaselineFixRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ItemInfo") && !value["ItemInfo"].IsNull())
    {
        if (!value["ItemInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.ItemInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_itemInfo.Deserialize(value["ItemInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemInfoHasBeenSet = true;
    }

    if (value.HasMember("HostInfo") && !value["HostInfo"].IsNull())
    {
        if (!value["HostInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.HostInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostInfo.Deserialize(value["HostInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostInfoHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.ClusterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterInfo.Deserialize(value["ClusterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterInfoHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("FixTime") && !value["FixTime"].IsNull())
    {
        if (!value["FixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.FixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixTime = string(value["FixTime"].GetString());
        m_fixTimeHasBeenSet = true;
    }

    if (value.HasMember("DiscoveryTime") && !value["DiscoveryTime"].IsNull())
    {
        if (!value["DiscoveryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineFixRecord.DiscoveryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discoveryTime = string(value["DiscoveryTime"].GetString());
        m_discoveryTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineFixRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_itemInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_itemInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_fixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_discoveryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoveryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discoveryTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BaselineFixRecord::GetID() const
{
    return m_iD;
}

void BaselineFixRecord::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineFixRecord::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t BaselineFixRecord::GetAppID() const
{
    return m_appID;
}

void BaselineFixRecord::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool BaselineFixRecord::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

BaselineItem BaselineFixRecord::GetItemInfo() const
{
    return m_itemInfo;
}

void BaselineFixRecord::SetItemInfo(const BaselineItem& _itemInfo)
{
    m_itemInfo = _itemInfo;
    m_itemInfoHasBeenSet = true;
}

bool BaselineFixRecord::ItemInfoHasBeenSet() const
{
    return m_itemInfoHasBeenSet;
}

BaselineHostAsset BaselineFixRecord::GetHostInfo() const
{
    return m_hostInfo;
}

void BaselineFixRecord::SetHostInfo(const BaselineHostAsset& _hostInfo)
{
    m_hostInfo = _hostInfo;
    m_hostInfoHasBeenSet = true;
}

bool BaselineFixRecord::HostInfoHasBeenSet() const
{
    return m_hostInfoHasBeenSet;
}

BaselineClusterAsset BaselineFixRecord::GetClusterInfo() const
{
    return m_clusterInfo;
}

void BaselineFixRecord::SetClusterInfo(const BaselineClusterAsset& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool BaselineFixRecord::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

string BaselineFixRecord::GetAssetType() const
{
    return m_assetType;
}

void BaselineFixRecord::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool BaselineFixRecord::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string BaselineFixRecord::GetFixTime() const
{
    return m_fixTime;
}

void BaselineFixRecord::SetFixTime(const string& _fixTime)
{
    m_fixTime = _fixTime;
    m_fixTimeHasBeenSet = true;
}

bool BaselineFixRecord::FixTimeHasBeenSet() const
{
    return m_fixTimeHasBeenSet;
}

string BaselineFixRecord::GetDiscoveryTime() const
{
    return m_discoveryTime;
}

void BaselineFixRecord::SetDiscoveryTime(const string& _discoveryTime)
{
    m_discoveryTime = _discoveryTime;
    m_discoveryTimeHasBeenSet = true;
}

bool BaselineFixRecord::DiscoveryTimeHasBeenSet() const
{
    return m_discoveryTimeHasBeenSet;
}


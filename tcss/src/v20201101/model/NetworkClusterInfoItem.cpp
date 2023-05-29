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

#include <tencentcloud/tcss/v20201101/model/NetworkClusterInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NetworkClusterInfoItem::NetworkClusterInfoItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterOsHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_networkPolicyPluginHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_totalRuleCountHasBeenSet(false),
    m_enableRuleCountHasBeenSet(false),
    m_networkPolicyPluginStatusHasBeenSet(false),
    m_networkPolicyPluginErrorHasBeenSet(false),
    m_clusterNetworkSettingsHasBeenSet(false)
{
}

CoreInternalOutcome NetworkClusterInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("NetworkPolicyPlugin") && !value["NetworkPolicyPlugin"].IsNull())
    {
        if (!value["NetworkPolicyPlugin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.NetworkPolicyPlugin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPolicyPlugin = string(value["NetworkPolicyPlugin"].GetString());
        m_networkPolicyPluginHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("TotalRuleCount") && !value["TotalRuleCount"].IsNull())
    {
        if (!value["TotalRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.TotalRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRuleCount = value["TotalRuleCount"].GetInt64();
        m_totalRuleCountHasBeenSet = true;
    }

    if (value.HasMember("EnableRuleCount") && !value["EnableRuleCount"].IsNull())
    {
        if (!value["EnableRuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.EnableRuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableRuleCount = value["EnableRuleCount"].GetInt64();
        m_enableRuleCountHasBeenSet = true;
    }

    if (value.HasMember("NetworkPolicyPluginStatus") && !value["NetworkPolicyPluginStatus"].IsNull())
    {
        if (!value["NetworkPolicyPluginStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.NetworkPolicyPluginStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPolicyPluginStatus = string(value["NetworkPolicyPluginStatus"].GetString());
        m_networkPolicyPluginStatusHasBeenSet = true;
    }

    if (value.HasMember("NetworkPolicyPluginError") && !value["NetworkPolicyPluginError"].IsNull())
    {
        if (!value["NetworkPolicyPluginError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.NetworkPolicyPluginError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPolicyPluginError = string(value["NetworkPolicyPluginError"].GetString());
        m_networkPolicyPluginErrorHasBeenSet = true;
    }

    if (value.HasMember("ClusterNetworkSettings") && !value["ClusterNetworkSettings"].IsNull())
    {
        if (!value["ClusterNetworkSettings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkClusterInfoItem.ClusterNetworkSettings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNetworkSettings = string(value["ClusterNetworkSettings"].GetString());
        m_clusterNetworkSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkClusterInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterOs.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPolicyPluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPolicyPlugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPolicyPlugin.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRuleCount, allocator);
    }

    if (m_enableRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableRuleCount, allocator);
    }

    if (m_networkPolicyPluginStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPolicyPluginStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPolicyPluginStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPolicyPluginErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPolicyPluginError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPolicyPluginError.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNetworkSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNetworkSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterNetworkSettings.c_str(), allocator).Move(), allocator);
    }

}


string NetworkClusterInfoItem::GetClusterId() const
{
    return m_clusterId;
}

void NetworkClusterInfoItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterName() const
{
    return m_clusterName;
}

void NetworkClusterInfoItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterVersion() const
{
    return m_clusterVersion;
}

void NetworkClusterInfoItem::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterOs() const
{
    return m_clusterOs;
}

void NetworkClusterInfoItem::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterType() const
{
    return m_clusterType;
}

void NetworkClusterInfoItem::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string NetworkClusterInfoItem::GetRegion() const
{
    return m_region;
}

void NetworkClusterInfoItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool NetworkClusterInfoItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string NetworkClusterInfoItem::GetNetworkPolicyPlugin() const
{
    return m_networkPolicyPlugin;
}

void NetworkClusterInfoItem::SetNetworkPolicyPlugin(const string& _networkPolicyPlugin)
{
    m_networkPolicyPlugin = _networkPolicyPlugin;
    m_networkPolicyPluginHasBeenSet = true;
}

bool NetworkClusterInfoItem::NetworkPolicyPluginHasBeenSet() const
{
    return m_networkPolicyPluginHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterStatus() const
{
    return m_clusterStatus;
}

void NetworkClusterInfoItem::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

int64_t NetworkClusterInfoItem::GetTotalRuleCount() const
{
    return m_totalRuleCount;
}

void NetworkClusterInfoItem::SetTotalRuleCount(const int64_t& _totalRuleCount)
{
    m_totalRuleCount = _totalRuleCount;
    m_totalRuleCountHasBeenSet = true;
}

bool NetworkClusterInfoItem::TotalRuleCountHasBeenSet() const
{
    return m_totalRuleCountHasBeenSet;
}

int64_t NetworkClusterInfoItem::GetEnableRuleCount() const
{
    return m_enableRuleCount;
}

void NetworkClusterInfoItem::SetEnableRuleCount(const int64_t& _enableRuleCount)
{
    m_enableRuleCount = _enableRuleCount;
    m_enableRuleCountHasBeenSet = true;
}

bool NetworkClusterInfoItem::EnableRuleCountHasBeenSet() const
{
    return m_enableRuleCountHasBeenSet;
}

string NetworkClusterInfoItem::GetNetworkPolicyPluginStatus() const
{
    return m_networkPolicyPluginStatus;
}

void NetworkClusterInfoItem::SetNetworkPolicyPluginStatus(const string& _networkPolicyPluginStatus)
{
    m_networkPolicyPluginStatus = _networkPolicyPluginStatus;
    m_networkPolicyPluginStatusHasBeenSet = true;
}

bool NetworkClusterInfoItem::NetworkPolicyPluginStatusHasBeenSet() const
{
    return m_networkPolicyPluginStatusHasBeenSet;
}

string NetworkClusterInfoItem::GetNetworkPolicyPluginError() const
{
    return m_networkPolicyPluginError;
}

void NetworkClusterInfoItem::SetNetworkPolicyPluginError(const string& _networkPolicyPluginError)
{
    m_networkPolicyPluginError = _networkPolicyPluginError;
    m_networkPolicyPluginErrorHasBeenSet = true;
}

bool NetworkClusterInfoItem::NetworkPolicyPluginErrorHasBeenSet() const
{
    return m_networkPolicyPluginErrorHasBeenSet;
}

string NetworkClusterInfoItem::GetClusterNetworkSettings() const
{
    return m_clusterNetworkSettings;
}

void NetworkClusterInfoItem::SetClusterNetworkSettings(const string& _clusterNetworkSettings)
{
    m_clusterNetworkSettings = _clusterNetworkSettings;
    m_clusterNetworkSettingsHasBeenSet = true;
}

bool NetworkClusterInfoItem::ClusterNetworkSettingsHasBeenSet() const
{
    return m_clusterNetworkSettingsHasBeenSet;
}


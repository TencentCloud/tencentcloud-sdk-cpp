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

#include <tencentcloud/csip/v20221121/model/AssetClusterPod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetClusterPod::AssetClusterPod() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_machineIdHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_podIpHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_isNewAssetHasBeenSet(false)
{
}

CoreInternalOutcome AssetClusterPod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreateTime") && !value["InstanceCreateTime"].IsNull())
    {
        if (!value["InstanceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.InstanceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreateTime = string(value["InstanceCreateTime"].GetString());
        m_instanceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("MachineId") && !value["MachineId"].IsNull())
    {
        if (!value["MachineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.MachineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineId = string(value["MachineId"].GetString());
        m_machineIdHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.IsCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetInt64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetClusterPod.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetClusterPod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

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

    if (m_machineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCore, allocator);
    }

    if (m_isNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNewAsset, allocator);
    }

}


int64_t AssetClusterPod::GetAppId() const
{
    return m_appId;
}

void AssetClusterPod::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetClusterPod::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetClusterPod::GetUin() const
{
    return m_uin;
}

void AssetClusterPod::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetClusterPod::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetClusterPod::GetNick() const
{
    return m_nick;
}

void AssetClusterPod::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetClusterPod::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetClusterPod::GetRegion() const
{
    return m_region;
}

void AssetClusterPod::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AssetClusterPod::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AssetClusterPod::GetAssetId() const
{
    return m_assetId;
}

void AssetClusterPod::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool AssetClusterPod::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string AssetClusterPod::GetAssetName() const
{
    return m_assetName;
}

void AssetClusterPod::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetClusterPod::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string AssetClusterPod::GetInstanceCreateTime() const
{
    return m_instanceCreateTime;
}

void AssetClusterPod::SetInstanceCreateTime(const string& _instanceCreateTime)
{
    m_instanceCreateTime = _instanceCreateTime;
    m_instanceCreateTimeHasBeenSet = true;
}

bool AssetClusterPod::InstanceCreateTimeHasBeenSet() const
{
    return m_instanceCreateTimeHasBeenSet;
}

string AssetClusterPod::GetNamespace() const
{
    return m_namespace;
}

void AssetClusterPod::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool AssetClusterPod::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string AssetClusterPod::GetStatus() const
{
    return m_status;
}

void AssetClusterPod::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetClusterPod::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetClusterPod::GetClusterId() const
{
    return m_clusterId;
}

void AssetClusterPod::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AssetClusterPod::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AssetClusterPod::GetClusterName() const
{
    return m_clusterName;
}

void AssetClusterPod::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AssetClusterPod::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string AssetClusterPod::GetMachineId() const
{
    return m_machineId;
}

void AssetClusterPod::SetMachineId(const string& _machineId)
{
    m_machineId = _machineId;
    m_machineIdHasBeenSet = true;
}

bool AssetClusterPod::MachineIdHasBeenSet() const
{
    return m_machineIdHasBeenSet;
}

string AssetClusterPod::GetMachineName() const
{
    return m_machineName;
}

void AssetClusterPod::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetClusterPod::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetClusterPod::GetPodIp() const
{
    return m_podIp;
}

void AssetClusterPod::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool AssetClusterPod::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

int64_t AssetClusterPod::GetServiceCount() const
{
    return m_serviceCount;
}

void AssetClusterPod::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool AssetClusterPod::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

int64_t AssetClusterPod::GetContainerCount() const
{
    return m_containerCount;
}

void AssetClusterPod::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool AssetClusterPod::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

string AssetClusterPod::GetPublicIp() const
{
    return m_publicIp;
}

void AssetClusterPod::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool AssetClusterPod::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string AssetClusterPod::GetPrivateIp() const
{
    return m_privateIp;
}

void AssetClusterPod::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool AssetClusterPod::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

int64_t AssetClusterPod::GetIsCore() const
{
    return m_isCore;
}

void AssetClusterPod::SetIsCore(const int64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool AssetClusterPod::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t AssetClusterPod::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void AssetClusterPod::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool AssetClusterPod::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}


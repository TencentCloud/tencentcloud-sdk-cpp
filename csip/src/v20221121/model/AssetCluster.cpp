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

#include <tencentcloud/csip/v20221121/model/AssetCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetCluster::AssetCluster() :
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_protectInfoHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_kubernetesVersionHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_componentVersionHasBeenSet(false),
    m_componentStatusHasBeenSet(false),
    m_checkTimeHasBeenSet(false),
    m_machineCountHasBeenSet(false),
    m_podCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_vulRiskHasBeenSet(false),
    m_cFGRiskHasBeenSet(false),
    m_checkCountHasBeenSet(false),
    m_isCoreHasBeenSet(false),
    m_isNewAssetHasBeenSet(false),
    m_cloudTypeHasBeenSet(false)
{
}

CoreInternalOutcome AssetCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCreateTime") && !value["InstanceCreateTime"].IsNull())
    {
        if (!value["InstanceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.InstanceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCreateTime = string(value["InstanceCreateTime"].GetString());
        m_instanceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.ProtectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetInt64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectInfo") && !value["ProtectInfo"].IsNull())
    {
        if (!value["ProtectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.ProtectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectInfo = string(value["ProtectInfo"].GetString());
        m_protectInfoHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("KubernetesVersion") && !value["KubernetesVersion"].IsNull())
    {
        if (!value["KubernetesVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.KubernetesVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kubernetesVersion = string(value["KubernetesVersion"].GetString());
        m_kubernetesVersionHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("ComponentVersion") && !value["ComponentVersion"].IsNull())
    {
        if (!value["ComponentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.ComponentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentVersion = string(value["ComponentVersion"].GetString());
        m_componentVersionHasBeenSet = true;
    }

    if (value.HasMember("ComponentStatus") && !value["ComponentStatus"].IsNull())
    {
        if (!value["ComponentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.ComponentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentStatus = string(value["ComponentStatus"].GetString());
        m_componentStatusHasBeenSet = true;
    }

    if (value.HasMember("CheckTime") && !value["CheckTime"].IsNull())
    {
        if (!value["CheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.CheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkTime = string(value["CheckTime"].GetString());
        m_checkTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineCount") && !value["MachineCount"].IsNull())
    {
        if (!value["MachineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.MachineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineCount = value["MachineCount"].GetInt64();
        m_machineCountHasBeenSet = true;
    }

    if (value.HasMember("PodCount") && !value["PodCount"].IsNull())
    {
        if (!value["PodCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.PodCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCount = value["PodCount"].GetInt64();
        m_podCountHasBeenSet = true;
    }

    if (value.HasMember("ServiceCount") && !value["ServiceCount"].IsNull())
    {
        if (!value["ServiceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.ServiceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = value["ServiceCount"].GetInt64();
        m_serviceCountHasBeenSet = true;
    }

    if (value.HasMember("VulRisk") && !value["VulRisk"].IsNull())
    {
        if (!value["VulRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.VulRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulRisk = value["VulRisk"].GetInt64();
        m_vulRiskHasBeenSet = true;
    }

    if (value.HasMember("CFGRisk") && !value["CFGRisk"].IsNull())
    {
        if (!value["CFGRisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.CFGRisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cFGRisk = value["CFGRisk"].GetInt64();
        m_cFGRiskHasBeenSet = true;
    }

    if (value.HasMember("CheckCount") && !value["CheckCount"].IsNull())
    {
        if (!value["CheckCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.CheckCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkCount = value["CheckCount"].GetInt64();
        m_checkCountHasBeenSet = true;
    }

    if (value.HasMember("IsCore") && !value["IsCore"].IsNull())
    {
        if (!value["IsCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.IsCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCore = value["IsCore"].GetInt64();
        m_isCoreHasBeenSet = true;
    }

    if (value.HasMember("IsNewAsset") && !value["IsNewAsset"].IsNull())
    {
        if (!value["IsNewAsset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.IsNewAsset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isNewAsset = value["IsNewAsset"].GetUint64();
        m_isNewAssetHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetCluster.CloudType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = value["CloudType"].GetInt64();
        m_cloudTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_protectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectStatus, allocator);
    }

    if (m_protectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_kubernetesVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubernetesVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kubernetesVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_componentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_componentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineCount, allocator);
    }

    if (m_podCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCount, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_vulRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulRisk, allocator);
    }

    if (m_cFGRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFGRisk, allocator);
    }

    if (m_checkCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkCount, allocator);
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

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudType, allocator);
    }

}


int64_t AssetCluster::GetAppId() const
{
    return m_appId;
}

void AssetCluster::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetCluster::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetCluster::GetUin() const
{
    return m_uin;
}

void AssetCluster::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetCluster::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetCluster::GetNick() const
{
    return m_nick;
}

void AssetCluster::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetCluster::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetCluster::GetRegion() const
{
    return m_region;
}

void AssetCluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AssetCluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AssetCluster::GetAssetId() const
{
    return m_assetId;
}

void AssetCluster::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool AssetCluster::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string AssetCluster::GetAssetName() const
{
    return m_assetName;
}

void AssetCluster::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssetCluster::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string AssetCluster::GetAssetType() const
{
    return m_assetType;
}

void AssetCluster::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool AssetCluster::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string AssetCluster::GetInstanceCreateTime() const
{
    return m_instanceCreateTime;
}

void AssetCluster::SetInstanceCreateTime(const string& _instanceCreateTime)
{
    m_instanceCreateTime = _instanceCreateTime;
    m_instanceCreateTimeHasBeenSet = true;
}

bool AssetCluster::InstanceCreateTimeHasBeenSet() const
{
    return m_instanceCreateTimeHasBeenSet;
}

string AssetCluster::GetStatus() const
{
    return m_status;
}

void AssetCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t AssetCluster::GetProtectStatus() const
{
    return m_protectStatus;
}

void AssetCluster::SetProtectStatus(const int64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool AssetCluster::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

string AssetCluster::GetProtectInfo() const
{
    return m_protectInfo;
}

void AssetCluster::SetProtectInfo(const string& _protectInfo)
{
    m_protectInfo = _protectInfo;
    m_protectInfoHasBeenSet = true;
}

bool AssetCluster::ProtectInfoHasBeenSet() const
{
    return m_protectInfoHasBeenSet;
}

string AssetCluster::GetVpcId() const
{
    return m_vpcId;
}

void AssetCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssetCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssetCluster::GetVpcName() const
{
    return m_vpcName;
}

void AssetCluster::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool AssetCluster::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string AssetCluster::GetKubernetesVersion() const
{
    return m_kubernetesVersion;
}

void AssetCluster::SetKubernetesVersion(const string& _kubernetesVersion)
{
    m_kubernetesVersion = _kubernetesVersion;
    m_kubernetesVersionHasBeenSet = true;
}

bool AssetCluster::KubernetesVersionHasBeenSet() const
{
    return m_kubernetesVersionHasBeenSet;
}

string AssetCluster::GetComponent() const
{
    return m_component;
}

void AssetCluster::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool AssetCluster::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string AssetCluster::GetComponentVersion() const
{
    return m_componentVersion;
}

void AssetCluster::SetComponentVersion(const string& _componentVersion)
{
    m_componentVersion = _componentVersion;
    m_componentVersionHasBeenSet = true;
}

bool AssetCluster::ComponentVersionHasBeenSet() const
{
    return m_componentVersionHasBeenSet;
}

string AssetCluster::GetComponentStatus() const
{
    return m_componentStatus;
}

void AssetCluster::SetComponentStatus(const string& _componentStatus)
{
    m_componentStatus = _componentStatus;
    m_componentStatusHasBeenSet = true;
}

bool AssetCluster::ComponentStatusHasBeenSet() const
{
    return m_componentStatusHasBeenSet;
}

string AssetCluster::GetCheckTime() const
{
    return m_checkTime;
}

void AssetCluster::SetCheckTime(const string& _checkTime)
{
    m_checkTime = _checkTime;
    m_checkTimeHasBeenSet = true;
}

bool AssetCluster::CheckTimeHasBeenSet() const
{
    return m_checkTimeHasBeenSet;
}

int64_t AssetCluster::GetMachineCount() const
{
    return m_machineCount;
}

void AssetCluster::SetMachineCount(const int64_t& _machineCount)
{
    m_machineCount = _machineCount;
    m_machineCountHasBeenSet = true;
}

bool AssetCluster::MachineCountHasBeenSet() const
{
    return m_machineCountHasBeenSet;
}

int64_t AssetCluster::GetPodCount() const
{
    return m_podCount;
}

void AssetCluster::SetPodCount(const int64_t& _podCount)
{
    m_podCount = _podCount;
    m_podCountHasBeenSet = true;
}

bool AssetCluster::PodCountHasBeenSet() const
{
    return m_podCountHasBeenSet;
}

int64_t AssetCluster::GetServiceCount() const
{
    return m_serviceCount;
}

void AssetCluster::SetServiceCount(const int64_t& _serviceCount)
{
    m_serviceCount = _serviceCount;
    m_serviceCountHasBeenSet = true;
}

bool AssetCluster::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

int64_t AssetCluster::GetVulRisk() const
{
    return m_vulRisk;
}

void AssetCluster::SetVulRisk(const int64_t& _vulRisk)
{
    m_vulRisk = _vulRisk;
    m_vulRiskHasBeenSet = true;
}

bool AssetCluster::VulRiskHasBeenSet() const
{
    return m_vulRiskHasBeenSet;
}

int64_t AssetCluster::GetCFGRisk() const
{
    return m_cFGRisk;
}

void AssetCluster::SetCFGRisk(const int64_t& _cFGRisk)
{
    m_cFGRisk = _cFGRisk;
    m_cFGRiskHasBeenSet = true;
}

bool AssetCluster::CFGRiskHasBeenSet() const
{
    return m_cFGRiskHasBeenSet;
}

int64_t AssetCluster::GetCheckCount() const
{
    return m_checkCount;
}

void AssetCluster::SetCheckCount(const int64_t& _checkCount)
{
    m_checkCount = _checkCount;
    m_checkCountHasBeenSet = true;
}

bool AssetCluster::CheckCountHasBeenSet() const
{
    return m_checkCountHasBeenSet;
}

int64_t AssetCluster::GetIsCore() const
{
    return m_isCore;
}

void AssetCluster::SetIsCore(const int64_t& _isCore)
{
    m_isCore = _isCore;
    m_isCoreHasBeenSet = true;
}

bool AssetCluster::IsCoreHasBeenSet() const
{
    return m_isCoreHasBeenSet;
}

uint64_t AssetCluster::GetIsNewAsset() const
{
    return m_isNewAsset;
}

void AssetCluster::SetIsNewAsset(const uint64_t& _isNewAsset)
{
    m_isNewAsset = _isNewAsset;
    m_isNewAssetHasBeenSet = true;
}

bool AssetCluster::IsNewAssetHasBeenSet() const
{
    return m_isNewAssetHasBeenSet;
}

int64_t AssetCluster::GetCloudType() const
{
    return m_cloudType;
}

void AssetCluster::SetCloudType(const int64_t& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool AssetCluster::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}


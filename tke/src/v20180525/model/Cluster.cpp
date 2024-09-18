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

#include <tencentcloud/tke/v20180525/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_clusterOsHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterNetworkSettingsHasBeenSet(false),
    m_clusterNodeNumHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_propertyHasBeenSet(false),
    m_clusterMaterNodeNumHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_osCustomizeTypeHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false),
    m_enableExternalNodeHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false),
    m_qGPUShareEnableHasBeenSet(false),
    m_runtimeVersionHasBeenSet(false),
    m_clusterEtcdNodeNumHasBeenSet(false),
    m_cdcIdHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDescription") && !value["ClusterDescription"].IsNull())
    {
        if (!value["ClusterDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDescription = string(value["ClusterDescription"].GetString());
        m_clusterDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterOs") && !value["ClusterOs"].IsNull())
    {
        if (!value["ClusterOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterOs = string(value["ClusterOs"].GetString());
        m_clusterOsHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterNetworkSettings") && !value["ClusterNetworkSettings"].IsNull())
    {
        if (!value["ClusterNetworkSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterNetworkSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterNetworkSettings.Deserialize(value["ClusterNetworkSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterNetworkSettingsHasBeenSet = true;
    }

    if (value.HasMember("ClusterNodeNum") && !value["ClusterNodeNum"].IsNull())
    {
        if (!value["ClusterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterNodeNum = value["ClusterNodeNum"].GetUint64();
        m_clusterNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.TagSpecification` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSpecification"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagSpecification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSpecification.push_back(item);
        }
        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("Property") && !value["Property"].IsNull())
    {
        if (!value["Property"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Property` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_property = string(value["Property"].GetString());
        m_propertyHasBeenSet = true;
    }

    if (value.HasMember("ClusterMaterNodeNum") && !value["ClusterMaterNodeNum"].IsNull())
    {
        if (!value["ClusterMaterNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterMaterNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterMaterNodeNum = value["ClusterMaterNodeNum"].GetUint64();
        m_clusterMaterNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OsCustomizeType") && !value["OsCustomizeType"].IsNull())
    {
        if (!value["OsCustomizeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.OsCustomizeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osCustomizeType = string(value["OsCustomizeType"].GetString());
        m_osCustomizeTypeHasBeenSet = true;
    }

    if (value.HasMember("ContainerRuntime") && !value["ContainerRuntime"].IsNull())
    {
        if (!value["ContainerRuntime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ContainerRuntime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerRuntime = string(value["ContainerRuntime"].GetString());
        m_containerRuntimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("DeletionProtection") && !value["DeletionProtection"].IsNull())
    {
        if (!value["DeletionProtection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DeletionProtection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deletionProtection = value["DeletionProtection"].GetBool();
        m_deletionProtectionHasBeenSet = true;
    }

    if (value.HasMember("EnableExternalNode") && !value["EnableExternalNode"].IsNull())
    {
        if (!value["EnableExternalNode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.EnableExternalNode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableExternalNode = value["EnableExternalNode"].GetBool();
        m_enableExternalNodeHasBeenSet = true;
    }

    if (value.HasMember("ClusterLevel") && !value["ClusterLevel"].IsNull())
    {
        if (!value["ClusterLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLevel = string(value["ClusterLevel"].GetString());
        m_clusterLevelHasBeenSet = true;
    }

    if (value.HasMember("AutoUpgradeClusterLevel") && !value["AutoUpgradeClusterLevel"].IsNull())
    {
        if (!value["AutoUpgradeClusterLevel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AutoUpgradeClusterLevel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpgradeClusterLevel = value["AutoUpgradeClusterLevel"].GetBool();
        m_autoUpgradeClusterLevelHasBeenSet = true;
    }

    if (value.HasMember("QGPUShareEnable") && !value["QGPUShareEnable"].IsNull())
    {
        if (!value["QGPUShareEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.QGPUShareEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_qGPUShareEnable = value["QGPUShareEnable"].GetBool();
        m_qGPUShareEnableHasBeenSet = true;
    }

    if (value.HasMember("RuntimeVersion") && !value["RuntimeVersion"].IsNull())
    {
        if (!value["RuntimeVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RuntimeVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeVersion = string(value["RuntimeVersion"].GetString());
        m_runtimeVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterEtcdNodeNum") && !value["ClusterEtcdNodeNum"].IsNull())
    {
        if (!value["ClusterEtcdNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterEtcdNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterEtcdNodeNum = value["ClusterEtcdNodeNum"].GetUint64();
        m_clusterEtcdNodeNumHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_clusterDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDescription.c_str(), allocator).Move(), allocator);
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

    if (m_clusterNetworkSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNetworkSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterNetworkSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterNodeNum, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_propertyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Property";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_property.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterMaterNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterMaterNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterMaterNodeNum, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_osCustomizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsCustomizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osCustomizeType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionProtection, allocator);
    }

    if (m_enableExternalNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableExternalNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableExternalNode, allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoUpgradeClusterLevel, allocator);
    }

    if (m_qGPUShareEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QGPUShareEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qGPUShareEnable, allocator);
    }

    if (m_runtimeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtimeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterEtcdNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterEtcdNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterEtcdNodeNum, allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetClusterDescription() const
{
    return m_clusterDescription;
}

void Cluster::SetClusterDescription(const string& _clusterDescription)
{
    m_clusterDescription = _clusterDescription;
    m_clusterDescriptionHasBeenSet = true;
}

bool Cluster::ClusterDescriptionHasBeenSet() const
{
    return m_clusterDescriptionHasBeenSet;
}

string Cluster::GetClusterVersion() const
{
    return m_clusterVersion;
}

void Cluster::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool Cluster::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string Cluster::GetClusterOs() const
{
    return m_clusterOs;
}

void Cluster::SetClusterOs(const string& _clusterOs)
{
    m_clusterOs = _clusterOs;
    m_clusterOsHasBeenSet = true;
}

bool Cluster::ClusterOsHasBeenSet() const
{
    return m_clusterOsHasBeenSet;
}

string Cluster::GetClusterType() const
{
    return m_clusterType;
}

void Cluster::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool Cluster::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

ClusterNetworkSettings Cluster::GetClusterNetworkSettings() const
{
    return m_clusterNetworkSettings;
}

void Cluster::SetClusterNetworkSettings(const ClusterNetworkSettings& _clusterNetworkSettings)
{
    m_clusterNetworkSettings = _clusterNetworkSettings;
    m_clusterNetworkSettingsHasBeenSet = true;
}

bool Cluster::ClusterNetworkSettingsHasBeenSet() const
{
    return m_clusterNetworkSettingsHasBeenSet;
}

uint64_t Cluster::GetClusterNodeNum() const
{
    return m_clusterNodeNum;
}

void Cluster::SetClusterNodeNum(const uint64_t& _clusterNodeNum)
{
    m_clusterNodeNum = _clusterNodeNum;
    m_clusterNodeNumHasBeenSet = true;
}

bool Cluster::ClusterNodeNumHasBeenSet() const
{
    return m_clusterNodeNumHasBeenSet;
}

uint64_t Cluster::GetProjectId() const
{
    return m_projectId;
}

void Cluster::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Cluster::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagSpecification> Cluster::GetTagSpecification() const
{
    return m_tagSpecification;
}

void Cluster::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool Cluster::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

string Cluster::GetClusterStatus() const
{
    return m_clusterStatus;
}

void Cluster::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool Cluster::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string Cluster::GetProperty() const
{
    return m_property;
}

void Cluster::SetProperty(const string& _property)
{
    m_property = _property;
    m_propertyHasBeenSet = true;
}

bool Cluster::PropertyHasBeenSet() const
{
    return m_propertyHasBeenSet;
}

uint64_t Cluster::GetClusterMaterNodeNum() const
{
    return m_clusterMaterNodeNum;
}

void Cluster::SetClusterMaterNodeNum(const uint64_t& _clusterMaterNodeNum)
{
    m_clusterMaterNodeNum = _clusterMaterNodeNum;
    m_clusterMaterNodeNumHasBeenSet = true;
}

bool Cluster::ClusterMaterNodeNumHasBeenSet() const
{
    return m_clusterMaterNodeNumHasBeenSet;
}

string Cluster::GetImageId() const
{
    return m_imageId;
}

void Cluster::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool Cluster::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string Cluster::GetOsCustomizeType() const
{
    return m_osCustomizeType;
}

void Cluster::SetOsCustomizeType(const string& _osCustomizeType)
{
    m_osCustomizeType = _osCustomizeType;
    m_osCustomizeTypeHasBeenSet = true;
}

bool Cluster::OsCustomizeTypeHasBeenSet() const
{
    return m_osCustomizeTypeHasBeenSet;
}

string Cluster::GetContainerRuntime() const
{
    return m_containerRuntime;
}

void Cluster::SetContainerRuntime(const string& _containerRuntime)
{
    m_containerRuntime = _containerRuntime;
    m_containerRuntimeHasBeenSet = true;
}

bool Cluster::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

string Cluster::GetCreatedTime() const
{
    return m_createdTime;
}

void Cluster::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Cluster::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

bool Cluster::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void Cluster::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool Cluster::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}

bool Cluster::GetEnableExternalNode() const
{
    return m_enableExternalNode;
}

void Cluster::SetEnableExternalNode(const bool& _enableExternalNode)
{
    m_enableExternalNode = _enableExternalNode;
    m_enableExternalNodeHasBeenSet = true;
}

bool Cluster::EnableExternalNodeHasBeenSet() const
{
    return m_enableExternalNodeHasBeenSet;
}

string Cluster::GetClusterLevel() const
{
    return m_clusterLevel;
}

void Cluster::SetClusterLevel(const string& _clusterLevel)
{
    m_clusterLevel = _clusterLevel;
    m_clusterLevelHasBeenSet = true;
}

bool Cluster::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

bool Cluster::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void Cluster::SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool Cluster::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

bool Cluster::GetQGPUShareEnable() const
{
    return m_qGPUShareEnable;
}

void Cluster::SetQGPUShareEnable(const bool& _qGPUShareEnable)
{
    m_qGPUShareEnable = _qGPUShareEnable;
    m_qGPUShareEnableHasBeenSet = true;
}

bool Cluster::QGPUShareEnableHasBeenSet() const
{
    return m_qGPUShareEnableHasBeenSet;
}

string Cluster::GetRuntimeVersion() const
{
    return m_runtimeVersion;
}

void Cluster::SetRuntimeVersion(const string& _runtimeVersion)
{
    m_runtimeVersion = _runtimeVersion;
    m_runtimeVersionHasBeenSet = true;
}

bool Cluster::RuntimeVersionHasBeenSet() const
{
    return m_runtimeVersionHasBeenSet;
}

uint64_t Cluster::GetClusterEtcdNodeNum() const
{
    return m_clusterEtcdNodeNum;
}

void Cluster::SetClusterEtcdNodeNum(const uint64_t& _clusterEtcdNodeNum)
{
    m_clusterEtcdNodeNum = _clusterEtcdNodeNum;
    m_clusterEtcdNodeNumHasBeenSet = true;
}

bool Cluster::ClusterEtcdNodeNumHasBeenSet() const
{
    return m_clusterEtcdNodeNumHasBeenSet;
}

string Cluster::GetCdcId() const
{
    return m_cdcId;
}

void Cluster::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool Cluster::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}


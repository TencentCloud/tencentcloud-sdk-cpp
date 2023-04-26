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

#include <tencentcloud/tke/v20180525/model/CreateTKEEdgeClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateTKEEdgeClusterRequest::CreateTKEEdgeClusterRequest() :
    m_k8SVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_clusterAdvancedSettingsHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_clusterLevelHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_edgeVersionHasBeenSet(false),
    m_registryPrefixHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false)
{
}

string CreateTKEEdgeClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_podCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterAdvancedSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNodePodNum, allocator);
    }

    if (m_publicLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicLB.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoUpgradeClusterLevel, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edgeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecification.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTKEEdgeClusterRequest::GetK8SVersion() const
{
    return m_k8SVersion;
}

void CreateTKEEdgeClusterRequest::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateTKEEdgeClusterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateTKEEdgeClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetPodCIDR() const
{
    return m_podCIDR;
}

void CreateTKEEdgeClusterRequest::SetPodCIDR(const string& _podCIDR)
{
    m_podCIDR = _podCIDR;
    m_podCIDRHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void CreateTKEEdgeClusterRequest::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void CreateTKEEdgeClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

EdgeClusterAdvancedSettings CreateTKEEdgeClusterRequest::GetClusterAdvancedSettings() const
{
    return m_clusterAdvancedSettings;
}

void CreateTKEEdgeClusterRequest::SetClusterAdvancedSettings(const EdgeClusterAdvancedSettings& _clusterAdvancedSettings)
{
    m_clusterAdvancedSettings = _clusterAdvancedSettings;
    m_clusterAdvancedSettingsHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ClusterAdvancedSettingsHasBeenSet() const
{
    return m_clusterAdvancedSettingsHasBeenSet;
}

int64_t CreateTKEEdgeClusterRequest::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void CreateTKEEdgeClusterRequest::SetMaxNodePodNum(const int64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}

EdgeClusterPublicLB CreateTKEEdgeClusterRequest::GetPublicLB() const
{
    return m_publicLB;
}

void CreateTKEEdgeClusterRequest::SetPublicLB(const EdgeClusterPublicLB& _publicLB)
{
    m_publicLB = _publicLB;
    m_publicLBHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::PublicLBHasBeenSet() const
{
    return m_publicLBHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetClusterLevel() const
{
    return m_clusterLevel;
}

void CreateTKEEdgeClusterRequest::SetClusterLevel(const string& _clusterLevel)
{
    m_clusterLevel = _clusterLevel;
    m_clusterLevelHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}

bool CreateTKEEdgeClusterRequest::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void CreateTKEEdgeClusterRequest::SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateTKEEdgeClusterRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetEdgeVersion() const
{
    return m_edgeVersion;
}

void CreateTKEEdgeClusterRequest::SetEdgeVersion(const string& _edgeVersion)
{
    m_edgeVersion = _edgeVersion;
    m_edgeVersionHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::EdgeVersionHasBeenSet() const
{
    return m_edgeVersionHasBeenSet;
}

string CreateTKEEdgeClusterRequest::GetRegistryPrefix() const
{
    return m_registryPrefix;
}

void CreateTKEEdgeClusterRequest::SetRegistryPrefix(const string& _registryPrefix)
{
    m_registryPrefix = _registryPrefix;
    m_registryPrefixHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::RegistryPrefixHasBeenSet() const
{
    return m_registryPrefixHasBeenSet;
}

TagSpecification CreateTKEEdgeClusterRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateTKEEdgeClusterRequest::SetTagSpecification(const TagSpecification& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateTKEEdgeClusterRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}



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

#include <tencentcloud/tke/v20180525/model/UpdateTKEEdgeClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateTKEEdgeClusterRequest::UpdateTKEEdgeClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_internalLBHasBeenSet(false),
    m_coreDnsHasBeenSet(false),
    m_healthRegionHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_gridDaemonHasBeenSet(false),
    m_autoUpgradeClusterLevelHasBeenSet(false),
    m_clusterLevelHasBeenSet(false)
{
}

string UpdateTKEEdgeClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
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

    if (m_publicLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicLB.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internalLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internalLB.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_coreDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreDns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_coreDns.c_str(), allocator).Move(), allocator);
    }

    if (m_healthRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_healthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Health";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_health.c_str(), allocator).Move(), allocator);
    }

    if (m_gridDaemonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridDaemon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gridDaemon.c_str(), allocator).Move(), allocator);
    }

    if (m_autoUpgradeClusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpgradeClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoUpgradeClusterLevel, allocator);
    }

    if (m_clusterLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTKEEdgeClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateTKEEdgeClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void UpdateTKEEdgeClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void UpdateTKEEdgeClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetPodCIDR() const
{
    return m_podCIDR;
}

void UpdateTKEEdgeClusterRequest::SetPodCIDR(const string& _podCIDR)
{
    m_podCIDR = _podCIDR;
    m_podCIDRHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void UpdateTKEEdgeClusterRequest::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

EdgeClusterPublicLB UpdateTKEEdgeClusterRequest::GetPublicLB() const
{
    return m_publicLB;
}

void UpdateTKEEdgeClusterRequest::SetPublicLB(const EdgeClusterPublicLB& _publicLB)
{
    m_publicLB = _publicLB;
    m_publicLBHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::PublicLBHasBeenSet() const
{
    return m_publicLBHasBeenSet;
}

EdgeClusterInternalLB UpdateTKEEdgeClusterRequest::GetInternalLB() const
{
    return m_internalLB;
}

void UpdateTKEEdgeClusterRequest::SetInternalLB(const EdgeClusterInternalLB& _internalLB)
{
    m_internalLB = _internalLB;
    m_internalLBHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::InternalLBHasBeenSet() const
{
    return m_internalLBHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetCoreDns() const
{
    return m_coreDns;
}

void UpdateTKEEdgeClusterRequest::SetCoreDns(const string& _coreDns)
{
    m_coreDns = _coreDns;
    m_coreDnsHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::CoreDnsHasBeenSet() const
{
    return m_coreDnsHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetHealthRegion() const
{
    return m_healthRegion;
}

void UpdateTKEEdgeClusterRequest::SetHealthRegion(const string& _healthRegion)
{
    m_healthRegion = _healthRegion;
    m_healthRegionHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::HealthRegionHasBeenSet() const
{
    return m_healthRegionHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetHealth() const
{
    return m_health;
}

void UpdateTKEEdgeClusterRequest::SetHealth(const string& _health)
{
    m_health = _health;
    m_healthHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::HealthHasBeenSet() const
{
    return m_healthHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetGridDaemon() const
{
    return m_gridDaemon;
}

void UpdateTKEEdgeClusterRequest::SetGridDaemon(const string& _gridDaemon)
{
    m_gridDaemon = _gridDaemon;
    m_gridDaemonHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::GridDaemonHasBeenSet() const
{
    return m_gridDaemonHasBeenSet;
}

bool UpdateTKEEdgeClusterRequest::GetAutoUpgradeClusterLevel() const
{
    return m_autoUpgradeClusterLevel;
}

void UpdateTKEEdgeClusterRequest::SetAutoUpgradeClusterLevel(const bool& _autoUpgradeClusterLevel)
{
    m_autoUpgradeClusterLevel = _autoUpgradeClusterLevel;
    m_autoUpgradeClusterLevelHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::AutoUpgradeClusterLevelHasBeenSet() const
{
    return m_autoUpgradeClusterLevelHasBeenSet;
}

string UpdateTKEEdgeClusterRequest::GetClusterLevel() const
{
    return m_clusterLevel;
}

void UpdateTKEEdgeClusterRequest::SetClusterLevel(const string& _clusterLevel)
{
    m_clusterLevel = _clusterLevel;
    m_clusterLevelHasBeenSet = true;
}

bool UpdateTKEEdgeClusterRequest::ClusterLevelHasBeenSet() const
{
    return m_clusterLevelHasBeenSet;
}



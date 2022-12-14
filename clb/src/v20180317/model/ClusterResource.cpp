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

#include <tencentcloud/clb/v20180317/model/ClusterResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ClusterResource::ClusterResource() :
    m_clusterIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_idleHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_clustersZoneHasBeenSet(false)
{
}

CoreInternalOutcome ClusterResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("Idle") && !value["Idle"].IsNull())
    {
        if (!value["Idle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.Idle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idle = string(value["Idle"].GetString());
        m_idleHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("ClustersZone") && !value["ClustersZone"].IsNull())
    {
        if (!value["ClustersZone"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterResource.ClustersZone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clustersZone.Deserialize(value["ClustersZone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clustersZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_idleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Idle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idle.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_clustersZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClustersZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clustersZone.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClusterResource::GetClusterId() const
{
    return m_clusterId;
}

void ClusterResource::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterResource::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterResource::GetVip() const
{
    return m_vip;
}

void ClusterResource::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ClusterResource::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string ClusterResource::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ClusterResource::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ClusterResource::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ClusterResource::GetIdle() const
{
    return m_idle;
}

void ClusterResource::SetIdle(const string& _idle)
{
    m_idle = _idle;
    m_idleHasBeenSet = true;
}

bool ClusterResource::IdleHasBeenSet() const
{
    return m_idleHasBeenSet;
}

string ClusterResource::GetClusterName() const
{
    return m_clusterName;
}

void ClusterResource::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterResource::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterResource::GetIsp() const
{
    return m_isp;
}

void ClusterResource::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool ClusterResource::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

ClustersZone ClusterResource::GetClustersZone() const
{
    return m_clustersZone;
}

void ClusterResource::SetClustersZone(const ClustersZone& _clustersZone)
{
    m_clustersZone = _clustersZone;
    m_clustersZoneHasBeenSet = true;
}

bool ClusterResource::ClustersZoneHasBeenSet() const
{
    return m_clustersZoneHasBeenSet;
}


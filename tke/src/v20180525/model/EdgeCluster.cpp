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

#include <tencentcloud/tke/v20180525/model/EdgeCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeCluster::EdgeCluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_k8SVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_edgeClusterVersionHasBeenSet(false),
    m_maxNodePodNumHasBeenSet(false)
{
}

CoreInternalOutcome EdgeCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("PodCIDR") && !value["PodCIDR"].IsNull())
    {
        if (!value["PodCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.PodCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podCIDR = string(value["PodCIDR"].GetString());
        m_podCIDRHasBeenSet = true;
    }

    if (value.HasMember("ServiceCIDR") && !value["ServiceCIDR"].IsNull())
    {
        if (!value["ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCIDR = string(value["ServiceCIDR"].GetString());
        m_serviceCIDRHasBeenSet = true;
    }

    if (value.HasMember("K8SVersion") && !value["K8SVersion"].IsNull())
    {
        if (!value["K8SVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.K8SVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8SVersion = string(value["K8SVersion"].GetString());
        m_k8SVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClusterDesc") && !value["ClusterDesc"].IsNull())
    {
        if (!value["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(value["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("EdgeClusterVersion") && !value["EdgeClusterVersion"].IsNull())
    {
        if (!value["EdgeClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.EdgeClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeClusterVersion = string(value["EdgeClusterVersion"].GetString());
        m_edgeClusterVersionHasBeenSet = true;
    }

    if (value.HasMember("MaxNodePodNum") && !value["MaxNodePodNum"].IsNull())
    {
        if (!value["MaxNodePodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCluster.MaxNodePodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodePodNum = value["MaxNodePodNum"].GetInt64();
        m_maxNodePodNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_podCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeClusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeClusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNodePodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodePodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodePodNum, allocator);
    }

}


string EdgeCluster::GetClusterId() const
{
    return m_clusterId;
}

void EdgeCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EdgeCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EdgeCluster::GetClusterName() const
{
    return m_clusterName;
}

void EdgeCluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool EdgeCluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string EdgeCluster::GetVpcId() const
{
    return m_vpcId;
}

void EdgeCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EdgeCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EdgeCluster::GetPodCIDR() const
{
    return m_podCIDR;
}

void EdgeCluster::SetPodCIDR(const string& _podCIDR)
{
    m_podCIDR = _podCIDR;
    m_podCIDRHasBeenSet = true;
}

bool EdgeCluster::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string EdgeCluster::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void EdgeCluster::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool EdgeCluster::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

string EdgeCluster::GetK8SVersion() const
{
    return m_k8SVersion;
}

void EdgeCluster::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool EdgeCluster::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string EdgeCluster::GetStatus() const
{
    return m_status;
}

void EdgeCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdgeCluster::GetClusterDesc() const
{
    return m_clusterDesc;
}

void EdgeCluster::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool EdgeCluster::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string EdgeCluster::GetCreatedTime() const
{
    return m_createdTime;
}

void EdgeCluster::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool EdgeCluster::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string EdgeCluster::GetEdgeClusterVersion() const
{
    return m_edgeClusterVersion;
}

void EdgeCluster::SetEdgeClusterVersion(const string& _edgeClusterVersion)
{
    m_edgeClusterVersion = _edgeClusterVersion;
    m_edgeClusterVersionHasBeenSet = true;
}

bool EdgeCluster::EdgeClusterVersionHasBeenSet() const
{
    return m_edgeClusterVersionHasBeenSet;
}

int64_t EdgeCluster::GetMaxNodePodNum() const
{
    return m_maxNodePodNum;
}

void EdgeCluster::SetMaxNodePodNum(const int64_t& _maxNodePodNum)
{
    m_maxNodePodNum = _maxNodePodNum;
    m_maxNodePodNumHasBeenSet = true;
}

bool EdgeCluster::MaxNodePodNumHasBeenSet() const
{
    return m_maxNodePodNumHasBeenSet;
}


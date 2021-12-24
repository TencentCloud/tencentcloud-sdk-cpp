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

#include <tencentcloud/iecp/v20210914/model/EdgeCloudCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeCloudCluster::EdgeCloudCluster() :
    m_edgeIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_k8SVersionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_podCIDRHasBeenSet(false),
    m_serviceCIDRHasBeenSet(false),
    m_edgeClusterVersionHasBeenSet(false),
    m_uIDHasBeenSet(false)
{
}

CoreInternalOutcome EdgeCloudCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.EdgeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = value["EdgeId"].GetUint64();
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("K8SVersion") && !value["K8SVersion"].IsNull())
    {
        if (!value["K8SVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.K8SVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8SVersion = string(value["K8SVersion"].GetString());
        m_k8SVersionHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterDesc") && !value["ClusterDesc"].IsNull())
    {
        if (!value["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(value["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PodCIDR") && !value["PodCIDR"].IsNull())
    {
        if (!value["PodCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.PodCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podCIDR = string(value["PodCIDR"].GetString());
        m_podCIDRHasBeenSet = true;
    }

    if (value.HasMember("ServiceCIDR") && !value["ServiceCIDR"].IsNull())
    {
        if (!value["ServiceCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.ServiceCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCIDR = string(value["ServiceCIDR"].GetString());
        m_serviceCIDRHasBeenSet = true;
    }

    if (value.HasMember("EdgeClusterVersion") && !value["EdgeClusterVersion"].IsNull())
    {
        if (!value["EdgeClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.EdgeClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeClusterVersion = string(value["EdgeClusterVersion"].GetString());
        m_edgeClusterVersionHasBeenSet = true;
    }

    if (value.HasMember("UID") && !value["UID"].IsNull())
    {
        if (!value["UID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeCloudCluster.UID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uID = string(value["UID"].GetString());
        m_uIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeCloudCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_edgeId, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_k8SVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8SVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8SVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_edgeClusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeClusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_uIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uID.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EdgeCloudCluster::GetEdgeId() const
{
    return m_edgeId;
}

void EdgeCloudCluster::SetEdgeId(const uint64_t& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool EdgeCloudCluster::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string EdgeCloudCluster::GetClusterId() const
{
    return m_clusterId;
}

void EdgeCloudCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EdgeCloudCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EdgeCloudCluster::GetRegion() const
{
    return m_region;
}

void EdgeCloudCluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool EdgeCloudCluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string EdgeCloudCluster::GetClusterName() const
{
    return m_clusterName;
}

void EdgeCloudCluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool EdgeCloudCluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string EdgeCloudCluster::GetK8SVersion() const
{
    return m_k8SVersion;
}

void EdgeCloudCluster::SetK8SVersion(const string& _k8SVersion)
{
    m_k8SVersion = _k8SVersion;
    m_k8SVersionHasBeenSet = true;
}

bool EdgeCloudCluster::K8SVersionHasBeenSet() const
{
    return m_k8SVersionHasBeenSet;
}

string EdgeCloudCluster::GetVpcId() const
{
    return m_vpcId;
}

void EdgeCloudCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EdgeCloudCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EdgeCloudCluster::GetClusterDesc() const
{
    return m_clusterDesc;
}

void EdgeCloudCluster::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool EdgeCloudCluster::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string EdgeCloudCluster::GetStatus() const
{
    return m_status;
}

void EdgeCloudCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgeCloudCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EdgeCloudCluster::GetCreateTime() const
{
    return m_createTime;
}

void EdgeCloudCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EdgeCloudCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EdgeCloudCluster::GetPodCIDR() const
{
    return m_podCIDR;
}

void EdgeCloudCluster::SetPodCIDR(const string& _podCIDR)
{
    m_podCIDR = _podCIDR;
    m_podCIDRHasBeenSet = true;
}

bool EdgeCloudCluster::PodCIDRHasBeenSet() const
{
    return m_podCIDRHasBeenSet;
}

string EdgeCloudCluster::GetServiceCIDR() const
{
    return m_serviceCIDR;
}

void EdgeCloudCluster::SetServiceCIDR(const string& _serviceCIDR)
{
    m_serviceCIDR = _serviceCIDR;
    m_serviceCIDRHasBeenSet = true;
}

bool EdgeCloudCluster::ServiceCIDRHasBeenSet() const
{
    return m_serviceCIDRHasBeenSet;
}

string EdgeCloudCluster::GetEdgeClusterVersion() const
{
    return m_edgeClusterVersion;
}

void EdgeCloudCluster::SetEdgeClusterVersion(const string& _edgeClusterVersion)
{
    m_edgeClusterVersion = _edgeClusterVersion;
    m_edgeClusterVersionHasBeenSet = true;
}

bool EdgeCloudCluster::EdgeClusterVersionHasBeenSet() const
{
    return m_edgeClusterVersionHasBeenSet;
}

string EdgeCloudCluster::GetUID() const
{
    return m_uID;
}

void EdgeCloudCluster::SetUID(const string& _uID)
{
    m_uID = _uID;
    m_uIDHasBeenSet = true;
}

bool EdgeCloudCluster::UIDHasBeenSet() const
{
    return m_uIDHasBeenSet;
}


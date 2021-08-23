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

#include <tencentcloud/tsf/v20180326/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_clusterCIDRHasBeenSet(false),
    m_clusterTotalCpuHasBeenSet(false),
    m_clusterTotalMemHasBeenSet(false),
    m_clusterUsedCpuHasBeenSet(false),
    m_clusterUsedMemHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_runInstanceCountHasBeenSet(false),
    m_normalInstanceCountHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_tsfRegionIdHasBeenSet(false),
    m_tsfRegionNameHasBeenSet(false),
    m_tsfZoneIdHasBeenSet(false),
    m_tsfZoneNameHasBeenSet(false),
    m_deleteFlagReasonHasBeenSet(false),
    m_clusterLimitCpuHasBeenSet(false),
    m_clusterLimitMemHasBeenSet(false),
    m_runServiceInstanceCountHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_operationInfoHasBeenSet(false),
    m_clusterVersionHasBeenSet(false)
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

    if (value.HasMember("ClusterDesc") && !value["ClusterDesc"].IsNull())
    {
        if (!value["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(value["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
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

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
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

    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("ClusterTotalCpu") && !value["ClusterTotalCpu"].IsNull())
    {
        if (!value["ClusterTotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterTotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterTotalCpu = value["ClusterTotalCpu"].GetDouble();
        m_clusterTotalCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterTotalMem") && !value["ClusterTotalMem"].IsNull())
    {
        if (!value["ClusterTotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterTotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterTotalMem = value["ClusterTotalMem"].GetDouble();
        m_clusterTotalMemHasBeenSet = true;
    }

    if (value.HasMember("ClusterUsedCpu") && !value["ClusterUsedCpu"].IsNull())
    {
        if (!value["ClusterUsedCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterUsedCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUsedCpu = value["ClusterUsedCpu"].GetDouble();
        m_clusterUsedCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterUsedMem") && !value["ClusterUsedMem"].IsNull())
    {
        if (!value["ClusterUsedMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterUsedMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUsedMem = value["ClusterUsedMem"].GetDouble();
        m_clusterUsedMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("NormalInstanceCount") && !value["NormalInstanceCount"].IsNull())
    {
        if (!value["NormalInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.NormalInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalInstanceCount = value["NormalInstanceCount"].GetInt64();
        m_normalInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TsfRegionId") && !value["TsfRegionId"].IsNull())
    {
        if (!value["TsfRegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TsfRegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfRegionId = string(value["TsfRegionId"].GetString());
        m_tsfRegionIdHasBeenSet = true;
    }

    if (value.HasMember("TsfRegionName") && !value["TsfRegionName"].IsNull())
    {
        if (!value["TsfRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TsfRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfRegionName = string(value["TsfRegionName"].GetString());
        m_tsfRegionNameHasBeenSet = true;
    }

    if (value.HasMember("TsfZoneId") && !value["TsfZoneId"].IsNull())
    {
        if (!value["TsfZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TsfZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfZoneId = string(value["TsfZoneId"].GetString());
        m_tsfZoneIdHasBeenSet = true;
    }

    if (value.HasMember("TsfZoneName") && !value["TsfZoneName"].IsNull())
    {
        if (!value["TsfZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TsfZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfZoneName = string(value["TsfZoneName"].GetString());
        m_tsfZoneNameHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlagReason") && !value["DeleteFlagReason"].IsNull())
    {
        if (!value["DeleteFlagReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DeleteFlagReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlagReason = string(value["DeleteFlagReason"].GetString());
        m_deleteFlagReasonHasBeenSet = true;
    }

    if (value.HasMember("ClusterLimitCpu") && !value["ClusterLimitCpu"].IsNull())
    {
        if (!value["ClusterLimitCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterLimitCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLimitCpu = value["ClusterLimitCpu"].GetDouble();
        m_clusterLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterLimitMem") && !value["ClusterLimitMem"].IsNull())
    {
        if (!value["ClusterLimitMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterLimitMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLimitMem = value["ClusterLimitMem"].GetDouble();
        m_clusterLimitMemHasBeenSet = true;
    }

    if (value.HasMember("RunServiceInstanceCount") && !value["RunServiceInstanceCount"].IsNull())
    {
        if (!value["RunServiceInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.RunServiceInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runServiceInstanceCount = value["RunServiceInstanceCount"].GetInt64();
        m_runServiceInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("OperationInfo") && !value["OperationInfo"].IsNull())
    {
        if (!value["OperationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.OperationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operationInfo.Deserialize(value["OperationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationInfoHasBeenSet = true;
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

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTotalCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTotalCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterTotalCpu, allocator);
    }

    if (m_clusterTotalMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTotalMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterTotalMem, allocator);
    }

    if (m_clusterUsedCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterUsedCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterUsedCpu, allocator);
    }

    if (m_clusterUsedMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterUsedMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterUsedMem, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_runInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstanceCount, allocator);
    }

    if (m_normalInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalInstanceCount, allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsfRegionId.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsfRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfZoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsfZoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsfZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteFlagReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlagReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteFlagReason.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLimitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterLimitCpu, allocator);
    }

    if (m_clusterLimitMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterLimitMem, allocator);
    }

    if (m_runServiceInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunServiceInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runServiceInstanceCount, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
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

string Cluster::GetClusterDesc() const
{
    return m_clusterDesc;
}

void Cluster::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool Cluster::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
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

string Cluster::GetVpcId() const
{
    return m_vpcId;
}

void Cluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Cluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
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

string Cluster::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void Cluster::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool Cluster::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

double Cluster::GetClusterTotalCpu() const
{
    return m_clusterTotalCpu;
}

void Cluster::SetClusterTotalCpu(const double& _clusterTotalCpu)
{
    m_clusterTotalCpu = _clusterTotalCpu;
    m_clusterTotalCpuHasBeenSet = true;
}

bool Cluster::ClusterTotalCpuHasBeenSet() const
{
    return m_clusterTotalCpuHasBeenSet;
}

double Cluster::GetClusterTotalMem() const
{
    return m_clusterTotalMem;
}

void Cluster::SetClusterTotalMem(const double& _clusterTotalMem)
{
    m_clusterTotalMem = _clusterTotalMem;
    m_clusterTotalMemHasBeenSet = true;
}

bool Cluster::ClusterTotalMemHasBeenSet() const
{
    return m_clusterTotalMemHasBeenSet;
}

double Cluster::GetClusterUsedCpu() const
{
    return m_clusterUsedCpu;
}

void Cluster::SetClusterUsedCpu(const double& _clusterUsedCpu)
{
    m_clusterUsedCpu = _clusterUsedCpu;
    m_clusterUsedCpuHasBeenSet = true;
}

bool Cluster::ClusterUsedCpuHasBeenSet() const
{
    return m_clusterUsedCpuHasBeenSet;
}

double Cluster::GetClusterUsedMem() const
{
    return m_clusterUsedMem;
}

void Cluster::SetClusterUsedMem(const double& _clusterUsedMem)
{
    m_clusterUsedMem = _clusterUsedMem;
    m_clusterUsedMemHasBeenSet = true;
}

bool Cluster::ClusterUsedMemHasBeenSet() const
{
    return m_clusterUsedMemHasBeenSet;
}

int64_t Cluster::GetInstanceCount() const
{
    return m_instanceCount;
}

void Cluster::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool Cluster::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t Cluster::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void Cluster::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool Cluster::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

int64_t Cluster::GetNormalInstanceCount() const
{
    return m_normalInstanceCount;
}

void Cluster::SetNormalInstanceCount(const int64_t& _normalInstanceCount)
{
    m_normalInstanceCount = _normalInstanceCount;
    m_normalInstanceCountHasBeenSet = true;
}

bool Cluster::NormalInstanceCountHasBeenSet() const
{
    return m_normalInstanceCountHasBeenSet;
}

bool Cluster::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void Cluster::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool Cluster::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string Cluster::GetCreateTime() const
{
    return m_createTime;
}

void Cluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Cluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Cluster::GetUpdateTime() const
{
    return m_updateTime;
}

void Cluster::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Cluster::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Cluster::GetTsfRegionId() const
{
    return m_tsfRegionId;
}

void Cluster::SetTsfRegionId(const string& _tsfRegionId)
{
    m_tsfRegionId = _tsfRegionId;
    m_tsfRegionIdHasBeenSet = true;
}

bool Cluster::TsfRegionIdHasBeenSet() const
{
    return m_tsfRegionIdHasBeenSet;
}

string Cluster::GetTsfRegionName() const
{
    return m_tsfRegionName;
}

void Cluster::SetTsfRegionName(const string& _tsfRegionName)
{
    m_tsfRegionName = _tsfRegionName;
    m_tsfRegionNameHasBeenSet = true;
}

bool Cluster::TsfRegionNameHasBeenSet() const
{
    return m_tsfRegionNameHasBeenSet;
}

string Cluster::GetTsfZoneId() const
{
    return m_tsfZoneId;
}

void Cluster::SetTsfZoneId(const string& _tsfZoneId)
{
    m_tsfZoneId = _tsfZoneId;
    m_tsfZoneIdHasBeenSet = true;
}

bool Cluster::TsfZoneIdHasBeenSet() const
{
    return m_tsfZoneIdHasBeenSet;
}

string Cluster::GetTsfZoneName() const
{
    return m_tsfZoneName;
}

void Cluster::SetTsfZoneName(const string& _tsfZoneName)
{
    m_tsfZoneName = _tsfZoneName;
    m_tsfZoneNameHasBeenSet = true;
}

bool Cluster::TsfZoneNameHasBeenSet() const
{
    return m_tsfZoneNameHasBeenSet;
}

string Cluster::GetDeleteFlagReason() const
{
    return m_deleteFlagReason;
}

void Cluster::SetDeleteFlagReason(const string& _deleteFlagReason)
{
    m_deleteFlagReason = _deleteFlagReason;
    m_deleteFlagReasonHasBeenSet = true;
}

bool Cluster::DeleteFlagReasonHasBeenSet() const
{
    return m_deleteFlagReasonHasBeenSet;
}

double Cluster::GetClusterLimitCpu() const
{
    return m_clusterLimitCpu;
}

void Cluster::SetClusterLimitCpu(const double& _clusterLimitCpu)
{
    m_clusterLimitCpu = _clusterLimitCpu;
    m_clusterLimitCpuHasBeenSet = true;
}

bool Cluster::ClusterLimitCpuHasBeenSet() const
{
    return m_clusterLimitCpuHasBeenSet;
}

double Cluster::GetClusterLimitMem() const
{
    return m_clusterLimitMem;
}

void Cluster::SetClusterLimitMem(const double& _clusterLimitMem)
{
    m_clusterLimitMem = _clusterLimitMem;
    m_clusterLimitMemHasBeenSet = true;
}

bool Cluster::ClusterLimitMemHasBeenSet() const
{
    return m_clusterLimitMemHasBeenSet;
}

int64_t Cluster::GetRunServiceInstanceCount() const
{
    return m_runServiceInstanceCount;
}

void Cluster::SetRunServiceInstanceCount(const int64_t& _runServiceInstanceCount)
{
    m_runServiceInstanceCount = _runServiceInstanceCount;
    m_runServiceInstanceCountHasBeenSet = true;
}

bool Cluster::RunServiceInstanceCountHasBeenSet() const
{
    return m_runServiceInstanceCountHasBeenSet;
}

string Cluster::GetSubnetId() const
{
    return m_subnetId;
}

void Cluster::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool Cluster::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

OperationInfo Cluster::GetOperationInfo() const
{
    return m_operationInfo;
}

void Cluster::SetOperationInfo(const OperationInfo& _operationInfo)
{
    m_operationInfo = _operationInfo;
    m_operationInfoHasBeenSet = true;
}

bool Cluster::OperationInfoHasBeenSet() const
{
    return m_operationInfoHasBeenSet;
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


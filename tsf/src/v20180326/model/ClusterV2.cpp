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

#include <tencentcloud/tsf/v20180326/model/ClusterV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ClusterV2::ClusterV2() :
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
    m_subnetIdHasBeenSet(false),
    m_clusterLimitCpuHasBeenSet(false),
    m_clusterLimitMemHasBeenSet(false),
    m_runServiceInstanceCountHasBeenSet(false),
    m_operationInfoHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_groupCountHasBeenSet(false),
    m_runGroupCountHasBeenSet(false),
    m_stopGroupCountHasBeenSet(false),
    m_abnormalGroupCountHasBeenSet(false),
    m_clusterRemarkNameHasBeenSet(false),
    m_kuberneteApiServerHasBeenSet(false),
    m_kuberneteNativeTypeHasBeenSet(false),
    m_kuberneteNativeSecretHasBeenSet(false),
    m_enableLogCollectionHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome ClusterV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterDesc") && !value["ClusterDesc"].IsNull())
    {
        if (!value["ClusterDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterDesc = string(value["ClusterDesc"].GetString());
        m_clusterDescHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterCIDR") && !value["ClusterCIDR"].IsNull())
    {
        if (!value["ClusterCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCIDR = string(value["ClusterCIDR"].GetString());
        m_clusterCIDRHasBeenSet = true;
    }

    if (value.HasMember("ClusterTotalCpu") && !value["ClusterTotalCpu"].IsNull())
    {
        if (!value["ClusterTotalCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterTotalCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterTotalCpu = value["ClusterTotalCpu"].GetDouble();
        m_clusterTotalCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterTotalMem") && !value["ClusterTotalMem"].IsNull())
    {
        if (!value["ClusterTotalMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterTotalMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterTotalMem = value["ClusterTotalMem"].GetDouble();
        m_clusterTotalMemHasBeenSet = true;
    }

    if (value.HasMember("ClusterUsedCpu") && !value["ClusterUsedCpu"].IsNull())
    {
        if (!value["ClusterUsedCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterUsedCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUsedCpu = value["ClusterUsedCpu"].GetDouble();
        m_clusterUsedCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterUsedMem") && !value["ClusterUsedMem"].IsNull())
    {
        if (!value["ClusterUsedMem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterUsedMem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_clusterUsedMem = value["ClusterUsedMem"].GetDouble();
        m_clusterUsedMemHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("NormalInstanceCount") && !value["NormalInstanceCount"].IsNull())
    {
        if (!value["NormalInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.NormalInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalInstanceCount = value["NormalInstanceCount"].GetInt64();
        m_normalInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlag") && !value["DeleteFlag"].IsNull())
    {
        if (!value["DeleteFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.DeleteFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = value["DeleteFlag"].GetBool();
        m_deleteFlagHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TsfRegionId") && !value["TsfRegionId"].IsNull())
    {
        if (!value["TsfRegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.TsfRegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfRegionId = string(value["TsfRegionId"].GetString());
        m_tsfRegionIdHasBeenSet = true;
    }

    if (value.HasMember("TsfRegionName") && !value["TsfRegionName"].IsNull())
    {
        if (!value["TsfRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.TsfRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfRegionName = string(value["TsfRegionName"].GetString());
        m_tsfRegionNameHasBeenSet = true;
    }

    if (value.HasMember("TsfZoneId") && !value["TsfZoneId"].IsNull())
    {
        if (!value["TsfZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.TsfZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfZoneId = string(value["TsfZoneId"].GetString());
        m_tsfZoneIdHasBeenSet = true;
    }

    if (value.HasMember("TsfZoneName") && !value["TsfZoneName"].IsNull())
    {
        if (!value["TsfZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.TsfZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfZoneName = string(value["TsfZoneName"].GetString());
        m_tsfZoneNameHasBeenSet = true;
    }

    if (value.HasMember("DeleteFlagReason") && !value["DeleteFlagReason"].IsNull())
    {
        if (!value["DeleteFlagReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.DeleteFlagReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlagReason = string(value["DeleteFlagReason"].GetString());
        m_deleteFlagReasonHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterLimitCpu") && !value["ClusterLimitCpu"].IsNull())
    {
        if (!value["ClusterLimitCpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterLimitCpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLimitCpu = string(value["ClusterLimitCpu"].GetString());
        m_clusterLimitCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterLimitMem") && !value["ClusterLimitMem"].IsNull())
    {
        if (!value["ClusterLimitMem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterLimitMem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterLimitMem = string(value["ClusterLimitMem"].GetString());
        m_clusterLimitMemHasBeenSet = true;
    }

    if (value.HasMember("RunServiceInstanceCount") && !value["RunServiceInstanceCount"].IsNull())
    {
        if (!value["RunServiceInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.RunServiceInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runServiceInstanceCount = value["RunServiceInstanceCount"].GetInt64();
        m_runServiceInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("OperationInfo") && !value["OperationInfo"].IsNull())
    {
        if (!value["OperationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.OperationInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("GroupCount") && !value["GroupCount"].IsNull())
    {
        if (!value["GroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.GroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = value["GroupCount"].GetUint64();
        m_groupCountHasBeenSet = true;
    }

    if (value.HasMember("RunGroupCount") && !value["RunGroupCount"].IsNull())
    {
        if (!value["RunGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.RunGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runGroupCount = value["RunGroupCount"].GetUint64();
        m_runGroupCountHasBeenSet = true;
    }

    if (value.HasMember("StopGroupCount") && !value["StopGroupCount"].IsNull())
    {
        if (!value["StopGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.StopGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopGroupCount = value["StopGroupCount"].GetUint64();
        m_stopGroupCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalGroupCount") && !value["AbnormalGroupCount"].IsNull())
    {
        if (!value["AbnormalGroupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.AbnormalGroupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalGroupCount = value["AbnormalGroupCount"].GetUint64();
        m_abnormalGroupCountHasBeenSet = true;
    }

    if (value.HasMember("ClusterRemarkName") && !value["ClusterRemarkName"].IsNull())
    {
        if (!value["ClusterRemarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.ClusterRemarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRemarkName = string(value["ClusterRemarkName"].GetString());
        m_clusterRemarkNameHasBeenSet = true;
    }

    if (value.HasMember("KuberneteApiServer") && !value["KuberneteApiServer"].IsNull())
    {
        if (!value["KuberneteApiServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.KuberneteApiServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kuberneteApiServer = string(value["KuberneteApiServer"].GetString());
        m_kuberneteApiServerHasBeenSet = true;
    }

    if (value.HasMember("KuberneteNativeType") && !value["KuberneteNativeType"].IsNull())
    {
        if (!value["KuberneteNativeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.KuberneteNativeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kuberneteNativeType = string(value["KuberneteNativeType"].GetString());
        m_kuberneteNativeTypeHasBeenSet = true;
    }

    if (value.HasMember("KuberneteNativeSecret") && !value["KuberneteNativeSecret"].IsNull())
    {
        if (!value["KuberneteNativeSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.KuberneteNativeSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kuberneteNativeSecret = string(value["KuberneteNativeSecret"].GetString());
        m_kuberneteNativeSecretHasBeenSet = true;
    }

    if (value.HasMember("EnableLogCollection") && !value["EnableLogCollection"].IsNull())
    {
        if (!value["EnableLogCollection"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.EnableLogCollection` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLogCollection = value["EnableLogCollection"].GetBool();
        m_enableLogCollectionHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterV2.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLimitCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLimitCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLimitCpu.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterLimitMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterLimitMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterLimitMem.c_str(), allocator).Move(), allocator);
    }

    if (m_runServiceInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunServiceInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runServiceInstanceCount, allocator);
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

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_runGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runGroupCount, allocator);
    }

    if (m_stopGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopGroupCount, allocator);
    }

    if (m_abnormalGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalGroupCount, allocator);
    }

    if (m_clusterRemarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRemarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRemarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteApiServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteApiServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kuberneteApiServer.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteNativeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteNativeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kuberneteNativeType.c_str(), allocator).Move(), allocator);
    }

    if (m_kuberneteNativeSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KuberneteNativeSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kuberneteNativeSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_enableLogCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLogCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLogCollection, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string ClusterV2::GetClusterId() const
{
    return m_clusterId;
}

void ClusterV2::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterV2::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterV2::GetClusterName() const
{
    return m_clusterName;
}

void ClusterV2::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterV2::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterV2::GetClusterDesc() const
{
    return m_clusterDesc;
}

void ClusterV2::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool ClusterV2::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

string ClusterV2::GetClusterType() const
{
    return m_clusterType;
}

void ClusterV2::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ClusterV2::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string ClusterV2::GetVpcId() const
{
    return m_vpcId;
}

void ClusterV2::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterV2::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ClusterV2::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterV2::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterV2::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string ClusterV2::GetClusterCIDR() const
{
    return m_clusterCIDR;
}

void ClusterV2::SetClusterCIDR(const string& _clusterCIDR)
{
    m_clusterCIDR = _clusterCIDR;
    m_clusterCIDRHasBeenSet = true;
}

bool ClusterV2::ClusterCIDRHasBeenSet() const
{
    return m_clusterCIDRHasBeenSet;
}

double ClusterV2::GetClusterTotalCpu() const
{
    return m_clusterTotalCpu;
}

void ClusterV2::SetClusterTotalCpu(const double& _clusterTotalCpu)
{
    m_clusterTotalCpu = _clusterTotalCpu;
    m_clusterTotalCpuHasBeenSet = true;
}

bool ClusterV2::ClusterTotalCpuHasBeenSet() const
{
    return m_clusterTotalCpuHasBeenSet;
}

double ClusterV2::GetClusterTotalMem() const
{
    return m_clusterTotalMem;
}

void ClusterV2::SetClusterTotalMem(const double& _clusterTotalMem)
{
    m_clusterTotalMem = _clusterTotalMem;
    m_clusterTotalMemHasBeenSet = true;
}

bool ClusterV2::ClusterTotalMemHasBeenSet() const
{
    return m_clusterTotalMemHasBeenSet;
}

double ClusterV2::GetClusterUsedCpu() const
{
    return m_clusterUsedCpu;
}

void ClusterV2::SetClusterUsedCpu(const double& _clusterUsedCpu)
{
    m_clusterUsedCpu = _clusterUsedCpu;
    m_clusterUsedCpuHasBeenSet = true;
}

bool ClusterV2::ClusterUsedCpuHasBeenSet() const
{
    return m_clusterUsedCpuHasBeenSet;
}

double ClusterV2::GetClusterUsedMem() const
{
    return m_clusterUsedMem;
}

void ClusterV2::SetClusterUsedMem(const double& _clusterUsedMem)
{
    m_clusterUsedMem = _clusterUsedMem;
    m_clusterUsedMemHasBeenSet = true;
}

bool ClusterV2::ClusterUsedMemHasBeenSet() const
{
    return m_clusterUsedMemHasBeenSet;
}

int64_t ClusterV2::GetInstanceCount() const
{
    return m_instanceCount;
}

void ClusterV2::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ClusterV2::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t ClusterV2::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void ClusterV2::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool ClusterV2::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

int64_t ClusterV2::GetNormalInstanceCount() const
{
    return m_normalInstanceCount;
}

void ClusterV2::SetNormalInstanceCount(const int64_t& _normalInstanceCount)
{
    m_normalInstanceCount = _normalInstanceCount;
    m_normalInstanceCountHasBeenSet = true;
}

bool ClusterV2::NormalInstanceCountHasBeenSet() const
{
    return m_normalInstanceCountHasBeenSet;
}

bool ClusterV2::GetDeleteFlag() const
{
    return m_deleteFlag;
}

void ClusterV2::SetDeleteFlag(const bool& _deleteFlag)
{
    m_deleteFlag = _deleteFlag;
    m_deleteFlagHasBeenSet = true;
}

bool ClusterV2::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string ClusterV2::GetCreateTime() const
{
    return m_createTime;
}

void ClusterV2::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterV2::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterV2::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterV2::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterV2::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ClusterV2::GetTsfRegionId() const
{
    return m_tsfRegionId;
}

void ClusterV2::SetTsfRegionId(const string& _tsfRegionId)
{
    m_tsfRegionId = _tsfRegionId;
    m_tsfRegionIdHasBeenSet = true;
}

bool ClusterV2::TsfRegionIdHasBeenSet() const
{
    return m_tsfRegionIdHasBeenSet;
}

string ClusterV2::GetTsfRegionName() const
{
    return m_tsfRegionName;
}

void ClusterV2::SetTsfRegionName(const string& _tsfRegionName)
{
    m_tsfRegionName = _tsfRegionName;
    m_tsfRegionNameHasBeenSet = true;
}

bool ClusterV2::TsfRegionNameHasBeenSet() const
{
    return m_tsfRegionNameHasBeenSet;
}

string ClusterV2::GetTsfZoneId() const
{
    return m_tsfZoneId;
}

void ClusterV2::SetTsfZoneId(const string& _tsfZoneId)
{
    m_tsfZoneId = _tsfZoneId;
    m_tsfZoneIdHasBeenSet = true;
}

bool ClusterV2::TsfZoneIdHasBeenSet() const
{
    return m_tsfZoneIdHasBeenSet;
}

string ClusterV2::GetTsfZoneName() const
{
    return m_tsfZoneName;
}

void ClusterV2::SetTsfZoneName(const string& _tsfZoneName)
{
    m_tsfZoneName = _tsfZoneName;
    m_tsfZoneNameHasBeenSet = true;
}

bool ClusterV2::TsfZoneNameHasBeenSet() const
{
    return m_tsfZoneNameHasBeenSet;
}

string ClusterV2::GetDeleteFlagReason() const
{
    return m_deleteFlagReason;
}

void ClusterV2::SetDeleteFlagReason(const string& _deleteFlagReason)
{
    m_deleteFlagReason = _deleteFlagReason;
    m_deleteFlagReasonHasBeenSet = true;
}

bool ClusterV2::DeleteFlagReasonHasBeenSet() const
{
    return m_deleteFlagReasonHasBeenSet;
}

string ClusterV2::GetSubnetId() const
{
    return m_subnetId;
}

void ClusterV2::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ClusterV2::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ClusterV2::GetClusterLimitCpu() const
{
    return m_clusterLimitCpu;
}

void ClusterV2::SetClusterLimitCpu(const string& _clusterLimitCpu)
{
    m_clusterLimitCpu = _clusterLimitCpu;
    m_clusterLimitCpuHasBeenSet = true;
}

bool ClusterV2::ClusterLimitCpuHasBeenSet() const
{
    return m_clusterLimitCpuHasBeenSet;
}

string ClusterV2::GetClusterLimitMem() const
{
    return m_clusterLimitMem;
}

void ClusterV2::SetClusterLimitMem(const string& _clusterLimitMem)
{
    m_clusterLimitMem = _clusterLimitMem;
    m_clusterLimitMemHasBeenSet = true;
}

bool ClusterV2::ClusterLimitMemHasBeenSet() const
{
    return m_clusterLimitMemHasBeenSet;
}

int64_t ClusterV2::GetRunServiceInstanceCount() const
{
    return m_runServiceInstanceCount;
}

void ClusterV2::SetRunServiceInstanceCount(const int64_t& _runServiceInstanceCount)
{
    m_runServiceInstanceCount = _runServiceInstanceCount;
    m_runServiceInstanceCountHasBeenSet = true;
}

bool ClusterV2::RunServiceInstanceCountHasBeenSet() const
{
    return m_runServiceInstanceCountHasBeenSet;
}

OperationInfo ClusterV2::GetOperationInfo() const
{
    return m_operationInfo;
}

void ClusterV2::SetOperationInfo(const OperationInfo& _operationInfo)
{
    m_operationInfo = _operationInfo;
    m_operationInfoHasBeenSet = true;
}

bool ClusterV2::OperationInfoHasBeenSet() const
{
    return m_operationInfoHasBeenSet;
}

string ClusterV2::GetClusterVersion() const
{
    return m_clusterVersion;
}

void ClusterV2::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool ClusterV2::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

uint64_t ClusterV2::GetGroupCount() const
{
    return m_groupCount;
}

void ClusterV2::SetGroupCount(const uint64_t& _groupCount)
{
    m_groupCount = _groupCount;
    m_groupCountHasBeenSet = true;
}

bool ClusterV2::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

uint64_t ClusterV2::GetRunGroupCount() const
{
    return m_runGroupCount;
}

void ClusterV2::SetRunGroupCount(const uint64_t& _runGroupCount)
{
    m_runGroupCount = _runGroupCount;
    m_runGroupCountHasBeenSet = true;
}

bool ClusterV2::RunGroupCountHasBeenSet() const
{
    return m_runGroupCountHasBeenSet;
}

uint64_t ClusterV2::GetStopGroupCount() const
{
    return m_stopGroupCount;
}

void ClusterV2::SetStopGroupCount(const uint64_t& _stopGroupCount)
{
    m_stopGroupCount = _stopGroupCount;
    m_stopGroupCountHasBeenSet = true;
}

bool ClusterV2::StopGroupCountHasBeenSet() const
{
    return m_stopGroupCountHasBeenSet;
}

uint64_t ClusterV2::GetAbnormalGroupCount() const
{
    return m_abnormalGroupCount;
}

void ClusterV2::SetAbnormalGroupCount(const uint64_t& _abnormalGroupCount)
{
    m_abnormalGroupCount = _abnormalGroupCount;
    m_abnormalGroupCountHasBeenSet = true;
}

bool ClusterV2::AbnormalGroupCountHasBeenSet() const
{
    return m_abnormalGroupCountHasBeenSet;
}

string ClusterV2::GetClusterRemarkName() const
{
    return m_clusterRemarkName;
}

void ClusterV2::SetClusterRemarkName(const string& _clusterRemarkName)
{
    m_clusterRemarkName = _clusterRemarkName;
    m_clusterRemarkNameHasBeenSet = true;
}

bool ClusterV2::ClusterRemarkNameHasBeenSet() const
{
    return m_clusterRemarkNameHasBeenSet;
}

string ClusterV2::GetKuberneteApiServer() const
{
    return m_kuberneteApiServer;
}

void ClusterV2::SetKuberneteApiServer(const string& _kuberneteApiServer)
{
    m_kuberneteApiServer = _kuberneteApiServer;
    m_kuberneteApiServerHasBeenSet = true;
}

bool ClusterV2::KuberneteApiServerHasBeenSet() const
{
    return m_kuberneteApiServerHasBeenSet;
}

string ClusterV2::GetKuberneteNativeType() const
{
    return m_kuberneteNativeType;
}

void ClusterV2::SetKuberneteNativeType(const string& _kuberneteNativeType)
{
    m_kuberneteNativeType = _kuberneteNativeType;
    m_kuberneteNativeTypeHasBeenSet = true;
}

bool ClusterV2::KuberneteNativeTypeHasBeenSet() const
{
    return m_kuberneteNativeTypeHasBeenSet;
}

string ClusterV2::GetKuberneteNativeSecret() const
{
    return m_kuberneteNativeSecret;
}

void ClusterV2::SetKuberneteNativeSecret(const string& _kuberneteNativeSecret)
{
    m_kuberneteNativeSecret = _kuberneteNativeSecret;
    m_kuberneteNativeSecretHasBeenSet = true;
}

bool ClusterV2::KuberneteNativeSecretHasBeenSet() const
{
    return m_kuberneteNativeSecretHasBeenSet;
}

bool ClusterV2::GetEnableLogCollection() const
{
    return m_enableLogCollection;
}

void ClusterV2::SetEnableLogCollection(const bool& _enableLogCollection)
{
    m_enableLogCollection = _enableLogCollection;
    m_enableLogCollectionHasBeenSet = true;
}

bool ClusterV2::EnableLogCollectionHasBeenSet() const
{
    return m_enableLogCollectionHasBeenSet;
}

string ClusterV2::GetReason() const
{
    return m_reason;
}

void ClusterV2::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ClusterV2::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}


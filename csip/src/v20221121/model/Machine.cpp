/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/Machine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

Machine::Machine() :
    m_agentStatusHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_cloudFromEnumHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_csipProtectTypeHasBeenSet(false),
    m_exposedStatusHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_latestOfflineTimeHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagItemsHasBeenSet(false),
    m_tagModifyInfoHasBeenSet(false),
    m_tatStatusHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_containerDefendStatusHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_cpuCoreCountHasBeenSet(false)
{
}

CoreInternalOutcome Machine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CloudFromEnum") && !value["CloudFromEnum"].IsNull())
    {
        if (!value["CloudFromEnum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CloudFromEnum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudFromEnum = string(value["CloudFromEnum"].GetString());
        m_cloudFromEnumHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("CsipProtectType") && !value["CsipProtectType"].IsNull())
    {
        if (!value["CsipProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CsipProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_csipProtectType = string(value["CsipProtectType"].GetString());
        m_csipProtectTypeHasBeenSet = true;
    }

    if (value.HasMember("ExposedStatus") && !value["ExposedStatus"].IsNull())
    {
        if (!value["ExposedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ExposedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exposedStatus = string(value["ExposedStatus"].GetString());
        m_exposedStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IsNew` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetBool();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("LatestOfflineTime") && !value["LatestOfflineTime"].IsNull())
    {
        if (!value["LatestOfflineTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.LatestOfflineTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestOfflineTime = value["LatestOfflineTime"].GetInt64();
        m_latestOfflineTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TagItems") && !value["TagItems"].IsNull())
    {
        if (!value["TagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.TagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MiniTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItems.push_back(item);
        }
        m_tagItemsHasBeenSet = true;
    }

    if (value.HasMember("TagModifyInfo") && !value["TagModifyInfo"].IsNull())
    {
        if (!value["TagModifyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.TagModifyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagModifyInfo.Deserialize(value["TagModifyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagModifyInfoHasBeenSet = true;
    }

    if (value.HasMember("TatStatus") && !value["TatStatus"].IsNull())
    {
        if (!value["TatStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.TatStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tatStatus = string(value["TatStatus"].GetString());
        m_tatStatusHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ContainerDefendStatus") && !value["ContainerDefendStatus"].IsNull())
    {
        if (!value["ContainerDefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ContainerDefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerDefendStatus = string(value["ContainerDefendStatus"].GetString());
        m_containerDefendStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetUint64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("CpuCoreCount") && !value["CpuCoreCount"].IsNull())
    {
        if (!value["CpuCoreCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CpuCoreCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCoreCount = value["CpuCoreCount"].GetUint64();
        m_cpuCoreCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Machine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_cloudFromEnumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFromEnum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudFromEnum.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_csipProtectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsipProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_csipProtectType.c_str(), allocator).Move(), allocator);
    }

    if (m_exposedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exposedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOfflineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestOfflineTime, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagModifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagModifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagModifyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tatStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TatStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tatStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerDefendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerDefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerDefendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_cpuCoreCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCoreCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuCoreCount, allocator);
    }

}


string Machine::GetAgentStatus() const
{
    return m_agentStatus;
}

void Machine::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool Machine::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string Machine::GetAgentVersion() const
{
    return m_agentVersion;
}

void Machine::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool Machine::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

uint64_t Machine::GetAppId() const
{
    return m_appId;
}

void Machine::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Machine::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Machine::GetCloudFromEnum() const
{
    return m_cloudFromEnum;
}

void Machine::SetCloudFromEnum(const string& _cloudFromEnum)
{
    m_cloudFromEnum = _cloudFromEnum;
    m_cloudFromEnumHasBeenSet = true;
}

bool Machine::CloudFromEnumHasBeenSet() const
{
    return m_cloudFromEnumHasBeenSet;
}

vector<Tag> Machine::GetCloudTags() const
{
    return m_cloudTags;
}

void Machine::SetCloudTags(const vector<Tag>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool Machine::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

string Machine::GetCsipProtectType() const
{
    return m_csipProtectType;
}

void Machine::SetCsipProtectType(const string& _csipProtectType)
{
    m_csipProtectType = _csipProtectType;
    m_csipProtectTypeHasBeenSet = true;
}

bool Machine::CsipProtectTypeHasBeenSet() const
{
    return m_csipProtectTypeHasBeenSet;
}

string Machine::GetExposedStatus() const
{
    return m_exposedStatus;
}

void Machine::SetExposedStatus(const string& _exposedStatus)
{
    m_exposedStatus = _exposedStatus;
    m_exposedStatusHasBeenSet = true;
}

bool Machine::ExposedStatusHasBeenSet() const
{
    return m_exposedStatusHasBeenSet;
}

string Machine::GetInstanceID() const
{
    return m_instanceID;
}

void Machine::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool Machine::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string Machine::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void Machine::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool Machine::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

vector<string> Machine::GetIpList() const
{
    return m_ipList;
}

void Machine::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool Machine::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

bool Machine::GetIsNew() const
{
    return m_isNew;
}

void Machine::SetIsNew(const bool& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool Machine::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string Machine::GetKernelVersion() const
{
    return m_kernelVersion;
}

void Machine::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool Machine::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

int64_t Machine::GetLatestOfflineTime() const
{
    return m_latestOfflineTime;
}

void Machine::SetLatestOfflineTime(const int64_t& _latestOfflineTime)
{
    m_latestOfflineTime = _latestOfflineTime;
    m_latestOfflineTimeHasBeenSet = true;
}

bool Machine::LatestOfflineTimeHasBeenSet() const
{
    return m_latestOfflineTimeHasBeenSet;
}

string Machine::GetMachineIp() const
{
    return m_machineIp;
}

void Machine::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool Machine::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string Machine::GetMachineName() const
{
    return m_machineName;
}

void Machine::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool Machine::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string Machine::GetMachineOs() const
{
    return m_machineOs;
}

void Machine::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool Machine::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string Machine::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void Machine::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool Machine::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string Machine::GetPayMode() const
{
    return m_payMode;
}

void Machine::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Machine::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t Machine::GetProjectId() const
{
    return m_projectId;
}

void Machine::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Machine::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Machine::GetProtectType() const
{
    return m_protectType;
}

void Machine::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool Machine::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

string Machine::GetQuuid() const
{
    return m_quuid;
}

void Machine::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool Machine::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

RegionInfo Machine::GetRegionInfo() const
{
    return m_regionInfo;
}

void Machine::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool Machine::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string Machine::GetRemark() const
{
    return m_remark;
}

void Machine::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Machine::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<MiniTagItem> Machine::GetTagItems() const
{
    return m_tagItems;
}

void Machine::SetTagItems(const vector<MiniTagItem>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool Machine::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

AssetTagModifyAssetItem Machine::GetTagModifyInfo() const
{
    return m_tagModifyInfo;
}

void Machine::SetTagModifyInfo(const AssetTagModifyAssetItem& _tagModifyInfo)
{
    m_tagModifyInfo = _tagModifyInfo;
    m_tagModifyInfoHasBeenSet = true;
}

bool Machine::TagModifyInfoHasBeenSet() const
{
    return m_tagModifyInfoHasBeenSet;
}

string Machine::GetTatStatus() const
{
    return m_tatStatus;
}

void Machine::SetTatStatus(const string& _tatStatus)
{
    m_tatStatus = _tatStatus;
    m_tatStatusHasBeenSet = true;
}

bool Machine::TatStatusHasBeenSet() const
{
    return m_tatStatusHasBeenSet;
}

string Machine::GetUuid() const
{
    return m_uuid;
}

void Machine::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Machine::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Machine::GetVpcId() const
{
    return m_vpcId;
}

void Machine::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool Machine::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string Machine::GetNodeType() const
{
    return m_nodeType;
}

void Machine::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool Machine::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string Machine::GetContainerDefendStatus() const
{
    return m_containerDefendStatus;
}

void Machine::SetContainerDefendStatus(const string& _containerDefendStatus)
{
    m_containerDefendStatus = _containerDefendStatus;
    m_containerDefendStatusHasBeenSet = true;
}

bool Machine::ContainerDefendStatusHasBeenSet() const
{
    return m_containerDefendStatusHasBeenSet;
}

uint64_t Machine::GetContainerCount() const
{
    return m_containerCount;
}

void Machine::SetContainerCount(const uint64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool Machine::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

uint64_t Machine::GetCpuCoreCount() const
{
    return m_cpuCoreCount;
}

void Machine::SetCpuCoreCount(const uint64_t& _cpuCoreCount)
{
    m_cpuCoreCount = _cpuCoreCount;
    m_cpuCoreCountHasBeenSet = true;
}

bool Machine::CpuCoreCountHasBeenSet() const
{
    return m_cpuCoreCountHasBeenSet;
}


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

#include <tencentcloud/cwp/v20180228/model/Machine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

Machine::Machine() :
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_malwareNumHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_baselineNumHasBeenSet(false),
    m_cyberAttackNumHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_invasionNumHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_licenseStatusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_hasAssetScanHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_isAddedOnTheFifteenHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome Machine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


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

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
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

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
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

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
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

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
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

    if (value.HasMember("MalwareNum") && !value["MalwareNum"].IsNull())
    {
        if (!value["MalwareNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MalwareNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareNum = value["MalwareNum"].GetInt64();
        m_malwareNumHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("BaselineNum") && !value["BaselineNum"].IsNull())
    {
        if (!value["BaselineNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.BaselineNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineNum = value["BaselineNum"].GetInt64();
        m_baselineNumHasBeenSet = true;
    }

    if (value.HasMember("CyberAttackNum") && !value["CyberAttackNum"].IsNull())
    {
        if (!value["CyberAttackNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CyberAttackNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cyberAttackNum = value["CyberAttackNum"].GetInt64();
        m_cyberAttackNumHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.SecurityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityStatus = string(value["SecurityStatus"].GetString());
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("InvasionNum") && !value["InvasionNum"].IsNull())
    {
        if (!value["InvasionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InvasionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invasionNum = value["InvasionNum"].GetInt64();
        m_invasionNumHasBeenSet = true;
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

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("LicenseStatus") && !value["LicenseStatus"].IsNull())
    {
        if (!value["LicenseStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.LicenseStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseStatus = value["LicenseStatus"].GetUint64();
        m_licenseStatusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("HasAssetScan") && !value["HasAssetScan"].IsNull())
    {
        if (!value["HasAssetScan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.HasAssetScan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasAssetScan = value["HasAssetScan"].GetUint64();
        m_hasAssetScanHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
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

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machine.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
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

    if (value.HasMember("IsAddedOnTheFifteen") && !value["IsAddedOnTheFifteen"].IsNull())
    {
        if (!value["IsAddedOnTheFifteen"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IsAddedOnTheFifteen` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAddedOnTheFifteen = value["IsAddedOnTheFifteen"].GetUint64();
        m_isAddedOnTheFifteenHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IpList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipList = string(value["IpList"].GetString());
        m_ipListHasBeenSet = true;
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

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void Machine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
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

    if (m_malwareNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareNum, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baselineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineNum, allocator);
    }

    if (m_cyberAttackNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CyberAttackNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cyberAttackNum, allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_invasionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invasionNum, allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseStatus, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_hasAssetScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAssetScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasAssetScan, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
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

    if (m_isAddedOnTheFifteenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAddedOnTheFifteen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAddedOnTheFifteen, allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipList.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

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

string Machine::GetMachineStatus() const
{
    return m_machineStatus;
}

void Machine::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool Machine::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
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

int64_t Machine::GetVulNum() const
{
    return m_vulNum;
}

void Machine::SetVulNum(const int64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool Machine::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
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

bool Machine::GetIsProVersion() const
{
    return m_isProVersion;
}

void Machine::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool Machine::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
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

int64_t Machine::GetMalwareNum() const
{
    return m_malwareNum;
}

void Machine::SetMalwareNum(const int64_t& _malwareNum)
{
    m_malwareNum = _malwareNum;
    m_malwareNumHasBeenSet = true;
}

bool Machine::MalwareNumHasBeenSet() const
{
    return m_malwareNumHasBeenSet;
}

vector<MachineTag> Machine::GetTag() const
{
    return m_tag;
}

void Machine::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool Machine::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t Machine::GetBaselineNum() const
{
    return m_baselineNum;
}

void Machine::SetBaselineNum(const int64_t& _baselineNum)
{
    m_baselineNum = _baselineNum;
    m_baselineNumHasBeenSet = true;
}

bool Machine::BaselineNumHasBeenSet() const
{
    return m_baselineNumHasBeenSet;
}

int64_t Machine::GetCyberAttackNum() const
{
    return m_cyberAttackNum;
}

void Machine::SetCyberAttackNum(const int64_t& _cyberAttackNum)
{
    m_cyberAttackNum = _cyberAttackNum;
    m_cyberAttackNumHasBeenSet = true;
}

bool Machine::CyberAttackNumHasBeenSet() const
{
    return m_cyberAttackNumHasBeenSet;
}

string Machine::GetSecurityStatus() const
{
    return m_securityStatus;
}

void Machine::SetSecurityStatus(const string& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool Machine::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

int64_t Machine::GetInvasionNum() const
{
    return m_invasionNum;
}

void Machine::SetInvasionNum(const int64_t& _invasionNum)
{
    m_invasionNum = _invasionNum;
    m_invasionNumHasBeenSet = true;
}

bool Machine::InvasionNumHasBeenSet() const
{
    return m_invasionNumHasBeenSet;
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

string Machine::GetInstanceState() const
{
    return m_instanceState;
}

void Machine::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Machine::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t Machine::GetLicenseStatus() const
{
    return m_licenseStatus;
}

void Machine::SetLicenseStatus(const uint64_t& _licenseStatus)
{
    m_licenseStatus = _licenseStatus;
    m_licenseStatusHasBeenSet = true;
}

bool Machine::LicenseStatusHasBeenSet() const
{
    return m_licenseStatusHasBeenSet;
}

int64_t Machine::GetProjectId() const
{
    return m_projectId;
}

void Machine::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Machine::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t Machine::GetHasAssetScan() const
{
    return m_hasAssetScan;
}

void Machine::SetHasAssetScan(const uint64_t& _hasAssetScan)
{
    m_hasAssetScan = _hasAssetScan;
    m_hasAssetScanHasBeenSet = true;
}

bool Machine::HasAssetScanHasBeenSet() const
{
    return m_hasAssetScanHasBeenSet;
}

string Machine::GetMachineType() const
{
    return m_machineType;
}

void Machine::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool Machine::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
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

vector<Tags> Machine::GetCloudTags() const
{
    return m_cloudTags;
}

void Machine::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool Machine::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

uint64_t Machine::GetIsAddedOnTheFifteen() const
{
    return m_isAddedOnTheFifteen;
}

void Machine::SetIsAddedOnTheFifteen(const uint64_t& _isAddedOnTheFifteen)
{
    m_isAddedOnTheFifteen = _isAddedOnTheFifteen;
    m_isAddedOnTheFifteenHasBeenSet = true;
}

bool Machine::IsAddedOnTheFifteenHasBeenSet() const
{
    return m_isAddedOnTheFifteenHasBeenSet;
}

string Machine::GetIpList() const
{
    return m_ipList;
}

void Machine::SetIpList(const string& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool Machine::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
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

MachineExtraInfo Machine::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void Machine::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool Machine::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string Machine::GetInstanceId() const
{
    return m_instanceId;
}

void Machine::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Machine::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
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


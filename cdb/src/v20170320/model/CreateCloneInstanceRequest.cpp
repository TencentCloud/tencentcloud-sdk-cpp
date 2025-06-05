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

#include <tencentcloud/cdb/v20170320/model/CreateCloneInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateCloneInstanceRequest::CreateCloneInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_specifiedRollbackTimeHasBeenSet(false),
    m_specifiedBackupIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_backupZoneHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceNodesHasBeenSet(false),
    m_deployGroupIdHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_cageIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_clusterTopologyHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_specifiedSubBackupIdHasBeenSet(false)
{
}

string CreateCloneInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_specifiedRollbackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifiedRollbackTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specifiedRollbackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_specifiedBackupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifiedBackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_specifiedBackupId, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroup.begin(); itr != m_securityGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_backupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNodes, allocator);
    }

    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_clusterTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterTopology.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_specifiedSubBackupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifiedSubBackupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_specifiedSubBackupId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloneInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateCloneInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetSpecifiedRollbackTime() const
{
    return m_specifiedRollbackTime;
}

void CreateCloneInstanceRequest::SetSpecifiedRollbackTime(const string& _specifiedRollbackTime)
{
    m_specifiedRollbackTime = _specifiedRollbackTime;
    m_specifiedRollbackTimeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SpecifiedRollbackTimeHasBeenSet() const
{
    return m_specifiedRollbackTimeHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetSpecifiedBackupId() const
{
    return m_specifiedBackupId;
}

void CreateCloneInstanceRequest::SetSpecifiedBackupId(const int64_t& _specifiedBackupId)
{
    m_specifiedBackupId = _specifiedBackupId;
    m_specifiedBackupIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SpecifiedBackupIdHasBeenSet() const
{
    return m_specifiedBackupIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateCloneInstanceRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateCloneInstanceRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateCloneInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateCloneInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetVolume() const
{
    return m_volume;
}

void CreateCloneInstanceRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string CreateCloneInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateCloneInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> CreateCloneInstanceRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateCloneInstanceRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

vector<TagInfo> CreateCloneInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateCloneInstanceRequest::SetResourceTags(const vector<TagInfo>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void CreateCloneInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateCloneInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetProtectMode() const
{
    return m_protectMode;
}

void CreateCloneInstanceRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetDeployMode() const
{
    return m_deployMode;
}

void CreateCloneInstanceRequest::SetDeployMode(const int64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string CreateCloneInstanceRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void CreateCloneInstanceRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string CreateCloneInstanceRequest::GetBackupZone() const
{
    return m_backupZone;
}

void CreateCloneInstanceRequest::SetBackupZone(const string& _backupZone)
{
    m_backupZone = _backupZone;
    m_backupZoneHasBeenSet = true;
}

bool CreateCloneInstanceRequest::BackupZoneHasBeenSet() const
{
    return m_backupZoneHasBeenSet;
}

string CreateCloneInstanceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateCloneInstanceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetInstanceNodes() const
{
    return m_instanceNodes;
}

void CreateCloneInstanceRequest::SetInstanceNodes(const int64_t& _instanceNodes)
{
    m_instanceNodes = _instanceNodes;
    m_instanceNodesHasBeenSet = true;
}

bool CreateCloneInstanceRequest::InstanceNodesHasBeenSet() const
{
    return m_instanceNodesHasBeenSet;
}

string CreateCloneInstanceRequest::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void CreateCloneInstanceRequest::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

bool CreateCloneInstanceRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateCloneInstanceRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateCloneInstanceRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateCloneInstanceRequest::GetCageId() const
{
    return m_cageId;
}

void CreateCloneInstanceRequest::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

uint64_t CreateCloneInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCloneInstanceRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateCloneInstanceRequest::GetPayType() const
{
    return m_payType;
}

void CreateCloneInstanceRequest::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool CreateCloneInstanceRequest::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateCloneInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateCloneInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

ClusterTopology CreateCloneInstanceRequest::GetClusterTopology() const
{
    return m_clusterTopology;
}

void CreateCloneInstanceRequest::SetClusterTopology(const ClusterTopology& _clusterTopology)
{
    m_clusterTopology = _clusterTopology;
    m_clusterTopologyHasBeenSet = true;
}

bool CreateCloneInstanceRequest::ClusterTopologyHasBeenSet() const
{
    return m_clusterTopologyHasBeenSet;
}

string CreateCloneInstanceRequest::GetSrcRegion() const
{
    return m_srcRegion;
}

void CreateCloneInstanceRequest::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

int64_t CreateCloneInstanceRequest::GetSpecifiedSubBackupId() const
{
    return m_specifiedSubBackupId;
}

void CreateCloneInstanceRequest::SetSpecifiedSubBackupId(const int64_t& _specifiedSubBackupId)
{
    m_specifiedSubBackupId = _specifiedSubBackupId;
    m_specifiedSubBackupIdHasBeenSet = true;
}

bool CreateCloneInstanceRequest::SpecifiedSubBackupIdHasBeenSet() const
{
    return m_specifiedSubBackupIdHasBeenSet;
}



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

#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_backupZoneHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_masterRegionHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_roGroupHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_deployGroupIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_alarmPolicyListHasBeenSet(false),
    m_instanceNodesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_autoSyncFlagHasBeenSet(false),
    m_cageIdHasBeenSet(false),
    m_paramTemplateTypeHasBeenSet(false),
    m_alarmPolicyIdListHasBeenSet(false),
    m_dryRunHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_vipsHasBeenSet(false),
    m_dataProtectVolumeHasBeenSet(false),
    m_clusterTopologyHasBeenSet(false),
    m_diskTypeHasBeenSet(false)
{
}

string CreateDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_masterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_backupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_masterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterRegion.c_str(), allocator).Move(), allocator);
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

    if (m_roGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roGroup.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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

    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramTemplateId, allocator);
    }

    if (m_alarmPolicyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyList.begin(); itr != m_alarmPolicyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNodes, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_autoSyncFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSyncFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSyncFlag, allocator);
    }

    if (m_cageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cageId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramTemplateType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmPolicyIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyIdList.begin(); itr != m_alarmPolicyIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_vipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vips.begin(); itr != m_vips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataProtectVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProtectVolume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataProtectVolume, allocator);
    }

    if (m_clusterTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterTopology.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetVolume() const
{
    return m_volume;
}

void CreateDBInstanceRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateDBInstanceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateDBInstanceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDBInstanceRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDBInstanceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateDBInstanceRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateDBInstanceRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateDBInstanceRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateDBInstanceRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDBInstanceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetPort() const
{
    return m_port;
}

void CreateDBInstanceRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateDBInstanceRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateDBInstanceRequest::GetInstanceRole() const
{
    return m_instanceRole;
}

void CreateDBInstanceRequest::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool CreateDBInstanceRequest::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string CreateDBInstanceRequest::GetMasterInstanceId() const
{
    return m_masterInstanceId;
}

void CreateDBInstanceRequest::SetMasterInstanceId(const string& _masterInstanceId)
{
    m_masterInstanceId = _masterInstanceId;
    m_masterInstanceIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::MasterInstanceIdHasBeenSet() const
{
    return m_masterInstanceIdHasBeenSet;
}

string CreateDBInstanceRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void CreateDBInstanceRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CreateDBInstanceRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string CreateDBInstanceRequest::GetPassword() const
{
    return m_password;
}

void CreateDBInstanceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateDBInstanceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetProtectMode() const
{
    return m_protectMode;
}

void CreateDBInstanceRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool CreateDBInstanceRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetDeployMode() const
{
    return m_deployMode;
}

void CreateDBInstanceRequest::SetDeployMode(const int64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateDBInstanceRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string CreateDBInstanceRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void CreateDBInstanceRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool CreateDBInstanceRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

vector<ParamInfo> CreateDBInstanceRequest::GetParamList() const
{
    return m_paramList;
}

void CreateDBInstanceRequest::SetParamList(const vector<ParamInfo>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CreateDBInstanceRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

string CreateDBInstanceRequest::GetBackupZone() const
{
    return m_backupZone;
}

void CreateDBInstanceRequest::SetBackupZone(const string& _backupZone)
{
    m_backupZone = _backupZone;
    m_backupZoneHasBeenSet = true;
}

bool CreateDBInstanceRequest::BackupZoneHasBeenSet() const
{
    return m_backupZoneHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDBInstanceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateDBInstanceRequest::GetMasterRegion() const
{
    return m_masterRegion;
}

void CreateDBInstanceRequest::SetMasterRegion(const string& _masterRegion)
{
    m_masterRegion = _masterRegion;
    m_masterRegionHasBeenSet = true;
}

bool CreateDBInstanceRequest::MasterRegionHasBeenSet() const
{
    return m_masterRegionHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateDBInstanceRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateDBInstanceRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

RoGroup CreateDBInstanceRequest::GetRoGroup() const
{
    return m_roGroup;
}

void CreateDBInstanceRequest::SetRoGroup(const RoGroup& _roGroup)
{
    m_roGroup = _roGroup;
    m_roGroupHasBeenSet = true;
}

bool CreateDBInstanceRequest::RoGroupHasBeenSet() const
{
    return m_roGroupHasBeenSet;
}

string CreateDBInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDBInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDBInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<TagInfo> CreateDBInstanceRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDBInstanceRequest::SetResourceTags(const vector<TagInfo>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDBInstanceRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateDBInstanceRequest::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void CreateDBInstanceRequest::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string CreateDBInstanceRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDBInstanceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDBInstanceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateDBInstanceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateDBInstanceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateDBInstanceRequest::SetParamTemplateId(const int64_t& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

vector<int64_t> CreateDBInstanceRequest::GetAlarmPolicyList() const
{
    return m_alarmPolicyList;
}

void CreateDBInstanceRequest::SetAlarmPolicyList(const vector<int64_t>& _alarmPolicyList)
{
    m_alarmPolicyList = _alarmPolicyList;
    m_alarmPolicyListHasBeenSet = true;
}

bool CreateDBInstanceRequest::AlarmPolicyListHasBeenSet() const
{
    return m_alarmPolicyListHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetInstanceNodes() const
{
    return m_instanceNodes;
}

void CreateDBInstanceRequest::SetInstanceNodes(const int64_t& _instanceNodes)
{
    m_instanceNodes = _instanceNodes;
    m_instanceNodesHasBeenSet = true;
}

bool CreateDBInstanceRequest::InstanceNodesHasBeenSet() const
{
    return m_instanceNodesHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void CreateDBInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateDBInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetAutoSyncFlag() const
{
    return m_autoSyncFlag;
}

void CreateDBInstanceRequest::SetAutoSyncFlag(const int64_t& _autoSyncFlag)
{
    m_autoSyncFlag = _autoSyncFlag;
    m_autoSyncFlagHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoSyncFlagHasBeenSet() const
{
    return m_autoSyncFlagHasBeenSet;
}

string CreateDBInstanceRequest::GetCageId() const
{
    return m_cageId;
}

void CreateDBInstanceRequest::SetCageId(const string& _cageId)
{
    m_cageId = _cageId;
    m_cageIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::CageIdHasBeenSet() const
{
    return m_cageIdHasBeenSet;
}

string CreateDBInstanceRequest::GetParamTemplateType() const
{
    return m_paramTemplateType;
}

void CreateDBInstanceRequest::SetParamTemplateType(const string& _paramTemplateType)
{
    m_paramTemplateType = _paramTemplateType;
    m_paramTemplateTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::ParamTemplateTypeHasBeenSet() const
{
    return m_paramTemplateTypeHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetAlarmPolicyIdList() const
{
    return m_alarmPolicyIdList;
}

void CreateDBInstanceRequest::SetAlarmPolicyIdList(const vector<string>& _alarmPolicyIdList)
{
    m_alarmPolicyIdList = _alarmPolicyIdList;
    m_alarmPolicyIdListHasBeenSet = true;
}

bool CreateDBInstanceRequest::AlarmPolicyIdListHasBeenSet() const
{
    return m_alarmPolicyIdListHasBeenSet;
}

bool CreateDBInstanceRequest::GetDryRun() const
{
    return m_dryRun;
}

void CreateDBInstanceRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool CreateDBInstanceRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

string CreateDBInstanceRequest::GetEngineType() const
{
    return m_engineType;
}

void CreateDBInstanceRequest::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetVips() const
{
    return m_vips;
}

void CreateDBInstanceRequest::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool CreateDBInstanceRequest::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetDataProtectVolume() const
{
    return m_dataProtectVolume;
}

void CreateDBInstanceRequest::SetDataProtectVolume(const int64_t& _dataProtectVolume)
{
    m_dataProtectVolume = _dataProtectVolume;
    m_dataProtectVolumeHasBeenSet = true;
}

bool CreateDBInstanceRequest::DataProtectVolumeHasBeenSet() const
{
    return m_dataProtectVolumeHasBeenSet;
}

ClusterTopology CreateDBInstanceRequest::GetClusterTopology() const
{
    return m_clusterTopology;
}

void CreateDBInstanceRequest::SetClusterTopology(const ClusterTopology& _clusterTopology)
{
    m_clusterTopology = _clusterTopology;
    m_clusterTopologyHasBeenSet = true;
}

bool CreateDBInstanceRequest::ClusterTopologyHasBeenSet() const
{
    return m_clusterTopologyHasBeenSet;
}

string CreateDBInstanceRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateDBInstanceRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}



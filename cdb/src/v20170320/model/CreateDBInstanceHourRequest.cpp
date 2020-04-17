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

#include <tencentcloud/cdb/v20170320/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

CreateDBInstanceHourRequest::CreateDBInstanceHourRequest() :
    m_goodsNumHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_masterRegionHasBeenSet(false),
    m_portHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_backupZoneHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_roGroupHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_deployGroupIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

string CreateDBInstanceHourRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_goodsNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_masterInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_masterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_masterRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_masterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_paramListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramList.begin(); itr != m_paramList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_protectModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_backupZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroup.begin(); itr != m_securityGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roGroupHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_roGroup.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deployGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDBInstanceHourRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDBInstanceHourRequest::SetGoodsNum(const int64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetMemory() const
{
    return m_memory;
}

void CreateDBInstanceHourRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetVolume() const
{
    return m_volume;
}

void CreateDBInstanceHourRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string CreateDBInstanceHourRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void CreateDBInstanceHourRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string CreateDBInstanceHourRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateDBInstanceHourRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateDBInstanceHourRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateDBInstanceHourRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDBInstanceHourRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateDBInstanceHourRequest::GetZone() const
{
    return m_zone;
}

void CreateDBInstanceHourRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateDBInstanceHourRequest::GetMasterInstanceId() const
{
    return m_masterInstanceId;
}

void CreateDBInstanceHourRequest::SetMasterInstanceId(const string& _masterInstanceId)
{
    m_masterInstanceId = _masterInstanceId;
    m_masterInstanceIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MasterInstanceIdHasBeenSet() const
{
    return m_masterInstanceIdHasBeenSet;
}

string CreateDBInstanceHourRequest::GetInstanceRole() const
{
    return m_instanceRole;
}

void CreateDBInstanceHourRequest::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string CreateDBInstanceHourRequest::GetMasterRegion() const
{
    return m_masterRegion;
}

void CreateDBInstanceHourRequest::SetMasterRegion(const string& _masterRegion)
{
    m_masterRegion = _masterRegion;
    m_masterRegionHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MasterRegionHasBeenSet() const
{
    return m_masterRegionHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetPort() const
{
    return m_port;
}

void CreateDBInstanceHourRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateDBInstanceHourRequest::GetPassword() const
{
    return m_password;
}

void CreateDBInstanceHourRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<ParamInfo> CreateDBInstanceHourRequest::GetParamList() const
{
    return m_paramList;
}

void CreateDBInstanceHourRequest::SetParamList(const vector<ParamInfo>& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetProtectMode() const
{
    return m_protectMode;
}

void CreateDBInstanceHourRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetDeployMode() const
{
    return m_deployMode;
}

void CreateDBInstanceHourRequest::SetDeployMode(const int64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string CreateDBInstanceHourRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void CreateDBInstanceHourRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string CreateDBInstanceHourRequest::GetBackupZone() const
{
    return m_backupZone;
}

void CreateDBInstanceHourRequest::SetBackupZone(const string& _backupZone)
{
    m_backupZone = _backupZone;
    m_backupZoneHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::BackupZoneHasBeenSet() const
{
    return m_backupZoneHasBeenSet;
}

vector<string> CreateDBInstanceHourRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateDBInstanceHourRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

RoGroup CreateDBInstanceHourRequest::GetRoGroup() const
{
    return m_roGroup;
}

void CreateDBInstanceHourRequest::SetRoGroup(const RoGroup& _roGroup)
{
    m_roGroup = _roGroup;
    m_roGroupHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::RoGroupHasBeenSet() const
{
    return m_roGroupHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDBInstanceHourRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateDBInstanceHourRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateDBInstanceHourRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<TagInfo> CreateDBInstanceHourRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateDBInstanceHourRequest::SetResourceTags(const vector<TagInfo>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CreateDBInstanceHourRequest::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void CreateDBInstanceHourRequest::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string CreateDBInstanceHourRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateDBInstanceHourRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateDBInstanceHourRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateDBInstanceHourRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}



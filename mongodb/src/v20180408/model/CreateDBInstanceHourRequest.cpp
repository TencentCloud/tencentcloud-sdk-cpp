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

#include <tencentcloud/mongodb/v20180408/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace std;

CreateDBInstanceHourRequest::CreateDBInstanceHourRequest() :
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_replicateSetNumHasBeenSet(false),
    m_secondaryNumHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false)
{
}

string CreateDBInstanceHourRequest::ToJsonString() const
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

    if (m_replicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_secondaryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secondaryNum, allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
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

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateDBInstanceHourRequest::GetMemory() const
{
    return m_memory;
}

void CreateDBInstanceHourRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetVolume() const
{
    return m_volume;
}

void CreateDBInstanceHourRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetReplicateSetNum() const
{
    return m_replicateSetNum;
}

void CreateDBInstanceHourRequest::SetReplicateSetNum(const uint64_t& _replicateSetNum)
{
    m_replicateSetNum = _replicateSetNum;
    m_replicateSetNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ReplicateSetNumHasBeenSet() const
{
    return m_replicateSetNumHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetSecondaryNum() const
{
    return m_secondaryNum;
}

void CreateDBInstanceHourRequest::SetSecondaryNum(const uint64_t& _secondaryNum)
{
    m_secondaryNum = _secondaryNum;
    m_secondaryNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::SecondaryNumHasBeenSet() const
{
    return m_secondaryNumHasBeenSet;
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

string CreateDBInstanceHourRequest::GetMachine() const
{
    return m_machine;
}

void CreateDBInstanceHourRequest::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDBInstanceHourRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
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

string CreateDBInstanceHourRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateDBInstanceHourRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetEncrypt() const
{
    return m_encrypt;
}

void CreateDBInstanceHourRequest::SetEncrypt(const uint64_t& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

string CreateDBInstanceHourRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBInstanceHourRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBInstanceHourRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBInstanceHourRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
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



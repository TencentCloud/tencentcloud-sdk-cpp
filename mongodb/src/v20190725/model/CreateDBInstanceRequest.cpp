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

#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateDBInstanceRequest::CreateDBInstanceRequest() :
    m_nodeNumHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_replicateSetNumHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_cloneHasBeenSet(false),
    m_fatherHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_restoreTimeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_availabilityZoneListHasBeenSet(false),
    m_mongosCpuHasBeenSet(false),
    m_mongosMemoryHasBeenSet(false),
    m_mongosNodeNumHasBeenSet(false),
    m_readonlyNodeNumHasBeenSet(false),
    m_readonlyNodeAvailabilityZoneListHasBeenSet(false),
    m_hiddenZoneHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false)
{
}

string CreateDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
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

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_replicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_cloneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clone, allocator);
    }

    if (m_fatherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Father";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_father.c_str(), allocator).Move(), allocator);
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

    if (m_restoreTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restoreTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilityZoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilityZoneList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availabilityZoneList.begin(); itr != m_availabilityZoneList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mongosCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosCpu, allocator);
    }

    if (m_mongosMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosMemory, allocator);
    }

    if (m_mongosNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mongosNodeNum, allocator);
    }

    if (m_readonlyNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyNodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readonlyNodeNum, allocator);
    }

    if (m_readonlyNodeAvailabilityZoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyNodeAvailabilityZoneList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_readonlyNodeAvailabilityZoneList.begin(); itr != m_readonlyNodeAvailabilityZoneList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hiddenZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiddenZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hiddenZone.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateDBInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CreateDBInstanceRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CreateDBInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void CreateDBInstanceRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetVolume() const
{
    return m_volume;
}

void CreateDBInstanceRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateDBInstanceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string CreateDBInstanceRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void CreateDBInstanceRequest::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool CreateDBInstanceRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateDBInstanceRequest::SetGoodsNum(const uint64_t& _goodsNum)
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

uint64_t CreateDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateDBInstanceRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateDBInstanceRequest::GetMachineCode() const
{
    return m_machineCode;
}

void CreateDBInstanceRequest::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool CreateDBInstanceRequest::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
}

string CreateDBInstanceRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateDBInstanceRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateDBInstanceRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetReplicateSetNum() const
{
    return m_replicateSetNum;
}

void CreateDBInstanceRequest::SetReplicateSetNum(const uint64_t& _replicateSetNum)
{
    m_replicateSetNum = _replicateSetNum;
    m_replicateSetNumHasBeenSet = true;
}

bool CreateDBInstanceRequest::ReplicateSetNumHasBeenSet() const
{
    return m_replicateSetNumHasBeenSet;
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

string CreateDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
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

vector<TagInfo> CreateDBInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateDBInstanceRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDBInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDBInstanceRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateDBInstanceRequest::SetAutoVoucher(const uint64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

int64_t CreateDBInstanceRequest::GetClone() const
{
    return m_clone;
}

void CreateDBInstanceRequest::SetClone(const int64_t& _clone)
{
    m_clone = _clone;
    m_cloneHasBeenSet = true;
}

bool CreateDBInstanceRequest::CloneHasBeenSet() const
{
    return m_cloneHasBeenSet;
}

string CreateDBInstanceRequest::GetFather() const
{
    return m_father;
}

void CreateDBInstanceRequest::SetFather(const string& _father)
{
    m_father = _father;
    m_fatherHasBeenSet = true;
}

bool CreateDBInstanceRequest::FatherHasBeenSet() const
{
    return m_fatherHasBeenSet;
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

string CreateDBInstanceRequest::GetRestoreTime() const
{
    return m_restoreTime;
}

void CreateDBInstanceRequest::SetRestoreTime(const string& _restoreTime)
{
    m_restoreTime = _restoreTime;
    m_restoreTimeHasBeenSet = true;
}

bool CreateDBInstanceRequest::RestoreTimeHasBeenSet() const
{
    return m_restoreTimeHasBeenSet;
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

vector<string> CreateDBInstanceRequest::GetAvailabilityZoneList() const
{
    return m_availabilityZoneList;
}

void CreateDBInstanceRequest::SetAvailabilityZoneList(const vector<string>& _availabilityZoneList)
{
    m_availabilityZoneList = _availabilityZoneList;
    m_availabilityZoneListHasBeenSet = true;
}

bool CreateDBInstanceRequest::AvailabilityZoneListHasBeenSet() const
{
    return m_availabilityZoneListHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetMongosCpu() const
{
    return m_mongosCpu;
}

void CreateDBInstanceRequest::SetMongosCpu(const uint64_t& _mongosCpu)
{
    m_mongosCpu = _mongosCpu;
    m_mongosCpuHasBeenSet = true;
}

bool CreateDBInstanceRequest::MongosCpuHasBeenSet() const
{
    return m_mongosCpuHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetMongosMemory() const
{
    return m_mongosMemory;
}

void CreateDBInstanceRequest::SetMongosMemory(const uint64_t& _mongosMemory)
{
    m_mongosMemory = _mongosMemory;
    m_mongosMemoryHasBeenSet = true;
}

bool CreateDBInstanceRequest::MongosMemoryHasBeenSet() const
{
    return m_mongosMemoryHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetMongosNodeNum() const
{
    return m_mongosNodeNum;
}

void CreateDBInstanceRequest::SetMongosNodeNum(const uint64_t& _mongosNodeNum)
{
    m_mongosNodeNum = _mongosNodeNum;
    m_mongosNodeNumHasBeenSet = true;
}

bool CreateDBInstanceRequest::MongosNodeNumHasBeenSet() const
{
    return m_mongosNodeNumHasBeenSet;
}

uint64_t CreateDBInstanceRequest::GetReadonlyNodeNum() const
{
    return m_readonlyNodeNum;
}

void CreateDBInstanceRequest::SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum)
{
    m_readonlyNodeNum = _readonlyNodeNum;
    m_readonlyNodeNumHasBeenSet = true;
}

bool CreateDBInstanceRequest::ReadonlyNodeNumHasBeenSet() const
{
    return m_readonlyNodeNumHasBeenSet;
}

vector<string> CreateDBInstanceRequest::GetReadonlyNodeAvailabilityZoneList() const
{
    return m_readonlyNodeAvailabilityZoneList;
}

void CreateDBInstanceRequest::SetReadonlyNodeAvailabilityZoneList(const vector<string>& _readonlyNodeAvailabilityZoneList)
{
    m_readonlyNodeAvailabilityZoneList = _readonlyNodeAvailabilityZoneList;
    m_readonlyNodeAvailabilityZoneListHasBeenSet = true;
}

bool CreateDBInstanceRequest::ReadonlyNodeAvailabilityZoneListHasBeenSet() const
{
    return m_readonlyNodeAvailabilityZoneListHasBeenSet;
}

string CreateDBInstanceRequest::GetHiddenZone() const
{
    return m_hiddenZone;
}

void CreateDBInstanceRequest::SetHiddenZone(const string& _hiddenZone)
{
    m_hiddenZone = _hiddenZone;
    m_hiddenZoneHasBeenSet = true;
}

bool CreateDBInstanceRequest::HiddenZoneHasBeenSet() const
{
    return m_hiddenZoneHasBeenSet;
}

string CreateDBInstanceRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateDBInstanceRequest::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateDBInstanceRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}



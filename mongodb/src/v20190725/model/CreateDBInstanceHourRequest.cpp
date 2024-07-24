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

#include <tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateDBInstanceHourRequest::CreateDBInstanceHourRequest() :
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_replicateSetNumHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_machineCodeHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
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

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineCode.c_str(), allocator).Move(), allocator);
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

uint64_t CreateDBInstanceHourRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void CreateDBInstanceHourRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string CreateDBInstanceHourRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void CreateDBInstanceHourRequest::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

string CreateDBInstanceHourRequest::GetMachineCode() const
{
    return m_machineCode;
}

void CreateDBInstanceHourRequest::SetMachineCode(const string& _machineCode)
{
    m_machineCode = _machineCode;
    m_machineCodeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MachineCodeHasBeenSet() const
{
    return m_machineCodeHasBeenSet;
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

string CreateDBInstanceHourRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateDBInstanceHourRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
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

vector<TagInfo> CreateDBInstanceHourRequest::GetTags() const
{
    return m_tags;
}

void CreateDBInstanceHourRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CreateDBInstanceHourRequest::GetClone() const
{
    return m_clone;
}

void CreateDBInstanceHourRequest::SetClone(const int64_t& _clone)
{
    m_clone = _clone;
    m_cloneHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::CloneHasBeenSet() const
{
    return m_cloneHasBeenSet;
}

string CreateDBInstanceHourRequest::GetFather() const
{
    return m_father;
}

void CreateDBInstanceHourRequest::SetFather(const string& _father)
{
    m_father = _father;
    m_fatherHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::FatherHasBeenSet() const
{
    return m_fatherHasBeenSet;
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

string CreateDBInstanceHourRequest::GetRestoreTime() const
{
    return m_restoreTime;
}

void CreateDBInstanceHourRequest::SetRestoreTime(const string& _restoreTime)
{
    m_restoreTime = _restoreTime;
    m_restoreTimeHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::RestoreTimeHasBeenSet() const
{
    return m_restoreTimeHasBeenSet;
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

vector<string> CreateDBInstanceHourRequest::GetAvailabilityZoneList() const
{
    return m_availabilityZoneList;
}

void CreateDBInstanceHourRequest::SetAvailabilityZoneList(const vector<string>& _availabilityZoneList)
{
    m_availabilityZoneList = _availabilityZoneList;
    m_availabilityZoneListHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::AvailabilityZoneListHasBeenSet() const
{
    return m_availabilityZoneListHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetMongosCpu() const
{
    return m_mongosCpu;
}

void CreateDBInstanceHourRequest::SetMongosCpu(const uint64_t& _mongosCpu)
{
    m_mongosCpu = _mongosCpu;
    m_mongosCpuHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MongosCpuHasBeenSet() const
{
    return m_mongosCpuHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetMongosMemory() const
{
    return m_mongosMemory;
}

void CreateDBInstanceHourRequest::SetMongosMemory(const uint64_t& _mongosMemory)
{
    m_mongosMemory = _mongosMemory;
    m_mongosMemoryHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MongosMemoryHasBeenSet() const
{
    return m_mongosMemoryHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetMongosNodeNum() const
{
    return m_mongosNodeNum;
}

void CreateDBInstanceHourRequest::SetMongosNodeNum(const uint64_t& _mongosNodeNum)
{
    m_mongosNodeNum = _mongosNodeNum;
    m_mongosNodeNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::MongosNodeNumHasBeenSet() const
{
    return m_mongosNodeNumHasBeenSet;
}

uint64_t CreateDBInstanceHourRequest::GetReadonlyNodeNum() const
{
    return m_readonlyNodeNum;
}

void CreateDBInstanceHourRequest::SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum)
{
    m_readonlyNodeNum = _readonlyNodeNum;
    m_readonlyNodeNumHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ReadonlyNodeNumHasBeenSet() const
{
    return m_readonlyNodeNumHasBeenSet;
}

vector<string> CreateDBInstanceHourRequest::GetReadonlyNodeAvailabilityZoneList() const
{
    return m_readonlyNodeAvailabilityZoneList;
}

void CreateDBInstanceHourRequest::SetReadonlyNodeAvailabilityZoneList(const vector<string>& _readonlyNodeAvailabilityZoneList)
{
    m_readonlyNodeAvailabilityZoneList = _readonlyNodeAvailabilityZoneList;
    m_readonlyNodeAvailabilityZoneListHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ReadonlyNodeAvailabilityZoneListHasBeenSet() const
{
    return m_readonlyNodeAvailabilityZoneListHasBeenSet;
}

string CreateDBInstanceHourRequest::GetHiddenZone() const
{
    return m_hiddenZone;
}

void CreateDBInstanceHourRequest::SetHiddenZone(const string& _hiddenZone)
{
    m_hiddenZone = _hiddenZone;
    m_hiddenZoneHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::HiddenZoneHasBeenSet() const
{
    return m_hiddenZoneHasBeenSet;
}

string CreateDBInstanceHourRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void CreateDBInstanceHourRequest::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool CreateDBInstanceHourRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}



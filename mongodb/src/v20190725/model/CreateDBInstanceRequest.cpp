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
using namespace rapidjson;
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
    m_autoRenewFlagHasBeenSet(false)
{
}

string CreateDBInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
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

    if (m_mongoVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_machineCode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_replicateSetNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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



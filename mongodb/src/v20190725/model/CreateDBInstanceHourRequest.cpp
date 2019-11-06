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
using namespace rapidjson;
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
    m_tagsHasBeenSet(false)
{
}

string CreateDBInstanceHourRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_replicateSetNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MachineCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_machineCode.c_str(), allocator).Move(), allocator);
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

    if (m_clusterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterType.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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



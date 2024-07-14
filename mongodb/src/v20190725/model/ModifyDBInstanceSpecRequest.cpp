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

#include <tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_oplogSizeHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_replicateSetNumHasBeenSet(false),
    m_inMaintenanceHasBeenSet(false),
    m_mongosMemoryHasBeenSet(false),
    m_addNodeListHasBeenSet(false),
    m_removeNodeListHasBeenSet(false)
{
}

string ModifyDBInstanceSpecRequest::ToJsonString() const
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

    if (m_oplogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OplogSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oplogSize, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_replicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicateSetNum, allocator);
    }

    if (m_inMaintenanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InMaintenance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inMaintenance, allocator);
    }

    if (m_mongosMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongosMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_addNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddNodeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addNodeList.begin(); itr != m_addNodeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_removeNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveNodeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_removeNodeList.begin(); itr != m_removeNodeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBInstanceSpecRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDBInstanceSpecRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetMemory() const
{
    return m_memory;
}

void ModifyDBInstanceSpecRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetVolume() const
{
    return m_volume;
}

void ModifyDBInstanceSpecRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetOplogSize() const
{
    return m_oplogSize;
}

void ModifyDBInstanceSpecRequest::SetOplogSize(const uint64_t& _oplogSize)
{
    m_oplogSize = _oplogSize;
    m_oplogSizeHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::OplogSizeHasBeenSet() const
{
    return m_oplogSizeHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void ModifyDBInstanceSpecRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetReplicateSetNum() const
{
    return m_replicateSetNum;
}

void ModifyDBInstanceSpecRequest::SetReplicateSetNum(const uint64_t& _replicateSetNum)
{
    m_replicateSetNum = _replicateSetNum;
    m_replicateSetNumHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::ReplicateSetNumHasBeenSet() const
{
    return m_replicateSetNumHasBeenSet;
}

uint64_t ModifyDBInstanceSpecRequest::GetInMaintenance() const
{
    return m_inMaintenance;
}

void ModifyDBInstanceSpecRequest::SetInMaintenance(const uint64_t& _inMaintenance)
{
    m_inMaintenance = _inMaintenance;
    m_inMaintenanceHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::InMaintenanceHasBeenSet() const
{
    return m_inMaintenanceHasBeenSet;
}

string ModifyDBInstanceSpecRequest::GetMongosMemory() const
{
    return m_mongosMemory;
}

void ModifyDBInstanceSpecRequest::SetMongosMemory(const string& _mongosMemory)
{
    m_mongosMemory = _mongosMemory;
    m_mongosMemoryHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::MongosMemoryHasBeenSet() const
{
    return m_mongosMemoryHasBeenSet;
}

vector<AddNodeList> ModifyDBInstanceSpecRequest::GetAddNodeList() const
{
    return m_addNodeList;
}

void ModifyDBInstanceSpecRequest::SetAddNodeList(const vector<AddNodeList>& _addNodeList)
{
    m_addNodeList = _addNodeList;
    m_addNodeListHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::AddNodeListHasBeenSet() const
{
    return m_addNodeListHasBeenSet;
}

vector<RemoveNodeList> ModifyDBInstanceSpecRequest::GetRemoveNodeList() const
{
    return m_removeNodeList;
}

void ModifyDBInstanceSpecRequest::SetRemoveNodeList(const vector<RemoveNodeList>& _removeNodeList)
{
    m_removeNodeList = _removeNodeList;
    m_removeNodeListHasBeenSet = true;
}

bool ModifyDBInstanceSpecRequest::RemoveNodeListHasBeenSet() const
{
    return m_removeNodeListHasBeenSet;
}



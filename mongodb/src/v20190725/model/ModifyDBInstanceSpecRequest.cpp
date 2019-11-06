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
using namespace rapidjson;
using namespace std;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_oplogSizeHasBeenSet(false)
{
}

string ModifyDBInstanceSpecRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_oplogSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OplogSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_oplogSize, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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



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

#include <tencentcloud/cdwch/v20200915/model/NodesSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

NodesSummary::NodesSummary() :
    m_specHasBeenSet(false),
    m_nodeSizeHasBeenSet(false),
    m_coreHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskDescHasBeenSet(false)
{
}

CoreInternalOutcome NodesSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("NodeSize") && !value["NodeSize"].IsNull())
    {
        if (!value["NodeSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.NodeSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSize = value["NodeSize"].GetInt64();
        m_nodeSizeHasBeenSet = true;
    }

    if (value.HasMember("Core") && !value["Core"].IsNull())
    {
        if (!value["Core"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.Core` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_core = value["Core"].GetInt64();
        m_coreHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.Disk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetInt64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskDesc") && !value["DiskDesc"].IsNull())
    {
        if (!value["DiskDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.DiskDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDesc = string(value["DiskDesc"].GetString());
        m_diskDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodesSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeSize, allocator);
    }

    if (m_coreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Core";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_core, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDesc.c_str(), allocator).Move(), allocator);
    }

}


string NodesSummary::GetSpec() const
{
    return m_spec;
}

void NodesSummary::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool NodesSummary::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t NodesSummary::GetNodeSize() const
{
    return m_nodeSize;
}

void NodesSummary::SetNodeSize(const int64_t& _nodeSize)
{
    m_nodeSize = _nodeSize;
    m_nodeSizeHasBeenSet = true;
}

bool NodesSummary::NodeSizeHasBeenSet() const
{
    return m_nodeSizeHasBeenSet;
}

int64_t NodesSummary::GetCore() const
{
    return m_core;
}

void NodesSummary::SetCore(const int64_t& _core)
{
    m_core = _core;
    m_coreHasBeenSet = true;
}

bool NodesSummary::CoreHasBeenSet() const
{
    return m_coreHasBeenSet;
}

int64_t NodesSummary::GetMemory() const
{
    return m_memory;
}

void NodesSummary::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool NodesSummary::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t NodesSummary::GetDisk() const
{
    return m_disk;
}

void NodesSummary::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool NodesSummary::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

string NodesSummary::GetDiskType() const
{
    return m_diskType;
}

void NodesSummary::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodesSummary::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string NodesSummary::GetDiskDesc() const
{
    return m_diskDesc;
}

void NodesSummary::SetDiskDesc(const string& _diskDesc)
{
    m_diskDesc = _diskDesc;
    m_diskDescHasBeenSet = true;
}

bool NodesSummary::DiskDescHasBeenSet() const
{
    return m_diskDescHasBeenSet;
}


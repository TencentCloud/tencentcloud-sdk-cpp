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
    m_diskDescHasBeenSet(false),
    m_attachCBSSpecHasBeenSet(false),
    m_subProductTypeHasBeenSet(false),
    m_specCoreHasBeenSet(false),
    m_specMemoryHasBeenSet(false),
    m_diskCountHasBeenSet(false),
    m_maxDiskSizeHasBeenSet(false),
    m_encryptHasBeenSet(false)
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

    if (value.HasMember("AttachCBSSpec") && !value["AttachCBSSpec"].IsNull())
    {
        if (!value["AttachCBSSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.AttachCBSSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attachCBSSpec.Deserialize(value["AttachCBSSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attachCBSSpecHasBeenSet = true;
    }

    if (value.HasMember("SubProductType") && !value["SubProductType"].IsNull())
    {
        if (!value["SubProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.SubProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductType = string(value["SubProductType"].GetString());
        m_subProductTypeHasBeenSet = true;
    }

    if (value.HasMember("SpecCore") && !value["SpecCore"].IsNull())
    {
        if (!value["SpecCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.SpecCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_specCore = value["SpecCore"].GetInt64();
        m_specCoreHasBeenSet = true;
    }

    if (value.HasMember("SpecMemory") && !value["SpecMemory"].IsNull())
    {
        if (!value["SpecMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.SpecMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_specMemory = value["SpecMemory"].GetInt64();
        m_specMemoryHasBeenSet = true;
    }

    if (value.HasMember("DiskCount") && !value["DiskCount"].IsNull())
    {
        if (!value["DiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.DiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCount = value["DiskCount"].GetInt64();
        m_diskCountHasBeenSet = true;
    }

    if (value.HasMember("MaxDiskSize") && !value["MaxDiskSize"].IsNull())
    {
        if (!value["MaxDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.MaxDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDiskSize = value["MaxDiskSize"].GetInt64();
        m_maxDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodesSummary.Encrypt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetInt64();
        m_encryptHasBeenSet = true;
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

    if (m_attachCBSSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachCBSSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attachCBSSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subProductTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductType.c_str(), allocator).Move(), allocator);
    }

    if (m_specCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specCore, allocator);
    }

    if (m_specMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specMemory, allocator);
    }

    if (m_diskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCount, allocator);
    }

    if (m_maxDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDiskSize, allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
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

AttachCBSSpec NodesSummary::GetAttachCBSSpec() const
{
    return m_attachCBSSpec;
}

void NodesSummary::SetAttachCBSSpec(const AttachCBSSpec& _attachCBSSpec)
{
    m_attachCBSSpec = _attachCBSSpec;
    m_attachCBSSpecHasBeenSet = true;
}

bool NodesSummary::AttachCBSSpecHasBeenSet() const
{
    return m_attachCBSSpecHasBeenSet;
}

string NodesSummary::GetSubProductType() const
{
    return m_subProductType;
}

void NodesSummary::SetSubProductType(const string& _subProductType)
{
    m_subProductType = _subProductType;
    m_subProductTypeHasBeenSet = true;
}

bool NodesSummary::SubProductTypeHasBeenSet() const
{
    return m_subProductTypeHasBeenSet;
}

int64_t NodesSummary::GetSpecCore() const
{
    return m_specCore;
}

void NodesSummary::SetSpecCore(const int64_t& _specCore)
{
    m_specCore = _specCore;
    m_specCoreHasBeenSet = true;
}

bool NodesSummary::SpecCoreHasBeenSet() const
{
    return m_specCoreHasBeenSet;
}

int64_t NodesSummary::GetSpecMemory() const
{
    return m_specMemory;
}

void NodesSummary::SetSpecMemory(const int64_t& _specMemory)
{
    m_specMemory = _specMemory;
    m_specMemoryHasBeenSet = true;
}

bool NodesSummary::SpecMemoryHasBeenSet() const
{
    return m_specMemoryHasBeenSet;
}

int64_t NodesSummary::GetDiskCount() const
{
    return m_diskCount;
}

void NodesSummary::SetDiskCount(const int64_t& _diskCount)
{
    m_diskCount = _diskCount;
    m_diskCountHasBeenSet = true;
}

bool NodesSummary::DiskCountHasBeenSet() const
{
    return m_diskCountHasBeenSet;
}

int64_t NodesSummary::GetMaxDiskSize() const
{
    return m_maxDiskSize;
}

void NodesSummary::SetMaxDiskSize(const int64_t& _maxDiskSize)
{
    m_maxDiskSize = _maxDiskSize;
    m_maxDiskSizeHasBeenSet = true;
}

bool NodesSummary::MaxDiskSizeHasBeenSet() const
{
    return m_maxDiskSizeHasBeenSet;
}

int64_t NodesSummary::GetEncrypt() const
{
    return m_encrypt;
}

void NodesSummary::SetEncrypt(const int64_t& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool NodesSummary::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}


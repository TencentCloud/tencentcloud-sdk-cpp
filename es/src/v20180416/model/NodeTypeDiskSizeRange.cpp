/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/es/v20180416/model/NodeTypeDiskSizeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

NodeTypeDiskSizeRange::NodeTypeDiskSizeRange() :
    m_nodeTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_minHasBeenSet(false),
    m_medHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_diskCountMinHasBeenSet(false),
    m_diskCountMaxHasBeenSet(false),
    m_diskEncryptHasBeenSet(false),
    m_diskEnhanceHasBeenSet(false),
    m_isLvmHasBeenSet(false),
    m_isLocalDiskTypeHasBeenSet(false)
{
}

CoreInternalOutcome NodeTypeDiskSizeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.Min` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetUint64();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Med") && !value["Med"].IsNull())
    {
        if (!value["Med"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.Med` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_med = value["Med"].GetUint64();
        m_medHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.Max` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetUint64();
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("DiskCountMin") && !value["DiskCountMin"].IsNull())
    {
        if (!value["DiskCountMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.DiskCountMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCountMin = value["DiskCountMin"].GetUint64();
        m_diskCountMinHasBeenSet = true;
    }

    if (value.HasMember("DiskCountMax") && !value["DiskCountMax"].IsNull())
    {
        if (!value["DiskCountMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.DiskCountMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskCountMax = value["DiskCountMax"].GetUint64();
        m_diskCountMaxHasBeenSet = true;
    }

    if (value.HasMember("DiskEncrypt") && !value["DiskEncrypt"].IsNull())
    {
        if (!value["DiskEncrypt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.DiskEncrypt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskEncrypt = value["DiskEncrypt"].GetUint64();
        m_diskEncryptHasBeenSet = true;
    }

    if (value.HasMember("DiskEnhance") && !value["DiskEnhance"].IsNull())
    {
        if (!value["DiskEnhance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.DiskEnhance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskEnhance = value["DiskEnhance"].GetUint64();
        m_diskEnhanceHasBeenSet = true;
    }

    if (value.HasMember("IsLvm") && !value["IsLvm"].IsNull())
    {
        if (!value["IsLvm"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.IsLvm` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isLvm = value["IsLvm"].GetUint64();
        m_isLvmHasBeenSet = true;
    }

    if (value.HasMember("IsLocalDiskType") && !value["IsLocalDiskType"].IsNull())
    {
        if (!value["IsLocalDiskType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeTypeDiskSizeRange.IsLocalDiskType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLocalDiskType = value["IsLocalDiskType"].GetBool();
        m_isLocalDiskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeTypeDiskSizeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_medHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Med";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_med, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

    if (m_diskCountMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCountMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCountMin, allocator);
    }

    if (m_diskCountMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskCountMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskCountMax, allocator);
    }

    if (m_diskEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskEncrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskEncrypt, allocator);
    }

    if (m_diskEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskEnhance, allocator);
    }

    if (m_isLvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLvm, allocator);
    }

    if (m_isLocalDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLocalDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLocalDiskType, allocator);
    }

}


string NodeTypeDiskSizeRange::GetNodeType() const
{
    return m_nodeType;
}

void NodeTypeDiskSizeRange::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string NodeTypeDiskSizeRange::GetType() const
{
    return m_type;
}

void NodeTypeDiskSizeRange::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NodeTypeDiskSizeRange::GetDiskType() const
{
    return m_diskType;
}

void NodeTypeDiskSizeRange::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetMin() const
{
    return m_min;
}

void NodeTypeDiskSizeRange::SetMin(const uint64_t& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetMed() const
{
    return m_med;
}

void NodeTypeDiskSizeRange::SetMed(const uint64_t& _med)
{
    m_med = _med;
    m_medHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::MedHasBeenSet() const
{
    return m_medHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetMax() const
{
    return m_max;
}

void NodeTypeDiskSizeRange::SetMax(const uint64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetDiskCountMin() const
{
    return m_diskCountMin;
}

void NodeTypeDiskSizeRange::SetDiskCountMin(const uint64_t& _diskCountMin)
{
    m_diskCountMin = _diskCountMin;
    m_diskCountMinHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::DiskCountMinHasBeenSet() const
{
    return m_diskCountMinHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetDiskCountMax() const
{
    return m_diskCountMax;
}

void NodeTypeDiskSizeRange::SetDiskCountMax(const uint64_t& _diskCountMax)
{
    m_diskCountMax = _diskCountMax;
    m_diskCountMaxHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::DiskCountMaxHasBeenSet() const
{
    return m_diskCountMaxHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetDiskEncrypt() const
{
    return m_diskEncrypt;
}

void NodeTypeDiskSizeRange::SetDiskEncrypt(const uint64_t& _diskEncrypt)
{
    m_diskEncrypt = _diskEncrypt;
    m_diskEncryptHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::DiskEncryptHasBeenSet() const
{
    return m_diskEncryptHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetDiskEnhance() const
{
    return m_diskEnhance;
}

void NodeTypeDiskSizeRange::SetDiskEnhance(const uint64_t& _diskEnhance)
{
    m_diskEnhance = _diskEnhance;
    m_diskEnhanceHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::DiskEnhanceHasBeenSet() const
{
    return m_diskEnhanceHasBeenSet;
}

uint64_t NodeTypeDiskSizeRange::GetIsLvm() const
{
    return m_isLvm;
}

void NodeTypeDiskSizeRange::SetIsLvm(const uint64_t& _isLvm)
{
    m_isLvm = _isLvm;
    m_isLvmHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::IsLvmHasBeenSet() const
{
    return m_isLvmHasBeenSet;
}

bool NodeTypeDiskSizeRange::GetIsLocalDiskType() const
{
    return m_isLocalDiskType;
}

void NodeTypeDiskSizeRange::SetIsLocalDiskType(const bool& _isLocalDiskType)
{
    m_isLocalDiskType = _isLocalDiskType;
    m_isLocalDiskTypeHasBeenSet = true;
}

bool NodeTypeDiskSizeRange::IsLocalDiskTypeHasBeenSet() const
{
    return m_isLocalDiskTypeHasBeenSet;
}


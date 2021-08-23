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

#include <tencentcloud/mongodb/v20190725/model/ShardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

ShardInfo::ShardInfo() :
    m_usedVolumeHasBeenSet(false),
    m_replicaSetIdHasBeenSet(false),
    m_replicaSetNameHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_oplogSizeHasBeenSet(false),
    m_secondaryNumHasBeenSet(false),
    m_realReplicaSetIdHasBeenSet(false)
{
}

CoreInternalOutcome ShardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedVolume") && !value["UsedVolume"].IsNull())
    {
        if (!value["UsedVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.UsedVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedVolume = value["UsedVolume"].GetDouble();
        m_usedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetId") && !value["ReplicaSetId"].IsNull())
    {
        if (!value["ReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.ReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetId = string(value["ReplicaSetId"].GetString());
        m_replicaSetIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetName") && !value["ReplicaSetName"].IsNull())
    {
        if (!value["ReplicaSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.ReplicaSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetName = string(value["ReplicaSetName"].GetString());
        m_replicaSetNameHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("OplogSize") && !value["OplogSize"].IsNull())
    {
        if (!value["OplogSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.OplogSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_oplogSize = value["OplogSize"].GetUint64();
        m_oplogSizeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryNum") && !value["SecondaryNum"].IsNull())
    {
        if (!value["SecondaryNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.SecondaryNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryNum = value["SecondaryNum"].GetUint64();
        m_secondaryNumHasBeenSet = true;
    }

    if (value.HasMember("RealReplicaSetId") && !value["RealReplicaSetId"].IsNull())
    {
        if (!value["RealReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardInfo.RealReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realReplicaSetId = string(value["RealReplicaSetId"].GetString());
        m_realReplicaSetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usedVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedVolume, allocator);
    }

    if (m_replicaSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_oplogSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OplogSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oplogSize, allocator);
    }

    if (m_secondaryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryNum, allocator);
    }

    if (m_realReplicaSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealReplicaSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realReplicaSetId.c_str(), allocator).Move(), allocator);
    }

}


double ShardInfo::GetUsedVolume() const
{
    return m_usedVolume;
}

void ShardInfo::SetUsedVolume(const double& _usedVolume)
{
    m_usedVolume = _usedVolume;
    m_usedVolumeHasBeenSet = true;
}

bool ShardInfo::UsedVolumeHasBeenSet() const
{
    return m_usedVolumeHasBeenSet;
}

string ShardInfo::GetReplicaSetId() const
{
    return m_replicaSetId;
}

void ShardInfo::SetReplicaSetId(const string& _replicaSetId)
{
    m_replicaSetId = _replicaSetId;
    m_replicaSetIdHasBeenSet = true;
}

bool ShardInfo::ReplicaSetIdHasBeenSet() const
{
    return m_replicaSetIdHasBeenSet;
}

string ShardInfo::GetReplicaSetName() const
{
    return m_replicaSetName;
}

void ShardInfo::SetReplicaSetName(const string& _replicaSetName)
{
    m_replicaSetName = _replicaSetName;
    m_replicaSetNameHasBeenSet = true;
}

bool ShardInfo::ReplicaSetNameHasBeenSet() const
{
    return m_replicaSetNameHasBeenSet;
}

uint64_t ShardInfo::GetMemory() const
{
    return m_memory;
}

void ShardInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ShardInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ShardInfo::GetVolume() const
{
    return m_volume;
}

void ShardInfo::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool ShardInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t ShardInfo::GetOplogSize() const
{
    return m_oplogSize;
}

void ShardInfo::SetOplogSize(const uint64_t& _oplogSize)
{
    m_oplogSize = _oplogSize;
    m_oplogSizeHasBeenSet = true;
}

bool ShardInfo::OplogSizeHasBeenSet() const
{
    return m_oplogSizeHasBeenSet;
}

uint64_t ShardInfo::GetSecondaryNum() const
{
    return m_secondaryNum;
}

void ShardInfo::SetSecondaryNum(const uint64_t& _secondaryNum)
{
    m_secondaryNum = _secondaryNum;
    m_secondaryNumHasBeenSet = true;
}

bool ShardInfo::SecondaryNumHasBeenSet() const
{
    return m_secondaryNumHasBeenSet;
}

string ShardInfo::GetRealReplicaSetId() const
{
    return m_realReplicaSetId;
}

void ShardInfo::SetRealReplicaSetId(const string& _realReplicaSetId)
{
    m_realReplicaSetId = _realReplicaSetId;
    m_realReplicaSetIdHasBeenSet = true;
}

bool ShardInfo::RealReplicaSetIdHasBeenSet() const
{
    return m_realReplicaSetIdHasBeenSet;
}


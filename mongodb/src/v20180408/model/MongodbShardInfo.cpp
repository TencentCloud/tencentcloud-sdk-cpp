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

#include <tencentcloud/mongodb/v20180408/model/MongodbShardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace std;

MongodbShardInfo::MongodbShardInfo() :
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

CoreInternalOutcome MongodbShardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsedVolume") && !value["UsedVolume"].IsNull())
    {
        if (!value["UsedVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.UsedVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedVolume = value["UsedVolume"].GetDouble();
        m_usedVolumeHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetId") && !value["ReplicaSetId"].IsNull())
    {
        if (!value["ReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.ReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetId = string(value["ReplicaSetId"].GetString());
        m_replicaSetIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSetName") && !value["ReplicaSetName"].IsNull())
    {
        if (!value["ReplicaSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.ReplicaSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaSetName = string(value["ReplicaSetName"].GetString());
        m_replicaSetNameHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("OplogSize") && !value["OplogSize"].IsNull())
    {
        if (!value["OplogSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.OplogSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_oplogSize = value["OplogSize"].GetUint64();
        m_oplogSizeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryNum") && !value["SecondaryNum"].IsNull())
    {
        if (!value["SecondaryNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.SecondaryNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryNum = value["SecondaryNum"].GetUint64();
        m_secondaryNumHasBeenSet = true;
    }

    if (value.HasMember("RealReplicaSetId") && !value["RealReplicaSetId"].IsNull())
    {
        if (!value["RealReplicaSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongodbShardInfo.RealReplicaSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realReplicaSetId = string(value["RealReplicaSetId"].GetString());
        m_realReplicaSetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongodbShardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


double MongodbShardInfo::GetUsedVolume() const
{
    return m_usedVolume;
}

void MongodbShardInfo::SetUsedVolume(const double& _usedVolume)
{
    m_usedVolume = _usedVolume;
    m_usedVolumeHasBeenSet = true;
}

bool MongodbShardInfo::UsedVolumeHasBeenSet() const
{
    return m_usedVolumeHasBeenSet;
}

string MongodbShardInfo::GetReplicaSetId() const
{
    return m_replicaSetId;
}

void MongodbShardInfo::SetReplicaSetId(const string& _replicaSetId)
{
    m_replicaSetId = _replicaSetId;
    m_replicaSetIdHasBeenSet = true;
}

bool MongodbShardInfo::ReplicaSetIdHasBeenSet() const
{
    return m_replicaSetIdHasBeenSet;
}

string MongodbShardInfo::GetReplicaSetName() const
{
    return m_replicaSetName;
}

void MongodbShardInfo::SetReplicaSetName(const string& _replicaSetName)
{
    m_replicaSetName = _replicaSetName;
    m_replicaSetNameHasBeenSet = true;
}

bool MongodbShardInfo::ReplicaSetNameHasBeenSet() const
{
    return m_replicaSetNameHasBeenSet;
}

uint64_t MongodbShardInfo::GetMemory() const
{
    return m_memory;
}

void MongodbShardInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool MongodbShardInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t MongodbShardInfo::GetVolume() const
{
    return m_volume;
}

void MongodbShardInfo::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool MongodbShardInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t MongodbShardInfo::GetOplogSize() const
{
    return m_oplogSize;
}

void MongodbShardInfo::SetOplogSize(const uint64_t& _oplogSize)
{
    m_oplogSize = _oplogSize;
    m_oplogSizeHasBeenSet = true;
}

bool MongodbShardInfo::OplogSizeHasBeenSet() const
{
    return m_oplogSizeHasBeenSet;
}

uint64_t MongodbShardInfo::GetSecondaryNum() const
{
    return m_secondaryNum;
}

void MongodbShardInfo::SetSecondaryNum(const uint64_t& _secondaryNum)
{
    m_secondaryNum = _secondaryNum;
    m_secondaryNumHasBeenSet = true;
}

bool MongodbShardInfo::SecondaryNumHasBeenSet() const
{
    return m_secondaryNumHasBeenSet;
}

string MongodbShardInfo::GetRealReplicaSetId() const
{
    return m_realReplicaSetId;
}

void MongodbShardInfo::SetRealReplicaSetId(const string& _realReplicaSetId)
{
    m_realReplicaSetId = _realReplicaSetId;
    m_realReplicaSetIdHasBeenSet = true;
}

bool MongodbShardInfo::RealReplicaSetIdHasBeenSet() const
{
    return m_realReplicaSetIdHasBeenSet;
}


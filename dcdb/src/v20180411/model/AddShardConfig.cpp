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

#include <tencentcloud/dcdb/v20180411/model/AddShardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

AddShardConfig::AddShardConfig() :
    m_shardCountHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false)
{
}

CoreInternalOutcome AddShardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardCount") && !value["ShardCount"].IsNull())
    {
        if (!value["ShardCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddShardConfig.ShardCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardCount = value["ShardCount"].GetInt64();
        m_shardCountHasBeenSet = true;
    }

    if (value.HasMember("ShardMemory") && !value["ShardMemory"].IsNull())
    {
        if (!value["ShardMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddShardConfig.ShardMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardMemory = value["ShardMemory"].GetInt64();
        m_shardMemoryHasBeenSet = true;
    }

    if (value.HasMember("ShardStorage") && !value["ShardStorage"].IsNull())
    {
        if (!value["ShardStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddShardConfig.ShardStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardStorage = value["ShardStorage"].GetInt64();
        m_shardStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddShardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_shardMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardMemory, allocator);
    }

    if (m_shardStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardStorage, allocator);
    }

}


int64_t AddShardConfig::GetShardCount() const
{
    return m_shardCount;
}

void AddShardConfig::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool AddShardConfig::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

int64_t AddShardConfig::GetShardMemory() const
{
    return m_shardMemory;
}

void AddShardConfig::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool AddShardConfig::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t AddShardConfig::GetShardStorage() const
{
    return m_shardStorage;
}

void AddShardConfig::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool AddShardConfig::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}


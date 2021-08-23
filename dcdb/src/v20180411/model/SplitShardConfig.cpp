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

#include <tencentcloud/dcdb/v20180411/model/SplitShardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

SplitShardConfig::SplitShardConfig() :
    m_shardInstanceIdsHasBeenSet(false),
    m_splitRateHasBeenSet(false),
    m_shardMemoryHasBeenSet(false),
    m_shardStorageHasBeenSet(false)
{
}

CoreInternalOutcome SplitShardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardInstanceIds") && !value["ShardInstanceIds"].IsNull())
    {
        if (!value["ShardInstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SplitShardConfig.ShardInstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardInstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardInstanceIds.push_back((*itr).GetString());
        }
        m_shardInstanceIdsHasBeenSet = true;
    }

    if (value.HasMember("SplitRate") && !value["SplitRate"].IsNull())
    {
        if (!value["SplitRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplitShardConfig.SplitRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_splitRate = value["SplitRate"].GetInt64();
        m_splitRateHasBeenSet = true;
    }

    if (value.HasMember("ShardMemory") && !value["ShardMemory"].IsNull())
    {
        if (!value["ShardMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplitShardConfig.ShardMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardMemory = value["ShardMemory"].GetInt64();
        m_shardMemoryHasBeenSet = true;
    }

    if (value.HasMember("ShardStorage") && !value["ShardStorage"].IsNull())
    {
        if (!value["ShardStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SplitShardConfig.ShardStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardStorage = value["ShardStorage"].GetInt64();
        m_shardStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SplitShardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shardInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardInstanceIds.begin(); itr != m_shardInstanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_splitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_splitRate, allocator);
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


vector<string> SplitShardConfig::GetShardInstanceIds() const
{
    return m_shardInstanceIds;
}

void SplitShardConfig::SetShardInstanceIds(const vector<string>& _shardInstanceIds)
{
    m_shardInstanceIds = _shardInstanceIds;
    m_shardInstanceIdsHasBeenSet = true;
}

bool SplitShardConfig::ShardInstanceIdsHasBeenSet() const
{
    return m_shardInstanceIdsHasBeenSet;
}

int64_t SplitShardConfig::GetSplitRate() const
{
    return m_splitRate;
}

void SplitShardConfig::SetSplitRate(const int64_t& _splitRate)
{
    m_splitRate = _splitRate;
    m_splitRateHasBeenSet = true;
}

bool SplitShardConfig::SplitRateHasBeenSet() const
{
    return m_splitRateHasBeenSet;
}

int64_t SplitShardConfig::GetShardMemory() const
{
    return m_shardMemory;
}

void SplitShardConfig::SetShardMemory(const int64_t& _shardMemory)
{
    m_shardMemory = _shardMemory;
    m_shardMemoryHasBeenSet = true;
}

bool SplitShardConfig::ShardMemoryHasBeenSet() const
{
    return m_shardMemoryHasBeenSet;
}

int64_t SplitShardConfig::GetShardStorage() const
{
    return m_shardStorage;
}

void SplitShardConfig::SetShardStorage(const int64_t& _shardStorage)
{
    m_shardStorage = _shardStorage;
    m_shardStorageHasBeenSet = true;
}

bool SplitShardConfig::ShardStorageHasBeenSet() const
{
    return m_shardStorageHasBeenSet;
}


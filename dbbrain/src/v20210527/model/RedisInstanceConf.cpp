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

#include <tencentcloud/dbbrain/v20210527/model/RedisInstanceConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

RedisInstanceConf::RedisInstanceConf() :
    m_replicasNumHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_shardSizeHasBeenSet(false)
{
}

CoreInternalOutcome RedisInstanceConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplicasNum") && !value["ReplicasNum"].IsNull())
    {
        if (!value["ReplicasNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceConf.ReplicasNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicasNum = string(value["ReplicasNum"].GetString());
        m_replicasNumHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceConf.ShardNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = string(value["ShardNum"].GetString());
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("ShardSize") && !value["ShardSize"].IsNull())
    {
        if (!value["ShardSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisInstanceConf.ShardSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSize = string(value["ShardSize"].GetString());
        m_shardSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisInstanceConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicasNum.c_str(), allocator).Move(), allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardNum.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardSize.c_str(), allocator).Move(), allocator);
    }

}


string RedisInstanceConf::GetReplicasNum() const
{
    return m_replicasNum;
}

void RedisInstanceConf::SetReplicasNum(const string& _replicasNum)
{
    m_replicasNum = _replicasNum;
    m_replicasNumHasBeenSet = true;
}

bool RedisInstanceConf::ReplicasNumHasBeenSet() const
{
    return m_replicasNumHasBeenSet;
}

string RedisInstanceConf::GetShardNum() const
{
    return m_shardNum;
}

void RedisInstanceConf::SetShardNum(const string& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool RedisInstanceConf::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

string RedisInstanceConf::GetShardSize() const
{
    return m_shardSize;
}

void RedisInstanceConf::SetShardSize(const string& _shardSize)
{
    m_shardSize = _shardSize;
    m_shardSizeHasBeenSet = true;
}

bool RedisInstanceConf::ShardSizeHasBeenSet() const
{
    return m_shardSizeHasBeenSet;
}


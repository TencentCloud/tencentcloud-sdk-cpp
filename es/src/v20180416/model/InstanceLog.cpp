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

#include <tencentcloud/es/v20180416/model/InstanceLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

InstanceLog::InstanceLog() :
    m_timeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_shardHasBeenSet(false),
    m_queryCostHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("IndexName") && !value["IndexName"].IsNull())
    {
        if (!value["IndexName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.IndexName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexName = string(value["IndexName"].GetString());
        m_indexNameHasBeenSet = true;
    }

    if (value.HasMember("Shard") && !value["Shard"].IsNull())
    {
        if (!value["Shard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Shard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shard = string(value["Shard"].GetString());
        m_shardHasBeenSet = true;
    }

    if (value.HasMember("QueryCost") && !value["QueryCost"].IsNull())
    {
        if (!value["QueryCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.QueryCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryCost = string(value["QueryCost"].GetString());
        m_queryCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_shardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shard.c_str(), allocator).Move(), allocator);
    }

    if (m_queryCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryCost.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLog::GetTime() const
{
    return m_time;
}

void InstanceLog::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool InstanceLog::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string InstanceLog::GetLevel() const
{
    return m_level;
}

void InstanceLog::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool InstanceLog::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string InstanceLog::GetIp() const
{
    return m_ip;
}

void InstanceLog::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool InstanceLog::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string InstanceLog::GetMessage() const
{
    return m_message;
}

void InstanceLog::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool InstanceLog::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string InstanceLog::GetNodeID() const
{
    return m_nodeID;
}

void InstanceLog::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool InstanceLog::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string InstanceLog::GetIndexName() const
{
    return m_indexName;
}

void InstanceLog::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool InstanceLog::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string InstanceLog::GetShard() const
{
    return m_shard;
}

void InstanceLog::SetShard(const string& _shard)
{
    m_shard = _shard;
    m_shardHasBeenSet = true;
}

bool InstanceLog::ShardHasBeenSet() const
{
    return m_shardHasBeenSet;
}

string InstanceLog::GetQueryCost() const
{
    return m_queryCost;
}

void InstanceLog::SetQueryCost(const string& _queryCost)
{
    m_queryCost = _queryCost;
    m_queryCostHasBeenSet = true;
}

bool InstanceLog::QueryCostHasBeenSet() const
{
    return m_queryCostHasBeenSet;
}


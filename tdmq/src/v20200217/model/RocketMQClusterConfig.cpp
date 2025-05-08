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

#include <tencentcloud/tdmq/v20200217/model/RocketMQClusterConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQClusterConfig::RocketMQClusterConfig() :
    m_maxTpsPerNamespaceHasBeenSet(false),
    m_maxNamespaceNumHasBeenSet(false),
    m_usedNamespaceNumHasBeenSet(false),
    m_maxTopicNumHasBeenSet(false),
    m_usedTopicNumHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false),
    m_usedGroupNumHasBeenSet(false),
    m_maxRetentionTimeHasBeenSet(false),
    m_maxLatencyTimeHasBeenSet(false),
    m_maxQueuesPerTopicHasBeenSet(false),
    m_topicDistributionHasBeenSet(false),
    m_maxRoleNumHasBeenSet(false),
    m_maxTpsLimitHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQClusterConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxTpsPerNamespace") && !value["MaxTpsPerNamespace"].IsNull())
    {
        if (!value["MaxTpsPerNamespace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxTpsPerNamespace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTpsPerNamespace = value["MaxTpsPerNamespace"].GetUint64();
        m_maxTpsPerNamespaceHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaceNum") && !value["MaxNamespaceNum"].IsNull())
    {
        if (!value["MaxNamespaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxNamespaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaceNum = value["MaxNamespaceNum"].GetUint64();
        m_maxNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNamespaceNum") && !value["UsedNamespaceNum"].IsNull())
    {
        if (!value["UsedNamespaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.UsedNamespaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNamespaceNum = value["UsedNamespaceNum"].GetUint64();
        m_usedNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("MaxTopicNum") && !value["MaxTopicNum"].IsNull())
    {
        if (!value["MaxTopicNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxTopicNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopicNum = value["MaxTopicNum"].GetUint64();
        m_maxTopicNumHasBeenSet = true;
    }

    if (value.HasMember("UsedTopicNum") && !value["UsedTopicNum"].IsNull())
    {
        if (!value["UsedTopicNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.UsedTopicNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTopicNum = value["UsedTopicNum"].GetUint64();
        m_usedTopicNumHasBeenSet = true;
    }

    if (value.HasMember("MaxGroupNum") && !value["MaxGroupNum"].IsNull())
    {
        if (!value["MaxGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = value["MaxGroupNum"].GetUint64();
        m_maxGroupNumHasBeenSet = true;
    }

    if (value.HasMember("UsedGroupNum") && !value["UsedGroupNum"].IsNull())
    {
        if (!value["UsedGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.UsedGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedGroupNum = value["UsedGroupNum"].GetUint64();
        m_usedGroupNumHasBeenSet = true;
    }

    if (value.HasMember("MaxRetentionTime") && !value["MaxRetentionTime"].IsNull())
    {
        if (!value["MaxRetentionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxRetentionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetentionTime = value["MaxRetentionTime"].GetUint64();
        m_maxRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxLatencyTime") && !value["MaxLatencyTime"].IsNull())
    {
        if (!value["MaxLatencyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxLatencyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxLatencyTime = value["MaxLatencyTime"].GetUint64();
        m_maxLatencyTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxQueuesPerTopic") && !value["MaxQueuesPerTopic"].IsNull())
    {
        if (!value["MaxQueuesPerTopic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxQueuesPerTopic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueuesPerTopic = value["MaxQueuesPerTopic"].GetUint64();
        m_maxQueuesPerTopicHasBeenSet = true;
    }

    if (value.HasMember("TopicDistribution") && !value["TopicDistribution"].IsNull())
    {
        if (!value["TopicDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.TopicDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RocketMQTopicDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicDistribution.push_back(item);
        }
        m_topicDistributionHasBeenSet = true;
    }

    if (value.HasMember("MaxRoleNum") && !value["MaxRoleNum"].IsNull())
    {
        if (!value["MaxRoleNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxRoleNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRoleNum = value["MaxRoleNum"].GetInt64();
        m_maxRoleNumHasBeenSet = true;
    }

    if (value.HasMember("MaxTpsLimit") && !value["MaxTpsLimit"].IsNull())
    {
        if (!value["MaxTpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQClusterConfig.MaxTpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTpsLimit = value["MaxTpsLimit"].GetInt64();
        m_maxTpsLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQClusterConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxTpsPerNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTpsPerNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTpsPerNamespace, allocator);
    }

    if (m_maxNamespaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNamespaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNamespaceNum, allocator);
    }

    if (m_usedNamespaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNamespaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNamespaceNum, allocator);
    }

    if (m_maxTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTopicNum, allocator);
    }

    if (m_usedTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTopicNum, allocator);
    }

    if (m_maxGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGroupNum, allocator);
    }

    if (m_usedGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedGroupNum, allocator);
    }

    if (m_maxRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetentionTime, allocator);
    }

    if (m_maxLatencyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxLatencyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxLatencyTime, allocator);
    }

    if (m_maxQueuesPerTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueuesPerTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueuesPerTopic, allocator);
    }

    if (m_topicDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicDistribution.begin(); itr != m_topicDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxRoleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRoleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRoleNum, allocator);
    }

    if (m_maxTpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTpsLimit, allocator);
    }

}


uint64_t RocketMQClusterConfig::GetMaxTpsPerNamespace() const
{
    return m_maxTpsPerNamespace;
}

void RocketMQClusterConfig::SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace)
{
    m_maxTpsPerNamespace = _maxTpsPerNamespace;
    m_maxTpsPerNamespaceHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxTpsPerNamespaceHasBeenSet() const
{
    return m_maxTpsPerNamespaceHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxNamespaceNum() const
{
    return m_maxNamespaceNum;
}

void RocketMQClusterConfig::SetMaxNamespaceNum(const uint64_t& _maxNamespaceNum)
{
    m_maxNamespaceNum = _maxNamespaceNum;
    m_maxNamespaceNumHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxNamespaceNumHasBeenSet() const
{
    return m_maxNamespaceNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetUsedNamespaceNum() const
{
    return m_usedNamespaceNum;
}

void RocketMQClusterConfig::SetUsedNamespaceNum(const uint64_t& _usedNamespaceNum)
{
    m_usedNamespaceNum = _usedNamespaceNum;
    m_usedNamespaceNumHasBeenSet = true;
}

bool RocketMQClusterConfig::UsedNamespaceNumHasBeenSet() const
{
    return m_usedNamespaceNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxTopicNum() const
{
    return m_maxTopicNum;
}

void RocketMQClusterConfig::SetMaxTopicNum(const uint64_t& _maxTopicNum)
{
    m_maxTopicNum = _maxTopicNum;
    m_maxTopicNumHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxTopicNumHasBeenSet() const
{
    return m_maxTopicNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetUsedTopicNum() const
{
    return m_usedTopicNum;
}

void RocketMQClusterConfig::SetUsedTopicNum(const uint64_t& _usedTopicNum)
{
    m_usedTopicNum = _usedTopicNum;
    m_usedTopicNumHasBeenSet = true;
}

bool RocketMQClusterConfig::UsedTopicNumHasBeenSet() const
{
    return m_usedTopicNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

void RocketMQClusterConfig::SetMaxGroupNum(const uint64_t& _maxGroupNum)
{
    m_maxGroupNum = _maxGroupNum;
    m_maxGroupNumHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetUsedGroupNum() const
{
    return m_usedGroupNum;
}

void RocketMQClusterConfig::SetUsedGroupNum(const uint64_t& _usedGroupNum)
{
    m_usedGroupNum = _usedGroupNum;
    m_usedGroupNumHasBeenSet = true;
}

bool RocketMQClusterConfig::UsedGroupNumHasBeenSet() const
{
    return m_usedGroupNumHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxRetentionTime() const
{
    return m_maxRetentionTime;
}

void RocketMQClusterConfig::SetMaxRetentionTime(const uint64_t& _maxRetentionTime)
{
    m_maxRetentionTime = _maxRetentionTime;
    m_maxRetentionTimeHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxRetentionTimeHasBeenSet() const
{
    return m_maxRetentionTimeHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxLatencyTime() const
{
    return m_maxLatencyTime;
}

void RocketMQClusterConfig::SetMaxLatencyTime(const uint64_t& _maxLatencyTime)
{
    m_maxLatencyTime = _maxLatencyTime;
    m_maxLatencyTimeHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxLatencyTimeHasBeenSet() const
{
    return m_maxLatencyTimeHasBeenSet;
}

uint64_t RocketMQClusterConfig::GetMaxQueuesPerTopic() const
{
    return m_maxQueuesPerTopic;
}

void RocketMQClusterConfig::SetMaxQueuesPerTopic(const uint64_t& _maxQueuesPerTopic)
{
    m_maxQueuesPerTopic = _maxQueuesPerTopic;
    m_maxQueuesPerTopicHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxQueuesPerTopicHasBeenSet() const
{
    return m_maxQueuesPerTopicHasBeenSet;
}

vector<RocketMQTopicDistribution> RocketMQClusterConfig::GetTopicDistribution() const
{
    return m_topicDistribution;
}

void RocketMQClusterConfig::SetTopicDistribution(const vector<RocketMQTopicDistribution>& _topicDistribution)
{
    m_topicDistribution = _topicDistribution;
    m_topicDistributionHasBeenSet = true;
}

bool RocketMQClusterConfig::TopicDistributionHasBeenSet() const
{
    return m_topicDistributionHasBeenSet;
}

int64_t RocketMQClusterConfig::GetMaxRoleNum() const
{
    return m_maxRoleNum;
}

void RocketMQClusterConfig::SetMaxRoleNum(const int64_t& _maxRoleNum)
{
    m_maxRoleNum = _maxRoleNum;
    m_maxRoleNumHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxRoleNumHasBeenSet() const
{
    return m_maxRoleNumHasBeenSet;
}

int64_t RocketMQClusterConfig::GetMaxTpsLimit() const
{
    return m_maxTpsLimit;
}

void RocketMQClusterConfig::SetMaxTpsLimit(const int64_t& _maxTpsLimit)
{
    m_maxTpsLimit = _maxTpsLimit;
    m_maxTpsLimitHasBeenSet = true;
}

bool RocketMQClusterConfig::MaxTpsLimitHasBeenSet() const
{
    return m_maxTpsLimitHasBeenSet;
}


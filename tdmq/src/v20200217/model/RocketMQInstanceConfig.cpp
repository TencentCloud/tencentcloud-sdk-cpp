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

#include <tencentcloud/tdmq/v20200217/model/RocketMQInstanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQInstanceConfig::RocketMQInstanceConfig() :
    m_maxTpsPerNamespaceHasBeenSet(false),
    m_maxNamespaceNumHasBeenSet(false),
    m_usedNamespaceNumHasBeenSet(false),
    m_maxTopicNumHasBeenSet(false),
    m_usedTopicNumHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false),
    m_usedGroupNumHasBeenSet(false),
    m_configDisplayHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_nodeDistributionHasBeenSet(false),
    m_topicDistributionHasBeenSet(false),
    m_maxQueuesPerTopicHasBeenSet(false),
    m_maxRetentionHasBeenSet(false),
    m_minRetentionHasBeenSet(false),
    m_retentionHasBeenSet(false),
    m_topicNumLowerLimitHasBeenSet(false),
    m_topicNumUpperLimitHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQInstanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxTpsPerNamespace") && !value["MaxTpsPerNamespace"].IsNull())
    {
        if (!value["MaxTpsPerNamespace"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxTpsPerNamespace` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTpsPerNamespace = value["MaxTpsPerNamespace"].GetUint64();
        m_maxTpsPerNamespaceHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaceNum") && !value["MaxNamespaceNum"].IsNull())
    {
        if (!value["MaxNamespaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxNamespaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaceNum = value["MaxNamespaceNum"].GetUint64();
        m_maxNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNamespaceNum") && !value["UsedNamespaceNum"].IsNull())
    {
        if (!value["UsedNamespaceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.UsedNamespaceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNamespaceNum = value["UsedNamespaceNum"].GetUint64();
        m_usedNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("MaxTopicNum") && !value["MaxTopicNum"].IsNull())
    {
        if (!value["MaxTopicNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxTopicNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopicNum = value["MaxTopicNum"].GetUint64();
        m_maxTopicNumHasBeenSet = true;
    }

    if (value.HasMember("UsedTopicNum") && !value["UsedTopicNum"].IsNull())
    {
        if (!value["UsedTopicNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.UsedTopicNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTopicNum = value["UsedTopicNum"].GetUint64();
        m_usedTopicNumHasBeenSet = true;
    }

    if (value.HasMember("MaxGroupNum") && !value["MaxGroupNum"].IsNull())
    {
        if (!value["MaxGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = value["MaxGroupNum"].GetUint64();
        m_maxGroupNumHasBeenSet = true;
    }

    if (value.HasMember("UsedGroupNum") && !value["UsedGroupNum"].IsNull())
    {
        if (!value["UsedGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.UsedGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedGroupNum = value["UsedGroupNum"].GetUint64();
        m_usedGroupNumHasBeenSet = true;
    }

    if (value.HasMember("ConfigDisplay") && !value["ConfigDisplay"].IsNull())
    {
        if (!value["ConfigDisplay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.ConfigDisplay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDisplay = string(value["ConfigDisplay"].GetString());
        m_configDisplayHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("NodeDistribution") && !value["NodeDistribution"].IsNull())
    {
        if (!value["NodeDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.NodeDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNodeDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeDistribution.push_back(item);
        }
        m_nodeDistributionHasBeenSet = true;
    }

    if (value.HasMember("TopicDistribution") && !value["TopicDistribution"].IsNull())
    {
        if (!value["TopicDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.TopicDistribution` is not array type"));

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

    if (value.HasMember("MaxQueuesPerTopic") && !value["MaxQueuesPerTopic"].IsNull())
    {
        if (!value["MaxQueuesPerTopic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxQueuesPerTopic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueuesPerTopic = value["MaxQueuesPerTopic"].GetUint64();
        m_maxQueuesPerTopicHasBeenSet = true;
    }

    if (value.HasMember("MaxRetention") && !value["MaxRetention"].IsNull())
    {
        if (!value["MaxRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MaxRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetention = value["MaxRetention"].GetInt64();
        m_maxRetentionHasBeenSet = true;
    }

    if (value.HasMember("MinRetention") && !value["MinRetention"].IsNull())
    {
        if (!value["MinRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.MinRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRetention = value["MinRetention"].GetInt64();
        m_minRetentionHasBeenSet = true;
    }

    if (value.HasMember("Retention") && !value["Retention"].IsNull())
    {
        if (!value["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = value["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLowerLimit") && !value["TopicNumLowerLimit"].IsNull())
    {
        if (!value["TopicNumLowerLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.TopicNumLowerLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLowerLimit = value["TopicNumLowerLimit"].GetInt64();
        m_topicNumLowerLimitHasBeenSet = true;
    }

    if (value.HasMember("TopicNumUpperLimit") && !value["TopicNumUpperLimit"].IsNull())
    {
        if (!value["TopicNumUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQInstanceConfig.TopicNumUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumUpperLimit = value["TopicNumUpperLimit"].GetInt64();
        m_topicNumUpperLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQInstanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_configDisplayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDisplay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDisplay.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_nodeDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeDistribution.begin(); itr != m_nodeDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_maxQueuesPerTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueuesPerTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueuesPerTopic, allocator);
    }

    if (m_maxRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetention, allocator);
    }

    if (m_minRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRetention, allocator);
    }

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_topicNumLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLowerLimit, allocator);
    }

    if (m_topicNumUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumUpperLimit, allocator);
    }

}


uint64_t RocketMQInstanceConfig::GetMaxTpsPerNamespace() const
{
    return m_maxTpsPerNamespace;
}

void RocketMQInstanceConfig::SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace)
{
    m_maxTpsPerNamespace = _maxTpsPerNamespace;
    m_maxTpsPerNamespaceHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxTpsPerNamespaceHasBeenSet() const
{
    return m_maxTpsPerNamespaceHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetMaxNamespaceNum() const
{
    return m_maxNamespaceNum;
}

void RocketMQInstanceConfig::SetMaxNamespaceNum(const uint64_t& _maxNamespaceNum)
{
    m_maxNamespaceNum = _maxNamespaceNum;
    m_maxNamespaceNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxNamespaceNumHasBeenSet() const
{
    return m_maxNamespaceNumHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetUsedNamespaceNum() const
{
    return m_usedNamespaceNum;
}

void RocketMQInstanceConfig::SetUsedNamespaceNum(const uint64_t& _usedNamespaceNum)
{
    m_usedNamespaceNum = _usedNamespaceNum;
    m_usedNamespaceNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::UsedNamespaceNumHasBeenSet() const
{
    return m_usedNamespaceNumHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetMaxTopicNum() const
{
    return m_maxTopicNum;
}

void RocketMQInstanceConfig::SetMaxTopicNum(const uint64_t& _maxTopicNum)
{
    m_maxTopicNum = _maxTopicNum;
    m_maxTopicNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxTopicNumHasBeenSet() const
{
    return m_maxTopicNumHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetUsedTopicNum() const
{
    return m_usedTopicNum;
}

void RocketMQInstanceConfig::SetUsedTopicNum(const uint64_t& _usedTopicNum)
{
    m_usedTopicNum = _usedTopicNum;
    m_usedTopicNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::UsedTopicNumHasBeenSet() const
{
    return m_usedTopicNumHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

void RocketMQInstanceConfig::SetMaxGroupNum(const uint64_t& _maxGroupNum)
{
    m_maxGroupNum = _maxGroupNum;
    m_maxGroupNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetUsedGroupNum() const
{
    return m_usedGroupNum;
}

void RocketMQInstanceConfig::SetUsedGroupNum(const uint64_t& _usedGroupNum)
{
    m_usedGroupNum = _usedGroupNum;
    m_usedGroupNumHasBeenSet = true;
}

bool RocketMQInstanceConfig::UsedGroupNumHasBeenSet() const
{
    return m_usedGroupNumHasBeenSet;
}

string RocketMQInstanceConfig::GetConfigDisplay() const
{
    return m_configDisplay;
}

void RocketMQInstanceConfig::SetConfigDisplay(const string& _configDisplay)
{
    m_configDisplay = _configDisplay;
    m_configDisplayHasBeenSet = true;
}

bool RocketMQInstanceConfig::ConfigDisplayHasBeenSet() const
{
    return m_configDisplayHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetNodeCount() const
{
    return m_nodeCount;
}

void RocketMQInstanceConfig::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool RocketMQInstanceConfig::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

vector<InstanceNodeDistribution> RocketMQInstanceConfig::GetNodeDistribution() const
{
    return m_nodeDistribution;
}

void RocketMQInstanceConfig::SetNodeDistribution(const vector<InstanceNodeDistribution>& _nodeDistribution)
{
    m_nodeDistribution = _nodeDistribution;
    m_nodeDistributionHasBeenSet = true;
}

bool RocketMQInstanceConfig::NodeDistributionHasBeenSet() const
{
    return m_nodeDistributionHasBeenSet;
}

vector<RocketMQTopicDistribution> RocketMQInstanceConfig::GetTopicDistribution() const
{
    return m_topicDistribution;
}

void RocketMQInstanceConfig::SetTopicDistribution(const vector<RocketMQTopicDistribution>& _topicDistribution)
{
    m_topicDistribution = _topicDistribution;
    m_topicDistributionHasBeenSet = true;
}

bool RocketMQInstanceConfig::TopicDistributionHasBeenSet() const
{
    return m_topicDistributionHasBeenSet;
}

uint64_t RocketMQInstanceConfig::GetMaxQueuesPerTopic() const
{
    return m_maxQueuesPerTopic;
}

void RocketMQInstanceConfig::SetMaxQueuesPerTopic(const uint64_t& _maxQueuesPerTopic)
{
    m_maxQueuesPerTopic = _maxQueuesPerTopic;
    m_maxQueuesPerTopicHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxQueuesPerTopicHasBeenSet() const
{
    return m_maxQueuesPerTopicHasBeenSet;
}

int64_t RocketMQInstanceConfig::GetMaxRetention() const
{
    return m_maxRetention;
}

void RocketMQInstanceConfig::SetMaxRetention(const int64_t& _maxRetention)
{
    m_maxRetention = _maxRetention;
    m_maxRetentionHasBeenSet = true;
}

bool RocketMQInstanceConfig::MaxRetentionHasBeenSet() const
{
    return m_maxRetentionHasBeenSet;
}

int64_t RocketMQInstanceConfig::GetMinRetention() const
{
    return m_minRetention;
}

void RocketMQInstanceConfig::SetMinRetention(const int64_t& _minRetention)
{
    m_minRetention = _minRetention;
    m_minRetentionHasBeenSet = true;
}

bool RocketMQInstanceConfig::MinRetentionHasBeenSet() const
{
    return m_minRetentionHasBeenSet;
}

int64_t RocketMQInstanceConfig::GetRetention() const
{
    return m_retention;
}

void RocketMQInstanceConfig::SetRetention(const int64_t& _retention)
{
    m_retention = _retention;
    m_retentionHasBeenSet = true;
}

bool RocketMQInstanceConfig::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

int64_t RocketMQInstanceConfig::GetTopicNumLowerLimit() const
{
    return m_topicNumLowerLimit;
}

void RocketMQInstanceConfig::SetTopicNumLowerLimit(const int64_t& _topicNumLowerLimit)
{
    m_topicNumLowerLimit = _topicNumLowerLimit;
    m_topicNumLowerLimitHasBeenSet = true;
}

bool RocketMQInstanceConfig::TopicNumLowerLimitHasBeenSet() const
{
    return m_topicNumLowerLimitHasBeenSet;
}

int64_t RocketMQInstanceConfig::GetTopicNumUpperLimit() const
{
    return m_topicNumUpperLimit;
}

void RocketMQInstanceConfig::SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit)
{
    m_topicNumUpperLimit = _topicNumUpperLimit;
    m_topicNumUpperLimitHasBeenSet = true;
}

bool RocketMQInstanceConfig::TopicNumUpperLimitHasBeenSet() const
{
    return m_topicNumUpperLimitHasBeenSet;
}


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

#include <tencentcloud/tdmq/v20200217/model/RocketMQSubscription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQSubscription::RocketMQSubscription() :
    m_topicHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_expressionTypeHasBeenSet(false),
    m_subStringHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_consumerLagHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_isOnlineHasBeenSet(false),
    m_consumeTypeHasBeenSet(false),
    m_consistencyHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_clientProtocolHasBeenSet(false),
    m_clientSubscriptionInfosHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQSubscription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }

    if (value.HasMember("SubString") && !value["SubString"].IsNull())
    {
        if (!value["SubString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.SubString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subString = string(value["SubString"].GetString());
        m_subStringHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLag") && !value["ConsumerLag"].IsNull())
    {
        if (!value["ConsumerLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ConsumerLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLag = value["ConsumerLag"].GetInt64();
        m_consumerLagHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("IsOnline") && !value["IsOnline"].IsNull())
    {
        if (!value["IsOnline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.IsOnline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOnline = value["IsOnline"].GetBool();
        m_isOnlineHasBeenSet = true;
    }

    if (value.HasMember("ConsumeType") && !value["ConsumeType"].IsNull())
    {
        if (!value["ConsumeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ConsumeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumeType = value["ConsumeType"].GetInt64();
        m_consumeTypeHasBeenSet = true;
    }

    if (value.HasMember("Consistency") && !value["Consistency"].IsNull())
    {
        if (!value["Consistency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.Consistency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consistency = value["Consistency"].GetInt64();
        m_consistencyHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryTimes") && !value["MaxRetryTimes"].IsNull())
    {
        if (!value["MaxRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.MaxRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryTimes = value["MaxRetryTimes"].GetInt64();
        m_maxRetryTimesHasBeenSet = true;
    }

    if (value.HasMember("ClientProtocol") && !value["ClientProtocol"].IsNull())
    {
        if (!value["ClientProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ClientProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientProtocol = string(value["ClientProtocol"].GetString());
        m_clientProtocolHasBeenSet = true;
    }

    if (value.HasMember("ClientSubscriptionInfos") && !value["ClientSubscriptionInfos"].IsNull())
    {
        if (!value["ClientSubscriptionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RocketMQSubscription.ClientSubscriptionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ClientSubscriptionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClientSubscriptionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clientSubscriptionInfos.push_back(item);
        }
        m_clientSubscriptionInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQSubscription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_subStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subString.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_consumerLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerLag, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_isOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOnline, allocator);
    }

    if (m_consumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeType, allocator);
    }

    if (m_consistencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consistency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistency, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTime, allocator);
    }

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_clientProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSubscriptionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSubscriptionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clientSubscriptionInfos.begin(); itr != m_clientSubscriptionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RocketMQSubscription::GetTopic() const
{
    return m_topic;
}

void RocketMQSubscription::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RocketMQSubscription::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RocketMQSubscription::GetType() const
{
    return m_type;
}

void RocketMQSubscription::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RocketMQSubscription::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RocketMQSubscription::GetPartitionNum() const
{
    return m_partitionNum;
}

void RocketMQSubscription::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool RocketMQSubscription::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

string RocketMQSubscription::GetExpressionType() const
{
    return m_expressionType;
}

void RocketMQSubscription::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool RocketMQSubscription::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

string RocketMQSubscription::GetSubString() const
{
    return m_subString;
}

void RocketMQSubscription::SetSubString(const string& _subString)
{
    m_subString = _subString;
    m_subStringHasBeenSet = true;
}

bool RocketMQSubscription::SubStringHasBeenSet() const
{
    return m_subStringHasBeenSet;
}

int64_t RocketMQSubscription::GetStatus() const
{
    return m_status;
}

void RocketMQSubscription::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RocketMQSubscription::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RocketMQSubscription::GetConsumerLag() const
{
    return m_consumerLag;
}

void RocketMQSubscription::SetConsumerLag(const int64_t& _consumerLag)
{
    m_consumerLag = _consumerLag;
    m_consumerLagHasBeenSet = true;
}

bool RocketMQSubscription::ConsumerLagHasBeenSet() const
{
    return m_consumerLagHasBeenSet;
}

string RocketMQSubscription::GetClusterId() const
{
    return m_clusterId;
}

void RocketMQSubscription::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RocketMQSubscription::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RocketMQSubscription::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void RocketMQSubscription::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool RocketMQSubscription::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

bool RocketMQSubscription::GetIsOnline() const
{
    return m_isOnline;
}

void RocketMQSubscription::SetIsOnline(const bool& _isOnline)
{
    m_isOnline = _isOnline;
    m_isOnlineHasBeenSet = true;
}

bool RocketMQSubscription::IsOnlineHasBeenSet() const
{
    return m_isOnlineHasBeenSet;
}

int64_t RocketMQSubscription::GetConsumeType() const
{
    return m_consumeType;
}

void RocketMQSubscription::SetConsumeType(const int64_t& _consumeType)
{
    m_consumeType = _consumeType;
    m_consumeTypeHasBeenSet = true;
}

bool RocketMQSubscription::ConsumeTypeHasBeenSet() const
{
    return m_consumeTypeHasBeenSet;
}

int64_t RocketMQSubscription::GetConsistency() const
{
    return m_consistency;
}

void RocketMQSubscription::SetConsistency(const int64_t& _consistency)
{
    m_consistency = _consistency;
    m_consistencyHasBeenSet = true;
}

bool RocketMQSubscription::ConsistencyHasBeenSet() const
{
    return m_consistencyHasBeenSet;
}

int64_t RocketMQSubscription::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void RocketMQSubscription::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool RocketMQSubscription::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t RocketMQSubscription::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void RocketMQSubscription::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool RocketMQSubscription::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

string RocketMQSubscription::GetClientProtocol() const
{
    return m_clientProtocol;
}

void RocketMQSubscription::SetClientProtocol(const string& _clientProtocol)
{
    m_clientProtocol = _clientProtocol;
    m_clientProtocolHasBeenSet = true;
}

bool RocketMQSubscription::ClientProtocolHasBeenSet() const
{
    return m_clientProtocolHasBeenSet;
}

vector<ClientSubscriptionInfo> RocketMQSubscription::GetClientSubscriptionInfos() const
{
    return m_clientSubscriptionInfos;
}

void RocketMQSubscription::SetClientSubscriptionInfos(const vector<ClientSubscriptionInfo>& _clientSubscriptionInfos)
{
    m_clientSubscriptionInfos = _clientSubscriptionInfos;
    m_clientSubscriptionInfosHasBeenSet = true;
}

bool RocketMQSubscription::ClientSubscriptionInfosHasBeenSet() const
{
    return m_clientSubscriptionInfosHasBeenSet;
}


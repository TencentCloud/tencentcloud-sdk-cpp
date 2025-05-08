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

#include <tencentcloud/trocket/v20230308/model/SubscriptionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

SubscriptionData::SubscriptionData() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_topicQueueNumHasBeenSet(false),
    m_consumerGroupHasBeenSet(false),
    m_isOnlineHasBeenSet(false),
    m_consumeTypeHasBeenSet(false),
    m_subStringHasBeenSet(false),
    m_expressionTypeHasBeenSet(false),
    m_consistencyHasBeenSet(false),
    m_consumerLagHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false),
    m_messageModelHasBeenSet(false),
    m_clientSubscriptionInfosHasBeenSet(false)
{
}

CoreInternalOutcome SubscriptionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(value["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicQueueNum") && !value["TopicQueueNum"].IsNull())
    {
        if (!value["TopicQueueNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.TopicQueueNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicQueueNum = value["TopicQueueNum"].GetInt64();
        m_topicQueueNumHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroup") && !value["ConsumerGroup"].IsNull())
    {
        if (!value["ConsumerGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ConsumerGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroup = string(value["ConsumerGroup"].GetString());
        m_consumerGroupHasBeenSet = true;
    }

    if (value.HasMember("IsOnline") && !value["IsOnline"].IsNull())
    {
        if (!value["IsOnline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.IsOnline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOnline = value["IsOnline"].GetBool();
        m_isOnlineHasBeenSet = true;
    }

    if (value.HasMember("ConsumeType") && !value["ConsumeType"].IsNull())
    {
        if (!value["ConsumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ConsumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeType = string(value["ConsumeType"].GetString());
        m_consumeTypeHasBeenSet = true;
    }

    if (value.HasMember("SubString") && !value["SubString"].IsNull())
    {
        if (!value["SubString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.SubString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subString = string(value["SubString"].GetString());
        m_subStringHasBeenSet = true;
    }

    if (value.HasMember("ExpressionType") && !value["ExpressionType"].IsNull())
    {
        if (!value["ExpressionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ExpressionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressionType = string(value["ExpressionType"].GetString());
        m_expressionTypeHasBeenSet = true;
    }

    if (value.HasMember("Consistency") && !value["Consistency"].IsNull())
    {
        if (!value["Consistency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.Consistency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consistency = value["Consistency"].GetInt64();
        m_consistencyHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLag") && !value["ConsumerLag"].IsNull())
    {
        if (!value["ConsumerLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ConsumerLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLag = value["ConsumerLag"].GetInt64();
        m_consumerLagHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.LastUpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = value["LastUpdateTime"].GetInt64();
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryTimes") && !value["MaxRetryTimes"].IsNull())
    {
        if (!value["MaxRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.MaxRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryTimes = value["MaxRetryTimes"].GetInt64();
        m_maxRetryTimesHasBeenSet = true;
    }

    if (value.HasMember("ConsumeMessageOrderly") && !value["ConsumeMessageOrderly"].IsNull())
    {
        if (!value["ConsumeMessageOrderly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ConsumeMessageOrderly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeMessageOrderly = value["ConsumeMessageOrderly"].GetBool();
        m_consumeMessageOrderlyHasBeenSet = true;
    }

    if (value.HasMember("MessageModel") && !value["MessageModel"].IsNull())
    {
        if (!value["MessageModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.MessageModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageModel = string(value["MessageModel"].GetString());
        m_messageModelHasBeenSet = true;
    }

    if (value.HasMember("ClientSubscriptionInfos") && !value["ClientSubscriptionInfos"].IsNull())
    {
        if (!value["ClientSubscriptionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscriptionData.ClientSubscriptionInfos` is not array type"));

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

void SubscriptionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicQueueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicQueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicQueueNum, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_consumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_subStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subString.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressionType.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consistency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistency, allocator);
    }

    if (m_consumerLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerLag, allocator);
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

    if (m_consumeMessageOrderlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeMessageOrderly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeMessageOrderly, allocator);
    }

    if (m_messageModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageModel.c_str(), allocator).Move(), allocator);
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


string SubscriptionData::GetInstanceId() const
{
    return m_instanceId;
}

void SubscriptionData::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SubscriptionData::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SubscriptionData::GetTopic() const
{
    return m_topic;
}

void SubscriptionData::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool SubscriptionData::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string SubscriptionData::GetTopicType() const
{
    return m_topicType;
}

void SubscriptionData::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool SubscriptionData::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

int64_t SubscriptionData::GetTopicQueueNum() const
{
    return m_topicQueueNum;
}

void SubscriptionData::SetTopicQueueNum(const int64_t& _topicQueueNum)
{
    m_topicQueueNum = _topicQueueNum;
    m_topicQueueNumHasBeenSet = true;
}

bool SubscriptionData::TopicQueueNumHasBeenSet() const
{
    return m_topicQueueNumHasBeenSet;
}

string SubscriptionData::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void SubscriptionData::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool SubscriptionData::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

bool SubscriptionData::GetIsOnline() const
{
    return m_isOnline;
}

void SubscriptionData::SetIsOnline(const bool& _isOnline)
{
    m_isOnline = _isOnline;
    m_isOnlineHasBeenSet = true;
}

bool SubscriptionData::IsOnlineHasBeenSet() const
{
    return m_isOnlineHasBeenSet;
}

string SubscriptionData::GetConsumeType() const
{
    return m_consumeType;
}

void SubscriptionData::SetConsumeType(const string& _consumeType)
{
    m_consumeType = _consumeType;
    m_consumeTypeHasBeenSet = true;
}

bool SubscriptionData::ConsumeTypeHasBeenSet() const
{
    return m_consumeTypeHasBeenSet;
}

string SubscriptionData::GetSubString() const
{
    return m_subString;
}

void SubscriptionData::SetSubString(const string& _subString)
{
    m_subString = _subString;
    m_subStringHasBeenSet = true;
}

bool SubscriptionData::SubStringHasBeenSet() const
{
    return m_subStringHasBeenSet;
}

string SubscriptionData::GetExpressionType() const
{
    return m_expressionType;
}

void SubscriptionData::SetExpressionType(const string& _expressionType)
{
    m_expressionType = _expressionType;
    m_expressionTypeHasBeenSet = true;
}

bool SubscriptionData::ExpressionTypeHasBeenSet() const
{
    return m_expressionTypeHasBeenSet;
}

int64_t SubscriptionData::GetConsistency() const
{
    return m_consistency;
}

void SubscriptionData::SetConsistency(const int64_t& _consistency)
{
    m_consistency = _consistency;
    m_consistencyHasBeenSet = true;
}

bool SubscriptionData::ConsistencyHasBeenSet() const
{
    return m_consistencyHasBeenSet;
}

int64_t SubscriptionData::GetConsumerLag() const
{
    return m_consumerLag;
}

void SubscriptionData::SetConsumerLag(const int64_t& _consumerLag)
{
    m_consumerLag = _consumerLag;
    m_consumerLagHasBeenSet = true;
}

bool SubscriptionData::ConsumerLagHasBeenSet() const
{
    return m_consumerLagHasBeenSet;
}

int64_t SubscriptionData::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void SubscriptionData::SetLastUpdateTime(const int64_t& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool SubscriptionData::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t SubscriptionData::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

void SubscriptionData::SetMaxRetryTimes(const int64_t& _maxRetryTimes)
{
    m_maxRetryTimes = _maxRetryTimes;
    m_maxRetryTimesHasBeenSet = true;
}

bool SubscriptionData::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

bool SubscriptionData::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

void SubscriptionData::SetConsumeMessageOrderly(const bool& _consumeMessageOrderly)
{
    m_consumeMessageOrderly = _consumeMessageOrderly;
    m_consumeMessageOrderlyHasBeenSet = true;
}

bool SubscriptionData::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

string SubscriptionData::GetMessageModel() const
{
    return m_messageModel;
}

void SubscriptionData::SetMessageModel(const string& _messageModel)
{
    m_messageModel = _messageModel;
    m_messageModelHasBeenSet = true;
}

bool SubscriptionData::MessageModelHasBeenSet() const
{
    return m_messageModelHasBeenSet;
}

vector<ClientSubscriptionInfo> SubscriptionData::GetClientSubscriptionInfos() const
{
    return m_clientSubscriptionInfos;
}

void SubscriptionData::SetClientSubscriptionInfos(const vector<ClientSubscriptionInfo>& _clientSubscriptionInfos)
{
    m_clientSubscriptionInfos = _clientSubscriptionInfos;
    m_clientSubscriptionInfosHasBeenSet = true;
}

bool SubscriptionData::ClientSubscriptionInfosHasBeenSet() const
{
    return m_clientSubscriptionInfosHasBeenSet;
}


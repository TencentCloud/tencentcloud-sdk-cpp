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

#include <tencentcloud/tdmq/v20200217/model/Subscription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Subscription::Subscription() :
    m_topicNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_connectedSinceHasBeenSet(false),
    m_consumerAddrHasBeenSet(false),
    m_consumerCountHasBeenSet(false),
    m_consumerNameHasBeenSet(false),
    m_msgBacklogHasBeenSet(false),
    m_msgRateExpiredHasBeenSet(false),
    m_msgRateOutHasBeenSet(false),
    m_msgThroughputOutHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_consumerSetsHasBeenSet(false),
    m_isOnlineHasBeenSet(false),
    m_consumersScheduleSetsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_blockedSubscriptionOnUnackedMsgsHasBeenSet(false),
    m_maxUnackedMsgNumHasBeenSet(false)
{
}

CoreInternalOutcome Subscription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("ConnectedSince") && !value["ConnectedSince"].IsNull())
    {
        if (!value["ConnectedSince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.ConnectedSince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectedSince = string(value["ConnectedSince"].GetString());
        m_connectedSinceHasBeenSet = true;
    }

    if (value.HasMember("ConsumerAddr") && !value["ConsumerAddr"].IsNull())
    {
        if (!value["ConsumerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.ConsumerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerAddr = string(value["ConsumerAddr"].GetString());
        m_consumerAddrHasBeenSet = true;
    }

    if (value.HasMember("ConsumerCount") && !value["ConsumerCount"].IsNull())
    {
        if (!value["ConsumerCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.ConsumerCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerCount = string(value["ConsumerCount"].GetString());
        m_consumerCountHasBeenSet = true;
    }

    if (value.HasMember("ConsumerName") && !value["ConsumerName"].IsNull())
    {
        if (!value["ConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.ConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerName = string(value["ConsumerName"].GetString());
        m_consumerNameHasBeenSet = true;
    }

    if (value.HasMember("MsgBacklog") && !value["MsgBacklog"].IsNull())
    {
        if (!value["MsgBacklog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.MsgBacklog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgBacklog = string(value["MsgBacklog"].GetString());
        m_msgBacklogHasBeenSet = true;
    }

    if (value.HasMember("MsgRateExpired") && !value["MsgRateExpired"].IsNull())
    {
        if (!value["MsgRateExpired"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.MsgRateExpired` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateExpired = string(value["MsgRateExpired"].GetString());
        m_msgRateExpiredHasBeenSet = true;
    }

    if (value.HasMember("MsgRateOut") && !value["MsgRateOut"].IsNull())
    {
        if (!value["MsgRateOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.MsgRateOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateOut = string(value["MsgRateOut"].GetString());
        m_msgRateOutHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputOut") && !value["MsgThroughputOut"].IsNull())
    {
        if (!value["MsgThroughputOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.MsgThroughputOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputOut = string(value["MsgThroughputOut"].GetString());
        m_msgThroughputOutHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionName") && !value["SubscriptionName"].IsNull())
    {
        if (!value["SubscriptionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.SubscriptionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionName = string(value["SubscriptionName"].GetString());
        m_subscriptionNameHasBeenSet = true;
    }

    if (value.HasMember("ConsumerSets") && !value["ConsumerSets"].IsNull())
    {
        if (!value["ConsumerSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Subscription.ConsumerSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumerSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Consumer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumerSets.push_back(item);
        }
        m_consumerSetsHasBeenSet = true;
    }

    if (value.HasMember("IsOnline") && !value["IsOnline"].IsNull())
    {
        if (!value["IsOnline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.IsOnline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOnline = value["IsOnline"].GetBool();
        m_isOnlineHasBeenSet = true;
    }

    if (value.HasMember("ConsumersScheduleSets") && !value["ConsumersScheduleSets"].IsNull())
    {
        if (!value["ConsumersScheduleSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Subscription.ConsumersScheduleSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ConsumersScheduleSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumersSchedule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_consumersScheduleSets.push_back(item);
        }
        m_consumersScheduleSetsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("BlockedSubscriptionOnUnackedMsgs") && !value["BlockedSubscriptionOnUnackedMsgs"].IsNull())
    {
        if (!value["BlockedSubscriptionOnUnackedMsgs"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.BlockedSubscriptionOnUnackedMsgs` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blockedSubscriptionOnUnackedMsgs = value["BlockedSubscriptionOnUnackedMsgs"].GetBool();
        m_blockedSubscriptionOnUnackedMsgsHasBeenSet = true;
    }

    if (value.HasMember("MaxUnackedMsgNum") && !value["MaxUnackedMsgNum"].IsNull())
    {
        if (!value["MaxUnackedMsgNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subscription.MaxUnackedMsgNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxUnackedMsgNum = value["MaxUnackedMsgNum"].GetInt64();
        m_maxUnackedMsgNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Subscription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectedSinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectedSince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectedSince.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerCount.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgBacklogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBacklog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgBacklog.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateExpired.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateOut.c_str(), allocator).Move(), allocator);
    }

    if (m_msgThroughputOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgThroughputOut.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumerSets.begin(); itr != m_consumerSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOnline, allocator);
    }

    if (m_consumersScheduleSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumersScheduleSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_consumersScheduleSets.begin(); itr != m_consumersScheduleSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedSubscriptionOnUnackedMsgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedSubscriptionOnUnackedMsgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedSubscriptionOnUnackedMsgs, allocator);
    }

    if (m_maxUnackedMsgNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnackedMsgNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxUnackedMsgNum, allocator);
    }

}


string Subscription::GetTopicName() const
{
    return m_topicName;
}

void Subscription::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Subscription::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string Subscription::GetEnvironmentId() const
{
    return m_environmentId;
}

void Subscription::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Subscription::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Subscription::GetConnectedSince() const
{
    return m_connectedSince;
}

void Subscription::SetConnectedSince(const string& _connectedSince)
{
    m_connectedSince = _connectedSince;
    m_connectedSinceHasBeenSet = true;
}

bool Subscription::ConnectedSinceHasBeenSet() const
{
    return m_connectedSinceHasBeenSet;
}

string Subscription::GetConsumerAddr() const
{
    return m_consumerAddr;
}

void Subscription::SetConsumerAddr(const string& _consumerAddr)
{
    m_consumerAddr = _consumerAddr;
    m_consumerAddrHasBeenSet = true;
}

bool Subscription::ConsumerAddrHasBeenSet() const
{
    return m_consumerAddrHasBeenSet;
}

string Subscription::GetConsumerCount() const
{
    return m_consumerCount;
}

void Subscription::SetConsumerCount(const string& _consumerCount)
{
    m_consumerCount = _consumerCount;
    m_consumerCountHasBeenSet = true;
}

bool Subscription::ConsumerCountHasBeenSet() const
{
    return m_consumerCountHasBeenSet;
}

string Subscription::GetConsumerName() const
{
    return m_consumerName;
}

void Subscription::SetConsumerName(const string& _consumerName)
{
    m_consumerName = _consumerName;
    m_consumerNameHasBeenSet = true;
}

bool Subscription::ConsumerNameHasBeenSet() const
{
    return m_consumerNameHasBeenSet;
}

string Subscription::GetMsgBacklog() const
{
    return m_msgBacklog;
}

void Subscription::SetMsgBacklog(const string& _msgBacklog)
{
    m_msgBacklog = _msgBacklog;
    m_msgBacklogHasBeenSet = true;
}

bool Subscription::MsgBacklogHasBeenSet() const
{
    return m_msgBacklogHasBeenSet;
}

string Subscription::GetMsgRateExpired() const
{
    return m_msgRateExpired;
}

void Subscription::SetMsgRateExpired(const string& _msgRateExpired)
{
    m_msgRateExpired = _msgRateExpired;
    m_msgRateExpiredHasBeenSet = true;
}

bool Subscription::MsgRateExpiredHasBeenSet() const
{
    return m_msgRateExpiredHasBeenSet;
}

string Subscription::GetMsgRateOut() const
{
    return m_msgRateOut;
}

void Subscription::SetMsgRateOut(const string& _msgRateOut)
{
    m_msgRateOut = _msgRateOut;
    m_msgRateOutHasBeenSet = true;
}

bool Subscription::MsgRateOutHasBeenSet() const
{
    return m_msgRateOutHasBeenSet;
}

string Subscription::GetMsgThroughputOut() const
{
    return m_msgThroughputOut;
}

void Subscription::SetMsgThroughputOut(const string& _msgThroughputOut)
{
    m_msgThroughputOut = _msgThroughputOut;
    m_msgThroughputOutHasBeenSet = true;
}

bool Subscription::MsgThroughputOutHasBeenSet() const
{
    return m_msgThroughputOutHasBeenSet;
}

string Subscription::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void Subscription::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool Subscription::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

vector<Consumer> Subscription::GetConsumerSets() const
{
    return m_consumerSets;
}

void Subscription::SetConsumerSets(const vector<Consumer>& _consumerSets)
{
    m_consumerSets = _consumerSets;
    m_consumerSetsHasBeenSet = true;
}

bool Subscription::ConsumerSetsHasBeenSet() const
{
    return m_consumerSetsHasBeenSet;
}

bool Subscription::GetIsOnline() const
{
    return m_isOnline;
}

void Subscription::SetIsOnline(const bool& _isOnline)
{
    m_isOnline = _isOnline;
    m_isOnlineHasBeenSet = true;
}

bool Subscription::IsOnlineHasBeenSet() const
{
    return m_isOnlineHasBeenSet;
}

vector<ConsumersSchedule> Subscription::GetConsumersScheduleSets() const
{
    return m_consumersScheduleSets;
}

void Subscription::SetConsumersScheduleSets(const vector<ConsumersSchedule>& _consumersScheduleSets)
{
    m_consumersScheduleSets = _consumersScheduleSets;
    m_consumersScheduleSetsHasBeenSet = true;
}

bool Subscription::ConsumersScheduleSetsHasBeenSet() const
{
    return m_consumersScheduleSetsHasBeenSet;
}

string Subscription::GetRemark() const
{
    return m_remark;
}

void Subscription::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Subscription::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Subscription::GetCreateTime() const
{
    return m_createTime;
}

void Subscription::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Subscription::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Subscription::GetUpdateTime() const
{
    return m_updateTime;
}

void Subscription::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Subscription::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Subscription::GetSubType() const
{
    return m_subType;
}

void Subscription::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool Subscription::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

bool Subscription::GetBlockedSubscriptionOnUnackedMsgs() const
{
    return m_blockedSubscriptionOnUnackedMsgs;
}

void Subscription::SetBlockedSubscriptionOnUnackedMsgs(const bool& _blockedSubscriptionOnUnackedMsgs)
{
    m_blockedSubscriptionOnUnackedMsgs = _blockedSubscriptionOnUnackedMsgs;
    m_blockedSubscriptionOnUnackedMsgsHasBeenSet = true;
}

bool Subscription::BlockedSubscriptionOnUnackedMsgsHasBeenSet() const
{
    return m_blockedSubscriptionOnUnackedMsgsHasBeenSet;
}

int64_t Subscription::GetMaxUnackedMsgNum() const
{
    return m_maxUnackedMsgNum;
}

void Subscription::SetMaxUnackedMsgNum(const int64_t& _maxUnackedMsgNum)
{
    m_maxUnackedMsgNum = _maxUnackedMsgNum;
    m_maxUnackedMsgNumHasBeenSet = true;
}

bool Subscription::MaxUnackedMsgNumHasBeenSet() const
{
    return m_maxUnackedMsgNumHasBeenSet;
}


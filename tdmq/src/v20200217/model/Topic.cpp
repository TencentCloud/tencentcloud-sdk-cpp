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

#include <tencentcloud/tdmq/v20200217/model/Topic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Topic::Topic() :
    m_averageMsgSizeHasBeenSet(false),
    m_consumerCountHasBeenSet(false),
    m_lastConfirmedEntryHasBeenSet(false),
    m_lastLedgerCreatedTimestampHasBeenSet(false),
    m_msgRateInHasBeenSet(false),
    m_msgRateOutHasBeenSet(false),
    m_msgThroughputInHasBeenSet(false),
    m_msgThroughputOutHasBeenSet(false),
    m_numberOfEntriesHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_producerCountHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_subTopicSetsHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_producerLimitHasBeenSet(false),
    m_consumerLimitHasBeenSet(false),
    m_pulsarTopicTypeHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_tenantHasBeenSet(false),
    m_isolateConsumerEnableHasBeenSet(false),
    m_ackTimeOutHasBeenSet(false)
{
}

CoreInternalOutcome Topic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AverageMsgSize") && !value["AverageMsgSize"].IsNull())
    {
        if (!value["AverageMsgSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.AverageMsgSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_averageMsgSize = string(value["AverageMsgSize"].GetString());
        m_averageMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("ConsumerCount") && !value["ConsumerCount"].IsNull())
    {
        if (!value["ConsumerCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ConsumerCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerCount = string(value["ConsumerCount"].GetString());
        m_consumerCountHasBeenSet = true;
    }

    if (value.HasMember("LastConfirmedEntry") && !value["LastConfirmedEntry"].IsNull())
    {
        if (!value["LastConfirmedEntry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.LastConfirmedEntry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConfirmedEntry = string(value["LastConfirmedEntry"].GetString());
        m_lastConfirmedEntryHasBeenSet = true;
    }

    if (value.HasMember("LastLedgerCreatedTimestamp") && !value["LastLedgerCreatedTimestamp"].IsNull())
    {
        if (!value["LastLedgerCreatedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.LastLedgerCreatedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLedgerCreatedTimestamp = string(value["LastLedgerCreatedTimestamp"].GetString());
        m_lastLedgerCreatedTimestampHasBeenSet = true;
    }

    if (value.HasMember("MsgRateIn") && !value["MsgRateIn"].IsNull())
    {
        if (!value["MsgRateIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgRateIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateIn = string(value["MsgRateIn"].GetString());
        m_msgRateInHasBeenSet = true;
    }

    if (value.HasMember("MsgRateOut") && !value["MsgRateOut"].IsNull())
    {
        if (!value["MsgRateOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgRateOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateOut = string(value["MsgRateOut"].GetString());
        m_msgRateOutHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputIn") && !value["MsgThroughputIn"].IsNull())
    {
        if (!value["MsgThroughputIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgThroughputIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputIn = string(value["MsgThroughputIn"].GetString());
        m_msgThroughputInHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputOut") && !value["MsgThroughputOut"].IsNull())
    {
        if (!value["MsgThroughputOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgThroughputOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputOut = string(value["MsgThroughputOut"].GetString());
        m_msgThroughputOutHasBeenSet = true;
    }

    if (value.HasMember("NumberOfEntries") && !value["NumberOfEntries"].IsNull())
    {
        if (!value["NumberOfEntries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.NumberOfEntries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfEntries = string(value["NumberOfEntries"].GetString());
        m_numberOfEntriesHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.Partitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetInt64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("ProducerCount") && !value["ProducerCount"].IsNull())
    {
        if (!value["ProducerCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ProducerCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerCount = string(value["ProducerCount"].GetString());
        m_producerCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.TotalSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = string(value["TotalSize"].GetString());
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("SubTopicSets") && !value["SubTopicSets"].IsNull())
    {
        if (!value["SubTopicSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Topic.SubTopicSets` is not array type"));

        const rapidjson::Value &tmpValue = value["SubTopicSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartitionsTopic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subTopicSets.push_back(item);
        }
        m_subTopicSetsHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.TopicType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = value["TopicType"].GetUint64();
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ProducerLimit") && !value["ProducerLimit"].IsNull())
    {
        if (!value["ProducerLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ProducerLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerLimit = string(value["ProducerLimit"].GetString());
        m_producerLimitHasBeenSet = true;
    }

    if (value.HasMember("ConsumerLimit") && !value["ConsumerLimit"].IsNull())
    {
        if (!value["ConsumerLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ConsumerLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLimit = string(value["ConsumerLimit"].GetString());
        m_consumerLimitHasBeenSet = true;
    }

    if (value.HasMember("PulsarTopicType") && !value["PulsarTopicType"].IsNull())
    {
        if (!value["PulsarTopicType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.PulsarTopicType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pulsarTopicType = value["PulsarTopicType"].GetInt64();
        m_pulsarTopicTypeHasBeenSet = true;
    }

    if (value.HasMember("MsgTTL") && !value["MsgTTL"].IsNull())
    {
        if (!value["MsgTTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.MsgTTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = value["MsgTTL"].GetUint64();
        m_msgTTLHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Tenant") && !value["Tenant"].IsNull())
    {
        if (!value["Tenant"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.Tenant` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenant = string(value["Tenant"].GetString());
        m_tenantHasBeenSet = true;
    }

    if (value.HasMember("IsolateConsumerEnable") && !value["IsolateConsumerEnable"].IsNull())
    {
        if (!value["IsolateConsumerEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.IsolateConsumerEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isolateConsumerEnable = value["IsolateConsumerEnable"].GetBool();
        m_isolateConsumerEnableHasBeenSet = true;
    }

    if (value.HasMember("AckTimeOut") && !value["AckTimeOut"].IsNull())
    {
        if (!value["AckTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Topic.AckTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ackTimeOut = value["AckTimeOut"].GetInt64();
        m_ackTimeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Topic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_averageMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_averageMsgSize.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerCount.c_str(), allocator).Move(), allocator);
    }

    if (m_lastConfirmedEntryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastConfirmedEntry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastConfirmedEntry.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLedgerCreatedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLedgerCreatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLedgerCreatedTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateIn.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRateOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRateOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgRateOut.c_str(), allocator).Move(), allocator);
    }

    if (m_msgThroughputInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgThroughputIn.c_str(), allocator).Move(), allocator);
    }

    if (m_msgThroughputOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgThroughputOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgThroughputOut.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_numberOfEntries.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitions, allocator);
    }

    if (m_producerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerCount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalSize.c_str(), allocator).Move(), allocator);
    }

    if (m_subTopicSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTopicSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subTopicSets.begin(); itr != m_subTopicSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicType, allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
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

    if (m_producerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_pulsarTopicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulsarTopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pulsarTopicType, allocator);
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTTL, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tenant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenant.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateConsumerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateConsumerEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isolateConsumerEnable, allocator);
    }

    if (m_ackTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ackTimeOut, allocator);
    }

}


string Topic::GetAverageMsgSize() const
{
    return m_averageMsgSize;
}

void Topic::SetAverageMsgSize(const string& _averageMsgSize)
{
    m_averageMsgSize = _averageMsgSize;
    m_averageMsgSizeHasBeenSet = true;
}

bool Topic::AverageMsgSizeHasBeenSet() const
{
    return m_averageMsgSizeHasBeenSet;
}

string Topic::GetConsumerCount() const
{
    return m_consumerCount;
}

void Topic::SetConsumerCount(const string& _consumerCount)
{
    m_consumerCount = _consumerCount;
    m_consumerCountHasBeenSet = true;
}

bool Topic::ConsumerCountHasBeenSet() const
{
    return m_consumerCountHasBeenSet;
}

string Topic::GetLastConfirmedEntry() const
{
    return m_lastConfirmedEntry;
}

void Topic::SetLastConfirmedEntry(const string& _lastConfirmedEntry)
{
    m_lastConfirmedEntry = _lastConfirmedEntry;
    m_lastConfirmedEntryHasBeenSet = true;
}

bool Topic::LastConfirmedEntryHasBeenSet() const
{
    return m_lastConfirmedEntryHasBeenSet;
}

string Topic::GetLastLedgerCreatedTimestamp() const
{
    return m_lastLedgerCreatedTimestamp;
}

void Topic::SetLastLedgerCreatedTimestamp(const string& _lastLedgerCreatedTimestamp)
{
    m_lastLedgerCreatedTimestamp = _lastLedgerCreatedTimestamp;
    m_lastLedgerCreatedTimestampHasBeenSet = true;
}

bool Topic::LastLedgerCreatedTimestampHasBeenSet() const
{
    return m_lastLedgerCreatedTimestampHasBeenSet;
}

string Topic::GetMsgRateIn() const
{
    return m_msgRateIn;
}

void Topic::SetMsgRateIn(const string& _msgRateIn)
{
    m_msgRateIn = _msgRateIn;
    m_msgRateInHasBeenSet = true;
}

bool Topic::MsgRateInHasBeenSet() const
{
    return m_msgRateInHasBeenSet;
}

string Topic::GetMsgRateOut() const
{
    return m_msgRateOut;
}

void Topic::SetMsgRateOut(const string& _msgRateOut)
{
    m_msgRateOut = _msgRateOut;
    m_msgRateOutHasBeenSet = true;
}

bool Topic::MsgRateOutHasBeenSet() const
{
    return m_msgRateOutHasBeenSet;
}

string Topic::GetMsgThroughputIn() const
{
    return m_msgThroughputIn;
}

void Topic::SetMsgThroughputIn(const string& _msgThroughputIn)
{
    m_msgThroughputIn = _msgThroughputIn;
    m_msgThroughputInHasBeenSet = true;
}

bool Topic::MsgThroughputInHasBeenSet() const
{
    return m_msgThroughputInHasBeenSet;
}

string Topic::GetMsgThroughputOut() const
{
    return m_msgThroughputOut;
}

void Topic::SetMsgThroughputOut(const string& _msgThroughputOut)
{
    m_msgThroughputOut = _msgThroughputOut;
    m_msgThroughputOutHasBeenSet = true;
}

bool Topic::MsgThroughputOutHasBeenSet() const
{
    return m_msgThroughputOutHasBeenSet;
}

string Topic::GetNumberOfEntries() const
{
    return m_numberOfEntries;
}

void Topic::SetNumberOfEntries(const string& _numberOfEntries)
{
    m_numberOfEntries = _numberOfEntries;
    m_numberOfEntriesHasBeenSet = true;
}

bool Topic::NumberOfEntriesHasBeenSet() const
{
    return m_numberOfEntriesHasBeenSet;
}

int64_t Topic::GetPartitions() const
{
    return m_partitions;
}

void Topic::SetPartitions(const int64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool Topic::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string Topic::GetProducerCount() const
{
    return m_producerCount;
}

void Topic::SetProducerCount(const string& _producerCount)
{
    m_producerCount = _producerCount;
    m_producerCountHasBeenSet = true;
}

bool Topic::ProducerCountHasBeenSet() const
{
    return m_producerCountHasBeenSet;
}

string Topic::GetTotalSize() const
{
    return m_totalSize;
}

void Topic::SetTotalSize(const string& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool Topic::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

vector<PartitionsTopic> Topic::GetSubTopicSets() const
{
    return m_subTopicSets;
}

void Topic::SetSubTopicSets(const vector<PartitionsTopic>& _subTopicSets)
{
    m_subTopicSets = _subTopicSets;
    m_subTopicSetsHasBeenSet = true;
}

bool Topic::SubTopicSetsHasBeenSet() const
{
    return m_subTopicSetsHasBeenSet;
}

uint64_t Topic::GetTopicType() const
{
    return m_topicType;
}

void Topic::SetTopicType(const uint64_t& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool Topic::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

string Topic::GetEnvironmentId() const
{
    return m_environmentId;
}

void Topic::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool Topic::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string Topic::GetTopicName() const
{
    return m_topicName;
}

void Topic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool Topic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string Topic::GetRemark() const
{
    return m_remark;
}

void Topic::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Topic::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Topic::GetCreateTime() const
{
    return m_createTime;
}

void Topic::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Topic::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Topic::GetUpdateTime() const
{
    return m_updateTime;
}

void Topic::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Topic::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Topic::GetProducerLimit() const
{
    return m_producerLimit;
}

void Topic::SetProducerLimit(const string& _producerLimit)
{
    m_producerLimit = _producerLimit;
    m_producerLimitHasBeenSet = true;
}

bool Topic::ProducerLimitHasBeenSet() const
{
    return m_producerLimitHasBeenSet;
}

string Topic::GetConsumerLimit() const
{
    return m_consumerLimit;
}

void Topic::SetConsumerLimit(const string& _consumerLimit)
{
    m_consumerLimit = _consumerLimit;
    m_consumerLimitHasBeenSet = true;
}

bool Topic::ConsumerLimitHasBeenSet() const
{
    return m_consumerLimitHasBeenSet;
}

int64_t Topic::GetPulsarTopicType() const
{
    return m_pulsarTopicType;
}

void Topic::SetPulsarTopicType(const int64_t& _pulsarTopicType)
{
    m_pulsarTopicType = _pulsarTopicType;
    m_pulsarTopicTypeHasBeenSet = true;
}

bool Topic::PulsarTopicTypeHasBeenSet() const
{
    return m_pulsarTopicTypeHasBeenSet;
}

uint64_t Topic::GetMsgTTL() const
{
    return m_msgTTL;
}

void Topic::SetMsgTTL(const uint64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool Topic::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string Topic::GetClusterId() const
{
    return m_clusterId;
}

void Topic::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Topic::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Topic::GetTenant() const
{
    return m_tenant;
}

void Topic::SetTenant(const string& _tenant)
{
    m_tenant = _tenant;
    m_tenantHasBeenSet = true;
}

bool Topic::TenantHasBeenSet() const
{
    return m_tenantHasBeenSet;
}

bool Topic::GetIsolateConsumerEnable() const
{
    return m_isolateConsumerEnable;
}

void Topic::SetIsolateConsumerEnable(const bool& _isolateConsumerEnable)
{
    m_isolateConsumerEnable = _isolateConsumerEnable;
    m_isolateConsumerEnableHasBeenSet = true;
}

bool Topic::IsolateConsumerEnableHasBeenSet() const
{
    return m_isolateConsumerEnableHasBeenSet;
}

int64_t Topic::GetAckTimeOut() const
{
    return m_ackTimeOut;
}

void Topic::SetAckTimeOut(const int64_t& _ackTimeOut)
{
    m_ackTimeOut = _ackTimeOut;
    m_ackTimeOutHasBeenSet = true;
}

bool Topic::AckTimeOutHasBeenSet() const
{
    return m_ackTimeOutHasBeenSet;
}


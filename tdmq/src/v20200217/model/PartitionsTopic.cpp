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

#include <tencentcloud/tdmq/v20200217/model/PartitionsTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

PartitionsTopic::PartitionsTopic() :
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
    m_topicTypeHasBeenSet(false)
{
}

CoreInternalOutcome PartitionsTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AverageMsgSize") && !value["AverageMsgSize"].IsNull())
    {
        if (!value["AverageMsgSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.AverageMsgSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_averageMsgSize = string(value["AverageMsgSize"].GetString());
        m_averageMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("ConsumerCount") && !value["ConsumerCount"].IsNull())
    {
        if (!value["ConsumerCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.ConsumerCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerCount = string(value["ConsumerCount"].GetString());
        m_consumerCountHasBeenSet = true;
    }

    if (value.HasMember("LastConfirmedEntry") && !value["LastConfirmedEntry"].IsNull())
    {
        if (!value["LastConfirmedEntry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.LastConfirmedEntry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastConfirmedEntry = string(value["LastConfirmedEntry"].GetString());
        m_lastConfirmedEntryHasBeenSet = true;
    }

    if (value.HasMember("LastLedgerCreatedTimestamp") && !value["LastLedgerCreatedTimestamp"].IsNull())
    {
        if (!value["LastLedgerCreatedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.LastLedgerCreatedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLedgerCreatedTimestamp = string(value["LastLedgerCreatedTimestamp"].GetString());
        m_lastLedgerCreatedTimestampHasBeenSet = true;
    }

    if (value.HasMember("MsgRateIn") && !value["MsgRateIn"].IsNull())
    {
        if (!value["MsgRateIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.MsgRateIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateIn = string(value["MsgRateIn"].GetString());
        m_msgRateInHasBeenSet = true;
    }

    if (value.HasMember("MsgRateOut") && !value["MsgRateOut"].IsNull())
    {
        if (!value["MsgRateOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.MsgRateOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgRateOut = string(value["MsgRateOut"].GetString());
        m_msgRateOutHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputIn") && !value["MsgThroughputIn"].IsNull())
    {
        if (!value["MsgThroughputIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.MsgThroughputIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputIn = string(value["MsgThroughputIn"].GetString());
        m_msgThroughputInHasBeenSet = true;
    }

    if (value.HasMember("MsgThroughputOut") && !value["MsgThroughputOut"].IsNull())
    {
        if (!value["MsgThroughputOut"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.MsgThroughputOut` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgThroughputOut = string(value["MsgThroughputOut"].GetString());
        m_msgThroughputOutHasBeenSet = true;
    }

    if (value.HasMember("NumberOfEntries") && !value["NumberOfEntries"].IsNull())
    {
        if (!value["NumberOfEntries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.NumberOfEntries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfEntries = string(value["NumberOfEntries"].GetString());
        m_numberOfEntriesHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.Partitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetInt64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("ProducerCount") && !value["ProducerCount"].IsNull())
    {
        if (!value["ProducerCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.ProducerCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerCount = string(value["ProducerCount"].GetString());
        m_producerCountHasBeenSet = true;
    }

    if (value.HasMember("TotalSize") && !value["TotalSize"].IsNull())
    {
        if (!value["TotalSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.TotalSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalSize = string(value["TotalSize"].GetString());
        m_totalSizeHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PartitionsTopic.TopicType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = value["TopicType"].GetUint64();
        m_topicTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PartitionsTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicType, allocator);
    }

}


string PartitionsTopic::GetAverageMsgSize() const
{
    return m_averageMsgSize;
}

void PartitionsTopic::SetAverageMsgSize(const string& _averageMsgSize)
{
    m_averageMsgSize = _averageMsgSize;
    m_averageMsgSizeHasBeenSet = true;
}

bool PartitionsTopic::AverageMsgSizeHasBeenSet() const
{
    return m_averageMsgSizeHasBeenSet;
}

string PartitionsTopic::GetConsumerCount() const
{
    return m_consumerCount;
}

void PartitionsTopic::SetConsumerCount(const string& _consumerCount)
{
    m_consumerCount = _consumerCount;
    m_consumerCountHasBeenSet = true;
}

bool PartitionsTopic::ConsumerCountHasBeenSet() const
{
    return m_consumerCountHasBeenSet;
}

string PartitionsTopic::GetLastConfirmedEntry() const
{
    return m_lastConfirmedEntry;
}

void PartitionsTopic::SetLastConfirmedEntry(const string& _lastConfirmedEntry)
{
    m_lastConfirmedEntry = _lastConfirmedEntry;
    m_lastConfirmedEntryHasBeenSet = true;
}

bool PartitionsTopic::LastConfirmedEntryHasBeenSet() const
{
    return m_lastConfirmedEntryHasBeenSet;
}

string PartitionsTopic::GetLastLedgerCreatedTimestamp() const
{
    return m_lastLedgerCreatedTimestamp;
}

void PartitionsTopic::SetLastLedgerCreatedTimestamp(const string& _lastLedgerCreatedTimestamp)
{
    m_lastLedgerCreatedTimestamp = _lastLedgerCreatedTimestamp;
    m_lastLedgerCreatedTimestampHasBeenSet = true;
}

bool PartitionsTopic::LastLedgerCreatedTimestampHasBeenSet() const
{
    return m_lastLedgerCreatedTimestampHasBeenSet;
}

string PartitionsTopic::GetMsgRateIn() const
{
    return m_msgRateIn;
}

void PartitionsTopic::SetMsgRateIn(const string& _msgRateIn)
{
    m_msgRateIn = _msgRateIn;
    m_msgRateInHasBeenSet = true;
}

bool PartitionsTopic::MsgRateInHasBeenSet() const
{
    return m_msgRateInHasBeenSet;
}

string PartitionsTopic::GetMsgRateOut() const
{
    return m_msgRateOut;
}

void PartitionsTopic::SetMsgRateOut(const string& _msgRateOut)
{
    m_msgRateOut = _msgRateOut;
    m_msgRateOutHasBeenSet = true;
}

bool PartitionsTopic::MsgRateOutHasBeenSet() const
{
    return m_msgRateOutHasBeenSet;
}

string PartitionsTopic::GetMsgThroughputIn() const
{
    return m_msgThroughputIn;
}

void PartitionsTopic::SetMsgThroughputIn(const string& _msgThroughputIn)
{
    m_msgThroughputIn = _msgThroughputIn;
    m_msgThroughputInHasBeenSet = true;
}

bool PartitionsTopic::MsgThroughputInHasBeenSet() const
{
    return m_msgThroughputInHasBeenSet;
}

string PartitionsTopic::GetMsgThroughputOut() const
{
    return m_msgThroughputOut;
}

void PartitionsTopic::SetMsgThroughputOut(const string& _msgThroughputOut)
{
    m_msgThroughputOut = _msgThroughputOut;
    m_msgThroughputOutHasBeenSet = true;
}

bool PartitionsTopic::MsgThroughputOutHasBeenSet() const
{
    return m_msgThroughputOutHasBeenSet;
}

string PartitionsTopic::GetNumberOfEntries() const
{
    return m_numberOfEntries;
}

void PartitionsTopic::SetNumberOfEntries(const string& _numberOfEntries)
{
    m_numberOfEntries = _numberOfEntries;
    m_numberOfEntriesHasBeenSet = true;
}

bool PartitionsTopic::NumberOfEntriesHasBeenSet() const
{
    return m_numberOfEntriesHasBeenSet;
}

int64_t PartitionsTopic::GetPartitions() const
{
    return m_partitions;
}

void PartitionsTopic::SetPartitions(const int64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool PartitionsTopic::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string PartitionsTopic::GetProducerCount() const
{
    return m_producerCount;
}

void PartitionsTopic::SetProducerCount(const string& _producerCount)
{
    m_producerCount = _producerCount;
    m_producerCountHasBeenSet = true;
}

bool PartitionsTopic::ProducerCountHasBeenSet() const
{
    return m_producerCountHasBeenSet;
}

string PartitionsTopic::GetTotalSize() const
{
    return m_totalSize;
}

void PartitionsTopic::SetTotalSize(const string& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool PartitionsTopic::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

uint64_t PartitionsTopic::GetTopicType() const
{
    return m_topicType;
}

void PartitionsTopic::SetTopicType(const uint64_t& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool PartitionsTopic::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}


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

#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

BatchModifyTopicInfo::BatchModifyTopicInfo() :
    m_topicNameHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_cleanUpPolicyHasBeenSet(false),
    m_minInsyncReplicasHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_retentionBytesHasBeenSet(false),
    m_segmentMsHasBeenSet(false),
    m_maxMessageBytesHasBeenSet(false),
    m_logMsgTimestampTypeHasBeenSet(false)
{
}

CoreInternalOutcome BatchModifyTopicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.PartitionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetInt64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.ReplicaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetInt64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("CleanUpPolicy") && !value["CleanUpPolicy"].IsNull())
    {
        if (!value["CleanUpPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.CleanUpPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cleanUpPolicy = string(value["CleanUpPolicy"].GetString());
        m_cleanUpPolicyHasBeenSet = true;
    }

    if (value.HasMember("MinInsyncReplicas") && !value["MinInsyncReplicas"].IsNull())
    {
        if (!value["MinInsyncReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.MinInsyncReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minInsyncReplicas = value["MinInsyncReplicas"].GetInt64();
        m_minInsyncReplicasHasBeenSet = true;
    }

    if (value.HasMember("UncleanLeaderElectionEnable") && !value["UncleanLeaderElectionEnable"].IsNull())
    {
        if (!value["UncleanLeaderElectionEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.UncleanLeaderElectionEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uncleanLeaderElectionEnable = value["UncleanLeaderElectionEnable"].GetBool();
        m_uncleanLeaderElectionEnableHasBeenSet = true;
    }

    if (value.HasMember("RetentionMs") && !value["RetentionMs"].IsNull())
    {
        if (!value["RetentionMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.RetentionMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionMs = value["RetentionMs"].GetInt64();
        m_retentionMsHasBeenSet = true;
    }

    if (value.HasMember("RetentionBytes") && !value["RetentionBytes"].IsNull())
    {
        if (!value["RetentionBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.RetentionBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionBytes = value["RetentionBytes"].GetInt64();
        m_retentionBytesHasBeenSet = true;
    }

    if (value.HasMember("SegmentMs") && !value["SegmentMs"].IsNull())
    {
        if (!value["SegmentMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.SegmentMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentMs = value["SegmentMs"].GetInt64();
        m_segmentMsHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageBytes") && !value["MaxMessageBytes"].IsNull())
    {
        if (!value["MaxMessageBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.MaxMessageBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageBytes = value["MaxMessageBytes"].GetInt64();
        m_maxMessageBytesHasBeenSet = true;
    }

    if (value.HasMember("LogMsgTimestampType") && !value["LogMsgTimestampType"].IsNull())
    {
        if (!value["LogMsgTimestampType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicInfo.LogMsgTimestampType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logMsgTimestampType = string(value["LogMsgTimestampType"].GetString());
        m_logMsgTimestampTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchModifyTopicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_cleanUpPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanUpPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cleanUpPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_minInsyncReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInsyncReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInsyncReplicas, allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_retentionBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionBytes, allocator);
    }

    if (m_segmentMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentMs, allocator);
    }

    if (m_maxMessageBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageBytes, allocator);
    }

    if (m_logMsgTimestampTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogMsgTimestampType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logMsgTimestampType.c_str(), allocator).Move(), allocator);
    }

}


string BatchModifyTopicInfo::GetTopicName() const
{
    return m_topicName;
}

void BatchModifyTopicInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool BatchModifyTopicInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetPartitionNum() const
{
    return m_partitionNum;
}

void BatchModifyTopicInfo::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool BatchModifyTopicInfo::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

string BatchModifyTopicInfo::GetNote() const
{
    return m_note;
}

void BatchModifyTopicInfo::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool BatchModifyTopicInfo::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetReplicaNum() const
{
    return m_replicaNum;
}

void BatchModifyTopicInfo::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool BatchModifyTopicInfo::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

string BatchModifyTopicInfo::GetCleanUpPolicy() const
{
    return m_cleanUpPolicy;
}

void BatchModifyTopicInfo::SetCleanUpPolicy(const string& _cleanUpPolicy)
{
    m_cleanUpPolicy = _cleanUpPolicy;
    m_cleanUpPolicyHasBeenSet = true;
}

bool BatchModifyTopicInfo::CleanUpPolicyHasBeenSet() const
{
    return m_cleanUpPolicyHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetMinInsyncReplicas() const
{
    return m_minInsyncReplicas;
}

void BatchModifyTopicInfo::SetMinInsyncReplicas(const int64_t& _minInsyncReplicas)
{
    m_minInsyncReplicas = _minInsyncReplicas;
    m_minInsyncReplicasHasBeenSet = true;
}

bool BatchModifyTopicInfo::MinInsyncReplicasHasBeenSet() const
{
    return m_minInsyncReplicasHasBeenSet;
}

bool BatchModifyTopicInfo::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void BatchModifyTopicInfo::SetUncleanLeaderElectionEnable(const bool& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool BatchModifyTopicInfo::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetRetentionMs() const
{
    return m_retentionMs;
}

void BatchModifyTopicInfo::SetRetentionMs(const int64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool BatchModifyTopicInfo::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetRetentionBytes() const
{
    return m_retentionBytes;
}

void BatchModifyTopicInfo::SetRetentionBytes(const int64_t& _retentionBytes)
{
    m_retentionBytes = _retentionBytes;
    m_retentionBytesHasBeenSet = true;
}

bool BatchModifyTopicInfo::RetentionBytesHasBeenSet() const
{
    return m_retentionBytesHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetSegmentMs() const
{
    return m_segmentMs;
}

void BatchModifyTopicInfo::SetSegmentMs(const int64_t& _segmentMs)
{
    m_segmentMs = _segmentMs;
    m_segmentMsHasBeenSet = true;
}

bool BatchModifyTopicInfo::SegmentMsHasBeenSet() const
{
    return m_segmentMsHasBeenSet;
}

int64_t BatchModifyTopicInfo::GetMaxMessageBytes() const
{
    return m_maxMessageBytes;
}

void BatchModifyTopicInfo::SetMaxMessageBytes(const int64_t& _maxMessageBytes)
{
    m_maxMessageBytes = _maxMessageBytes;
    m_maxMessageBytesHasBeenSet = true;
}

bool BatchModifyTopicInfo::MaxMessageBytesHasBeenSet() const
{
    return m_maxMessageBytesHasBeenSet;
}

string BatchModifyTopicInfo::GetLogMsgTimestampType() const
{
    return m_logMsgTimestampType;
}

void BatchModifyTopicInfo::SetLogMsgTimestampType(const string& _logMsgTimestampType)
{
    m_logMsgTimestampType = _logMsgTimestampType;
    m_logMsgTimestampTypeHasBeenSet = true;
}

bool BatchModifyTopicInfo::LogMsgTimestampTypeHasBeenSet() const
{
    return m_logMsgTimestampTypeHasBeenSet;
}


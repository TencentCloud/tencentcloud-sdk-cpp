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

#include <tencentcloud/ckafka/v20190819/model/ModifyTopicAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

ModifyTopicAttributesRequest::ModifyTopicAttributesRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_minInsyncReplicasHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_segmentMsHasBeenSet(false),
    m_maxMessageBytesHasBeenSet(false),
    m_cleanUpPolicyHasBeenSet(false)
{
}

string ModifyTopicAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_minInsyncReplicasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinInsyncReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minInsyncReplicas, allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_segmentMsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SegmentMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentMs, allocator);
    }

    if (m_maxMessageBytesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxMessageBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMessageBytes, allocator);
    }

    if (m_cleanUpPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CleanUpPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cleanUpPolicy.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTopicAttributesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyTopicAttributesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyTopicAttributesRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyTopicAttributesRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyTopicAttributesRequest::GetNote() const
{
    return m_note;
}

void ModifyTopicAttributesRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetEnableWhiteList() const
{
    return m_enableWhiteList;
}

void ModifyTopicAttributesRequest::SetEnableWhiteList(const int64_t& _enableWhiteList)
{
    m_enableWhiteList = _enableWhiteList;
    m_enableWhiteListHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::EnableWhiteListHasBeenSet() const
{
    return m_enableWhiteListHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetMinInsyncReplicas() const
{
    return m_minInsyncReplicas;
}

void ModifyTopicAttributesRequest::SetMinInsyncReplicas(const int64_t& _minInsyncReplicas)
{
    m_minInsyncReplicas = _minInsyncReplicas;
    m_minInsyncReplicasHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::MinInsyncReplicasHasBeenSet() const
{
    return m_minInsyncReplicasHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void ModifyTopicAttributesRequest::SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetRetentionMs() const
{
    return m_retentionMs;
}

void ModifyTopicAttributesRequest::SetRetentionMs(const int64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetSegmentMs() const
{
    return m_segmentMs;
}

void ModifyTopicAttributesRequest::SetSegmentMs(const int64_t& _segmentMs)
{
    m_segmentMs = _segmentMs;
    m_segmentMsHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::SegmentMsHasBeenSet() const
{
    return m_segmentMsHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetMaxMessageBytes() const
{
    return m_maxMessageBytes;
}

void ModifyTopicAttributesRequest::SetMaxMessageBytes(const int64_t& _maxMessageBytes)
{
    m_maxMessageBytes = _maxMessageBytes;
    m_maxMessageBytesHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::MaxMessageBytesHasBeenSet() const
{
    return m_maxMessageBytesHasBeenSet;
}

string ModifyTopicAttributesRequest::GetCleanUpPolicy() const
{
    return m_cleanUpPolicy;
}

void ModifyTopicAttributesRequest::SetCleanUpPolicy(const string& _cleanUpPolicy)
{
    m_cleanUpPolicy = _cleanUpPolicy;
    m_cleanUpPolicyHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::CleanUpPolicyHasBeenSet() const
{
    return m_cleanUpPolicyHasBeenSet;
}



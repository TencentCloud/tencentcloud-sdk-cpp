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

#include <tencentcloud/ckafka/v20190819/model/CreateTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

CreateTopicRequest::CreateTopicRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_cleanUpPolicyHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_minInsyncReplicasHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_segmentMsHasBeenSet(false)
{
}

string CreateTopicRequest::ToJsonString() const
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

    if (m_partitionNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cleanUpPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CleanUpPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cleanUpPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_note.c_str(), allocator).Move(), allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTopicRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateTopicRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateTopicRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t CreateTopicRequest::GetPartitionNum() const
{
    return m_partitionNum;
}

void CreateTopicRequest::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool CreateTopicRequest::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

int64_t CreateTopicRequest::GetReplicaNum() const
{
    return m_replicaNum;
}

void CreateTopicRequest::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool CreateTopicRequest::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

int64_t CreateTopicRequest::GetEnableWhiteList() const
{
    return m_enableWhiteList;
}

void CreateTopicRequest::SetEnableWhiteList(const int64_t& _enableWhiteList)
{
    m_enableWhiteList = _enableWhiteList;
    m_enableWhiteListHasBeenSet = true;
}

bool CreateTopicRequest::EnableWhiteListHasBeenSet() const
{
    return m_enableWhiteListHasBeenSet;
}

vector<string> CreateTopicRequest::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void CreateTopicRequest::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool CreateTopicRequest::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

string CreateTopicRequest::GetCleanUpPolicy() const
{
    return m_cleanUpPolicy;
}

void CreateTopicRequest::SetCleanUpPolicy(const string& _cleanUpPolicy)
{
    m_cleanUpPolicy = _cleanUpPolicy;
    m_cleanUpPolicyHasBeenSet = true;
}

bool CreateTopicRequest::CleanUpPolicyHasBeenSet() const
{
    return m_cleanUpPolicyHasBeenSet;
}

string CreateTopicRequest::GetNote() const
{
    return m_note;
}

void CreateTopicRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool CreateTopicRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

int64_t CreateTopicRequest::GetMinInsyncReplicas() const
{
    return m_minInsyncReplicas;
}

void CreateTopicRequest::SetMinInsyncReplicas(const int64_t& _minInsyncReplicas)
{
    m_minInsyncReplicas = _minInsyncReplicas;
    m_minInsyncReplicasHasBeenSet = true;
}

bool CreateTopicRequest::MinInsyncReplicasHasBeenSet() const
{
    return m_minInsyncReplicasHasBeenSet;
}

int64_t CreateTopicRequest::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void CreateTopicRequest::SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool CreateTopicRequest::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t CreateTopicRequest::GetRetentionMs() const
{
    return m_retentionMs;
}

void CreateTopicRequest::SetRetentionMs(const int64_t& _retentionMs)
{
    m_retentionMs = _retentionMs;
    m_retentionMsHasBeenSet = true;
}

bool CreateTopicRequest::RetentionMsHasBeenSet() const
{
    return m_retentionMsHasBeenSet;
}

int64_t CreateTopicRequest::GetSegmentMs() const
{
    return m_segmentMs;
}

void CreateTopicRequest::SetSegmentMs(const int64_t& _segmentMs)
{
    m_segmentMs = _segmentMs;
    m_segmentMsHasBeenSet = true;
}

bool CreateTopicRequest::SegmentMsHasBeenSet() const
{
    return m_segmentMsHasBeenSet;
}



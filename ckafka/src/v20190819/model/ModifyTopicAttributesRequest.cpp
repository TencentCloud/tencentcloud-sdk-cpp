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
using namespace std;

ModifyTopicAttributesRequest::ModifyTopicAttributesRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_enableWhiteListHasBeenSet(false),
    m_minInsyncReplicasHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_retentionMsHasBeenSet(false),
    m_maxMessageBytesHasBeenSet(false),
    m_segmentMsHasBeenSet(false),
    m_cleanUpPolicyHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_enableAclRuleHasBeenSet(false),
    m_aclRuleNameHasBeenSet(false),
    m_retentionBytesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_quotaProducerByteRateHasBeenSet(false),
    m_quotaConsumerByteRateHasBeenSet(false),
    m_replicaNumHasBeenSet(false)
{
}

string ModifyTopicAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_enableWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWhiteList, allocator);
    }

    if (m_minInsyncReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInsyncReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minInsyncReplicas, allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_retentionMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionMs, allocator);
    }

    if (m_maxMessageBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMessageBytes, allocator);
    }

    if (m_segmentMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentMs, allocator);
    }

    if (m_cleanUpPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanUpPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cleanUpPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableAclRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAclRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAclRule, allocator);
    }

    if (m_aclRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclRuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aclRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionBytes, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_quotaProducerByteRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaProducerByteRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaProducerByteRate, allocator);
    }

    if (m_quotaConsumerByteRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaConsumerByteRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaConsumerByteRate, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicaNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

vector<string> ModifyTopicAttributesRequest::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void ModifyTopicAttributesRequest::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetEnableAclRule() const
{
    return m_enableAclRule;
}

void ModifyTopicAttributesRequest::SetEnableAclRule(const int64_t& _enableAclRule)
{
    m_enableAclRule = _enableAclRule;
    m_enableAclRuleHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::EnableAclRuleHasBeenSet() const
{
    return m_enableAclRuleHasBeenSet;
}

string ModifyTopicAttributesRequest::GetAclRuleName() const
{
    return m_aclRuleName;
}

void ModifyTopicAttributesRequest::SetAclRuleName(const string& _aclRuleName)
{
    m_aclRuleName = _aclRuleName;
    m_aclRuleNameHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::AclRuleNameHasBeenSet() const
{
    return m_aclRuleNameHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetRetentionBytes() const
{
    return m_retentionBytes;
}

void ModifyTopicAttributesRequest::SetRetentionBytes(const int64_t& _retentionBytes)
{
    m_retentionBytes = _retentionBytes;
    m_retentionBytesHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::RetentionBytesHasBeenSet() const
{
    return m_retentionBytesHasBeenSet;
}

vector<Tag> ModifyTopicAttributesRequest::GetTags() const
{
    return m_tags;
}

void ModifyTopicAttributesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetQuotaProducerByteRate() const
{
    return m_quotaProducerByteRate;
}

void ModifyTopicAttributesRequest::SetQuotaProducerByteRate(const int64_t& _quotaProducerByteRate)
{
    m_quotaProducerByteRate = _quotaProducerByteRate;
    m_quotaProducerByteRateHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::QuotaProducerByteRateHasBeenSet() const
{
    return m_quotaProducerByteRateHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetQuotaConsumerByteRate() const
{
    return m_quotaConsumerByteRate;
}

void ModifyTopicAttributesRequest::SetQuotaConsumerByteRate(const int64_t& _quotaConsumerByteRate)
{
    m_quotaConsumerByteRate = _quotaConsumerByteRate;
    m_quotaConsumerByteRateHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::QuotaConsumerByteRateHasBeenSet() const
{
    return m_quotaConsumerByteRateHasBeenSet;
}

int64_t ModifyTopicAttributesRequest::GetReplicaNum() const
{
    return m_replicaNum;
}

void ModifyTopicAttributesRequest::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool ModifyTopicAttributesRequest::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}



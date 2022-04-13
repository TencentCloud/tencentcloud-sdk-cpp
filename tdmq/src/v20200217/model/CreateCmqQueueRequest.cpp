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

#include <tencentcloud/tdmq/v20200217/model/CreateCmqQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateCmqQueueRequest::CreateCmqQueueRequest() :
    m_queueNameHasBeenSet(false),
    m_maxMsgHeapNumHasBeenSet(false),
    m_pollingWaitSecondsHasBeenSet(false),
    m_visibilityTimeoutHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_rewindSecondsHasBeenSet(false),
    m_transactionHasBeenSet(false),
    m_firstQueryIntervalHasBeenSet(false),
    m_maxQueryCountHasBeenSet(false),
    m_deadLetterQueueNameHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_maxReceiveCountHasBeenSet(false),
    m_maxTimeToLiveHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_retentionSizeInMBHasBeenSet(false)
{
}

string CreateCmqQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMsgHeapNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgHeapNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgHeapNum, allocator);
    }

    if (m_pollingWaitSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingWaitSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pollingWaitSeconds, allocator);
    }

    if (m_visibilityTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisibilityTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_visibilityTimeout, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_rewindSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewindSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rewindSeconds, allocator);
    }

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transaction, allocator);
    }

    if (m_firstQueryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstQueryInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_firstQueryInterval, allocator);
    }

    if (m_maxQueryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueryCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxQueryCount, allocator);
    }

    if (m_deadLetterQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policy, allocator);
    }

    if (m_maxReceiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReceiveCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReceiveCount, allocator);
    }

    if (m_maxTimeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTimeToLive, allocator);
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trace, allocator);
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

    if (m_retentionSizeInMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionSizeInMB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionSizeInMB, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCmqQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateCmqQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateCmqQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void CreateCmqQueueRequest::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool CreateCmqQueueRequest::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void CreateCmqQueueRequest::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool CreateCmqQueueRequest::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void CreateCmqQueueRequest::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool CreateCmqQueueRequest::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void CreateCmqQueueRequest::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool CreateCmqQueueRequest::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void CreateCmqQueueRequest::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool CreateCmqQueueRequest::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void CreateCmqQueueRequest::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool CreateCmqQueueRequest::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetTransaction() const
{
    return m_transaction;
}

void CreateCmqQueueRequest::SetTransaction(const uint64_t& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool CreateCmqQueueRequest::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void CreateCmqQueueRequest::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool CreateCmqQueueRequest::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void CreateCmqQueueRequest::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool CreateCmqQueueRequest::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

string CreateCmqQueueRequest::GetDeadLetterQueueName() const
{
    return m_deadLetterQueueName;
}

void CreateCmqQueueRequest::SetDeadLetterQueueName(const string& _deadLetterQueueName)
{
    m_deadLetterQueueName = _deadLetterQueueName;
    m_deadLetterQueueNameHasBeenSet = true;
}

bool CreateCmqQueueRequest::DeadLetterQueueNameHasBeenSet() const
{
    return m_deadLetterQueueNameHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetPolicy() const
{
    return m_policy;
}

void CreateCmqQueueRequest::SetPolicy(const uint64_t& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateCmqQueueRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMaxReceiveCount() const
{
    return m_maxReceiveCount;
}

void CreateCmqQueueRequest::SetMaxReceiveCount(const uint64_t& _maxReceiveCount)
{
    m_maxReceiveCount = _maxReceiveCount;
    m_maxReceiveCountHasBeenSet = true;
}

bool CreateCmqQueueRequest::MaxReceiveCountHasBeenSet() const
{
    return m_maxReceiveCountHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetMaxTimeToLive() const
{
    return m_maxTimeToLive;
}

void CreateCmqQueueRequest::SetMaxTimeToLive(const uint64_t& _maxTimeToLive)
{
    m_maxTimeToLive = _maxTimeToLive;
    m_maxTimeToLiveHasBeenSet = true;
}

bool CreateCmqQueueRequest::MaxTimeToLiveHasBeenSet() const
{
    return m_maxTimeToLiveHasBeenSet;
}

bool CreateCmqQueueRequest::GetTrace() const
{
    return m_trace;
}

void CreateCmqQueueRequest::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool CreateCmqQueueRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

vector<Tag> CreateCmqQueueRequest::GetTags() const
{
    return m_tags;
}

void CreateCmqQueueRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCmqQueueRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateCmqQueueRequest::GetRetentionSizeInMB() const
{
    return m_retentionSizeInMB;
}

void CreateCmqQueueRequest::SetRetentionSizeInMB(const uint64_t& _retentionSizeInMB)
{
    m_retentionSizeInMB = _retentionSizeInMB;
    m_retentionSizeInMBHasBeenSet = true;
}

bool CreateCmqQueueRequest::RetentionSizeInMBHasBeenSet() const
{
    return m_retentionSizeInMBHasBeenSet;
}



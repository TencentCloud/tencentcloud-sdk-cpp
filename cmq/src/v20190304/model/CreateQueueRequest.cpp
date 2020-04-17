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

#include <tencentcloud/cmq/v20190304/model/CreateQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

CreateQueueRequest::CreateQueueRequest() :
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
    m_traceHasBeenSet(false)
{
}

string CreateQueueRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMsgHeapNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxMsgHeapNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgHeapNum, allocator);
    }

    if (m_pollingWaitSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PollingWaitSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pollingWaitSeconds, allocator);
    }

    if (m_visibilityTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VisibilityTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_visibilityTimeout, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_rewindSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RewindSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rewindSeconds, allocator);
    }

    if (m_transactionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transaction, allocator);
    }

    if (m_firstQueryIntervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstQueryInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_firstQueryInterval, allocator);
    }

    if (m_maxQueryCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxQueryCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxQueryCount, allocator);
    }

    if (m_deadLetterQueueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeadLetterQueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deadLetterQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policy, allocator);
    }

    if (m_maxReceiveCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxReceiveCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReceiveCount, allocator);
    }

    if (m_maxTimeToLiveHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxTimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTimeToLive, allocator);
    }

    if (m_traceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trace, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateQueueRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateQueueRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateQueueRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t CreateQueueRequest::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void CreateQueueRequest::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool CreateQueueRequest::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t CreateQueueRequest::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void CreateQueueRequest::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool CreateQueueRequest::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t CreateQueueRequest::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void CreateQueueRequest::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool CreateQueueRequest::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

uint64_t CreateQueueRequest::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void CreateQueueRequest::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool CreateQueueRequest::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t CreateQueueRequest::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void CreateQueueRequest::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool CreateQueueRequest::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t CreateQueueRequest::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void CreateQueueRequest::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool CreateQueueRequest::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t CreateQueueRequest::GetTransaction() const
{
    return m_transaction;
}

void CreateQueueRequest::SetTransaction(const uint64_t& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool CreateQueueRequest::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

uint64_t CreateQueueRequest::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void CreateQueueRequest::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool CreateQueueRequest::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

uint64_t CreateQueueRequest::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void CreateQueueRequest::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool CreateQueueRequest::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

string CreateQueueRequest::GetDeadLetterQueueName() const
{
    return m_deadLetterQueueName;
}

void CreateQueueRequest::SetDeadLetterQueueName(const string& _deadLetterQueueName)
{
    m_deadLetterQueueName = _deadLetterQueueName;
    m_deadLetterQueueNameHasBeenSet = true;
}

bool CreateQueueRequest::DeadLetterQueueNameHasBeenSet() const
{
    return m_deadLetterQueueNameHasBeenSet;
}

uint64_t CreateQueueRequest::GetPolicy() const
{
    return m_policy;
}

void CreateQueueRequest::SetPolicy(const uint64_t& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CreateQueueRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

uint64_t CreateQueueRequest::GetMaxReceiveCount() const
{
    return m_maxReceiveCount;
}

void CreateQueueRequest::SetMaxReceiveCount(const uint64_t& _maxReceiveCount)
{
    m_maxReceiveCount = _maxReceiveCount;
    m_maxReceiveCountHasBeenSet = true;
}

bool CreateQueueRequest::MaxReceiveCountHasBeenSet() const
{
    return m_maxReceiveCountHasBeenSet;
}

uint64_t CreateQueueRequest::GetMaxTimeToLive() const
{
    return m_maxTimeToLive;
}

void CreateQueueRequest::SetMaxTimeToLive(const uint64_t& _maxTimeToLive)
{
    m_maxTimeToLive = _maxTimeToLive;
    m_maxTimeToLiveHasBeenSet = true;
}

bool CreateQueueRequest::MaxTimeToLiveHasBeenSet() const
{
    return m_maxTimeToLiveHasBeenSet;
}

bool CreateQueueRequest::GetTrace() const
{
    return m_trace;
}

void CreateQueueRequest::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool CreateQueueRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}



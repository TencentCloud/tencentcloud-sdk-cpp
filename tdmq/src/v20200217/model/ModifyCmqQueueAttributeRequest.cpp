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

#include <tencentcloud/tdmq/v20200217/model/ModifyCmqQueueAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyCmqQueueAttributeRequest::ModifyCmqQueueAttributeRequest() :
    m_queueNameHasBeenSet(false),
    m_maxMsgHeapNumHasBeenSet(false),
    m_pollingWaitSecondsHasBeenSet(false),
    m_visibilityTimeoutHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_rewindSecondsHasBeenSet(false),
    m_firstQueryIntervalHasBeenSet(false),
    m_maxQueryCountHasBeenSet(false),
    m_deadLetterQueueNameHasBeenSet(false),
    m_maxTimeToLiveHasBeenSet(false),
    m_maxReceiveCountHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_transactionHasBeenSet(false),
    m_retentionSizeInMBHasBeenSet(false)
{
}

string ModifyCmqQueueAttributeRequest::ToJsonString() const
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

    if (m_maxTimeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTimeToLive, allocator);
    }

    if (m_maxReceiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReceiveCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReceiveCount, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policy, allocator);
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trace, allocator);
    }

    if (m_transactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transaction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transaction, allocator);
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


string ModifyCmqQueueAttributeRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyCmqQueueAttributeRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void ModifyCmqQueueAttributeRequest::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void ModifyCmqQueueAttributeRequest::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void ModifyCmqQueueAttributeRequest::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void ModifyCmqQueueAttributeRequest::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void ModifyCmqQueueAttributeRequest::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void ModifyCmqQueueAttributeRequest::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void ModifyCmqQueueAttributeRequest::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void ModifyCmqQueueAttributeRequest::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

string ModifyCmqQueueAttributeRequest::GetDeadLetterQueueName() const
{
    return m_deadLetterQueueName;
}

void ModifyCmqQueueAttributeRequest::SetDeadLetterQueueName(const string& _deadLetterQueueName)
{
    m_deadLetterQueueName = _deadLetterQueueName;
    m_deadLetterQueueNameHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::DeadLetterQueueNameHasBeenSet() const
{
    return m_deadLetterQueueNameHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMaxTimeToLive() const
{
    return m_maxTimeToLive;
}

void ModifyCmqQueueAttributeRequest::SetMaxTimeToLive(const uint64_t& _maxTimeToLive)
{
    m_maxTimeToLive = _maxTimeToLive;
    m_maxTimeToLiveHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MaxTimeToLiveHasBeenSet() const
{
    return m_maxTimeToLiveHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetMaxReceiveCount() const
{
    return m_maxReceiveCount;
}

void ModifyCmqQueueAttributeRequest::SetMaxReceiveCount(const uint64_t& _maxReceiveCount)
{
    m_maxReceiveCount = _maxReceiveCount;
    m_maxReceiveCountHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::MaxReceiveCountHasBeenSet() const
{
    return m_maxReceiveCountHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetPolicy() const
{
    return m_policy;
}

void ModifyCmqQueueAttributeRequest::SetPolicy(const uint64_t& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

bool ModifyCmqQueueAttributeRequest::GetTrace() const
{
    return m_trace;
}

void ModifyCmqQueueAttributeRequest::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetTransaction() const
{
    return m_transaction;
}

void ModifyCmqQueueAttributeRequest::SetTransaction(const uint64_t& _transaction)
{
    m_transaction = _transaction;
    m_transactionHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::TransactionHasBeenSet() const
{
    return m_transactionHasBeenSet;
}

uint64_t ModifyCmqQueueAttributeRequest::GetRetentionSizeInMB() const
{
    return m_retentionSizeInMB;
}

void ModifyCmqQueueAttributeRequest::SetRetentionSizeInMB(const uint64_t& _retentionSizeInMB)
{
    m_retentionSizeInMB = _retentionSizeInMB;
    m_retentionSizeInMBHasBeenSet = true;
}

bool ModifyCmqQueueAttributeRequest::RetentionSizeInMBHasBeenSet() const
{
    return m_retentionSizeInMBHasBeenSet;
}



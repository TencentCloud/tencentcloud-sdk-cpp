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

#include <tencentcloud/cmq/v20190304/model/ModifyQueueAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

ModifyQueueAttributeRequest::ModifyQueueAttributeRequest() :
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
    m_traceHasBeenSet(false)
{
}

string ModifyQueueAttributeRequest::ToJsonString() const
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

    if (m_maxTimeToLiveHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxTimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTimeToLive, allocator);
    }

    if (m_maxReceiveCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxReceiveCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReceiveCount, allocator);
    }

    if (m_policyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policy, allocator);
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


string ModifyQueueAttributeRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyQueueAttributeRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMaxMsgHeapNum() const
{
    return m_maxMsgHeapNum;
}

void ModifyQueueAttributeRequest::SetMaxMsgHeapNum(const uint64_t& _maxMsgHeapNum)
{
    m_maxMsgHeapNum = _maxMsgHeapNum;
    m_maxMsgHeapNumHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MaxMsgHeapNumHasBeenSet() const
{
    return m_maxMsgHeapNumHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetPollingWaitSeconds() const
{
    return m_pollingWaitSeconds;
}

void ModifyQueueAttributeRequest::SetPollingWaitSeconds(const uint64_t& _pollingWaitSeconds)
{
    m_pollingWaitSeconds = _pollingWaitSeconds;
    m_pollingWaitSecondsHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::PollingWaitSecondsHasBeenSet() const
{
    return m_pollingWaitSecondsHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetVisibilityTimeout() const
{
    return m_visibilityTimeout;
}

void ModifyQueueAttributeRequest::SetVisibilityTimeout(const uint64_t& _visibilityTimeout)
{
    m_visibilityTimeout = _visibilityTimeout;
    m_visibilityTimeoutHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::VisibilityTimeoutHasBeenSet() const
{
    return m_visibilityTimeoutHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void ModifyQueueAttributeRequest::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void ModifyQueueAttributeRequest::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetRewindSeconds() const
{
    return m_rewindSeconds;
}

void ModifyQueueAttributeRequest::SetRewindSeconds(const uint64_t& _rewindSeconds)
{
    m_rewindSeconds = _rewindSeconds;
    m_rewindSecondsHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::RewindSecondsHasBeenSet() const
{
    return m_rewindSecondsHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetFirstQueryInterval() const
{
    return m_firstQueryInterval;
}

void ModifyQueueAttributeRequest::SetFirstQueryInterval(const uint64_t& _firstQueryInterval)
{
    m_firstQueryInterval = _firstQueryInterval;
    m_firstQueryIntervalHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::FirstQueryIntervalHasBeenSet() const
{
    return m_firstQueryIntervalHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMaxQueryCount() const
{
    return m_maxQueryCount;
}

void ModifyQueueAttributeRequest::SetMaxQueryCount(const uint64_t& _maxQueryCount)
{
    m_maxQueryCount = _maxQueryCount;
    m_maxQueryCountHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MaxQueryCountHasBeenSet() const
{
    return m_maxQueryCountHasBeenSet;
}

string ModifyQueueAttributeRequest::GetDeadLetterQueueName() const
{
    return m_deadLetterQueueName;
}

void ModifyQueueAttributeRequest::SetDeadLetterQueueName(const string& _deadLetterQueueName)
{
    m_deadLetterQueueName = _deadLetterQueueName;
    m_deadLetterQueueNameHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::DeadLetterQueueNameHasBeenSet() const
{
    return m_deadLetterQueueNameHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMaxTimeToLive() const
{
    return m_maxTimeToLive;
}

void ModifyQueueAttributeRequest::SetMaxTimeToLive(const uint64_t& _maxTimeToLive)
{
    m_maxTimeToLive = _maxTimeToLive;
    m_maxTimeToLiveHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MaxTimeToLiveHasBeenSet() const
{
    return m_maxTimeToLiveHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetMaxReceiveCount() const
{
    return m_maxReceiveCount;
}

void ModifyQueueAttributeRequest::SetMaxReceiveCount(const uint64_t& _maxReceiveCount)
{
    m_maxReceiveCount = _maxReceiveCount;
    m_maxReceiveCountHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::MaxReceiveCountHasBeenSet() const
{
    return m_maxReceiveCountHasBeenSet;
}

uint64_t ModifyQueueAttributeRequest::GetPolicy() const
{
    return m_policy;
}

void ModifyQueueAttributeRequest::SetPolicy(const uint64_t& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

bool ModifyQueueAttributeRequest::GetTrace() const
{
    return m_trace;
}

void ModifyQueueAttributeRequest::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool ModifyQueueAttributeRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}



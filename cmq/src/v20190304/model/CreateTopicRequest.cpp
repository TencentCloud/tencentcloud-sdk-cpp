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

#include <tencentcloud/cmq/v20190304/model/CreateTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

CreateTopicRequest::CreateTopicRequest() :
    m_topicNameHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_traceHasBeenSet(false)
{
}

string CreateTopicRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_filterType, allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgRetentionSeconds, allocator);
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

uint64_t CreateTopicRequest::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void CreateTopicRequest::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool CreateTopicRequest::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t CreateTopicRequest::GetFilterType() const
{
    return m_filterType;
}

void CreateTopicRequest::SetFilterType(const uint64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool CreateTopicRequest::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

uint64_t CreateTopicRequest::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void CreateTopicRequest::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool CreateTopicRequest::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

bool CreateTopicRequest::GetTrace() const
{
    return m_trace;
}

void CreateTopicRequest::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool CreateTopicRequest::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}



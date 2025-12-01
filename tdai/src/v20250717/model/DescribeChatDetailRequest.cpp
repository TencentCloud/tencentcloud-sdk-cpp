/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdai/v20250717/model/DescribeChatDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

DescribeChatDetailRequest::DescribeChatDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_streamingIdHasBeenSet(false),
    m_beginStreamingTokenIdHasBeenSet(false),
    m_tokenLimitHasBeenSet(false)
{
}

string DescribeChatDetailRequest::ToJsonString() const
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

    if (m_chatIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chatId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamingId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamingId.c_str(), allocator).Move(), allocator);
    }

    if (m_beginStreamingTokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginStreamingTokenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginStreamingTokenId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tokenLimit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeChatDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeChatDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeChatDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeChatDetailRequest::GetChatId() const
{
    return m_chatId;
}

void DescribeChatDetailRequest::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool DescribeChatDetailRequest::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

string DescribeChatDetailRequest::GetStreamingId() const
{
    return m_streamingId;
}

void DescribeChatDetailRequest::SetStreamingId(const string& _streamingId)
{
    m_streamingId = _streamingId;
    m_streamingIdHasBeenSet = true;
}

bool DescribeChatDetailRequest::StreamingIdHasBeenSet() const
{
    return m_streamingIdHasBeenSet;
}

string DescribeChatDetailRequest::GetBeginStreamingTokenId() const
{
    return m_beginStreamingTokenId;
}

void DescribeChatDetailRequest::SetBeginStreamingTokenId(const string& _beginStreamingTokenId)
{
    m_beginStreamingTokenId = _beginStreamingTokenId;
    m_beginStreamingTokenIdHasBeenSet = true;
}

bool DescribeChatDetailRequest::BeginStreamingTokenIdHasBeenSet() const
{
    return m_beginStreamingTokenIdHasBeenSet;
}

int64_t DescribeChatDetailRequest::GetTokenLimit() const
{
    return m_tokenLimit;
}

void DescribeChatDetailRequest::SetTokenLimit(const int64_t& _tokenLimit)
{
    m_tokenLimit = _tokenLimit;
    m_tokenLimitHasBeenSet = true;
}

bool DescribeChatDetailRequest::TokenLimitHasBeenSet() const
{
    return m_tokenLimitHasBeenSet;
}



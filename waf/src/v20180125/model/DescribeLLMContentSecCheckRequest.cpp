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

#include <tencentcloud/waf/v20180125/model/DescribeLLMContentSecCheckRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeLLMContentSecCheckRequest::DescribeLLMContentSecCheckRequest() :
    m_serviceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_chatIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_tokenUsageHasBeenSet(false)
{
}

string DescribeLLMContentSecCheckRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tokenUsage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLLMContentSecCheckRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeLLMContentSecCheckRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeLLMContentSecCheckRequest::GetContent() const
{
    return m_content;
}

void DescribeLLMContentSecCheckRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t DescribeLLMContentSecCheckRequest::GetType() const
{
    return m_type;
}

void DescribeLLMContentSecCheckRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeLLMContentSecCheckRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeLLMContentSecCheckRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeLLMContentSecCheckRequest::GetChatId() const
{
    return m_chatId;
}

void DescribeLLMContentSecCheckRequest::SetChatId(const string& _chatId)
{
    m_chatId = _chatId;
    m_chatIdHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::ChatIdHasBeenSet() const
{
    return m_chatIdHasBeenSet;
}

string DescribeLLMContentSecCheckRequest::GetUserId() const
{
    return m_userId;
}

void DescribeLLMContentSecCheckRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t DescribeLLMContentSecCheckRequest::GetTokenUsage() const
{
    return m_tokenUsage;
}

void DescribeLLMContentSecCheckRequest::SetTokenUsage(const uint64_t& _tokenUsage)
{
    m_tokenUsage = _tokenUsage;
    m_tokenUsageHasBeenSet = true;
}

bool DescribeLLMContentSecCheckRequest::TokenUsageHasBeenSet() const
{
    return m_tokenUsageHasBeenSet;
}



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

#include <tencentcloud/ccc/v20200210/model/DescribeChatMessagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeChatMessagesRequest::DescribeChatMessagesRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cdrIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string DescribeChatMessagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_cdrIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdrId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdrId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeChatMessagesRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeChatMessagesRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeChatMessagesRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeChatMessagesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeChatMessagesRequest::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeChatMessagesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeChatMessagesRequest::GetCdrId() const
{
    return m_cdrId;
}

void DescribeChatMessagesRequest::SetCdrId(const string& _cdrId)
{
    m_cdrId = _cdrId;
    m_cdrIdHasBeenSet = true;
}

bool DescribeChatMessagesRequest::CdrIdHasBeenSet() const
{
    return m_cdrIdHasBeenSet;
}

int64_t DescribeChatMessagesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeChatMessagesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeChatMessagesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeChatMessagesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeChatMessagesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeChatMessagesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeChatMessagesRequest::GetOrder() const
{
    return m_order;
}

void DescribeChatMessagesRequest::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeChatMessagesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeChatMessagesRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeChatMessagesRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeChatMessagesRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}



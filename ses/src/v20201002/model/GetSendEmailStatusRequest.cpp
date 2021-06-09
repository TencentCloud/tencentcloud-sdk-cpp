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

#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

GetSendEmailStatusRequest::GetSendEmailStatusRequest() :
    m_requestDateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_toEmailAddressHasBeenSet(false)
{
}

string GetSendEmailStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_requestDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestDate.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_toEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toEmailAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetSendEmailStatusRequest::GetRequestDate() const
{
    return m_requestDate;
}

void GetSendEmailStatusRequest::SetRequestDate(const string& _requestDate)
{
    m_requestDate = _requestDate;
    m_requestDateHasBeenSet = true;
}

bool GetSendEmailStatusRequest::RequestDateHasBeenSet() const
{
    return m_requestDateHasBeenSet;
}

uint64_t GetSendEmailStatusRequest::GetOffset() const
{
    return m_offset;
}

void GetSendEmailStatusRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetSendEmailStatusRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetSendEmailStatusRequest::GetLimit() const
{
    return m_limit;
}

void GetSendEmailStatusRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetSendEmailStatusRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetSendEmailStatusRequest::GetMessageId() const
{
    return m_messageId;
}

void GetSendEmailStatusRequest::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool GetSendEmailStatusRequest::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string GetSendEmailStatusRequest::GetToEmailAddress() const
{
    return m_toEmailAddress;
}

void GetSendEmailStatusRequest::SetToEmailAddress(const string& _toEmailAddress)
{
    m_toEmailAddress = _toEmailAddress;
    m_toEmailAddressHasBeenSet = true;
}

bool GetSendEmailStatusRequest::ToEmailAddressHasBeenSet() const
{
    return m_toEmailAddressHasBeenSet;
}



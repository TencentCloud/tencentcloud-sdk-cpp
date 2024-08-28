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

#include <tencentcloud/ses/v20201002/model/ListReceiverDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

ListReceiverDetailsRequest::ListReceiverDetailsRequest() :
    m_receiverIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_createTimeBeginHasBeenSet(false),
    m_createTimeEndHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ListReceiverDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_receiverId, allocator);
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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeBegin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListReceiverDetailsRequest::GetReceiverId() const
{
    return m_receiverId;
}

void ListReceiverDetailsRequest::SetReceiverId(const uint64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool ListReceiverDetailsRequest::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

uint64_t ListReceiverDetailsRequest::GetOffset() const
{
    return m_offset;
}

void ListReceiverDetailsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListReceiverDetailsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListReceiverDetailsRequest::GetLimit() const
{
    return m_limit;
}

void ListReceiverDetailsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListReceiverDetailsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListReceiverDetailsRequest::GetEmail() const
{
    return m_email;
}

void ListReceiverDetailsRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ListReceiverDetailsRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ListReceiverDetailsRequest::GetCreateTimeBegin() const
{
    return m_createTimeBegin;
}

void ListReceiverDetailsRequest::SetCreateTimeBegin(const string& _createTimeBegin)
{
    m_createTimeBegin = _createTimeBegin;
    m_createTimeBeginHasBeenSet = true;
}

bool ListReceiverDetailsRequest::CreateTimeBeginHasBeenSet() const
{
    return m_createTimeBeginHasBeenSet;
}

string ListReceiverDetailsRequest::GetCreateTimeEnd() const
{
    return m_createTimeEnd;
}

void ListReceiverDetailsRequest::SetCreateTimeEnd(const string& _createTimeEnd)
{
    m_createTimeEnd = _createTimeEnd;
    m_createTimeEndHasBeenSet = true;
}

bool ListReceiverDetailsRequest::CreateTimeEndHasBeenSet() const
{
    return m_createTimeEndHasBeenSet;
}

uint64_t ListReceiverDetailsRequest::GetStatus() const
{
    return m_status;
}

void ListReceiverDetailsRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListReceiverDetailsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}



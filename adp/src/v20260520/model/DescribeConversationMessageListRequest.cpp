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

#include <tencentcloud/adp/v20260520/model/DescribeConversationMessageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeConversationMessageListRequest::DescribeConversationMessageListRequest() :
    m_conversationIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_recordQueryDirectionHasBeenSet(false),
    m_shareCodeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string DescribeConversationMessageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordQueryDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordQueryDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordQueryDirection, allocator);
    }

    if (m_shareCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shareCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConversationMessageListRequest::GetConversationId() const
{
    return m_conversationId;
}

void DescribeConversationMessageListRequest::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

int64_t DescribeConversationMessageListRequest::GetType() const
{
    return m_type;
}

void DescribeConversationMessageListRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeConversationMessageListRequest::GetAppKey() const
{
    return m_appKey;
}

void DescribeConversationMessageListRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

uint64_t DescribeConversationMessageListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConversationMessageListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeConversationMessageListRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void DescribeConversationMessageListRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string DescribeConversationMessageListRequest::GetLoginUin() const
{
    return m_loginUin;
}

void DescribeConversationMessageListRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string DescribeConversationMessageListRequest::GetRecordId() const
{
    return m_recordId;
}

void DescribeConversationMessageListRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

int64_t DescribeConversationMessageListRequest::GetRecordQueryDirection() const
{
    return m_recordQueryDirection;
}

void DescribeConversationMessageListRequest::SetRecordQueryDirection(const int64_t& _recordQueryDirection)
{
    m_recordQueryDirection = _recordQueryDirection;
    m_recordQueryDirectionHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::RecordQueryDirectionHasBeenSet() const
{
    return m_recordQueryDirectionHasBeenSet;
}

string DescribeConversationMessageListRequest::GetShareCode() const
{
    return m_shareCode;
}

void DescribeConversationMessageListRequest::SetShareCode(const string& _shareCode)
{
    m_shareCode = _shareCode;
    m_shareCodeHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::ShareCodeHasBeenSet() const
{
    return m_shareCodeHasBeenSet;
}

string DescribeConversationMessageListRequest::GetUserId() const
{
    return m_userId;
}

void DescribeConversationMessageListRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeConversationMessageListRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}



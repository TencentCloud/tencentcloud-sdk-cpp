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

#include <tencentcloud/adp/v20260520/model/ResetConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ResetConversationRequest::ResetConversationRequest() :
    m_conversationIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_shareCodeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string ResetConversationRequest::ToJsonString() const
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


string ResetConversationRequest::GetConversationId() const
{
    return m_conversationId;
}

void ResetConversationRequest::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool ResetConversationRequest::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

int64_t ResetConversationRequest::GetType() const
{
    return m_type;
}

void ResetConversationRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResetConversationRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ResetConversationRequest::GetAppKey() const
{
    return m_appKey;
}

void ResetConversationRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ResetConversationRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ResetConversationRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ResetConversationRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ResetConversationRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string ResetConversationRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ResetConversationRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ResetConversationRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ResetConversationRequest::GetShareCode() const
{
    return m_shareCode;
}

void ResetConversationRequest::SetShareCode(const string& _shareCode)
{
    m_shareCode = _shareCode;
    m_shareCodeHasBeenSet = true;
}

bool ResetConversationRequest::ShareCodeHasBeenSet() const
{
    return m_shareCodeHasBeenSet;
}

string ResetConversationRequest::GetUserId() const
{
    return m_userId;
}

void ResetConversationRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ResetConversationRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}



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

#include <tencentcloud/adp/v20260520/model/ModifyConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyConversationRequest::ModifyConversationRequest() :
    m_typeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_shareCodeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

string ModifyConversationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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

    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyConversationRequest::GetType() const
{
    return m_type;
}

void ModifyConversationRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyConversationRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyConversationRequest::GetAppId() const
{
    return m_appId;
}

void ModifyConversationRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyConversationRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyConversationRequest::GetAppKey() const
{
    return m_appKey;
}

void ModifyConversationRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ModifyConversationRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ModifyConversationRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ModifyConversationRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ModifyConversationRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string ModifyConversationRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ModifyConversationRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ModifyConversationRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ModifyConversationRequest::GetShareCode() const
{
    return m_shareCode;
}

void ModifyConversationRequest::SetShareCode(const string& _shareCode)
{
    m_shareCode = _shareCode;
    m_shareCodeHasBeenSet = true;
}

bool ModifyConversationRequest::ShareCodeHasBeenSet() const
{
    return m_shareCodeHasBeenSet;
}

string ModifyConversationRequest::GetUserId() const
{
    return m_userId;
}

void ModifyConversationRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyConversationRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ModifyConversationRequest::GetConversationId() const
{
    return m_conversationId;
}

void ModifyConversationRequest::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool ModifyConversationRequest::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

string ModifyConversationRequest::GetTitle() const
{
    return m_title;
}

void ModifyConversationRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ModifyConversationRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}



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

#include <tencentcloud/adp/v20260520/model/DescribeConversationListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeConversationListRequest::DescribeConversationListRequest() :
    m_typeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_shareCodeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string DescribeConversationListRequest::ToJsonString() const
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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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


int64_t DescribeConversationListRequest::GetType() const
{
    return m_type;
}

void DescribeConversationListRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeConversationListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeConversationListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeConversationListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeConversationListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeConversationListRequest::GetAppKey() const
{
    return m_appKey;
}

void DescribeConversationListRequest::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool DescribeConversationListRequest::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string DescribeConversationListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeConversationListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeConversationListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t DescribeConversationListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeConversationListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeConversationListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeConversationListRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void DescribeConversationListRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool DescribeConversationListRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string DescribeConversationListRequest::GetLoginUin() const
{
    return m_loginUin;
}

void DescribeConversationListRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool DescribeConversationListRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

uint64_t DescribeConversationListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeConversationListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeConversationListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeConversationListRequest::GetShareCode() const
{
    return m_shareCode;
}

void DescribeConversationListRequest::SetShareCode(const string& _shareCode)
{
    m_shareCode = _shareCode;
    m_shareCodeHasBeenSet = true;
}

bool DescribeConversationListRequest::ShareCodeHasBeenSet() const
{
    return m_shareCodeHasBeenSet;
}

string DescribeConversationListRequest::GetUserId() const
{
    return m_userId;
}

void DescribeConversationListRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeConversationListRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}



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

#include <tencentcloud/car/v20220110/model/CreateMCPTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

CreateMCPTokenRequest::CreateMCPTokenRequest() :
    m_expireSecondsHasBeenSet(false),
    m_tokenNameHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string CreateMCPTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_expireSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSeconds, allocator);
    }

    if (m_tokenNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokenName.c_str(), allocator).Move(), allocator);
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


int64_t CreateMCPTokenRequest::GetExpireSeconds() const
{
    return m_expireSeconds;
}

void CreateMCPTokenRequest::SetExpireSeconds(const int64_t& _expireSeconds)
{
    m_expireSeconds = _expireSeconds;
    m_expireSecondsHasBeenSet = true;
}

bool CreateMCPTokenRequest::ExpireSecondsHasBeenSet() const
{
    return m_expireSecondsHasBeenSet;
}

string CreateMCPTokenRequest::GetTokenName() const
{
    return m_tokenName;
}

void CreateMCPTokenRequest::SetTokenName(const string& _tokenName)
{
    m_tokenName = _tokenName;
    m_tokenNameHasBeenSet = true;
}

bool CreateMCPTokenRequest::TokenNameHasBeenSet() const
{
    return m_tokenNameHasBeenSet;
}

string CreateMCPTokenRequest::GetUserId() const
{
    return m_userId;
}

void CreateMCPTokenRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateMCPTokenRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}



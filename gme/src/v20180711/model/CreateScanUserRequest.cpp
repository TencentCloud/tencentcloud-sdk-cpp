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

#include <tencentcloud/gme/v20180711/model/CreateScanUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

CreateScanUserRequest::CreateScanUserRequest() :
    m_bizIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userIdStringHasBeenSet(false),
    m_expirationTimeHasBeenSet(false)
{
}

string CreateScanUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userId, allocator);
    }

    if (m_userIdStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIdString.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expirationTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateScanUserRequest::GetBizId() const
{
    return m_bizId;
}

void CreateScanUserRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CreateScanUserRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

uint64_t CreateScanUserRequest::GetUserId() const
{
    return m_userId;
}

void CreateScanUserRequest::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CreateScanUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CreateScanUserRequest::GetUserIdString() const
{
    return m_userIdString;
}

void CreateScanUserRequest::SetUserIdString(const string& _userIdString)
{
    m_userIdString = _userIdString;
    m_userIdStringHasBeenSet = true;
}

bool CreateScanUserRequest::UserIdStringHasBeenSet() const
{
    return m_userIdStringHasBeenSet;
}

uint64_t CreateScanUserRequest::GetExpirationTime() const
{
    return m_expirationTime;
}

void CreateScanUserRequest::SetExpirationTime(const uint64_t& _expirationTime)
{
    m_expirationTime = _expirationTime;
    m_expirationTimeHasBeenSet = true;
}

bool CreateScanUserRequest::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}



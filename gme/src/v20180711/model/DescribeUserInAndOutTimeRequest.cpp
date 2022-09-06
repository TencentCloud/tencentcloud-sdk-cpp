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

#include <tencentcloud/gme/v20180711/model/DescribeUserInAndOutTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeUserInAndOutTimeRequest::DescribeUserInAndOutTimeRequest() :
    m_bizIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userIdStrHasBeenSet(false),
    m_roomIdStrHasBeenSet(false)
{
}

string DescribeUserInAndOutTimeRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userId, allocator);
    }

    if (m_userIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIdStr.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomIdStr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserInAndOutTimeRequest::GetBizId() const
{
    return m_bizId;
}

void DescribeUserInAndOutTimeRequest::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool DescribeUserInAndOutTimeRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

int64_t DescribeUserInAndOutTimeRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeUserInAndOutTimeRequest::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeUserInAndOutTimeRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

int64_t DescribeUserInAndOutTimeRequest::GetUserId() const
{
    return m_userId;
}

void DescribeUserInAndOutTimeRequest::SetUserId(const int64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeUserInAndOutTimeRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserInAndOutTimeRequest::GetUserIdStr() const
{
    return m_userIdStr;
}

void DescribeUserInAndOutTimeRequest::SetUserIdStr(const string& _userIdStr)
{
    m_userIdStr = _userIdStr;
    m_userIdStrHasBeenSet = true;
}

bool DescribeUserInAndOutTimeRequest::UserIdStrHasBeenSet() const
{
    return m_userIdStrHasBeenSet;
}

string DescribeUserInAndOutTimeRequest::GetRoomIdStr() const
{
    return m_roomIdStr;
}

void DescribeUserInAndOutTimeRequest::SetRoomIdStr(const string& _roomIdStr)
{
    m_roomIdStr = _roomIdStr;
    m_roomIdStrHasBeenSet = true;
}

bool DescribeUserInAndOutTimeRequest::RoomIdStrHasBeenSet() const
{
    return m_roomIdStrHasBeenSet;
}



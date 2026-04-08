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

#include <tencentcloud/live/v20180801/model/StartLiveAvatarRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

StartLiveAvatarRoomRequest::StartLiveAvatarRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_toUrlHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_roomTypeHasBeenSet(false)
{
}

string StartLiveAvatarRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_toUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_roomTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartLiveAvatarRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void StartLiveAvatarRoomRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartLiveAvatarRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string StartLiveAvatarRoomRequest::GetComment() const
{
    return m_comment;
}

void StartLiveAvatarRoomRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool StartLiveAvatarRoomRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string StartLiveAvatarRoomRequest::GetToUrl() const
{
    return m_toUrl;
}

void StartLiveAvatarRoomRequest::SetToUrl(const string& _toUrl)
{
    m_toUrl = _toUrl;
    m_toUrlHasBeenSet = true;
}

bool StartLiveAvatarRoomRequest::ToUrlHasBeenSet() const
{
    return m_toUrlHasBeenSet;
}

string StartLiveAvatarRoomRequest::GetOperator() const
{
    return m_operator;
}

void StartLiveAvatarRoomRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool StartLiveAvatarRoomRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string StartLiveAvatarRoomRequest::GetRoomType() const
{
    return m_roomType;
}

void StartLiveAvatarRoomRequest::SetRoomType(const string& _roomType)
{
    m_roomType = _roomType;
    m_roomTypeHasBeenSet = true;
}

bool StartLiveAvatarRoomRequest::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}



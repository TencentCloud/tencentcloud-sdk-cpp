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

#include <tencentcloud/trtc/v20190722/model/SourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SourceInfo::SourceInfo() :
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome SourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("RoomIdType") && !value["RoomIdType"].IsNull())
    {
        if (!value["RoomIdType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.RoomIdType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomIdType = value["RoomIdType"].GetUint64();
        m_roomIdTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string SourceInfo::GetRoomId() const
{
    return m_roomId;
}

void SourceInfo::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool SourceInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t SourceInfo::GetRoomIdType() const
{
    return m_roomIdType;
}

void SourceInfo::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool SourceInfo::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

string SourceInfo::GetUserId() const
{
    return m_userId;
}

void SourceInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SourceInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


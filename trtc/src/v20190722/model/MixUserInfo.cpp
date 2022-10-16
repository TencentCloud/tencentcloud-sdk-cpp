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

#include <tencentcloud/trtc/v20190722/model/MixUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

MixUserInfo::MixUserInfo() :
    m_userIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false)
{
}

CoreInternalOutcome MixUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixUserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixUserInfo.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("RoomIdType") && !value["RoomIdType"].IsNull())
    {
        if (!value["RoomIdType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MixUserInfo.RoomIdType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomIdType = value["RoomIdType"].GetUint64();
        m_roomIdTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

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

}


string MixUserInfo::GetUserId() const
{
    return m_userId;
}

void MixUserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool MixUserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string MixUserInfo::GetRoomId() const
{
    return m_roomId;
}

void MixUserInfo::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool MixUserInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t MixUserInfo::GetRoomIdType() const
{
    return m_roomIdType;
}

void MixUserInfo::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool MixUserInfo::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}


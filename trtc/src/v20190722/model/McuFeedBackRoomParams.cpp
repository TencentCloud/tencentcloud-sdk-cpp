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

#include <tencentcloud/trtc/v20190722/model/McuFeedBackRoomParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuFeedBackRoomParams::McuFeedBackRoomParams() :
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false)
{
}

CoreInternalOutcome McuFeedBackRoomParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuFeedBackRoomParams.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("RoomIdType") && !value["RoomIdType"].IsNull())
    {
        if (!value["RoomIdType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuFeedBackRoomParams.RoomIdType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomIdType = value["RoomIdType"].GetUint64();
        m_roomIdTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuFeedBackRoomParams.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuFeedBackRoomParams.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuFeedBackRoomParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

}


string McuFeedBackRoomParams::GetRoomId() const
{
    return m_roomId;
}

void McuFeedBackRoomParams::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool McuFeedBackRoomParams::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t McuFeedBackRoomParams::GetRoomIdType() const
{
    return m_roomIdType;
}

void McuFeedBackRoomParams::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool McuFeedBackRoomParams::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

string McuFeedBackRoomParams::GetUserId() const
{
    return m_userId;
}

void McuFeedBackRoomParams::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool McuFeedBackRoomParams::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string McuFeedBackRoomParams::GetUserSig() const
{
    return m_userSig;
}

void McuFeedBackRoomParams::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool McuFeedBackRoomParams::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}


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

#include <tencentcloud/yinsuda/v20220527/model/TRTCJoinRoomInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

TRTCJoinRoomInput::TRTCJoinRoomInput() :
    m_signHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false)
{
}

CoreInternalOutcome TRTCJoinRoomInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sign") && !value["Sign"].IsNull())
    {
        if (!value["Sign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCJoinRoomInput.Sign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sign = string(value["Sign"].GetString());
        m_signHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCJoinRoomInput.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCJoinRoomInput.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCJoinRoomInput.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("RoomIdType") && !value["RoomIdType"].IsNull())
    {
        if (!value["RoomIdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCJoinRoomInput.RoomIdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomIdType = string(value["RoomIdType"].GetString());
        m_roomIdTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TRTCJoinRoomInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomIdType.c_str(), allocator).Move(), allocator);
    }

}


string TRTCJoinRoomInput::GetSign() const
{
    return m_sign;
}

void TRTCJoinRoomInput::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool TRTCJoinRoomInput::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}

string TRTCJoinRoomInput::GetRoomId() const
{
    return m_roomId;
}

void TRTCJoinRoomInput::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool TRTCJoinRoomInput::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string TRTCJoinRoomInput::GetSdkAppId() const
{
    return m_sdkAppId;
}

void TRTCJoinRoomInput::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool TRTCJoinRoomInput::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string TRTCJoinRoomInput::GetUserId() const
{
    return m_userId;
}

void TRTCJoinRoomInput::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TRTCJoinRoomInput::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TRTCJoinRoomInput::GetRoomIdType() const
{
    return m_roomIdType;
}

void TRTCJoinRoomInput::SetRoomIdType(const string& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool TRTCJoinRoomInput::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}


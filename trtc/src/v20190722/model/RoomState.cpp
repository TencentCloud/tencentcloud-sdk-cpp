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

#include <tencentcloud/trtc/v20190722/model/RoomState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RoomState::RoomState() :
    m_commIdHasBeenSet(false),
    m_roomStringHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_isFinishedHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome RoomState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CommId") && !value["CommId"].IsNull())
    {
        if (!value["CommId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.CommId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commId = string(value["CommId"].GetString());
        m_commIdHasBeenSet = true;
    }

    if (value.HasMember("RoomString") && !value["RoomString"].IsNull())
    {
        if (!value["RoomString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.RoomString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomString = string(value["RoomString"].GetString());
        m_roomStringHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.DestroyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = value["DestroyTime"].GetUint64();
        m_destroyTimeHasBeenSet = true;
    }

    if (value.HasMember("IsFinished") && !value["IsFinished"].IsNull())
    {
        if (!value["IsFinished"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.IsFinished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFinished = value["IsFinished"].GetBool();
        m_isFinishedHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomState.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomString.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyTime, allocator);
    }

    if (m_isFinishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFinished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFinished, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string RoomState::GetCommId() const
{
    return m_commId;
}

void RoomState::SetCommId(const string& _commId)
{
    m_commId = _commId;
    m_commIdHasBeenSet = true;
}

bool RoomState::CommIdHasBeenSet() const
{
    return m_commIdHasBeenSet;
}

string RoomState::GetRoomString() const
{
    return m_roomString;
}

void RoomState::SetRoomString(const string& _roomString)
{
    m_roomString = _roomString;
    m_roomStringHasBeenSet = true;
}

bool RoomState::RoomStringHasBeenSet() const
{
    return m_roomStringHasBeenSet;
}

uint64_t RoomState::GetCreateTime() const
{
    return m_createTime;
}

void RoomState::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoomState::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t RoomState::GetDestroyTime() const
{
    return m_destroyTime;
}

void RoomState::SetDestroyTime(const uint64_t& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool RoomState::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

bool RoomState::GetIsFinished() const
{
    return m_isFinished;
}

void RoomState::SetIsFinished(const bool& _isFinished)
{
    m_isFinished = _isFinished;
    m_isFinishedHasBeenSet = true;
}

bool RoomState::IsFinishedHasBeenSet() const
{
    return m_isFinishedHasBeenSet;
}

string RoomState::GetUserId() const
{
    return m_userId;
}

void RoomState::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RoomState::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


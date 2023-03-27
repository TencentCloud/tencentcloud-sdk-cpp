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

#include <tencentcloud/tiw/v20190919/model/RoomListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RoomListItem::RoomListItem() :
    m_roomIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_userNumberHasBeenSet(false)
{
}

CoreInternalOutcome RoomListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomListItem.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomListItem.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomListItem.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("UserNumber") && !value["UserNumber"].IsNull())
    {
        if (!value["UserNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomListItem.UserNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userNumber = value["UserNumber"].GetInt64();
        m_userNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_userNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userNumber, allocator);
    }

}


string RoomListItem::GetRoomId() const
{
    return m_roomId;
}

void RoomListItem::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RoomListItem::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

int64_t RoomListItem::GetStartTime() const
{
    return m_startTime;
}

void RoomListItem::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RoomListItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t RoomListItem::GetEndTime() const
{
    return m_endTime;
}

void RoomListItem::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RoomListItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t RoomListItem::GetUserNumber() const
{
    return m_userNumber;
}

void RoomListItem::SetUserNumber(const int64_t& _userNumber)
{
    m_userNumber = _userNumber;
    m_userNumberHasBeenSet = true;
}

bool RoomListItem::UserNumberHasBeenSet() const
{
    return m_userNumberHasBeenSet;
}


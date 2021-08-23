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

#include <tencentcloud/trtc/v20190722/model/ScaleInfomation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ScaleInfomation::ScaleInfomation() :
    m_timeHasBeenSet(false),
    m_userNumberHasBeenSet(false),
    m_userCountHasBeenSet(false),
    m_roomNumbersHasBeenSet(false)
{
}

CoreInternalOutcome ScaleInfomation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInfomation.Time` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetUint64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("UserNumber") && !value["UserNumber"].IsNull())
    {
        if (!value["UserNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInfomation.UserNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userNumber = value["UserNumber"].GetUint64();
        m_userNumberHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInfomation.UserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetUint64();
        m_userCountHasBeenSet = true;
    }

    if (value.HasMember("RoomNumbers") && !value["RoomNumbers"].IsNull())
    {
        if (!value["RoomNumbers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScaleInfomation.RoomNumbers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomNumbers = value["RoomNumbers"].GetUint64();
        m_roomNumbersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScaleInfomation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_userNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userNumber, allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

    if (m_roomNumbersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomNumbers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomNumbers, allocator);
    }

}


uint64_t ScaleInfomation::GetTime() const
{
    return m_time;
}

void ScaleInfomation::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ScaleInfomation::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t ScaleInfomation::GetUserNumber() const
{
    return m_userNumber;
}

void ScaleInfomation::SetUserNumber(const uint64_t& _userNumber)
{
    m_userNumber = _userNumber;
    m_userNumberHasBeenSet = true;
}

bool ScaleInfomation::UserNumberHasBeenSet() const
{
    return m_userNumberHasBeenSet;
}

uint64_t ScaleInfomation::GetUserCount() const
{
    return m_userCount;
}

void ScaleInfomation::SetUserCount(const uint64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool ScaleInfomation::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

uint64_t ScaleInfomation::GetRoomNumbers() const
{
    return m_roomNumbers;
}

void ScaleInfomation::SetRoomNumbers(const uint64_t& _roomNumbers)
{
    m_roomNumbers = _roomNumbers;
    m_roomNumbersHasBeenSet = true;
}

bool ScaleInfomation::RoomNumbersHasBeenSet() const
{
    return m_roomNumbersHasBeenSet;
}


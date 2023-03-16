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

#include <tencentcloud/yinsuda/v20220527/model/LiveVipUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

LiveVipUserInfo::LiveVipUserInfo() :
    m_roomIdHasBeenSet(false),
    m_liveVipEndTimeHasBeenSet(false),
    m_liveVipStatusHasBeenSet(false)
{
}

CoreInternalOutcome LiveVipUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveVipUserInfo.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("LiveVipEndTime") && !value["LiveVipEndTime"].IsNull())
    {
        if (!value["LiveVipEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveVipUserInfo.LiveVipEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveVipEndTime = string(value["LiveVipEndTime"].GetString());
        m_liveVipEndTimeHasBeenSet = true;
    }

    if (value.HasMember("LiveVipStatus") && !value["LiveVipStatus"].IsNull())
    {
        if (!value["LiveVipStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveVipUserInfo.LiveVipStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveVipStatus = string(value["LiveVipStatus"].GetString());
        m_liveVipStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveVipUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveVipEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveVipEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveVipEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_liveVipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveVipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveVipStatus.c_str(), allocator).Move(), allocator);
    }

}


string LiveVipUserInfo::GetRoomId() const
{
    return m_roomId;
}

void LiveVipUserInfo::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool LiveVipUserInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string LiveVipUserInfo::GetLiveVipEndTime() const
{
    return m_liveVipEndTime;
}

void LiveVipUserInfo::SetLiveVipEndTime(const string& _liveVipEndTime)
{
    m_liveVipEndTime = _liveVipEndTime;
    m_liveVipEndTimeHasBeenSet = true;
}

bool LiveVipUserInfo::LiveVipEndTimeHasBeenSet() const
{
    return m_liveVipEndTimeHasBeenSet;
}

string LiveVipUserInfo::GetLiveVipStatus() const
{
    return m_liveVipStatus;
}

void LiveVipUserInfo::SetLiveVipStatus(const string& _liveVipStatus)
{
    m_liveVipStatus = _liveVipStatus;
    m_liveVipStatusHasBeenSet = true;
}

bool LiveVipUserInfo::LiveVipStatusHasBeenSet() const
{
    return m_liveVipStatusHasBeenSet;
}


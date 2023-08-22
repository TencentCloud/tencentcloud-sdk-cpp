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

#include <tencentcloud/lcic/v20220817/model/EventDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

EventDataInfo::EventDataInfo() :
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_recordSizeHasBeenSet(false),
    m_recordUrlHasBeenSet(false)
{
}

CoreInternalOutcome EventDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.Device` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_device = value["Device"].GetUint64();
        m_deviceHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RecordSize") && !value["RecordSize"].IsNull())
    {
        if (!value["RecordSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.RecordSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordSize = value["RecordSize"].GetUint64();
        m_recordSizeHasBeenSet = true;
    }

    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfo.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_device, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_recordSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordSize, allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EventDataInfo::GetRoomId() const
{
    return m_roomId;
}

void EventDataInfo::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool EventDataInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string EventDataInfo::GetUserId() const
{
    return m_userId;
}

void EventDataInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool EventDataInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t EventDataInfo::GetDevice() const
{
    return m_device;
}

void EventDataInfo::SetDevice(const uint64_t& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool EventDataInfo::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

uint64_t EventDataInfo::GetDuration() const
{
    return m_duration;
}

void EventDataInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool EventDataInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

uint64_t EventDataInfo::GetRecordSize() const
{
    return m_recordSize;
}

void EventDataInfo::SetRecordSize(const uint64_t& _recordSize)
{
    m_recordSize = _recordSize;
    m_recordSizeHasBeenSet = true;
}

bool EventDataInfo::RecordSizeHasBeenSet() const
{
    return m_recordSizeHasBeenSet;
}

string EventDataInfo::GetRecordUrl() const
{
    return m_recordUrl;
}

void EventDataInfo::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool EventDataInfo::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}


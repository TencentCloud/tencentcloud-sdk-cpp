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

#include <tencentcloud/lcic/v20220817/model/RoomItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

RoomItem::RoomItem() :
    m_nameHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_realStartTimeHasBeenSet(false),
    m_realEndTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxRTCMemberHasBeenSet(false),
    m_replayUrlHasBeenSet(false),
    m_recordUrlHasBeenSet(false)
{
}

CoreInternalOutcome RoomItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RealStartTime") && !value["RealStartTime"].IsNull())
    {
        if (!value["RealStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RealStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realStartTime = value["RealStartTime"].GetUint64();
        m_realStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RealEndTime") && !value["RealEndTime"].IsNull())
    {
        if (!value["RealEndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RealEndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realEndTime = value["RealEndTime"].GetUint64();
        m_realEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.Resolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = value["Resolution"].GetUint64();
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("MaxRTCMember") && !value["MaxRTCMember"].IsNull())
    {
        if (!value["MaxRTCMember"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.MaxRTCMember` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRTCMember = value["MaxRTCMember"].GetUint64();
        m_maxRTCMemberHasBeenSet = true;
    }

    if (value.HasMember("ReplayUrl") && !value["ReplayUrl"].IsNull())
    {
        if (!value["ReplayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.ReplayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replayUrl = string(value["ReplayUrl"].GetString());
        m_replayUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_realStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realStartTime, allocator);
    }

    if (m_realEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realEndTime, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolution, allocator);
    }

    if (m_maxRTCMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRTCMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRTCMember, allocator);
    }

    if (m_replayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replayUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

}


string RoomItem::GetName() const
{
    return m_name;
}

void RoomItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoomItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t RoomItem::GetRoomId() const
{
    return m_roomId;
}

void RoomItem::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RoomItem::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t RoomItem::GetStatus() const
{
    return m_status;
}

void RoomItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RoomItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t RoomItem::GetStartTime() const
{
    return m_startTime;
}

void RoomItem::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RoomItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RoomItem::GetEndTime() const
{
    return m_endTime;
}

void RoomItem::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RoomItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t RoomItem::GetRealStartTime() const
{
    return m_realStartTime;
}

void RoomItem::SetRealStartTime(const uint64_t& _realStartTime)
{
    m_realStartTime = _realStartTime;
    m_realStartTimeHasBeenSet = true;
}

bool RoomItem::RealStartTimeHasBeenSet() const
{
    return m_realStartTimeHasBeenSet;
}

uint64_t RoomItem::GetRealEndTime() const
{
    return m_realEndTime;
}

void RoomItem::SetRealEndTime(const uint64_t& _realEndTime)
{
    m_realEndTime = _realEndTime;
    m_realEndTimeHasBeenSet = true;
}

bool RoomItem::RealEndTimeHasBeenSet() const
{
    return m_realEndTimeHasBeenSet;
}

uint64_t RoomItem::GetResolution() const
{
    return m_resolution;
}

void RoomItem::SetResolution(const uint64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool RoomItem::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t RoomItem::GetMaxRTCMember() const
{
    return m_maxRTCMember;
}

void RoomItem::SetMaxRTCMember(const uint64_t& _maxRTCMember)
{
    m_maxRTCMember = _maxRTCMember;
    m_maxRTCMemberHasBeenSet = true;
}

bool RoomItem::MaxRTCMemberHasBeenSet() const
{
    return m_maxRTCMemberHasBeenSet;
}

string RoomItem::GetReplayUrl() const
{
    return m_replayUrl;
}

void RoomItem::SetReplayUrl(const string& _replayUrl)
{
    m_replayUrl = _replayUrl;
    m_replayUrlHasBeenSet = true;
}

bool RoomItem::ReplayUrlHasBeenSet() const
{
    return m_replayUrlHasBeenSet;
}

string RoomItem::GetRecordUrl() const
{
    return m_recordUrl;
}

void RoomItem::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool RoomItem::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}


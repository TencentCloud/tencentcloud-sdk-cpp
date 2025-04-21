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
    m_recordUrlHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_enableDirectControlHasBeenSet(false),
    m_interactionModeHasBeenSet(false),
    m_videoOrientationHasBeenSet(false),
    m_isGradingRequiredPostClassHasBeenSet(false),
    m_roomTypeHasBeenSet(false),
    m_endDelayTimeHasBeenSet(false),
    m_liveTypeHasBeenSet(false),
    m_recordLiveUrlHasBeenSet(false),
    m_enableAutoStartHasBeenSet(false),
    m_recordBackgroundHasBeenSet(false),
    m_recordSceneHasBeenSet(false),
    m_recordLangHasBeenSet(false),
    m_whiteBoardSnapshotModeHasBeenSet(false),
    m_subtitlesTranscriptionHasBeenSet(false)
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

    if (value.HasMember("MaxMicNumber") && !value["MaxMicNumber"].IsNull())
    {
        if (!value["MaxMicNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.MaxMicNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMicNumber = value["MaxMicNumber"].GetUint64();
        m_maxMicNumberHasBeenSet = true;
    }

    if (value.HasMember("EnableDirectControl") && !value["EnableDirectControl"].IsNull())
    {
        if (!value["EnableDirectControl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.EnableDirectControl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableDirectControl = value["EnableDirectControl"].GetUint64();
        m_enableDirectControlHasBeenSet = true;
    }

    if (value.HasMember("InteractionMode") && !value["InteractionMode"].IsNull())
    {
        if (!value["InteractionMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.InteractionMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interactionMode = value["InteractionMode"].GetInt64();
        m_interactionModeHasBeenSet = true;
    }

    if (value.HasMember("VideoOrientation") && !value["VideoOrientation"].IsNull())
    {
        if (!value["VideoOrientation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.VideoOrientation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoOrientation = value["VideoOrientation"].GetInt64();
        m_videoOrientationHasBeenSet = true;
    }

    if (value.HasMember("IsGradingRequiredPostClass") && !value["IsGradingRequiredPostClass"].IsNull())
    {
        if (!value["IsGradingRequiredPostClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.IsGradingRequiredPostClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isGradingRequiredPostClass = value["IsGradingRequiredPostClass"].GetInt64();
        m_isGradingRequiredPostClassHasBeenSet = true;
    }

    if (value.HasMember("RoomType") && !value["RoomType"].IsNull())
    {
        if (!value["RoomType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RoomType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomType = value["RoomType"].GetInt64();
        m_roomTypeHasBeenSet = true;
    }

    if (value.HasMember("EndDelayTime") && !value["EndDelayTime"].IsNull())
    {
        if (!value["EndDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.EndDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endDelayTime = value["EndDelayTime"].GetInt64();
        m_endDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("LiveType") && !value["LiveType"].IsNull())
    {
        if (!value["LiveType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.LiveType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_liveType = value["LiveType"].GetUint64();
        m_liveTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLiveUrl") && !value["RecordLiveUrl"].IsNull())
    {
        if (!value["RecordLiveUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RecordLiveUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLiveUrl = string(value["RecordLiveUrl"].GetString());
        m_recordLiveUrlHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoStart") && !value["EnableAutoStart"].IsNull())
    {
        if (!value["EnableAutoStart"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.EnableAutoStart` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoStart = value["EnableAutoStart"].GetUint64();
        m_enableAutoStartHasBeenSet = true;
    }

    if (value.HasMember("RecordBackground") && !value["RecordBackground"].IsNull())
    {
        if (!value["RecordBackground"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RecordBackground` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordBackground = string(value["RecordBackground"].GetString());
        m_recordBackgroundHasBeenSet = true;
    }

    if (value.HasMember("RecordScene") && !value["RecordScene"].IsNull())
    {
        if (!value["RecordScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RecordScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordScene = string(value["RecordScene"].GetString());
        m_recordSceneHasBeenSet = true;
    }

    if (value.HasMember("RecordLang") && !value["RecordLang"].IsNull())
    {
        if (!value["RecordLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.RecordLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordLang = string(value["RecordLang"].GetString());
        m_recordLangHasBeenSet = true;
    }

    if (value.HasMember("WhiteBoardSnapshotMode") && !value["WhiteBoardSnapshotMode"].IsNull())
    {
        if (!value["WhiteBoardSnapshotMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.WhiteBoardSnapshotMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteBoardSnapshotMode = value["WhiteBoardSnapshotMode"].GetUint64();
        m_whiteBoardSnapshotModeHasBeenSet = true;
    }

    if (value.HasMember("SubtitlesTranscription") && !value["SubtitlesTranscription"].IsNull())
    {
        if (!value["SubtitlesTranscription"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomItem.SubtitlesTranscription` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitlesTranscription = value["SubtitlesTranscription"].GetUint64();
        m_subtitlesTranscriptionHasBeenSet = true;
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

    if (m_maxMicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMicNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMicNumber, allocator);
    }

    if (m_enableDirectControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDirectControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDirectControl, allocator);
    }

    if (m_interactionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InteractionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interactionMode, allocator);
    }

    if (m_videoOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoOrientation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoOrientation, allocator);
    }

    if (m_isGradingRequiredPostClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGradingRequiredPostClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGradingRequiredPostClass, allocator);
    }

    if (m_roomTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomType, allocator);
    }

    if (m_endDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endDelayTime, allocator);
    }

    if (m_liveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveType, allocator);
    }

    if (m_recordLiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLiveUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoStart, allocator);
    }

    if (m_recordBackgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBackground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordBackground.c_str(), allocator).Move(), allocator);
    }

    if (m_recordSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordScene.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordLang.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteBoardSnapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteBoardSnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteBoardSnapshotMode, allocator);
    }

    if (m_subtitlesTranscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlesTranscription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitlesTranscription, allocator);
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

uint64_t RoomItem::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

void RoomItem::SetMaxMicNumber(const uint64_t& _maxMicNumber)
{
    m_maxMicNumber = _maxMicNumber;
    m_maxMicNumberHasBeenSet = true;
}

bool RoomItem::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

uint64_t RoomItem::GetEnableDirectControl() const
{
    return m_enableDirectControl;
}

void RoomItem::SetEnableDirectControl(const uint64_t& _enableDirectControl)
{
    m_enableDirectControl = _enableDirectControl;
    m_enableDirectControlHasBeenSet = true;
}

bool RoomItem::EnableDirectControlHasBeenSet() const
{
    return m_enableDirectControlHasBeenSet;
}

int64_t RoomItem::GetInteractionMode() const
{
    return m_interactionMode;
}

void RoomItem::SetInteractionMode(const int64_t& _interactionMode)
{
    m_interactionMode = _interactionMode;
    m_interactionModeHasBeenSet = true;
}

bool RoomItem::InteractionModeHasBeenSet() const
{
    return m_interactionModeHasBeenSet;
}

int64_t RoomItem::GetVideoOrientation() const
{
    return m_videoOrientation;
}

void RoomItem::SetVideoOrientation(const int64_t& _videoOrientation)
{
    m_videoOrientation = _videoOrientation;
    m_videoOrientationHasBeenSet = true;
}

bool RoomItem::VideoOrientationHasBeenSet() const
{
    return m_videoOrientationHasBeenSet;
}

int64_t RoomItem::GetIsGradingRequiredPostClass() const
{
    return m_isGradingRequiredPostClass;
}

void RoomItem::SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass)
{
    m_isGradingRequiredPostClass = _isGradingRequiredPostClass;
    m_isGradingRequiredPostClassHasBeenSet = true;
}

bool RoomItem::IsGradingRequiredPostClassHasBeenSet() const
{
    return m_isGradingRequiredPostClassHasBeenSet;
}

int64_t RoomItem::GetRoomType() const
{
    return m_roomType;
}

void RoomItem::SetRoomType(const int64_t& _roomType)
{
    m_roomType = _roomType;
    m_roomTypeHasBeenSet = true;
}

bool RoomItem::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}

int64_t RoomItem::GetEndDelayTime() const
{
    return m_endDelayTime;
}

void RoomItem::SetEndDelayTime(const int64_t& _endDelayTime)
{
    m_endDelayTime = _endDelayTime;
    m_endDelayTimeHasBeenSet = true;
}

bool RoomItem::EndDelayTimeHasBeenSet() const
{
    return m_endDelayTimeHasBeenSet;
}

uint64_t RoomItem::GetLiveType() const
{
    return m_liveType;
}

void RoomItem::SetLiveType(const uint64_t& _liveType)
{
    m_liveType = _liveType;
    m_liveTypeHasBeenSet = true;
}

bool RoomItem::LiveTypeHasBeenSet() const
{
    return m_liveTypeHasBeenSet;
}

string RoomItem::GetRecordLiveUrl() const
{
    return m_recordLiveUrl;
}

void RoomItem::SetRecordLiveUrl(const string& _recordLiveUrl)
{
    m_recordLiveUrl = _recordLiveUrl;
    m_recordLiveUrlHasBeenSet = true;
}

bool RoomItem::RecordLiveUrlHasBeenSet() const
{
    return m_recordLiveUrlHasBeenSet;
}

uint64_t RoomItem::GetEnableAutoStart() const
{
    return m_enableAutoStart;
}

void RoomItem::SetEnableAutoStart(const uint64_t& _enableAutoStart)
{
    m_enableAutoStart = _enableAutoStart;
    m_enableAutoStartHasBeenSet = true;
}

bool RoomItem::EnableAutoStartHasBeenSet() const
{
    return m_enableAutoStartHasBeenSet;
}

string RoomItem::GetRecordBackground() const
{
    return m_recordBackground;
}

void RoomItem::SetRecordBackground(const string& _recordBackground)
{
    m_recordBackground = _recordBackground;
    m_recordBackgroundHasBeenSet = true;
}

bool RoomItem::RecordBackgroundHasBeenSet() const
{
    return m_recordBackgroundHasBeenSet;
}

string RoomItem::GetRecordScene() const
{
    return m_recordScene;
}

void RoomItem::SetRecordScene(const string& _recordScene)
{
    m_recordScene = _recordScene;
    m_recordSceneHasBeenSet = true;
}

bool RoomItem::RecordSceneHasBeenSet() const
{
    return m_recordSceneHasBeenSet;
}

string RoomItem::GetRecordLang() const
{
    return m_recordLang;
}

void RoomItem::SetRecordLang(const string& _recordLang)
{
    m_recordLang = _recordLang;
    m_recordLangHasBeenSet = true;
}

bool RoomItem::RecordLangHasBeenSet() const
{
    return m_recordLangHasBeenSet;
}

uint64_t RoomItem::GetWhiteBoardSnapshotMode() const
{
    return m_whiteBoardSnapshotMode;
}

void RoomItem::SetWhiteBoardSnapshotMode(const uint64_t& _whiteBoardSnapshotMode)
{
    m_whiteBoardSnapshotMode = _whiteBoardSnapshotMode;
    m_whiteBoardSnapshotModeHasBeenSet = true;
}

bool RoomItem::WhiteBoardSnapshotModeHasBeenSet() const
{
    return m_whiteBoardSnapshotModeHasBeenSet;
}

uint64_t RoomItem::GetSubtitlesTranscription() const
{
    return m_subtitlesTranscription;
}

void RoomItem::SetSubtitlesTranscription(const uint64_t& _subtitlesTranscription)
{
    m_subtitlesTranscription = _subtitlesTranscription;
    m_subtitlesTranscriptionHasBeenSet = true;
}

bool RoomItem::SubtitlesTranscriptionHasBeenSet() const
{
    return m_subtitlesTranscriptionHasBeenSet;
}


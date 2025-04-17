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

#include <tencentcloud/lcic/v20220817/model/ModifyRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ModifyRoomRequest::ModifyRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_autoMicHasBeenSet(false),
    m_audioQualityHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_assistantsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_enableDirectControlHasBeenSet(false),
    m_interactionModeHasBeenSet(false),
    m_videoOrientationHasBeenSet(false),
    m_isGradingRequiredPostClassHasBeenSet(false),
    m_roomTypeHasBeenSet(false),
    m_recordLayoutHasBeenSet(false),
    m_endDelayTimeHasBeenSet(false),
    m_liveTypeHasBeenSet(false),
    m_recordLiveUrlHasBeenSet(false),
    m_enableAutoStartHasBeenSet(false),
    m_recordSceneHasBeenSet(false),
    m_recordLangHasBeenSet(false),
    m_whiteBoardSnapshotModeHasBeenSet(false),
    m_subtitlesTranscriptionHasBeenSet(false)
{
}

string ModifyRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resolution, allocator);
    }

    if (m_maxMicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMicNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMicNumber, allocator);
    }

    if (m_autoMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoMic, allocator);
    }

    if (m_audioQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioQuality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioQuality, allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRecord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableRecord, allocator);
    }

    if (m_assistantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assistants";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assistants.begin(); itr != m_assistants.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDirectControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDirectControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDirectControl, allocator);
    }

    if (m_interactionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InteractionMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interactionMode, allocator);
    }

    if (m_videoOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoOrientation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_videoOrientation, allocator);
    }

    if (m_isGradingRequiredPostClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGradingRequiredPostClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isGradingRequiredPostClass, allocator);
    }

    if (m_roomTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomType, allocator);
    }

    if (m_recordLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLayout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordLayout, allocator);
    }

    if (m_endDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endDelayTime, allocator);
    }

    if (m_liveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_liveType, allocator);
    }

    if (m_recordLiveUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLiveUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLiveUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAutoStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAutoStart, allocator);
    }

    if (m_recordSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordScene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordScene.c_str(), allocator).Move(), allocator);
    }

    if (m_recordLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordLang.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteBoardSnapshotModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteBoardSnapshotMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_whiteBoardSnapshotMode, allocator);
    }

    if (m_subtitlesTranscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlesTranscription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subtitlesTranscription, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t ModifyRoomRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyRoomRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyRoomRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t ModifyRoomRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyRoomRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyRoomRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyRoomRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyRoomRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyRoomRequest::GetTeacherId() const
{
    return m_teacherId;
}

void ModifyRoomRequest::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool ModifyRoomRequest::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

string ModifyRoomRequest::GetName() const
{
    return m_name;
}

void ModifyRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyRoomRequest::GetResolution() const
{
    return m_resolution;
}

void ModifyRoomRequest::SetResolution(const uint64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ModifyRoomRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t ModifyRoomRequest::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

void ModifyRoomRequest::SetMaxMicNumber(const uint64_t& _maxMicNumber)
{
    m_maxMicNumber = _maxMicNumber;
    m_maxMicNumberHasBeenSet = true;
}

bool ModifyRoomRequest::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

uint64_t ModifyRoomRequest::GetAutoMic() const
{
    return m_autoMic;
}

void ModifyRoomRequest::SetAutoMic(const uint64_t& _autoMic)
{
    m_autoMic = _autoMic;
    m_autoMicHasBeenSet = true;
}

bool ModifyRoomRequest::AutoMicHasBeenSet() const
{
    return m_autoMicHasBeenSet;
}

uint64_t ModifyRoomRequest::GetAudioQuality() const
{
    return m_audioQuality;
}

void ModifyRoomRequest::SetAudioQuality(const uint64_t& _audioQuality)
{
    m_audioQuality = _audioQuality;
    m_audioQualityHasBeenSet = true;
}

bool ModifyRoomRequest::AudioQualityHasBeenSet() const
{
    return m_audioQualityHasBeenSet;
}

string ModifyRoomRequest::GetSubType() const
{
    return m_subType;
}

void ModifyRoomRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool ModifyRoomRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetDisableRecord() const
{
    return m_disableRecord;
}

void ModifyRoomRequest::SetDisableRecord(const uint64_t& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool ModifyRoomRequest::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

vector<string> ModifyRoomRequest::GetAssistants() const
{
    return m_assistants;
}

void ModifyRoomRequest::SetAssistants(const vector<string>& _assistants)
{
    m_assistants = _assistants;
    m_assistantsHasBeenSet = true;
}

bool ModifyRoomRequest::AssistantsHasBeenSet() const
{
    return m_assistantsHasBeenSet;
}

string ModifyRoomRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyRoomRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyRoomRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t ModifyRoomRequest::GetEnableDirectControl() const
{
    return m_enableDirectControl;
}

void ModifyRoomRequest::SetEnableDirectControl(const uint64_t& _enableDirectControl)
{
    m_enableDirectControl = _enableDirectControl;
    m_enableDirectControlHasBeenSet = true;
}

bool ModifyRoomRequest::EnableDirectControlHasBeenSet() const
{
    return m_enableDirectControlHasBeenSet;
}

uint64_t ModifyRoomRequest::GetInteractionMode() const
{
    return m_interactionMode;
}

void ModifyRoomRequest::SetInteractionMode(const uint64_t& _interactionMode)
{
    m_interactionMode = _interactionMode;
    m_interactionModeHasBeenSet = true;
}

bool ModifyRoomRequest::InteractionModeHasBeenSet() const
{
    return m_interactionModeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetVideoOrientation() const
{
    return m_videoOrientation;
}

void ModifyRoomRequest::SetVideoOrientation(const uint64_t& _videoOrientation)
{
    m_videoOrientation = _videoOrientation;
    m_videoOrientationHasBeenSet = true;
}

bool ModifyRoomRequest::VideoOrientationHasBeenSet() const
{
    return m_videoOrientationHasBeenSet;
}

uint64_t ModifyRoomRequest::GetIsGradingRequiredPostClass() const
{
    return m_isGradingRequiredPostClass;
}

void ModifyRoomRequest::SetIsGradingRequiredPostClass(const uint64_t& _isGradingRequiredPostClass)
{
    m_isGradingRequiredPostClass = _isGradingRequiredPostClass;
    m_isGradingRequiredPostClassHasBeenSet = true;
}

bool ModifyRoomRequest::IsGradingRequiredPostClassHasBeenSet() const
{
    return m_isGradingRequiredPostClassHasBeenSet;
}

uint64_t ModifyRoomRequest::GetRoomType() const
{
    return m_roomType;
}

void ModifyRoomRequest::SetRoomType(const uint64_t& _roomType)
{
    m_roomType = _roomType;
    m_roomTypeHasBeenSet = true;
}

bool ModifyRoomRequest::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetRecordLayout() const
{
    return m_recordLayout;
}

void ModifyRoomRequest::SetRecordLayout(const uint64_t& _recordLayout)
{
    m_recordLayout = _recordLayout;
    m_recordLayoutHasBeenSet = true;
}

bool ModifyRoomRequest::RecordLayoutHasBeenSet() const
{
    return m_recordLayoutHasBeenSet;
}

int64_t ModifyRoomRequest::GetEndDelayTime() const
{
    return m_endDelayTime;
}

void ModifyRoomRequest::SetEndDelayTime(const int64_t& _endDelayTime)
{
    m_endDelayTime = _endDelayTime;
    m_endDelayTimeHasBeenSet = true;
}

bool ModifyRoomRequest::EndDelayTimeHasBeenSet() const
{
    return m_endDelayTimeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetLiveType() const
{
    return m_liveType;
}

void ModifyRoomRequest::SetLiveType(const uint64_t& _liveType)
{
    m_liveType = _liveType;
    m_liveTypeHasBeenSet = true;
}

bool ModifyRoomRequest::LiveTypeHasBeenSet() const
{
    return m_liveTypeHasBeenSet;
}

string ModifyRoomRequest::GetRecordLiveUrl() const
{
    return m_recordLiveUrl;
}

void ModifyRoomRequest::SetRecordLiveUrl(const string& _recordLiveUrl)
{
    m_recordLiveUrl = _recordLiveUrl;
    m_recordLiveUrlHasBeenSet = true;
}

bool ModifyRoomRequest::RecordLiveUrlHasBeenSet() const
{
    return m_recordLiveUrlHasBeenSet;
}

uint64_t ModifyRoomRequest::GetEnableAutoStart() const
{
    return m_enableAutoStart;
}

void ModifyRoomRequest::SetEnableAutoStart(const uint64_t& _enableAutoStart)
{
    m_enableAutoStart = _enableAutoStart;
    m_enableAutoStartHasBeenSet = true;
}

bool ModifyRoomRequest::EnableAutoStartHasBeenSet() const
{
    return m_enableAutoStartHasBeenSet;
}

string ModifyRoomRequest::GetRecordScene() const
{
    return m_recordScene;
}

void ModifyRoomRequest::SetRecordScene(const string& _recordScene)
{
    m_recordScene = _recordScene;
    m_recordSceneHasBeenSet = true;
}

bool ModifyRoomRequest::RecordSceneHasBeenSet() const
{
    return m_recordSceneHasBeenSet;
}

string ModifyRoomRequest::GetRecordLang() const
{
    return m_recordLang;
}

void ModifyRoomRequest::SetRecordLang(const string& _recordLang)
{
    m_recordLang = _recordLang;
    m_recordLangHasBeenSet = true;
}

bool ModifyRoomRequest::RecordLangHasBeenSet() const
{
    return m_recordLangHasBeenSet;
}

uint64_t ModifyRoomRequest::GetWhiteBoardSnapshotMode() const
{
    return m_whiteBoardSnapshotMode;
}

void ModifyRoomRequest::SetWhiteBoardSnapshotMode(const uint64_t& _whiteBoardSnapshotMode)
{
    m_whiteBoardSnapshotMode = _whiteBoardSnapshotMode;
    m_whiteBoardSnapshotModeHasBeenSet = true;
}

bool ModifyRoomRequest::WhiteBoardSnapshotModeHasBeenSet() const
{
    return m_whiteBoardSnapshotModeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetSubtitlesTranscription() const
{
    return m_subtitlesTranscription;
}

void ModifyRoomRequest::SetSubtitlesTranscription(const uint64_t& _subtitlesTranscription)
{
    m_subtitlesTranscription = _subtitlesTranscription;
    m_subtitlesTranscriptionHasBeenSet = true;
}

bool ModifyRoomRequest::SubtitlesTranscriptionHasBeenSet() const
{
    return m_subtitlesTranscriptionHasBeenSet;
}



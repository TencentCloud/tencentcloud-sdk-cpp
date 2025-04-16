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

#include <tencentcloud/lcic/v20220817/model/CreateRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

CreateRoomRequest::CreateRoomRequest() :
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_autoMicHasBeenSet(false),
    m_turnOffMicHasBeenSet(false),
    m_audioQualityHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_assistantsHasBeenSet(false),
    m_rTCAudienceNumberHasBeenSet(false),
    m_audienceTypeHasBeenSet(false),
    m_recordLayoutHasBeenSet(false),
    m_groupIdHasBeenSet(false),
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
    m_recordStreamHasBeenSet(false),
    m_whiteBoardSnapshotModeHasBeenSet(false),
    m_subtitlesTranscriptionHasBeenSet(false)
{
}

string CreateRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
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

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoMic, allocator);
    }

    if (m_turnOffMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnOffMic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_turnOffMic, allocator);
    }

    if (m_audioQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioQuality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioQuality, allocator);
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

    if (m_rTCAudienceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTCAudienceNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rTCAudienceNumber, allocator);
    }

    if (m_audienceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audienceType, allocator);
    }

    if (m_recordLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLayout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordLayout, allocator);
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

    if (m_recordBackgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBackground";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordBackground.c_str(), allocator).Move(), allocator);
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

    if (m_recordStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordStream, allocator);
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


string CreateRoomRequest::GetName() const
{
    return m_name;
}

void CreateRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateRoomRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateRoomRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateRoomRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CreateRoomRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateRoomRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateRoomRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CreateRoomRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateRoomRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateRoomRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t CreateRoomRequest::GetResolution() const
{
    return m_resolution;
}

void CreateRoomRequest::SetResolution(const uint64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool CreateRoomRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t CreateRoomRequest::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

void CreateRoomRequest::SetMaxMicNumber(const uint64_t& _maxMicNumber)
{
    m_maxMicNumber = _maxMicNumber;
    m_maxMicNumberHasBeenSet = true;
}

bool CreateRoomRequest::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

string CreateRoomRequest::GetSubType() const
{
    return m_subType;
}

void CreateRoomRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool CreateRoomRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string CreateRoomRequest::GetTeacherId() const
{
    return m_teacherId;
}

void CreateRoomRequest::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool CreateRoomRequest::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

uint64_t CreateRoomRequest::GetAutoMic() const
{
    return m_autoMic;
}

void CreateRoomRequest::SetAutoMic(const uint64_t& _autoMic)
{
    m_autoMic = _autoMic;
    m_autoMicHasBeenSet = true;
}

bool CreateRoomRequest::AutoMicHasBeenSet() const
{
    return m_autoMicHasBeenSet;
}

uint64_t CreateRoomRequest::GetTurnOffMic() const
{
    return m_turnOffMic;
}

void CreateRoomRequest::SetTurnOffMic(const uint64_t& _turnOffMic)
{
    m_turnOffMic = _turnOffMic;
    m_turnOffMicHasBeenSet = true;
}

bool CreateRoomRequest::TurnOffMicHasBeenSet() const
{
    return m_turnOffMicHasBeenSet;
}

uint64_t CreateRoomRequest::GetAudioQuality() const
{
    return m_audioQuality;
}

void CreateRoomRequest::SetAudioQuality(const uint64_t& _audioQuality)
{
    m_audioQuality = _audioQuality;
    m_audioQualityHasBeenSet = true;
}

bool CreateRoomRequest::AudioQualityHasBeenSet() const
{
    return m_audioQualityHasBeenSet;
}

uint64_t CreateRoomRequest::GetDisableRecord() const
{
    return m_disableRecord;
}

void CreateRoomRequest::SetDisableRecord(const uint64_t& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool CreateRoomRequest::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

vector<string> CreateRoomRequest::GetAssistants() const
{
    return m_assistants;
}

void CreateRoomRequest::SetAssistants(const vector<string>& _assistants)
{
    m_assistants = _assistants;
    m_assistantsHasBeenSet = true;
}

bool CreateRoomRequest::AssistantsHasBeenSet() const
{
    return m_assistantsHasBeenSet;
}

uint64_t CreateRoomRequest::GetRTCAudienceNumber() const
{
    return m_rTCAudienceNumber;
}

void CreateRoomRequest::SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber)
{
    m_rTCAudienceNumber = _rTCAudienceNumber;
    m_rTCAudienceNumberHasBeenSet = true;
}

bool CreateRoomRequest::RTCAudienceNumberHasBeenSet() const
{
    return m_rTCAudienceNumberHasBeenSet;
}

uint64_t CreateRoomRequest::GetAudienceType() const
{
    return m_audienceType;
}

void CreateRoomRequest::SetAudienceType(const uint64_t& _audienceType)
{
    m_audienceType = _audienceType;
    m_audienceTypeHasBeenSet = true;
}

bool CreateRoomRequest::AudienceTypeHasBeenSet() const
{
    return m_audienceTypeHasBeenSet;
}

uint64_t CreateRoomRequest::GetRecordLayout() const
{
    return m_recordLayout;
}

void CreateRoomRequest::SetRecordLayout(const uint64_t& _recordLayout)
{
    m_recordLayout = _recordLayout;
    m_recordLayoutHasBeenSet = true;
}

bool CreateRoomRequest::RecordLayoutHasBeenSet() const
{
    return m_recordLayoutHasBeenSet;
}

string CreateRoomRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateRoomRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateRoomRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t CreateRoomRequest::GetEnableDirectControl() const
{
    return m_enableDirectControl;
}

void CreateRoomRequest::SetEnableDirectControl(const uint64_t& _enableDirectControl)
{
    m_enableDirectControl = _enableDirectControl;
    m_enableDirectControlHasBeenSet = true;
}

bool CreateRoomRequest::EnableDirectControlHasBeenSet() const
{
    return m_enableDirectControlHasBeenSet;
}

int64_t CreateRoomRequest::GetInteractionMode() const
{
    return m_interactionMode;
}

void CreateRoomRequest::SetInteractionMode(const int64_t& _interactionMode)
{
    m_interactionMode = _interactionMode;
    m_interactionModeHasBeenSet = true;
}

bool CreateRoomRequest::InteractionModeHasBeenSet() const
{
    return m_interactionModeHasBeenSet;
}

uint64_t CreateRoomRequest::GetVideoOrientation() const
{
    return m_videoOrientation;
}

void CreateRoomRequest::SetVideoOrientation(const uint64_t& _videoOrientation)
{
    m_videoOrientation = _videoOrientation;
    m_videoOrientationHasBeenSet = true;
}

bool CreateRoomRequest::VideoOrientationHasBeenSet() const
{
    return m_videoOrientationHasBeenSet;
}

int64_t CreateRoomRequest::GetIsGradingRequiredPostClass() const
{
    return m_isGradingRequiredPostClass;
}

void CreateRoomRequest::SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass)
{
    m_isGradingRequiredPostClass = _isGradingRequiredPostClass;
    m_isGradingRequiredPostClassHasBeenSet = true;
}

bool CreateRoomRequest::IsGradingRequiredPostClassHasBeenSet() const
{
    return m_isGradingRequiredPostClassHasBeenSet;
}

int64_t CreateRoomRequest::GetRoomType() const
{
    return m_roomType;
}

void CreateRoomRequest::SetRoomType(const int64_t& _roomType)
{
    m_roomType = _roomType;
    m_roomTypeHasBeenSet = true;
}

bool CreateRoomRequest::RoomTypeHasBeenSet() const
{
    return m_roomTypeHasBeenSet;
}

int64_t CreateRoomRequest::GetEndDelayTime() const
{
    return m_endDelayTime;
}

void CreateRoomRequest::SetEndDelayTime(const int64_t& _endDelayTime)
{
    m_endDelayTime = _endDelayTime;
    m_endDelayTimeHasBeenSet = true;
}

bool CreateRoomRequest::EndDelayTimeHasBeenSet() const
{
    return m_endDelayTimeHasBeenSet;
}

uint64_t CreateRoomRequest::GetLiveType() const
{
    return m_liveType;
}

void CreateRoomRequest::SetLiveType(const uint64_t& _liveType)
{
    m_liveType = _liveType;
    m_liveTypeHasBeenSet = true;
}

bool CreateRoomRequest::LiveTypeHasBeenSet() const
{
    return m_liveTypeHasBeenSet;
}

string CreateRoomRequest::GetRecordLiveUrl() const
{
    return m_recordLiveUrl;
}

void CreateRoomRequest::SetRecordLiveUrl(const string& _recordLiveUrl)
{
    m_recordLiveUrl = _recordLiveUrl;
    m_recordLiveUrlHasBeenSet = true;
}

bool CreateRoomRequest::RecordLiveUrlHasBeenSet() const
{
    return m_recordLiveUrlHasBeenSet;
}

uint64_t CreateRoomRequest::GetEnableAutoStart() const
{
    return m_enableAutoStart;
}

void CreateRoomRequest::SetEnableAutoStart(const uint64_t& _enableAutoStart)
{
    m_enableAutoStart = _enableAutoStart;
    m_enableAutoStartHasBeenSet = true;
}

bool CreateRoomRequest::EnableAutoStartHasBeenSet() const
{
    return m_enableAutoStartHasBeenSet;
}

string CreateRoomRequest::GetRecordBackground() const
{
    return m_recordBackground;
}

void CreateRoomRequest::SetRecordBackground(const string& _recordBackground)
{
    m_recordBackground = _recordBackground;
    m_recordBackgroundHasBeenSet = true;
}

bool CreateRoomRequest::RecordBackgroundHasBeenSet() const
{
    return m_recordBackgroundHasBeenSet;
}

string CreateRoomRequest::GetRecordScene() const
{
    return m_recordScene;
}

void CreateRoomRequest::SetRecordScene(const string& _recordScene)
{
    m_recordScene = _recordScene;
    m_recordSceneHasBeenSet = true;
}

bool CreateRoomRequest::RecordSceneHasBeenSet() const
{
    return m_recordSceneHasBeenSet;
}

string CreateRoomRequest::GetRecordLang() const
{
    return m_recordLang;
}

void CreateRoomRequest::SetRecordLang(const string& _recordLang)
{
    m_recordLang = _recordLang;
    m_recordLangHasBeenSet = true;
}

bool CreateRoomRequest::RecordLangHasBeenSet() const
{
    return m_recordLangHasBeenSet;
}

uint64_t CreateRoomRequest::GetRecordStream() const
{
    return m_recordStream;
}

void CreateRoomRequest::SetRecordStream(const uint64_t& _recordStream)
{
    m_recordStream = _recordStream;
    m_recordStreamHasBeenSet = true;
}

bool CreateRoomRequest::RecordStreamHasBeenSet() const
{
    return m_recordStreamHasBeenSet;
}

uint64_t CreateRoomRequest::GetWhiteBoardSnapshotMode() const
{
    return m_whiteBoardSnapshotMode;
}

void CreateRoomRequest::SetWhiteBoardSnapshotMode(const uint64_t& _whiteBoardSnapshotMode)
{
    m_whiteBoardSnapshotMode = _whiteBoardSnapshotMode;
    m_whiteBoardSnapshotModeHasBeenSet = true;
}

bool CreateRoomRequest::WhiteBoardSnapshotModeHasBeenSet() const
{
    return m_whiteBoardSnapshotModeHasBeenSet;
}

uint64_t CreateRoomRequest::GetSubtitlesTranscription() const
{
    return m_subtitlesTranscription;
}

void CreateRoomRequest::SetSubtitlesTranscription(const uint64_t& _subtitlesTranscription)
{
    m_subtitlesTranscription = _subtitlesTranscription;
    m_subtitlesTranscriptionHasBeenSet = true;
}

bool CreateRoomRequest::SubtitlesTranscriptionHasBeenSet() const
{
    return m_subtitlesTranscriptionHasBeenSet;
}



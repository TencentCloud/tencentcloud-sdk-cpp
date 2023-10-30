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

#include <tencentcloud/tiw/v20190919/model/StartOnlineRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

StartOnlineRecordRequest::StartOnlineRecordRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_recordUserIdHasBeenSet(false),
    m_recordUserSigHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_concatHasBeenSet(false),
    m_whiteboardHasBeenSet(false),
    m_mixStreamHasBeenSet(false),
    m_extrasHasBeenSet(false),
    m_audioFileNeededHasBeenSet(false),
    m_recordControlHasBeenSet(false),
    m_recordModeHasBeenSet(false),
    m_chatGroupIdHasBeenSet(false),
    m_autoStopTimeoutHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_tRTCRoomIdHasBeenSet(false),
    m_tRTCRoomIdStrHasBeenSet(false)
{
}

string StartOnlineRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_recordUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUserSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUserSig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordUserSig.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_concatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_concat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_whiteboardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Whiteboard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteboard.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mixStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixStream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mixStream.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extrasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extras";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extras.begin(); itr != m_extras.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_audioFileNeededHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileNeeded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioFileNeeded, allocator);
    }

    if (m_recordControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recordControl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_recordModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordMode.c_str(), allocator).Move(), allocator);
    }

    if (m_chatGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChatGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chatGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoStopTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoStopTimeout, allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_tRTCRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCRoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tRTCRoomId, allocator);
    }

    if (m_tRTCRoomIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCRoomIdStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tRTCRoomIdStr.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StartOnlineRecordRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartOnlineRecordRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t StartOnlineRecordRequest::GetRoomId() const
{
    return m_roomId;
}

void StartOnlineRecordRequest::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string StartOnlineRecordRequest::GetRecordUserId() const
{
    return m_recordUserId;
}

void StartOnlineRecordRequest::SetRecordUserId(const string& _recordUserId)
{
    m_recordUserId = _recordUserId;
    m_recordUserIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordUserIdHasBeenSet() const
{
    return m_recordUserIdHasBeenSet;
}

string StartOnlineRecordRequest::GetRecordUserSig() const
{
    return m_recordUserSig;
}

void StartOnlineRecordRequest::SetRecordUserSig(const string& _recordUserSig)
{
    m_recordUserSig = _recordUserSig;
    m_recordUserSigHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordUserSigHasBeenSet() const
{
    return m_recordUserSigHasBeenSet;
}

string StartOnlineRecordRequest::GetGroupId() const
{
    return m_groupId;
}

void StartOnlineRecordRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

Concat StartOnlineRecordRequest::GetConcat() const
{
    return m_concat;
}

void StartOnlineRecordRequest::SetConcat(const Concat& _concat)
{
    m_concat = _concat;
    m_concatHasBeenSet = true;
}

bool StartOnlineRecordRequest::ConcatHasBeenSet() const
{
    return m_concatHasBeenSet;
}

Whiteboard StartOnlineRecordRequest::GetWhiteboard() const
{
    return m_whiteboard;
}

void StartOnlineRecordRequest::SetWhiteboard(const Whiteboard& _whiteboard)
{
    m_whiteboard = _whiteboard;
    m_whiteboardHasBeenSet = true;
}

bool StartOnlineRecordRequest::WhiteboardHasBeenSet() const
{
    return m_whiteboardHasBeenSet;
}

MixStream StartOnlineRecordRequest::GetMixStream() const
{
    return m_mixStream;
}

void StartOnlineRecordRequest::SetMixStream(const MixStream& _mixStream)
{
    m_mixStream = _mixStream;
    m_mixStreamHasBeenSet = true;
}

bool StartOnlineRecordRequest::MixStreamHasBeenSet() const
{
    return m_mixStreamHasBeenSet;
}

vector<string> StartOnlineRecordRequest::GetExtras() const
{
    return m_extras;
}

void StartOnlineRecordRequest::SetExtras(const vector<string>& _extras)
{
    m_extras = _extras;
    m_extrasHasBeenSet = true;
}

bool StartOnlineRecordRequest::ExtrasHasBeenSet() const
{
    return m_extrasHasBeenSet;
}

bool StartOnlineRecordRequest::GetAudioFileNeeded() const
{
    return m_audioFileNeeded;
}

void StartOnlineRecordRequest::SetAudioFileNeeded(const bool& _audioFileNeeded)
{
    m_audioFileNeeded = _audioFileNeeded;
    m_audioFileNeededHasBeenSet = true;
}

bool StartOnlineRecordRequest::AudioFileNeededHasBeenSet() const
{
    return m_audioFileNeededHasBeenSet;
}

RecordControl StartOnlineRecordRequest::GetRecordControl() const
{
    return m_recordControl;
}

void StartOnlineRecordRequest::SetRecordControl(const RecordControl& _recordControl)
{
    m_recordControl = _recordControl;
    m_recordControlHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordControlHasBeenSet() const
{
    return m_recordControlHasBeenSet;
}

string StartOnlineRecordRequest::GetRecordMode() const
{
    return m_recordMode;
}

void StartOnlineRecordRequest::SetRecordMode(const string& _recordMode)
{
    m_recordMode = _recordMode;
    m_recordModeHasBeenSet = true;
}

bool StartOnlineRecordRequest::RecordModeHasBeenSet() const
{
    return m_recordModeHasBeenSet;
}

string StartOnlineRecordRequest::GetChatGroupId() const
{
    return m_chatGroupId;
}

void StartOnlineRecordRequest::SetChatGroupId(const string& _chatGroupId)
{
    m_chatGroupId = _chatGroupId;
    m_chatGroupIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::ChatGroupIdHasBeenSet() const
{
    return m_chatGroupIdHasBeenSet;
}

int64_t StartOnlineRecordRequest::GetAutoStopTimeout() const
{
    return m_autoStopTimeout;
}

void StartOnlineRecordRequest::SetAutoStopTimeout(const int64_t& _autoStopTimeout)
{
    m_autoStopTimeout = _autoStopTimeout;
    m_autoStopTimeoutHasBeenSet = true;
}

bool StartOnlineRecordRequest::AutoStopTimeoutHasBeenSet() const
{
    return m_autoStopTimeoutHasBeenSet;
}

string StartOnlineRecordRequest::GetExtraData() const
{
    return m_extraData;
}

void StartOnlineRecordRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool StartOnlineRecordRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

int64_t StartOnlineRecordRequest::GetTRTCRoomId() const
{
    return m_tRTCRoomId;
}

void StartOnlineRecordRequest::SetTRTCRoomId(const int64_t& _tRTCRoomId)
{
    m_tRTCRoomId = _tRTCRoomId;
    m_tRTCRoomIdHasBeenSet = true;
}

bool StartOnlineRecordRequest::TRTCRoomIdHasBeenSet() const
{
    return m_tRTCRoomIdHasBeenSet;
}

string StartOnlineRecordRequest::GetTRTCRoomIdStr() const
{
    return m_tRTCRoomIdStr;
}

void StartOnlineRecordRequest::SetTRTCRoomIdStr(const string& _tRTCRoomIdStr)
{
    m_tRTCRoomIdStr = _tRTCRoomIdStr;
    m_tRTCRoomIdStrHasBeenSet = true;
}

bool StartOnlineRecordRequest::TRTCRoomIdStrHasBeenSet() const
{
    return m_tRTCRoomIdStrHasBeenSet;
}



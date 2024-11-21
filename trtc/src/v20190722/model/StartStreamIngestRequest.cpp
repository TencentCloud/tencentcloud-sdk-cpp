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

#include <tencentcloud/trtc/v20190722/model/StartStreamIngestRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartStreamIngestRequest::StartStreamIngestRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_streamUrlHasBeenSet(false),
    m_privateMapKeyHasBeenSet(false),
    m_videoEncodeParamsHasBeenSet(false),
    m_audioEncodeParamsHasBeenSet(false),
    m_sourceUrlHasBeenSet(false),
    m_seekSecondHasBeenSet(false),
    m_autoPushHasBeenSet(false),
    m_repeatNumHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

string StartStreamIngestRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_streamUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_privateMapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateMapKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateMapKey.c_str(), allocator).Move(), allocator);
    }

    if (m_videoEncodeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEncodeParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEncodeParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_audioEncodeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEncodeParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioEncodeParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUrl.begin(); itr != m_sourceUrl.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_seekSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeekSecond";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seekSecond, allocator);
    }

    if (m_autoPushHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPush";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPush, allocator);
    }

    if (m_repeatNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repeatNum, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartStreamIngestRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartStreamIngestRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartStreamIngestRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartStreamIngestRequest::GetRoomId() const
{
    return m_roomId;
}

void StartStreamIngestRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartStreamIngestRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t StartStreamIngestRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void StartStreamIngestRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool StartStreamIngestRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

string StartStreamIngestRequest::GetUserId() const
{
    return m_userId;
}

void StartStreamIngestRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool StartStreamIngestRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string StartStreamIngestRequest::GetUserSig() const
{
    return m_userSig;
}

void StartStreamIngestRequest::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool StartStreamIngestRequest::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

string StartStreamIngestRequest::GetStreamUrl() const
{
    return m_streamUrl;
}

void StartStreamIngestRequest::SetStreamUrl(const string& _streamUrl)
{
    m_streamUrl = _streamUrl;
    m_streamUrlHasBeenSet = true;
}

bool StartStreamIngestRequest::StreamUrlHasBeenSet() const
{
    return m_streamUrlHasBeenSet;
}

string StartStreamIngestRequest::GetPrivateMapKey() const
{
    return m_privateMapKey;
}

void StartStreamIngestRequest::SetPrivateMapKey(const string& _privateMapKey)
{
    m_privateMapKey = _privateMapKey;
    m_privateMapKeyHasBeenSet = true;
}

bool StartStreamIngestRequest::PrivateMapKeyHasBeenSet() const
{
    return m_privateMapKeyHasBeenSet;
}

VideoEncodeParams StartStreamIngestRequest::GetVideoEncodeParams() const
{
    return m_videoEncodeParams;
}

void StartStreamIngestRequest::SetVideoEncodeParams(const VideoEncodeParams& _videoEncodeParams)
{
    m_videoEncodeParams = _videoEncodeParams;
    m_videoEncodeParamsHasBeenSet = true;
}

bool StartStreamIngestRequest::VideoEncodeParamsHasBeenSet() const
{
    return m_videoEncodeParamsHasBeenSet;
}

AudioEncodeParams StartStreamIngestRequest::GetAudioEncodeParams() const
{
    return m_audioEncodeParams;
}

void StartStreamIngestRequest::SetAudioEncodeParams(const AudioEncodeParams& _audioEncodeParams)
{
    m_audioEncodeParams = _audioEncodeParams;
    m_audioEncodeParamsHasBeenSet = true;
}

bool StartStreamIngestRequest::AudioEncodeParamsHasBeenSet() const
{
    return m_audioEncodeParamsHasBeenSet;
}

vector<string> StartStreamIngestRequest::GetSourceUrl() const
{
    return m_sourceUrl;
}

void StartStreamIngestRequest::SetSourceUrl(const vector<string>& _sourceUrl)
{
    m_sourceUrl = _sourceUrl;
    m_sourceUrlHasBeenSet = true;
}

bool StartStreamIngestRequest::SourceUrlHasBeenSet() const
{
    return m_sourceUrlHasBeenSet;
}

int64_t StartStreamIngestRequest::GetSeekSecond() const
{
    return m_seekSecond;
}

void StartStreamIngestRequest::SetSeekSecond(const int64_t& _seekSecond)
{
    m_seekSecond = _seekSecond;
    m_seekSecondHasBeenSet = true;
}

bool StartStreamIngestRequest::SeekSecondHasBeenSet() const
{
    return m_seekSecondHasBeenSet;
}

bool StartStreamIngestRequest::GetAutoPush() const
{
    return m_autoPush;
}

void StartStreamIngestRequest::SetAutoPush(const bool& _autoPush)
{
    m_autoPush = _autoPush;
    m_autoPushHasBeenSet = true;
}

bool StartStreamIngestRequest::AutoPushHasBeenSet() const
{
    return m_autoPushHasBeenSet;
}

int64_t StartStreamIngestRequest::GetRepeatNum() const
{
    return m_repeatNum;
}

void StartStreamIngestRequest::SetRepeatNum(const int64_t& _repeatNum)
{
    m_repeatNum = _repeatNum;
    m_repeatNumHasBeenSet = true;
}

bool StartStreamIngestRequest::RepeatNumHasBeenSet() const
{
    return m_repeatNumHasBeenSet;
}

int64_t StartStreamIngestRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void StartStreamIngestRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool StartStreamIngestRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

uint64_t StartStreamIngestRequest::GetVolume() const
{
    return m_volume;
}

void StartStreamIngestRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool StartStreamIngestRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}



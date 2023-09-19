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

#include <tencentcloud/mps/v20190612/model/ComposeTargetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeTargetInfo::ComposeTargetInfo() :
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoStreamHasBeenSet(false),
    m_audioStreamHasBeenSet(false)
{
}

CoreInternalOutcome ComposeTargetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTargetInfo.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTargetInfo.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTargetInfo.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("VideoStream") && !value["VideoStream"].IsNull())
    {
        if (!value["VideoStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTargetInfo.VideoStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoStream.Deserialize(value["VideoStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoStreamHasBeenSet = true;
    }

    if (value.HasMember("AudioStream") && !value["AudioStream"].IsNull())
    {
        if (!value["AudioStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeTargetInfo.AudioStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioStream.Deserialize(value["AudioStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioStreamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeTargetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_videoStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoStream.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioStream.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ComposeTargetInfo::GetContainer() const
{
    return m_container;
}

void ComposeTargetInfo::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool ComposeTargetInfo::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t ComposeTargetInfo::GetRemoveVideo() const
{
    return m_removeVideo;
}

void ComposeTargetInfo::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool ComposeTargetInfo::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t ComposeTargetInfo::GetRemoveAudio() const
{
    return m_removeAudio;
}

void ComposeTargetInfo::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool ComposeTargetInfo::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

ComposeVideoStream ComposeTargetInfo::GetVideoStream() const
{
    return m_videoStream;
}

void ComposeTargetInfo::SetVideoStream(const ComposeVideoStream& _videoStream)
{
    m_videoStream = _videoStream;
    m_videoStreamHasBeenSet = true;
}

bool ComposeTargetInfo::VideoStreamHasBeenSet() const
{
    return m_videoStreamHasBeenSet;
}

ComposeAudioStream ComposeTargetInfo::GetAudioStream() const
{
    return m_audioStream;
}

void ComposeTargetInfo::SetAudioStream(const ComposeAudioStream& _audioStream)
{
    m_audioStream = _audioStream;
    m_audioStreamHasBeenSet = true;
}

bool ComposeTargetInfo::AudioStreamHasBeenSet() const
{
    return m_audioStreamHasBeenSet;
}


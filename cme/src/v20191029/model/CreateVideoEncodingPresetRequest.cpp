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

#include <tencentcloud/cme/v20191029/model/CreateVideoEncodingPresetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CreateVideoEncodingPresetRequest::CreateVideoEncodingPresetRequest() :
    m_platformHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoSettingHasBeenSet(false),
    m_audioSettingHasBeenSet(false)
{
}

string CreateVideoEncodingPresetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_containerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Container";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_container.c_str(), allocator).Move(), allocator);
    }

    if (m_removeVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeVideo, allocator);
    }

    if (m_removeAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeAudio, allocator);
    }

    if (m_videoSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_audioSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVideoEncodingPresetRequest::GetPlatform() const
{
    return m_platform;
}

void CreateVideoEncodingPresetRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateVideoEncodingPresetRequest::GetName() const
{
    return m_name;
}

void CreateVideoEncodingPresetRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateVideoEncodingPresetRequest::GetContainer() const
{
    return m_container;
}

void CreateVideoEncodingPresetRequest::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t CreateVideoEncodingPresetRequest::GetRemoveVideo() const
{
    return m_removeVideo;
}

void CreateVideoEncodingPresetRequest::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t CreateVideoEncodingPresetRequest::GetRemoveAudio() const
{
    return m_removeAudio;
}

void CreateVideoEncodingPresetRequest::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoEncodingPresetVideoSetting CreateVideoEncodingPresetRequest::GetVideoSetting() const
{
    return m_videoSetting;
}

void CreateVideoEncodingPresetRequest::SetVideoSetting(const VideoEncodingPresetVideoSetting& _videoSetting)
{
    m_videoSetting = _videoSetting;
    m_videoSettingHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::VideoSettingHasBeenSet() const
{
    return m_videoSettingHasBeenSet;
}

VideoEncodingPresetAudioSetting CreateVideoEncodingPresetRequest::GetAudioSetting() const
{
    return m_audioSetting;
}

void CreateVideoEncodingPresetRequest::SetAudioSetting(const VideoEncodingPresetAudioSetting& _audioSetting)
{
    m_audioSetting = _audioSetting;
    m_audioSettingHasBeenSet = true;
}

bool CreateVideoEncodingPresetRequest::AudioSettingHasBeenSet() const
{
    return m_audioSettingHasBeenSet;
}



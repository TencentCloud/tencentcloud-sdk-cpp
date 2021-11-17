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

#include <tencentcloud/cme/v20191029/model/ModifyVideoEncodingPresetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ModifyVideoEncodingPresetRequest::ModifyVideoEncodingPresetRequest() :
    m_platformHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoSettingHasBeenSet(false),
    m_audioSettingHasBeenSet(false)
{
}

string ModifyVideoEncodingPresetRequest::ToJsonString() const
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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


string ModifyVideoEncodingPresetRequest::GetPlatform() const
{
    return m_platform;
}

void ModifyVideoEncodingPresetRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

uint64_t ModifyVideoEncodingPresetRequest::GetId() const
{
    return m_id;
}

void ModifyVideoEncodingPresetRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyVideoEncodingPresetRequest::GetName() const
{
    return m_name;
}

void ModifyVideoEncodingPresetRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyVideoEncodingPresetRequest::GetRemoveVideo() const
{
    return m_removeVideo;
}

void ModifyVideoEncodingPresetRequest::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t ModifyVideoEncodingPresetRequest::GetRemoveAudio() const
{
    return m_removeAudio;
}

void ModifyVideoEncodingPresetRequest::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoEncodingPresetVideoSettingForUpdate ModifyVideoEncodingPresetRequest::GetVideoSetting() const
{
    return m_videoSetting;
}

void ModifyVideoEncodingPresetRequest::SetVideoSetting(const VideoEncodingPresetVideoSettingForUpdate& _videoSetting)
{
    m_videoSetting = _videoSetting;
    m_videoSettingHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::VideoSettingHasBeenSet() const
{
    return m_videoSettingHasBeenSet;
}

VideoEncodingPresetAudioSettingForUpdate ModifyVideoEncodingPresetRequest::GetAudioSetting() const
{
    return m_audioSetting;
}

void ModifyVideoEncodingPresetRequest::SetAudioSetting(const VideoEncodingPresetAudioSettingForUpdate& _audioSetting)
{
    m_audioSetting = _audioSetting;
    m_audioSettingHasBeenSet = true;
}

bool ModifyVideoEncodingPresetRequest::AudioSettingHasBeenSet() const
{
    return m_audioSettingHasBeenSet;
}



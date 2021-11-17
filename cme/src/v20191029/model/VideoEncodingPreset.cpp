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

#include <tencentcloud/cme/v20191029/model/VideoEncodingPreset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEncodingPreset::VideoEncodingPreset() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoSettingHasBeenSet(false),
    m_audioSettingHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncodingPreset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.RemoveVideo` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetInt64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.RemoveAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetInt64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("VideoSetting") && !value["VideoSetting"].IsNull())
    {
        if (!value["VideoSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.VideoSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSetting.Deserialize(value["VideoSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSettingHasBeenSet = true;
    }

    if (value.HasMember("AudioSetting") && !value["AudioSetting"].IsNull())
    {
        if (!value["AudioSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPreset.AudioSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioSetting.Deserialize(value["AudioSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioSettingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncodingPreset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_videoSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioSetting.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t VideoEncodingPreset::GetId() const
{
    return m_id;
}

void VideoEncodingPreset::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VideoEncodingPreset::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VideoEncodingPreset::GetName() const
{
    return m_name;
}

void VideoEncodingPreset::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VideoEncodingPreset::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VideoEncodingPreset::GetContainer() const
{
    return m_container;
}

void VideoEncodingPreset::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool VideoEncodingPreset::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

int64_t VideoEncodingPreset::GetRemoveVideo() const
{
    return m_removeVideo;
}

void VideoEncodingPreset::SetRemoveVideo(const int64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool VideoEncodingPreset::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

int64_t VideoEncodingPreset::GetRemoveAudio() const
{
    return m_removeAudio;
}

void VideoEncodingPreset::SetRemoveAudio(const int64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool VideoEncodingPreset::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoEncodingPresetVideoSetting VideoEncodingPreset::GetVideoSetting() const
{
    return m_videoSetting;
}

void VideoEncodingPreset::SetVideoSetting(const VideoEncodingPresetVideoSetting& _videoSetting)
{
    m_videoSetting = _videoSetting;
    m_videoSettingHasBeenSet = true;
}

bool VideoEncodingPreset::VideoSettingHasBeenSet() const
{
    return m_videoSettingHasBeenSet;
}

VideoEncodingPresetAudioSetting VideoEncodingPreset::GetAudioSetting() const
{
    return m_audioSetting;
}

void VideoEncodingPreset::SetAudioSetting(const VideoEncodingPresetAudioSetting& _audioSetting)
{
    m_audioSetting = _audioSetting;
    m_audioSettingHasBeenSet = true;
}

bool VideoEncodingPreset::AudioSettingHasBeenSet() const
{
    return m_audioSettingHasBeenSet;
}


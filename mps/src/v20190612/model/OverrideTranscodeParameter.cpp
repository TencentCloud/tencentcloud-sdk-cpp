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

#include <tencentcloud/mps/v20190612/model/OverrideTranscodeParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

OverrideTranscodeParameter::OverrideTranscodeParameter() :
    m_containerHasBeenSet(false),
    m_removeVideoHasBeenSet(false),
    m_removeAudioHasBeenSet(false),
    m_videoTemplateHasBeenSet(false),
    m_audioTemplateHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false),
    m_subtitleTemplateHasBeenSet(false)
{
}

CoreInternalOutcome OverrideTranscodeParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Container") && !value["Container"].IsNull())
    {
        if (!value["Container"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.Container` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_container = string(value["Container"].GetString());
        m_containerHasBeenSet = true;
    }

    if (value.HasMember("RemoveVideo") && !value["RemoveVideo"].IsNull())
    {
        if (!value["RemoveVideo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.RemoveVideo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeVideo = value["RemoveVideo"].GetUint64();
        m_removeVideoHasBeenSet = true;
    }

    if (value.HasMember("RemoveAudio") && !value["RemoveAudio"].IsNull())
    {
        if (!value["RemoveAudio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.RemoveAudio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_removeAudio = value["RemoveAudio"].GetUint64();
        m_removeAudioHasBeenSet = true;
    }

    if (value.HasMember("VideoTemplate") && !value["VideoTemplate"].IsNull())
    {
        if (!value["VideoTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.VideoTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoTemplate.Deserialize(value["VideoTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoTemplateHasBeenSet = true;
    }

    if (value.HasMember("AudioTemplate") && !value["AudioTemplate"].IsNull())
    {
        if (!value["AudioTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.AudioTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioTemplate.Deserialize(value["AudioTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioTemplateHasBeenSet = true;
    }

    if (value.HasMember("TEHDConfig") && !value["TEHDConfig"].IsNull())
    {
        if (!value["TEHDConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.TEHDConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tEHDConfig.Deserialize(value["TEHDConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tEHDConfigHasBeenSet = true;
    }

    if (value.HasMember("SubtitleTemplate") && !value["SubtitleTemplate"].IsNull())
    {
        if (!value["SubtitleTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverrideTranscodeParameter.SubtitleTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitleTemplate.Deserialize(value["SubtitleTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverrideTranscodeParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_videoTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tEHDConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subtitleTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitleTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OverrideTranscodeParameter::GetContainer() const
{
    return m_container;
}

void OverrideTranscodeParameter::SetContainer(const string& _container)
{
    m_container = _container;
    m_containerHasBeenSet = true;
}

bool OverrideTranscodeParameter::ContainerHasBeenSet() const
{
    return m_containerHasBeenSet;
}

uint64_t OverrideTranscodeParameter::GetRemoveVideo() const
{
    return m_removeVideo;
}

void OverrideTranscodeParameter::SetRemoveVideo(const uint64_t& _removeVideo)
{
    m_removeVideo = _removeVideo;
    m_removeVideoHasBeenSet = true;
}

bool OverrideTranscodeParameter::RemoveVideoHasBeenSet() const
{
    return m_removeVideoHasBeenSet;
}

uint64_t OverrideTranscodeParameter::GetRemoveAudio() const
{
    return m_removeAudio;
}

void OverrideTranscodeParameter::SetRemoveAudio(const uint64_t& _removeAudio)
{
    m_removeAudio = _removeAudio;
    m_removeAudioHasBeenSet = true;
}

bool OverrideTranscodeParameter::RemoveAudioHasBeenSet() const
{
    return m_removeAudioHasBeenSet;
}

VideoTemplateInfoForUpdate OverrideTranscodeParameter::GetVideoTemplate() const
{
    return m_videoTemplate;
}

void OverrideTranscodeParameter::SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate)
{
    m_videoTemplate = _videoTemplate;
    m_videoTemplateHasBeenSet = true;
}

bool OverrideTranscodeParameter::VideoTemplateHasBeenSet() const
{
    return m_videoTemplateHasBeenSet;
}

AudioTemplateInfoForUpdate OverrideTranscodeParameter::GetAudioTemplate() const
{
    return m_audioTemplate;
}

void OverrideTranscodeParameter::SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate)
{
    m_audioTemplate = _audioTemplate;
    m_audioTemplateHasBeenSet = true;
}

bool OverrideTranscodeParameter::AudioTemplateHasBeenSet() const
{
    return m_audioTemplateHasBeenSet;
}

TEHDConfigForUpdate OverrideTranscodeParameter::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void OverrideTranscodeParameter::SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool OverrideTranscodeParameter::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}

SubtitleTemplate OverrideTranscodeParameter::GetSubtitleTemplate() const
{
    return m_subtitleTemplate;
}

void OverrideTranscodeParameter::SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate)
{
    m_subtitleTemplate = _subtitleTemplate;
    m_subtitleTemplateHasBeenSet = true;
}

bool OverrideTranscodeParameter::SubtitleTemplateHasBeenSet() const
{
    return m_subtitleTemplateHasBeenSet;
}


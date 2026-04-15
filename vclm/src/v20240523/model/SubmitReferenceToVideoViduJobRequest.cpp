/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vclm/v20240523/model/SubmitReferenceToVideoViduJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitReferenceToVideoViduJobRequest::SubmitReferenceToVideoViduJobRequest() :
    m_promptHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_subjectsHasBeenSet(false),
    m_videosHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_audioTypeHasBeenSet(false),
    m_bgmHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_movementAmplitudeHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_offPeakHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitReferenceToVideoViduJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subjects.begin(); itr != m_subjects.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_videosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Videos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videos.begin(); itr != m_videos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audio, allocator);
    }

    if (m_audioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioType.c_str(), allocator).Move(), allocator);
    }

    if (m_bgmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bgm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgm, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_movementAmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MovementAmplitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_movementAmplitude.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaData.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_offPeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffPeak";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offPeak, allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitReferenceToVideoViduJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitReferenceToVideoViduJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

vector<string> SubmitReferenceToVideoViduJobRequest::GetImages() const
{
    return m_images;
}

void SubmitReferenceToVideoViduJobRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<ReferenceSubject> SubmitReferenceToVideoViduJobRequest::GetSubjects() const
{
    return m_subjects;
}

void SubmitReferenceToVideoViduJobRequest::SetSubjects(const vector<ReferenceSubject>& _subjects)
{
    m_subjects = _subjects;
    m_subjectsHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::SubjectsHasBeenSet() const
{
    return m_subjectsHasBeenSet;
}

vector<string> SubmitReferenceToVideoViduJobRequest::GetVideos() const
{
    return m_videos;
}

void SubmitReferenceToVideoViduJobRequest::SetVideos(const vector<string>& _videos)
{
    m_videos = _videos;
    m_videosHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::VideosHasBeenSet() const
{
    return m_videosHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetModel() const
{
    return m_model;
}

void SubmitReferenceToVideoViduJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool SubmitReferenceToVideoViduJobRequest::GetAudio() const
{
    return m_audio;
}

void SubmitReferenceToVideoViduJobRequest::SetAudio(const bool& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetAudioType() const
{
    return m_audioType;
}

void SubmitReferenceToVideoViduJobRequest::SetAudioType(const string& _audioType)
{
    m_audioType = _audioType;
    m_audioTypeHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::AudioTypeHasBeenSet() const
{
    return m_audioTypeHasBeenSet;
}

bool SubmitReferenceToVideoViduJobRequest::GetBgm() const
{
    return m_bgm;
}

void SubmitReferenceToVideoViduJobRequest::SetBgm(const bool& _bgm)
{
    m_bgm = _bgm;
    m_bgmHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::BgmHasBeenSet() const
{
    return m_bgmHasBeenSet;
}

int64_t SubmitReferenceToVideoViduJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitReferenceToVideoViduJobRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SubmitReferenceToVideoViduJobRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitReferenceToVideoViduJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetMovementAmplitude() const
{
    return m_movementAmplitude;
}

void SubmitReferenceToVideoViduJobRequest::SetMovementAmplitude(const string& _movementAmplitude)
{
    m_movementAmplitude = _movementAmplitude;
    m_movementAmplitudeHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::MovementAmplitudeHasBeenSet() const
{
    return m_movementAmplitudeHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetMetaData() const
{
    return m_metaData;
}

void SubmitReferenceToVideoViduJobRequest::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitReferenceToVideoViduJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string SubmitReferenceToVideoViduJobRequest::GetPayload() const
{
    return m_payload;
}

void SubmitReferenceToVideoViduJobRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

bool SubmitReferenceToVideoViduJobRequest::GetOffPeak() const
{
    return m_offPeak;
}

void SubmitReferenceToVideoViduJobRequest::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}

int64_t SubmitReferenceToVideoViduJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitReferenceToVideoViduJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitReferenceToVideoViduJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitReferenceToVideoViduJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitReferenceToVideoViduJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



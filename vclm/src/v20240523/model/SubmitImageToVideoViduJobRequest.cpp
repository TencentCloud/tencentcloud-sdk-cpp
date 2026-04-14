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

#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoViduJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitImageToVideoViduJobRequest::SubmitImageToVideoViduJobRequest() :
    m_imagesHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_isRecHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_movementAmplitudeHasBeenSet(false),
    m_bgmHasBeenSet(false),
    m_audioTypeHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_offPeakHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitImageToVideoViduJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRec, allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audio, allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
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

    if (m_bgmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bgm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgm, allocator);
    }

    if (m_audioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioType.c_str(), allocator).Move(), allocator);
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


vector<string> SubmitImageToVideoViduJobRequest::GetImages() const
{
    return m_images;
}

void SubmitImageToVideoViduJobRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetModel() const
{
    return m_model;
}

void SubmitImageToVideoViduJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitImageToVideoViduJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetIsRec() const
{
    return m_isRec;
}

void SubmitImageToVideoViduJobRequest::SetIsRec(const bool& _isRec)
{
    m_isRec = _isRec;
    m_isRecHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::IsRecHasBeenSet() const
{
    return m_isRecHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetAudio() const
{
    return m_audio;
}

void SubmitImageToVideoViduJobRequest::SetAudio(const bool& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetVoiceId() const
{
    return m_voiceId;
}

void SubmitImageToVideoViduJobRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

int64_t SubmitImageToVideoViduJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitImageToVideoViduJobRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitImageToVideoViduJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetMovementAmplitude() const
{
    return m_movementAmplitude;
}

void SubmitImageToVideoViduJobRequest::SetMovementAmplitude(const string& _movementAmplitude)
{
    m_movementAmplitude = _movementAmplitude;
    m_movementAmplitudeHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::MovementAmplitudeHasBeenSet() const
{
    return m_movementAmplitudeHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetBgm() const
{
    return m_bgm;
}

void SubmitImageToVideoViduJobRequest::SetBgm(const bool& _bgm)
{
    m_bgm = _bgm;
    m_bgmHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::BgmHasBeenSet() const
{
    return m_bgmHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetAudioType() const
{
    return m_audioType;
}

void SubmitImageToVideoViduJobRequest::SetAudioType(const string& _audioType)
{
    m_audioType = _audioType;
    m_audioTypeHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::AudioTypeHasBeenSet() const
{
    return m_audioTypeHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetMetaData() const
{
    return m_metaData;
}

void SubmitImageToVideoViduJobRequest::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitImageToVideoViduJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string SubmitImageToVideoViduJobRequest::GetPayload() const
{
    return m_payload;
}

void SubmitImageToVideoViduJobRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

bool SubmitImageToVideoViduJobRequest::GetOffPeak() const
{
    return m_offPeak;
}

void SubmitImageToVideoViduJobRequest::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}

int64_t SubmitImageToVideoViduJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitImageToVideoViduJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitImageToVideoViduJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitImageToVideoViduJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitImageToVideoViduJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



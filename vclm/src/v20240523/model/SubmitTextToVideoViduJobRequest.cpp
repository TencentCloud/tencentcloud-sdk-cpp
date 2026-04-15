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

#include <tencentcloud/vclm/v20240523/model/SubmitTextToVideoViduJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitTextToVideoViduJobRequest::SubmitTextToVideoViduJobRequest() :
    m_promptHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_bgmHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_movementAmplitudeHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_offPeakHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitTextToVideoViduJobRequest::ToJsonString() const
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_bgmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bgm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bgm, allocator);
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

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_movementAmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MovementAmplitude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_movementAmplitude.c_str(), allocator).Move(), allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audio, allocator);
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


string SubmitTextToVideoViduJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitTextToVideoViduJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetModel() const
{
    return m_model;
}

void SubmitTextToVideoViduJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

int64_t SubmitTextToVideoViduJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitTextToVideoViduJobRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

bool SubmitTextToVideoViduJobRequest::GetBgm() const
{
    return m_bgm;
}

void SubmitTextToVideoViduJobRequest::SetBgm(const bool& _bgm)
{
    m_bgm = _bgm;
    m_bgmHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::BgmHasBeenSet() const
{
    return m_bgmHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SubmitTextToVideoViduJobRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitTextToVideoViduJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetStyle() const
{
    return m_style;
}

void SubmitTextToVideoViduJobRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetMovementAmplitude() const
{
    return m_movementAmplitude;
}

void SubmitTextToVideoViduJobRequest::SetMovementAmplitude(const string& _movementAmplitude)
{
    m_movementAmplitude = _movementAmplitude;
    m_movementAmplitudeHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::MovementAmplitudeHasBeenSet() const
{
    return m_movementAmplitudeHasBeenSet;
}

bool SubmitTextToVideoViduJobRequest::GetAudio() const
{
    return m_audio;
}

void SubmitTextToVideoViduJobRequest::SetAudio(const bool& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetMetaData() const
{
    return m_metaData;
}

void SubmitTextToVideoViduJobRequest::SetMetaData(const string& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitTextToVideoViduJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string SubmitTextToVideoViduJobRequest::GetPayload() const
{
    return m_payload;
}

void SubmitTextToVideoViduJobRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

bool SubmitTextToVideoViduJobRequest::GetOffPeak() const
{
    return m_offPeak;
}

void SubmitTextToVideoViduJobRequest::SetOffPeak(const bool& _offPeak)
{
    m_offPeak = _offPeak;
    m_offPeakHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::OffPeakHasBeenSet() const
{
    return m_offPeakHasBeenSet;
}

int64_t SubmitTextToVideoViduJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitTextToVideoViduJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitTextToVideoViduJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitTextToVideoViduJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitTextToVideoViduJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



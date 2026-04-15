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

#include <tencentcloud/vclm/v20240523/model/SubmitTextToVideoJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitTextToVideoJobRequest::SubmitTextToVideoJobRequest() :
    m_promptHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_cfgScaleHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_multiShotHasBeenSet(false),
    m_shotTypeHasBeenSet(false),
    m_multiPromptHasBeenSet(false),
    m_cameraControlHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

string SubmitTextToVideoJobRequest::ToJsonString() const
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

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_cfgScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfgScale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cfgScale, allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_soundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sound.c_str(), allocator).Move(), allocator);
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

    if (m_multiShotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiShot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_multiShot, allocator);
    }

    if (m_shotTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShotType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shotType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiPrompt.begin(); itr != m_multiPrompt.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cameraControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cameraControl.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTextToVideoJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitTextToVideoJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetModel() const
{
    return m_model;
}

void SubmitTextToVideoJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void SubmitTextToVideoJobRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitTextToVideoJobRequest::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetMode() const
{
    return m_mode;
}

void SubmitTextToVideoJobRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

double SubmitTextToVideoJobRequest::GetCfgScale() const
{
    return m_cfgScale;
}

void SubmitTextToVideoJobRequest::SetCfgScale(const double& _cfgScale)
{
    m_cfgScale = _cfgScale;
    m_cfgScaleHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::CfgScaleHasBeenSet() const
{
    return m_cfgScaleHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SubmitTextToVideoJobRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetSound() const
{
    return m_sound;
}

void SubmitTextToVideoJobRequest::SetSound(const string& _sound)
{
    m_sound = _sound;
    m_soundHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::SoundHasBeenSet() const
{
    return m_soundHasBeenSet;
}

int64_t SubmitTextToVideoJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitTextToVideoJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitTextToVideoJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitTextToVideoJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

bool SubmitTextToVideoJobRequest::GetMultiShot() const
{
    return m_multiShot;
}

void SubmitTextToVideoJobRequest::SetMultiShot(const bool& _multiShot)
{
    m_multiShot = _multiShot;
    m_multiShotHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::MultiShotHasBeenSet() const
{
    return m_multiShotHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetShotType() const
{
    return m_shotType;
}

void SubmitTextToVideoJobRequest::SetShotType(const string& _shotType)
{
    m_shotType = _shotType;
    m_shotTypeHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::ShotTypeHasBeenSet() const
{
    return m_shotTypeHasBeenSet;
}

vector<MultiPrompt> SubmitTextToVideoJobRequest::GetMultiPrompt() const
{
    return m_multiPrompt;
}

void SubmitTextToVideoJobRequest::SetMultiPrompt(const vector<MultiPrompt>& _multiPrompt)
{
    m_multiPrompt = _multiPrompt;
    m_multiPromptHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::MultiPromptHasBeenSet() const
{
    return m_multiPromptHasBeenSet;
}

CameraControl SubmitTextToVideoJobRequest::GetCameraControl() const
{
    return m_cameraControl;
}

void SubmitTextToVideoJobRequest::SetCameraControl(const CameraControl& _cameraControl)
{
    m_cameraControl = _cameraControl;
    m_cameraControlHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::CameraControlHasBeenSet() const
{
    return m_cameraControlHasBeenSet;
}

string SubmitTextToVideoJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitTextToVideoJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitTextToVideoJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}



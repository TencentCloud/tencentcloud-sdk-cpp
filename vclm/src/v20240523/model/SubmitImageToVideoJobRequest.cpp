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

#include <tencentcloud/vclm/v20240523/model/SubmitImageToVideoJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitImageToVideoJobRequest::SubmitImageToVideoJobRequest() :
    m_modelHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageTailHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_cfgScaleHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_multiShotHasBeenSet(false),
    m_shotTypeHasBeenSet(false),
    m_multiPromptHasBeenSet(false),
    m_elementListHasBeenSet(false),
    m_staticMaskHasBeenSet(false),
    m_dynamicMasksHasBeenSet(false),
    m_cameraControlHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_voiceListHasBeenSet(false),
    m_externalTaskIdHasBeenSet(false)
{
}

string SubmitImageToVideoJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageTailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
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

    if (m_elementListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_elementList.begin(); itr != m_elementList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_staticMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staticMask.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicMasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicMasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicMasks.begin(); itr != m_dynamicMasks.end(); ++itr, ++i)
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

    if (m_voiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_voiceList.begin(); itr != m_voiceList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_externalTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitImageToVideoJobRequest::GetModel() const
{
    return m_model;
}

void SubmitImageToVideoJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

Image SubmitImageToVideoJobRequest::GetImage() const
{
    return m_image;
}

void SubmitImageToVideoJobRequest::SetImage(const Image& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

Image SubmitImageToVideoJobRequest::GetImageTail() const
{
    return m_imageTail;
}

void SubmitImageToVideoJobRequest::SetImageTail(const Image& _imageTail)
{
    m_imageTail = _imageTail;
    m_imageTailHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ImageTailHasBeenSet() const
{
    return m_imageTailHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitImageToVideoJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void SubmitImageToVideoJobRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitImageToVideoJobRequest::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetMode() const
{
    return m_mode;
}

void SubmitImageToVideoJobRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

double SubmitImageToVideoJobRequest::GetCfgScale() const
{
    return m_cfgScale;
}

void SubmitImageToVideoJobRequest::SetCfgScale(const double& _cfgScale)
{
    m_cfgScale = _cfgScale;
    m_cfgScaleHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::CfgScaleHasBeenSet() const
{
    return m_cfgScaleHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetSound() const
{
    return m_sound;
}

void SubmitImageToVideoJobRequest::SetSound(const string& _sound)
{
    m_sound = _sound;
    m_soundHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::SoundHasBeenSet() const
{
    return m_soundHasBeenSet;
}

int64_t SubmitImageToVideoJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitImageToVideoJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitImageToVideoJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitImageToVideoJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

bool SubmitImageToVideoJobRequest::GetMultiShot() const
{
    return m_multiShot;
}

void SubmitImageToVideoJobRequest::SetMultiShot(const bool& _multiShot)
{
    m_multiShot = _multiShot;
    m_multiShotHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::MultiShotHasBeenSet() const
{
    return m_multiShotHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetShotType() const
{
    return m_shotType;
}

void SubmitImageToVideoJobRequest::SetShotType(const string& _shotType)
{
    m_shotType = _shotType;
    m_shotTypeHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ShotTypeHasBeenSet() const
{
    return m_shotTypeHasBeenSet;
}

vector<MultiPrompt> SubmitImageToVideoJobRequest::GetMultiPrompt() const
{
    return m_multiPrompt;
}

void SubmitImageToVideoJobRequest::SetMultiPrompt(const vector<MultiPrompt>& _multiPrompt)
{
    m_multiPrompt = _multiPrompt;
    m_multiPromptHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::MultiPromptHasBeenSet() const
{
    return m_multiPromptHasBeenSet;
}

vector<Element> SubmitImageToVideoJobRequest::GetElementList() const
{
    return m_elementList;
}

void SubmitImageToVideoJobRequest::SetElementList(const vector<Element>& _elementList)
{
    m_elementList = _elementList;
    m_elementListHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ElementListHasBeenSet() const
{
    return m_elementListHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetStaticMask() const
{
    return m_staticMask;
}

void SubmitImageToVideoJobRequest::SetStaticMask(const string& _staticMask)
{
    m_staticMask = _staticMask;
    m_staticMaskHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::StaticMaskHasBeenSet() const
{
    return m_staticMaskHasBeenSet;
}

vector<DynamicMask> SubmitImageToVideoJobRequest::GetDynamicMasks() const
{
    return m_dynamicMasks;
}

void SubmitImageToVideoJobRequest::SetDynamicMasks(const vector<DynamicMask>& _dynamicMasks)
{
    m_dynamicMasks = _dynamicMasks;
    m_dynamicMasksHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::DynamicMasksHasBeenSet() const
{
    return m_dynamicMasksHasBeenSet;
}

CameraControl SubmitImageToVideoJobRequest::GetCameraControl() const
{
    return m_cameraControl;
}

void SubmitImageToVideoJobRequest::SetCameraControl(const CameraControl& _cameraControl)
{
    m_cameraControl = _cameraControl;
    m_cameraControlHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::CameraControlHasBeenSet() const
{
    return m_cameraControlHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitImageToVideoJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<Voice> SubmitImageToVideoJobRequest::GetVoiceList() const
{
    return m_voiceList;
}

void SubmitImageToVideoJobRequest::SetVoiceList(const vector<Voice>& _voiceList)
{
    m_voiceList = _voiceList;
    m_voiceListHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::VoiceListHasBeenSet() const
{
    return m_voiceListHasBeenSet;
}

string SubmitImageToVideoJobRequest::GetExternalTaskId() const
{
    return m_externalTaskId;
}

void SubmitImageToVideoJobRequest::SetExternalTaskId(const string& _externalTaskId)
{
    m_externalTaskId = _externalTaskId;
    m_externalTaskIdHasBeenSet = true;
}

bool SubmitImageToVideoJobRequest::ExternalTaskIdHasBeenSet() const
{
    return m_externalTaskIdHasBeenSet;
}



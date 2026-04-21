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

#include <tencentcloud/vclm/v20240523/model/SubmitVideoEditKlingJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitVideoEditKlingJobRequest::SubmitVideoEditKlingJobRequest() :
    m_promptHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_externalTaskIdHasBeenSet(false),
    m_imageListHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_videoListHasBeenSet(false),
    m_multiShotHasBeenSet(false),
    m_shotTypeHasBeenSet(false),
    m_multiPromptHasBeenSet(false),
    m_elementListHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_soundHasBeenSet(false)
{
}

string SubmitVideoEditKlingJobRequest::ToJsonString() const
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

    if (m_externalTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageList.begin(); itr != m_imageList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_videoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoList.begin(); itr != m_videoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_soundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sound.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitVideoEditKlingJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitVideoEditKlingJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetModel() const
{
    return m_model;
}

void SubmitVideoEditKlingJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetExternalTaskId() const
{
    return m_externalTaskId;
}

void SubmitVideoEditKlingJobRequest::SetExternalTaskId(const string& _externalTaskId)
{
    m_externalTaskId = _externalTaskId;
    m_externalTaskIdHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ExternalTaskIdHasBeenSet() const
{
    return m_externalTaskIdHasBeenSet;
}

vector<ImageInfo> SubmitVideoEditKlingJobRequest::GetImageList() const
{
    return m_imageList;
}

void SubmitVideoEditKlingJobRequest::SetImageList(const vector<ImageInfo>& _imageList)
{
    m_imageList = _imageList;
    m_imageListHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ImageListHasBeenSet() const
{
    return m_imageListHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SubmitVideoEditKlingJobRequest::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

int64_t SubmitVideoEditKlingJobRequest::GetDuration() const
{
    return m_duration;
}

void SubmitVideoEditKlingJobRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t SubmitVideoEditKlingJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitVideoEditKlingJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitVideoEditKlingJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitVideoEditKlingJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetMode() const
{
    return m_mode;
}

void SubmitVideoEditKlingJobRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<ReferVideoInfo> SubmitVideoEditKlingJobRequest::GetVideoList() const
{
    return m_videoList;
}

void SubmitVideoEditKlingJobRequest::SetVideoList(const vector<ReferVideoInfo>& _videoList)
{
    m_videoList = _videoList;
    m_videoListHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::VideoListHasBeenSet() const
{
    return m_videoListHasBeenSet;
}

bool SubmitVideoEditKlingJobRequest::GetMultiShot() const
{
    return m_multiShot;
}

void SubmitVideoEditKlingJobRequest::SetMultiShot(const bool& _multiShot)
{
    m_multiShot = _multiShot;
    m_multiShotHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::MultiShotHasBeenSet() const
{
    return m_multiShotHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetShotType() const
{
    return m_shotType;
}

void SubmitVideoEditKlingJobRequest::SetShotType(const string& _shotType)
{
    m_shotType = _shotType;
    m_shotTypeHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ShotTypeHasBeenSet() const
{
    return m_shotTypeHasBeenSet;
}

vector<MultiPrompt> SubmitVideoEditKlingJobRequest::GetMultiPrompt() const
{
    return m_multiPrompt;
}

void SubmitVideoEditKlingJobRequest::SetMultiPrompt(const vector<MultiPrompt>& _multiPrompt)
{
    m_multiPrompt = _multiPrompt;
    m_multiPromptHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::MultiPromptHasBeenSet() const
{
    return m_multiPromptHasBeenSet;
}

vector<Element> SubmitVideoEditKlingJobRequest::GetElementList() const
{
    return m_elementList;
}

void SubmitVideoEditKlingJobRequest::SetElementList(const vector<Element>& _elementList)
{
    m_elementList = _elementList;
    m_elementListHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::ElementListHasBeenSet() const
{
    return m_elementListHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitVideoEditKlingJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string SubmitVideoEditKlingJobRequest::GetSound() const
{
    return m_sound;
}

void SubmitVideoEditKlingJobRequest::SetSound(const string& _sound)
{
    m_sound = _sound;
    m_soundHasBeenSet = true;
}

bool SubmitVideoEditKlingJobRequest::SoundHasBeenSet() const
{
    return m_soundHasBeenSet;
}



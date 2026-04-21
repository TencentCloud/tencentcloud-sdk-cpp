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

#include <tencentcloud/vclm/v20240523/model/SubmitMotionControlKlingJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitMotionControlKlingJobRequest::SubmitMotionControlKlingJobRequest() :
    m_modelHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_externalTaskIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_keepOriginalSoundHasBeenSet(false),
    m_characterOrientationHasBeenSet(false),
    m_elementListHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitMotionControlKlingJobRequest::ToJsonString() const
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

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_externalTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_keepOriginalSoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepOriginalSound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keepOriginalSound.c_str(), allocator).Move(), allocator);
    }

    if (m_characterOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharacterOrientation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_characterOrientation.c_str(), allocator).Move(), allocator);
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


string SubmitMotionControlKlingJobRequest::GetModel() const
{
    return m_model;
}

void SubmitMotionControlKlingJobRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitMotionControlKlingJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetExternalTaskId() const
{
    return m_externalTaskId;
}

void SubmitMotionControlKlingJobRequest::SetExternalTaskId(const string& _externalTaskId)
{
    m_externalTaskId = _externalTaskId;
    m_externalTaskIdHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::ExternalTaskIdHasBeenSet() const
{
    return m_externalTaskIdHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetImage() const
{
    return m_image;
}

void SubmitMotionControlKlingJobRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetVideo() const
{
    return m_video;
}

void SubmitMotionControlKlingJobRequest::SetVideo(const string& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetMode() const
{
    return m_mode;
}

void SubmitMotionControlKlingJobRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetKeepOriginalSound() const
{
    return m_keepOriginalSound;
}

void SubmitMotionControlKlingJobRequest::SetKeepOriginalSound(const string& _keepOriginalSound)
{
    m_keepOriginalSound = _keepOriginalSound;
    m_keepOriginalSoundHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::KeepOriginalSoundHasBeenSet() const
{
    return m_keepOriginalSoundHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetCharacterOrientation() const
{
    return m_characterOrientation;
}

void SubmitMotionControlKlingJobRequest::SetCharacterOrientation(const string& _characterOrientation)
{
    m_characterOrientation = _characterOrientation;
    m_characterOrientationHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::CharacterOrientationHasBeenSet() const
{
    return m_characterOrientationHasBeenSet;
}

vector<Element> SubmitMotionControlKlingJobRequest::GetElementList() const
{
    return m_elementList;
}

void SubmitMotionControlKlingJobRequest::SetElementList(const vector<Element>& _elementList)
{
    m_elementList = _elementList;
    m_elementListHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::ElementListHasBeenSet() const
{
    return m_elementListHasBeenSet;
}

string SubmitMotionControlKlingJobRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SubmitMotionControlKlingJobRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t SubmitMotionControlKlingJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitMotionControlKlingJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitMotionControlKlingJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitMotionControlKlingJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitMotionControlKlingJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



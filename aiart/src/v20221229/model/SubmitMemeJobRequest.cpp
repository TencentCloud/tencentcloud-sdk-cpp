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

#include <tencentcloud/aiart/v20221229/model/SubmitMemeJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

SubmitMemeJobRequest::SubmitMemeJobRequest() :
    m_poseHasBeenSet(false),
    m_inputImageHasBeenSet(false),
    m_inputUrlHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_textHasBeenSet(false),
    m_haircutHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitMemeJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_poseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pose.c_str(), allocator).Move(), allocator);
    }

    if (m_inputImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputImage.c_str(), allocator).Move(), allocator);
    }

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resolution, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_haircutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Haircut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haircut, allocator);
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


string SubmitMemeJobRequest::GetPose() const
{
    return m_pose;
}

void SubmitMemeJobRequest::SetPose(const string& _pose)
{
    m_pose = _pose;
    m_poseHasBeenSet = true;
}

bool SubmitMemeJobRequest::PoseHasBeenSet() const
{
    return m_poseHasBeenSet;
}

string SubmitMemeJobRequest::GetInputImage() const
{
    return m_inputImage;
}

void SubmitMemeJobRequest::SetInputImage(const string& _inputImage)
{
    m_inputImage = _inputImage;
    m_inputImageHasBeenSet = true;
}

bool SubmitMemeJobRequest::InputImageHasBeenSet() const
{
    return m_inputImageHasBeenSet;
}

string SubmitMemeJobRequest::GetInputUrl() const
{
    return m_inputUrl;
}

void SubmitMemeJobRequest::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool SubmitMemeJobRequest::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

int64_t SubmitMemeJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitMemeJobRequest::SetResolution(const int64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitMemeJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string SubmitMemeJobRequest::GetText() const
{
    return m_text;
}

void SubmitMemeJobRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SubmitMemeJobRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

bool SubmitMemeJobRequest::GetHaircut() const
{
    return m_haircut;
}

void SubmitMemeJobRequest::SetHaircut(const bool& _haircut)
{
    m_haircut = _haircut;
    m_haircutHasBeenSet = true;
}

bool SubmitMemeJobRequest::HaircutHasBeenSet() const
{
    return m_haircutHasBeenSet;
}

int64_t SubmitMemeJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitMemeJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitMemeJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitMemeJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitMemeJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitMemeJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



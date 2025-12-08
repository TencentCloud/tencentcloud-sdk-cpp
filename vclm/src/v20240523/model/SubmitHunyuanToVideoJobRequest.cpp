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

#include <tencentcloud/vclm/v20240523/model/SubmitHunyuanToVideoJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitHunyuanToVideoJobRequest::SubmitHunyuanToVideoJobRequest() :
    m_promptHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitHunyuanToVideoJobRequest::ToJsonString() const
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

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
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


string SubmitHunyuanToVideoJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanToVideoJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanToVideoJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

Image SubmitHunyuanToVideoJobRequest::GetImage() const
{
    return m_image;
}

void SubmitHunyuanToVideoJobRequest::SetImage(const Image& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitHunyuanToVideoJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitHunyuanToVideoJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitHunyuanToVideoJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitHunyuanToVideoJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t SubmitHunyuanToVideoJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitHunyuanToVideoJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitHunyuanToVideoJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitHunyuanToVideoJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitHunyuanToVideoJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitHunyuanToVideoJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



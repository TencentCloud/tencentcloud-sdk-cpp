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

#include <tencentcloud/aiart/v20221229/model/TextToImageRapidRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

TextToImageRapidRequest::TextToImageRapidRequest() :
    m_promptHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string TextToImageRapidRequest::ToJsonString() const
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

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seed, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
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

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToImageRapidRequest::GetPrompt() const
{
    return m_prompt;
}

void TextToImageRapidRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool TextToImageRapidRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string TextToImageRapidRequest::GetResolution() const
{
    return m_resolution;
}

void TextToImageRapidRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool TextToImageRapidRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t TextToImageRapidRequest::GetSeed() const
{
    return m_seed;
}

void TextToImageRapidRequest::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool TextToImageRapidRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

Image TextToImageRapidRequest::GetImage() const
{
    return m_image;
}

void TextToImageRapidRequest::SetImage(const Image& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool TextToImageRapidRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string TextToImageRapidRequest::GetStyle() const
{
    return m_style;
}

void TextToImageRapidRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool TextToImageRapidRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

int64_t TextToImageRapidRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void TextToImageRapidRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool TextToImageRapidRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam TextToImageRapidRequest::GetLogoParam() const
{
    return m_logoParam;
}

void TextToImageRapidRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool TextToImageRapidRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string TextToImageRapidRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void TextToImageRapidRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool TextToImageRapidRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}



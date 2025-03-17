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

#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanImageJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SubmitHunyuanImageJobRequest::SubmitHunyuanImageJobRequest() :
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_numHasBeenSet(false),
    m_clarityHasBeenSet(false),
    m_contentImageHasBeenSet(false),
    m_reviseHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitHunyuanImageJobRequest::ToJsonString() const
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

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_num, allocator);
    }

    if (m_clarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clarity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clarity.c_str(), allocator).Move(), allocator);
    }

    if (m_contentImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentImage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revise";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_revise, allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seed, allocator);
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


string SubmitHunyuanImageJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanImageJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuanImageJobRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void SubmitHunyuanImageJobRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

string SubmitHunyuanImageJobRequest::GetStyle() const
{
    return m_style;
}

void SubmitHunyuanImageJobRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string SubmitHunyuanImageJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitHunyuanImageJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t SubmitHunyuanImageJobRequest::GetNum() const
{
    return m_num;
}

void SubmitHunyuanImageJobRequest::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

string SubmitHunyuanImageJobRequest::GetClarity() const
{
    return m_clarity;
}

void SubmitHunyuanImageJobRequest::SetClarity(const string& _clarity)
{
    m_clarity = _clarity;
    m_clarityHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::ClarityHasBeenSet() const
{
    return m_clarityHasBeenSet;
}

Image SubmitHunyuanImageJobRequest::GetContentImage() const
{
    return m_contentImage;
}

void SubmitHunyuanImageJobRequest::SetContentImage(const Image& _contentImage)
{
    m_contentImage = _contentImage;
    m_contentImageHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::ContentImageHasBeenSet() const
{
    return m_contentImageHasBeenSet;
}

int64_t SubmitHunyuanImageJobRequest::GetRevise() const
{
    return m_revise;
}

void SubmitHunyuanImageJobRequest::SetRevise(const int64_t& _revise)
{
    m_revise = _revise;
    m_reviseHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::ReviseHasBeenSet() const
{
    return m_reviseHasBeenSet;
}

int64_t SubmitHunyuanImageJobRequest::GetSeed() const
{
    return m_seed;
}

void SubmitHunyuanImageJobRequest::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

int64_t SubmitHunyuanImageJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitHunyuanImageJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitHunyuanImageJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitHunyuanImageJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitHunyuanImageJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}



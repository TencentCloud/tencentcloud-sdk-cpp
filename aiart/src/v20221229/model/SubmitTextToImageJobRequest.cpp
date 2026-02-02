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

#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

SubmitTextToImageJobRequest::SubmitTextToImageJobRequest() :
    m_promptHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_reviseHasBeenSet(false)
{
}

string SubmitTextToImageJobRequest::ToJsonString() const
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

    if (m_reviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revise";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_revise, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTextToImageJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitTextToImageJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

vector<string> SubmitTextToImageJobRequest::GetImages() const
{
    return m_images;
}

void SubmitTextToImageJobRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

string SubmitTextToImageJobRequest::GetResolution() const
{
    return m_resolution;
}

void SubmitTextToImageJobRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t SubmitTextToImageJobRequest::GetSeed() const
{
    return m_seed;
}

void SubmitTextToImageJobRequest::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

int64_t SubmitTextToImageJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitTextToImageJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitTextToImageJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitTextToImageJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

int64_t SubmitTextToImageJobRequest::GetRevise() const
{
    return m_revise;
}

void SubmitTextToImageJobRequest::SetRevise(const int64_t& _revise)
{
    m_revise = _revise;
    m_reviseHasBeenSet = true;
}

bool SubmitTextToImageJobRequest::ReviseHasBeenSet() const
{
    return m_reviseHasBeenSet;
}



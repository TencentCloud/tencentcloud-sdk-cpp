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

#include <tencentcloud/mps/v20190612/model/SubmitHunyuan3DTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubmitHunyuan3DTaskRequest::SubmitHunyuan3DTaskRequest() :
    m_promptHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_multiViewImagesHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_meshUrlHasBeenSet(false),
    m_enablePBRHasBeenSet(false),
    m_faceCountHasBeenSet(false),
    m_keepUVHasBeenSet(false),
    m_resultFormatHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

string SubmitHunyuan3DTaskRequest::ToJsonString() const
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

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_multiViewImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiViewImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiViewImages.begin(); itr != m_multiViewImages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_meshUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePBRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePBR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePBR, allocator);
    }

    if (m_faceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceCount, allocator);
    }

    if (m_keepUVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepUV";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_keepUV, allocator);
    }

    if (m_resultFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seed, allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitHunyuan3DTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuan3DTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuan3DTaskRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitHunyuan3DTaskRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

vector<ViewImage> SubmitHunyuan3DTaskRequest::GetMultiViewImages() const
{
    return m_multiViewImages;
}

void SubmitHunyuan3DTaskRequest::SetMultiViewImages(const vector<ViewImage>& _multiViewImages)
{
    m_multiViewImages = _multiViewImages;
    m_multiViewImagesHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::MultiViewImagesHasBeenSet() const
{
    return m_multiViewImagesHasBeenSet;
}

string SubmitHunyuan3DTaskRequest::GetGenerateType() const
{
    return m_generateType;
}

void SubmitHunyuan3DTaskRequest::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string SubmitHunyuan3DTaskRequest::GetMeshUrl() const
{
    return m_meshUrl;
}

void SubmitHunyuan3DTaskRequest::SetMeshUrl(const string& _meshUrl)
{
    m_meshUrl = _meshUrl;
    m_meshUrlHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::MeshUrlHasBeenSet() const
{
    return m_meshUrlHasBeenSet;
}

bool SubmitHunyuan3DTaskRequest::GetEnablePBR() const
{
    return m_enablePBR;
}

void SubmitHunyuan3DTaskRequest::SetEnablePBR(const bool& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}

uint64_t SubmitHunyuan3DTaskRequest::GetFaceCount() const
{
    return m_faceCount;
}

void SubmitHunyuan3DTaskRequest::SetFaceCount(const uint64_t& _faceCount)
{
    m_faceCount = _faceCount;
    m_faceCountHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::FaceCountHasBeenSet() const
{
    return m_faceCountHasBeenSet;
}

bool SubmitHunyuan3DTaskRequest::GetKeepUV() const
{
    return m_keepUV;
}

void SubmitHunyuan3DTaskRequest::SetKeepUV(const bool& _keepUV)
{
    m_keepUV = _keepUV;
    m_keepUVHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::KeepUVHasBeenSet() const
{
    return m_keepUVHasBeenSet;
}

string SubmitHunyuan3DTaskRequest::GetResultFormat() const
{
    return m_resultFormat;
}

void SubmitHunyuan3DTaskRequest::SetResultFormat(const string& _resultFormat)
{
    m_resultFormat = _resultFormat;
    m_resultFormatHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::ResultFormatHasBeenSet() const
{
    return m_resultFormatHasBeenSet;
}

uint64_t SubmitHunyuan3DTaskRequest::GetSeed() const
{
    return m_seed;
}

void SubmitHunyuan3DTaskRequest::SetSeed(const uint64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

string SubmitHunyuan3DTaskRequest::GetStyle() const
{
    return m_style;
}

void SubmitHunyuan3DTaskRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SubmitHunyuan3DTaskRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}



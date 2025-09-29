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

#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DProJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitHunyuanTo3DProJobRequest::SubmitHunyuanTo3DProJobRequest() :
    m_promptHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_multiViewImagesHasBeenSet(false),
    m_enablePBRHasBeenSet(false),
    m_faceCountHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_polygonTypeHasBeenSet(false)
{
}

string SubmitHunyuanTo3DProJobRequest::ToJsonString() const
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

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
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

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_polygonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolygonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_polygonType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitHunyuanTo3DProJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanTo3DProJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuanTo3DProJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitHunyuanTo3DProJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitHunyuanTo3DProJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitHunyuanTo3DProJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

vector<ViewImage> SubmitHunyuanTo3DProJobRequest::GetMultiViewImages() const
{
    return m_multiViewImages;
}

void SubmitHunyuanTo3DProJobRequest::SetMultiViewImages(const vector<ViewImage>& _multiViewImages)
{
    m_multiViewImages = _multiViewImages;
    m_multiViewImagesHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::MultiViewImagesHasBeenSet() const
{
    return m_multiViewImagesHasBeenSet;
}

bool SubmitHunyuanTo3DProJobRequest::GetEnablePBR() const
{
    return m_enablePBR;
}

void SubmitHunyuanTo3DProJobRequest::SetEnablePBR(const bool& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}

int64_t SubmitHunyuanTo3DProJobRequest::GetFaceCount() const
{
    return m_faceCount;
}

void SubmitHunyuanTo3DProJobRequest::SetFaceCount(const int64_t& _faceCount)
{
    m_faceCount = _faceCount;
    m_faceCountHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::FaceCountHasBeenSet() const
{
    return m_faceCountHasBeenSet;
}

string SubmitHunyuanTo3DProJobRequest::GetGenerateType() const
{
    return m_generateType;
}

void SubmitHunyuanTo3DProJobRequest::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

string SubmitHunyuanTo3DProJobRequest::GetPolygonType() const
{
    return m_polygonType;
}

void SubmitHunyuanTo3DProJobRequest::SetPolygonType(const string& _polygonType)
{
    m_polygonType = _polygonType;
    m_polygonTypeHasBeenSet = true;
}

bool SubmitHunyuanTo3DProJobRequest::PolygonTypeHasBeenSet() const
{
    return m_polygonTypeHasBeenSet;
}



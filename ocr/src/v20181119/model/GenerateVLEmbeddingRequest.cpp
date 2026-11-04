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

#include <tencentcloud/ocr/v20181119/model/GenerateVLEmbeddingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GenerateVLEmbeddingRequest::GenerateVLEmbeddingRequest() :
    m_modelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_searchModeHasBeenSet(false)
{
}

string GenerateVLEmbeddingRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_searchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateVLEmbeddingRequest::GetModel() const
{
    return m_model;
}

void GenerateVLEmbeddingRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string GenerateVLEmbeddingRequest::GetType() const
{
    return m_type;
}

void GenerateVLEmbeddingRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GenerateVLEmbeddingRequest::GetText() const
{
    return m_text;
}

void GenerateVLEmbeddingRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string GenerateVLEmbeddingRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GenerateVLEmbeddingRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string GenerateVLEmbeddingRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void GenerateVLEmbeddingRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

string GenerateVLEmbeddingRequest::GetSearchMode() const
{
    return m_searchMode;
}

void GenerateVLEmbeddingRequest::SetSearchMode(const string& _searchMode)
{
    m_searchMode = _searchMode;
    m_searchModeHasBeenSet = true;
}

bool GenerateVLEmbeddingRequest::SearchModeHasBeenSet() const
{
    return m_searchModeHasBeenSet;
}



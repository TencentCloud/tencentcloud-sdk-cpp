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

#include <tencentcloud/es/v20250101/model/GetMultiModalEmbeddingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

GetMultiModalEmbeddingRequest::GetMultiModalEmbeddingRequest() :
    m_modelNameHasBeenSet(false),
    m_textsHasBeenSet(false),
    m_imageDataHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

string GetMultiModalEmbeddingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_textsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Texts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_texts.begin(); itr != m_texts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageData.begin(); itr != m_imageData.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrl.begin(); itr != m_imageUrl.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetMultiModalEmbeddingRequest::GetModelName() const
{
    return m_modelName;
}

void GetMultiModalEmbeddingRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool GetMultiModalEmbeddingRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

vector<string> GetMultiModalEmbeddingRequest::GetTexts() const
{
    return m_texts;
}

void GetMultiModalEmbeddingRequest::SetTexts(const vector<string>& _texts)
{
    m_texts = _texts;
    m_textsHasBeenSet = true;
}

bool GetMultiModalEmbeddingRequest::TextsHasBeenSet() const
{
    return m_textsHasBeenSet;
}

vector<string> GetMultiModalEmbeddingRequest::GetImageData() const
{
    return m_imageData;
}

void GetMultiModalEmbeddingRequest::SetImageData(const vector<string>& _imageData)
{
    m_imageData = _imageData;
    m_imageDataHasBeenSet = true;
}

bool GetMultiModalEmbeddingRequest::ImageDataHasBeenSet() const
{
    return m_imageDataHasBeenSet;
}

vector<string> GetMultiModalEmbeddingRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GetMultiModalEmbeddingRequest::SetImageUrl(const vector<string>& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GetMultiModalEmbeddingRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}



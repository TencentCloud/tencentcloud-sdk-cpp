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

#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralBasicOCRRequest::GeneralBasicOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_languageTypeHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_isWordsHasBeenSet(false)
{
}

string GeneralBasicOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_languageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_languageType.c_str(), allocator).Move(), allocator);
    }

    if (m_isPdfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPdf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPdf, allocator);
    }

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_isWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWords, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GeneralBasicOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void GeneralBasicOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool GeneralBasicOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string GeneralBasicOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GeneralBasicOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GeneralBasicOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string GeneralBasicOCRRequest::GetScene() const
{
    return m_scene;
}

void GeneralBasicOCRRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool GeneralBasicOCRRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string GeneralBasicOCRRequest::GetLanguageType() const
{
    return m_languageType;
}

void GeneralBasicOCRRequest::SetLanguageType(const string& _languageType)
{
    m_languageType = _languageType;
    m_languageTypeHasBeenSet = true;
}

bool GeneralBasicOCRRequest::LanguageTypeHasBeenSet() const
{
    return m_languageTypeHasBeenSet;
}

bool GeneralBasicOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void GeneralBasicOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool GeneralBasicOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

uint64_t GeneralBasicOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void GeneralBasicOCRRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool GeneralBasicOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool GeneralBasicOCRRequest::GetIsWords() const
{
    return m_isWords;
}

void GeneralBasicOCRRequest::SetIsWords(const bool& _isWords)
{
    m_isWords = _isWords;
    m_isWordsHasBeenSet = true;
}

bool GeneralBasicOCRRequest::IsWordsHasBeenSet() const
{
    return m_isWordsHasBeenSet;
}



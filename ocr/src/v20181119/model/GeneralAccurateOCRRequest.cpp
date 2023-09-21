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

#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralAccurateOCRRequest::GeneralAccurateOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_isWordsHasBeenSet(false),
    m_enableDetectSplitHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_enableDetectTextHasBeenSet(false)
{
}

string GeneralAccurateOCRRequest::ToJsonString() const
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

    if (m_isWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWords, allocator);
    }

    if (m_enableDetectSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetectSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetectSplit, allocator);
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

    if (m_enableDetectTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDetectText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDetectText, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GeneralAccurateOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void GeneralAccurateOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool GeneralAccurateOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string GeneralAccurateOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void GeneralAccurateOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool GeneralAccurateOCRRequest::GetIsWords() const
{
    return m_isWords;
}

void GeneralAccurateOCRRequest::SetIsWords(const bool& _isWords)
{
    m_isWords = _isWords;
    m_isWordsHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::IsWordsHasBeenSet() const
{
    return m_isWordsHasBeenSet;
}

bool GeneralAccurateOCRRequest::GetEnableDetectSplit() const
{
    return m_enableDetectSplit;
}

void GeneralAccurateOCRRequest::SetEnableDetectSplit(const bool& _enableDetectSplit)
{
    m_enableDetectSplit = _enableDetectSplit;
    m_enableDetectSplitHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::EnableDetectSplitHasBeenSet() const
{
    return m_enableDetectSplitHasBeenSet;
}

bool GeneralAccurateOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void GeneralAccurateOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

uint64_t GeneralAccurateOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void GeneralAccurateOCRRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool GeneralAccurateOCRRequest::GetEnableDetectText() const
{
    return m_enableDetectText;
}

void GeneralAccurateOCRRequest::SetEnableDetectText(const bool& _enableDetectText)
{
    m_enableDetectText = _enableDetectText;
    m_enableDetectTextHasBeenSet = true;
}

bool GeneralAccurateOCRRequest::EnableDetectTextHasBeenSet() const
{
    return m_enableDetectTextHasBeenSet;
}



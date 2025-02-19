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

#include <tencentcloud/ocr/v20181119/model/QuestionSplitOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuestionSplitOCRRequest::QuestionSplitOCRRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_enableImageCropHasBeenSet(false),
    m_enableOnlyDetectBorderHasBeenSet(false)
{
}

string QuestionSplitOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
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

    if (m_enableImageCropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableImageCrop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableImageCrop, allocator);
    }

    if (m_enableOnlyDetectBorderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOnlyDetectBorder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableOnlyDetectBorder, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QuestionSplitOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void QuestionSplitOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool QuestionSplitOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string QuestionSplitOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void QuestionSplitOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool QuestionSplitOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool QuestionSplitOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void QuestionSplitOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool QuestionSplitOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

uint64_t QuestionSplitOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void QuestionSplitOCRRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool QuestionSplitOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool QuestionSplitOCRRequest::GetEnableImageCrop() const
{
    return m_enableImageCrop;
}

void QuestionSplitOCRRequest::SetEnableImageCrop(const bool& _enableImageCrop)
{
    m_enableImageCrop = _enableImageCrop;
    m_enableImageCropHasBeenSet = true;
}

bool QuestionSplitOCRRequest::EnableImageCropHasBeenSet() const
{
    return m_enableImageCropHasBeenSet;
}

bool QuestionSplitOCRRequest::GetEnableOnlyDetectBorder() const
{
    return m_enableOnlyDetectBorder;
}

void QuestionSplitOCRRequest::SetEnableOnlyDetectBorder(const bool& _enableOnlyDetectBorder)
{
    m_enableOnlyDetectBorder = _enableOnlyDetectBorder;
    m_enableOnlyDetectBorderHasBeenSet = true;
}

bool QuestionSplitOCRRequest::EnableOnlyDetectBorderHasBeenSet() const
{
    return m_enableOnlyDetectBorderHasBeenSet;
}



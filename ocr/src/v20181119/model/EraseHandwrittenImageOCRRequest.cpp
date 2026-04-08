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

#include <tencentcloud/ocr/v20181119/model/EraseHandwrittenImageOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

EraseHandwrittenImageOCRRequest::EraseHandwrittenImageOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_deskewHasBeenSet(false),
    m_sharpenHasBeenSet(false),
    m_grayscaleHasBeenSet(false)
{
}

string EraseHandwrittenImageOCRRequest::ToJsonString() const
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

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_cropHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crop, allocator);
    }

    if (m_deskewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deskew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deskew, allocator);
    }

    if (m_sharpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sharpen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sharpen, allocator);
    }

    if (m_grayscaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grayscale";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_grayscale, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EraseHandwrittenImageOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void EraseHandwrittenImageOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string EraseHandwrittenImageOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void EraseHandwrittenImageOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t EraseHandwrittenImageOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void EraseHandwrittenImageOCRRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

int64_t EraseHandwrittenImageOCRRequest::GetCrop() const
{
    return m_crop;
}

void EraseHandwrittenImageOCRRequest::SetCrop(const int64_t& _crop)
{
    m_crop = _crop;
    m_cropHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::CropHasBeenSet() const
{
    return m_cropHasBeenSet;
}

int64_t EraseHandwrittenImageOCRRequest::GetDeskew() const
{
    return m_deskew;
}

void EraseHandwrittenImageOCRRequest::SetDeskew(const int64_t& _deskew)
{
    m_deskew = _deskew;
    m_deskewHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::DeskewHasBeenSet() const
{
    return m_deskewHasBeenSet;
}

int64_t EraseHandwrittenImageOCRRequest::GetSharpen() const
{
    return m_sharpen;
}

void EraseHandwrittenImageOCRRequest::SetSharpen(const int64_t& _sharpen)
{
    m_sharpen = _sharpen;
    m_sharpenHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::SharpenHasBeenSet() const
{
    return m_sharpenHasBeenSet;
}

int64_t EraseHandwrittenImageOCRRequest::GetGrayscale() const
{
    return m_grayscale;
}

void EraseHandwrittenImageOCRRequest::SetGrayscale(const int64_t& _grayscale)
{
    m_grayscale = _grayscale;
    m_grayscaleHasBeenSet = true;
}

bool EraseHandwrittenImageOCRRequest::GrayscaleHasBeenSet() const
{
    return m_grayscaleHasBeenSet;
}



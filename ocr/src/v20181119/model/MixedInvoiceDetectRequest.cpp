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

#include <tencentcloud/ocr/v20181119/model/MixedInvoiceDetectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MixedInvoiceDetectRequest::MixedInvoiceDetectRequest() :
    m_returnImageHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false)
{
}

string MixedInvoiceDetectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_returnImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnImage, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool MixedInvoiceDetectRequest::GetReturnImage() const
{
    return m_returnImage;
}

void MixedInvoiceDetectRequest::SetReturnImage(const bool& _returnImage)
{
    m_returnImage = _returnImage;
    m_returnImageHasBeenSet = true;
}

bool MixedInvoiceDetectRequest::ReturnImageHasBeenSet() const
{
    return m_returnImageHasBeenSet;
}

string MixedInvoiceDetectRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void MixedInvoiceDetectRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool MixedInvoiceDetectRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string MixedInvoiceDetectRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void MixedInvoiceDetectRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool MixedInvoiceDetectRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool MixedInvoiceDetectRequest::GetIsPdf() const
{
    return m_isPdf;
}

void MixedInvoiceDetectRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool MixedInvoiceDetectRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

int64_t MixedInvoiceDetectRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void MixedInvoiceDetectRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool MixedInvoiceDetectRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}



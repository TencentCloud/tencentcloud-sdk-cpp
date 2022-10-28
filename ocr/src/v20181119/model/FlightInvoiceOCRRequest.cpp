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

#include <tencentcloud/ocr/v20181119/model/FlightInvoiceOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

FlightInvoiceOCRRequest::FlightInvoiceOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false)
{
}

string FlightInvoiceOCRRequest::ToJsonString() const
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


string FlightInvoiceOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void FlightInvoiceOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool FlightInvoiceOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string FlightInvoiceOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void FlightInvoiceOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool FlightInvoiceOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool FlightInvoiceOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void FlightInvoiceOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool FlightInvoiceOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

int64_t FlightInvoiceOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void FlightInvoiceOCRRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool FlightInvoiceOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}



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

#include <tencentcloud/ocr/v20181119/model/RecognizeTableMultiOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeTableMultiOCRRequest::RecognizeTableMultiOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_pdfStartPageNumberHasBeenSet(false),
    m_pdfEndPageNumberHasBeenSet(false),
    m_dataFormatHasBeenSet(false)
{
}

string RecognizeTableMultiOCRRequest::ToJsonString() const
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

    if (m_pdfStartPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfStartPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfStartPageNumber, allocator);
    }

    if (m_pdfEndPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfEndPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfEndPageNumber, allocator);
    }

    if (m_dataFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFormat.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeTableMultiOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeTableMultiOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeTableMultiOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeTableMultiOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeTableMultiOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeTableMultiOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t RecognizeTableMultiOCRRequest::GetPdfStartPageNumber() const
{
    return m_pdfStartPageNumber;
}

void RecognizeTableMultiOCRRequest::SetPdfStartPageNumber(const int64_t& _pdfStartPageNumber)
{
    m_pdfStartPageNumber = _pdfStartPageNumber;
    m_pdfStartPageNumberHasBeenSet = true;
}

bool RecognizeTableMultiOCRRequest::PdfStartPageNumberHasBeenSet() const
{
    return m_pdfStartPageNumberHasBeenSet;
}

int64_t RecognizeTableMultiOCRRequest::GetPdfEndPageNumber() const
{
    return m_pdfEndPageNumber;
}

void RecognizeTableMultiOCRRequest::SetPdfEndPageNumber(const int64_t& _pdfEndPageNumber)
{
    m_pdfEndPageNumber = _pdfEndPageNumber;
    m_pdfEndPageNumberHasBeenSet = true;
}

bool RecognizeTableMultiOCRRequest::PdfEndPageNumberHasBeenSet() const
{
    return m_pdfEndPageNumberHasBeenSet;
}

string RecognizeTableMultiOCRRequest::GetDataFormat() const
{
    return m_dataFormat;
}

void RecognizeTableMultiOCRRequest::SetDataFormat(const string& _dataFormat)
{
    m_dataFormat = _dataFormat;
    m_dataFormatHasBeenSet = true;
}

bool RecognizeTableMultiOCRRequest::DataFormatHasBeenSet() const
{
    return m_dataFormatHasBeenSet;
}



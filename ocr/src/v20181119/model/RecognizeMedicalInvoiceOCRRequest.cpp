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

#include <tencentcloud/ocr/v20181119/model/RecognizeMedicalInvoiceOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMedicalInvoiceOCRRequest::RecognizeMedicalInvoiceOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_returnVertexHasBeenSet(false),
    m_returnCoordHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false)
{
}

string RecognizeMedicalInvoiceOCRRequest::ToJsonString() const
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

    if (m_returnVertexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnVertex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnVertex, allocator);
    }

    if (m_returnCoordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCoord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnCoord, allocator);
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


string RecognizeMedicalInvoiceOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeMedicalInvoiceOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeMedicalInvoiceOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeMedicalInvoiceOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool RecognizeMedicalInvoiceOCRRequest::GetReturnVertex() const
{
    return m_returnVertex;
}

void RecognizeMedicalInvoiceOCRRequest::SetReturnVertex(const bool& _returnVertex)
{
    m_returnVertex = _returnVertex;
    m_returnVertexHasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::ReturnVertexHasBeenSet() const
{
    return m_returnVertexHasBeenSet;
}

bool RecognizeMedicalInvoiceOCRRequest::GetReturnCoord() const
{
    return m_returnCoord;
}

void RecognizeMedicalInvoiceOCRRequest::SetReturnCoord(const bool& _returnCoord)
{
    m_returnCoord = _returnCoord;
    m_returnCoordHasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::ReturnCoordHasBeenSet() const
{
    return m_returnCoordHasBeenSet;
}

bool RecognizeMedicalInvoiceOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void RecognizeMedicalInvoiceOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

int64_t RecognizeMedicalInvoiceOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void RecognizeMedicalInvoiceOCRRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool RecognizeMedicalInvoiceOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}



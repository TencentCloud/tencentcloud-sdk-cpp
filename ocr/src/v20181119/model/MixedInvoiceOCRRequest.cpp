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

#include <tencentcloud/ocr/v20181119/model/MixedInvoiceOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MixedInvoiceOCRRequest::MixedInvoiceOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_returnOtherHasBeenSet(false),
    m_isPdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_returnMultiplePageHasBeenSet(false)
{
}

string MixedInvoiceOCRRequest::ToJsonString() const
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

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_returnOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnOther";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_returnOther.c_str(), allocator).Move(), allocator);
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

    if (m_returnMultiplePageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnMultiplePage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnMultiplePage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MixedInvoiceOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void MixedInvoiceOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool MixedInvoiceOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string MixedInvoiceOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void MixedInvoiceOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

vector<int64_t> MixedInvoiceOCRRequest::GetTypes() const
{
    return m_types;
}

void MixedInvoiceOCRRequest::SetTypes(const vector<int64_t>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

string MixedInvoiceOCRRequest::GetReturnOther() const
{
    return m_returnOther;
}

void MixedInvoiceOCRRequest::SetReturnOther(const string& _returnOther)
{
    m_returnOther = _returnOther;
    m_returnOtherHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::ReturnOtherHasBeenSet() const
{
    return m_returnOtherHasBeenSet;
}

bool MixedInvoiceOCRRequest::GetIsPdf() const
{
    return m_isPdf;
}

void MixedInvoiceOCRRequest::SetIsPdf(const bool& _isPdf)
{
    m_isPdf = _isPdf;
    m_isPdfHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::IsPdfHasBeenSet() const
{
    return m_isPdfHasBeenSet;
}

int64_t MixedInvoiceOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void MixedInvoiceOCRRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool MixedInvoiceOCRRequest::GetReturnMultiplePage() const
{
    return m_returnMultiplePage;
}

void MixedInvoiceOCRRequest::SetReturnMultiplePage(const bool& _returnMultiplePage)
{
    m_returnMultiplePage = _returnMultiplePage;
    m_returnMultiplePageHasBeenSet = true;
}

bool MixedInvoiceOCRRequest::ReturnMultiplePageHasBeenSet() const
{
    return m_returnMultiplePageHasBeenSet;
}



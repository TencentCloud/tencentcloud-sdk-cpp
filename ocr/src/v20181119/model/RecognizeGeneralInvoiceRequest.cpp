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

#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeGeneralInvoiceRequest::RecognizeGeneralInvoiceRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_enableOtherHasBeenSet(false),
    m_enablePdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_enableMultiplePageHasBeenSet(false),
    m_enableCutImageHasBeenSet(false),
    m_enableItemPolygonHasBeenSet(false),
    m_enableQRCodeHasBeenSet(false),
    m_enableSealHasBeenSet(false)
{
}

string RecognizeGeneralInvoiceRequest::ToJsonString() const
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

    if (m_enableOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOther";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableOther, allocator);
    }

    if (m_enablePdfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePdf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePdf, allocator);
    }

    if (m_pdfPageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageNumber, allocator);
    }

    if (m_enableMultiplePageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMultiplePage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMultiplePage, allocator);
    }

    if (m_enableCutImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCutImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCutImage, allocator);
    }

    if (m_enableItemPolygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableItemPolygon";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableItemPolygon, allocator);
    }

    if (m_enableQRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableQRCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableQRCode, allocator);
    }

    if (m_enableSealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSeal";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSeal, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeGeneralInvoiceRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeGeneralInvoiceRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeGeneralInvoiceRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeGeneralInvoiceRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

vector<int64_t> RecognizeGeneralInvoiceRequest::GetTypes() const
{
    return m_types;
}

void RecognizeGeneralInvoiceRequest::SetTypes(const vector<int64_t>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableOther() const
{
    return m_enableOther;
}

void RecognizeGeneralInvoiceRequest::SetEnableOther(const bool& _enableOther)
{
    m_enableOther = _enableOther;
    m_enableOtherHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableOtherHasBeenSet() const
{
    return m_enableOtherHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnablePdf() const
{
    return m_enablePdf;
}

void RecognizeGeneralInvoiceRequest::SetEnablePdf(const bool& _enablePdf)
{
    m_enablePdf = _enablePdf;
    m_enablePdfHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnablePdfHasBeenSet() const
{
    return m_enablePdfHasBeenSet;
}

int64_t RecognizeGeneralInvoiceRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void RecognizeGeneralInvoiceRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableMultiplePage() const
{
    return m_enableMultiplePage;
}

void RecognizeGeneralInvoiceRequest::SetEnableMultiplePage(const bool& _enableMultiplePage)
{
    m_enableMultiplePage = _enableMultiplePage;
    m_enableMultiplePageHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableMultiplePageHasBeenSet() const
{
    return m_enableMultiplePageHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableCutImage() const
{
    return m_enableCutImage;
}

void RecognizeGeneralInvoiceRequest::SetEnableCutImage(const bool& _enableCutImage)
{
    m_enableCutImage = _enableCutImage;
    m_enableCutImageHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableCutImageHasBeenSet() const
{
    return m_enableCutImageHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableItemPolygon() const
{
    return m_enableItemPolygon;
}

void RecognizeGeneralInvoiceRequest::SetEnableItemPolygon(const bool& _enableItemPolygon)
{
    m_enableItemPolygon = _enableItemPolygon;
    m_enableItemPolygonHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableItemPolygonHasBeenSet() const
{
    return m_enableItemPolygonHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableQRCode() const
{
    return m_enableQRCode;
}

void RecognizeGeneralInvoiceRequest::SetEnableQRCode(const bool& _enableQRCode)
{
    m_enableQRCode = _enableQRCode;
    m_enableQRCodeHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableQRCodeHasBeenSet() const
{
    return m_enableQRCodeHasBeenSet;
}

bool RecognizeGeneralInvoiceRequest::GetEnableSeal() const
{
    return m_enableSeal;
}

void RecognizeGeneralInvoiceRequest::SetEnableSeal(const bool& _enableSeal)
{
    m_enableSeal = _enableSeal;
    m_enableSealHasBeenSet = true;
}

bool RecognizeGeneralInvoiceRequest::EnableSealHasBeenSet() const
{
    return m_enableSealHasBeenSet;
}



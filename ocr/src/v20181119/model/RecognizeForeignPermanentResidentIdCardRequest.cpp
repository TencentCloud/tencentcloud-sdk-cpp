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

#include <tencentcloud/ocr/v20181119/model/RecognizeForeignPermanentResidentIdCardRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeForeignPermanentResidentIdCardRequest::RecognizeForeignPermanentResidentIdCardRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_enablePdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_cropPortraitHasBeenSet(false)
{
}

string RecognizeForeignPermanentResidentIdCardRequest::ToJsonString() const
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

    if (m_cropPortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropPortrait";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cropPortrait, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeForeignPermanentResidentIdCardRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeForeignPermanentResidentIdCardRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeForeignPermanentResidentIdCardRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeForeignPermanentResidentIdCardRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeForeignPermanentResidentIdCardRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeForeignPermanentResidentIdCardRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool RecognizeForeignPermanentResidentIdCardRequest::GetEnablePdf() const
{
    return m_enablePdf;
}

void RecognizeForeignPermanentResidentIdCardRequest::SetEnablePdf(const bool& _enablePdf)
{
    m_enablePdf = _enablePdf;
    m_enablePdfHasBeenSet = true;
}

bool RecognizeForeignPermanentResidentIdCardRequest::EnablePdfHasBeenSet() const
{
    return m_enablePdfHasBeenSet;
}

uint64_t RecognizeForeignPermanentResidentIdCardRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void RecognizeForeignPermanentResidentIdCardRequest::SetPdfPageNumber(const uint64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool RecognizeForeignPermanentResidentIdCardRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

bool RecognizeForeignPermanentResidentIdCardRequest::GetCropPortrait() const
{
    return m_cropPortrait;
}

void RecognizeForeignPermanentResidentIdCardRequest::SetCropPortrait(const bool& _cropPortrait)
{
    m_cropPortrait = _cropPortrait;
    m_cropPortraitHasBeenSet = true;
}

bool RecognizeForeignPermanentResidentIdCardRequest::CropPortraitHasBeenSet() const
{
    return m_cropPortraitHasBeenSet;
}



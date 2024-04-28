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

#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralTextImageWarnRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeGeneralTextImageWarnRequest::RecognizeGeneralTextImageWarnRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_enablePdfHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string RecognizeGeneralTextImageWarnRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeGeneralTextImageWarnRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeGeneralTextImageWarnRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeGeneralTextImageWarnRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeGeneralTextImageWarnRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeGeneralTextImageWarnRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeGeneralTextImageWarnRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool RecognizeGeneralTextImageWarnRequest::GetEnablePdf() const
{
    return m_enablePdf;
}

void RecognizeGeneralTextImageWarnRequest::SetEnablePdf(const bool& _enablePdf)
{
    m_enablePdf = _enablePdf;
    m_enablePdfHasBeenSet = true;
}

bool RecognizeGeneralTextImageWarnRequest::EnablePdfHasBeenSet() const
{
    return m_enablePdfHasBeenSet;
}

int64_t RecognizeGeneralTextImageWarnRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void RecognizeGeneralTextImageWarnRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool RecognizeGeneralTextImageWarnRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

string RecognizeGeneralTextImageWarnRequest::GetType() const
{
    return m_type;
}

void RecognizeGeneralTextImageWarnRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RecognizeGeneralTextImageWarnRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}



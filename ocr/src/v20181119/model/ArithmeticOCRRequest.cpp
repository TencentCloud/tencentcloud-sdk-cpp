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

#include <tencentcloud/ocr/v20181119/model/ArithmeticOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ArithmeticOCRRequest::ArithmeticOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_supportHorizontalImageHasBeenSet(false),
    m_rejectNonArithmeticPicHasBeenSet(false),
    m_enableDispRelatedVerticalHasBeenSet(false),
    m_enableDispMidResultHasBeenSet(false),
    m_enablePdfRecognizeHasBeenSet(false),
    m_pdfPageIndexHasBeenSet(false)
{
}

string ArithmeticOCRRequest::ToJsonString() const
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

    if (m_supportHorizontalImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportHorizontalImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_supportHorizontalImage, allocator);
    }

    if (m_rejectNonArithmeticPicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RejectNonArithmeticPic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rejectNonArithmeticPic, allocator);
    }

    if (m_enableDispRelatedVerticalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDispRelatedVertical";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDispRelatedVertical, allocator);
    }

    if (m_enableDispMidResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDispMidResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDispMidResult, allocator);
    }

    if (m_enablePdfRecognizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePdfRecognize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePdfRecognize, allocator);
    }

    if (m_pdfPageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pdfPageIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ArithmeticOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void ArithmeticOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ArithmeticOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string ArithmeticOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void ArithmeticOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool ArithmeticOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool ArithmeticOCRRequest::GetSupportHorizontalImage() const
{
    return m_supportHorizontalImage;
}

void ArithmeticOCRRequest::SetSupportHorizontalImage(const bool& _supportHorizontalImage)
{
    m_supportHorizontalImage = _supportHorizontalImage;
    m_supportHorizontalImageHasBeenSet = true;
}

bool ArithmeticOCRRequest::SupportHorizontalImageHasBeenSet() const
{
    return m_supportHorizontalImageHasBeenSet;
}

bool ArithmeticOCRRequest::GetRejectNonArithmeticPic() const
{
    return m_rejectNonArithmeticPic;
}

void ArithmeticOCRRequest::SetRejectNonArithmeticPic(const bool& _rejectNonArithmeticPic)
{
    m_rejectNonArithmeticPic = _rejectNonArithmeticPic;
    m_rejectNonArithmeticPicHasBeenSet = true;
}

bool ArithmeticOCRRequest::RejectNonArithmeticPicHasBeenSet() const
{
    return m_rejectNonArithmeticPicHasBeenSet;
}

bool ArithmeticOCRRequest::GetEnableDispRelatedVertical() const
{
    return m_enableDispRelatedVertical;
}

void ArithmeticOCRRequest::SetEnableDispRelatedVertical(const bool& _enableDispRelatedVertical)
{
    m_enableDispRelatedVertical = _enableDispRelatedVertical;
    m_enableDispRelatedVerticalHasBeenSet = true;
}

bool ArithmeticOCRRequest::EnableDispRelatedVerticalHasBeenSet() const
{
    return m_enableDispRelatedVerticalHasBeenSet;
}

bool ArithmeticOCRRequest::GetEnableDispMidResult() const
{
    return m_enableDispMidResult;
}

void ArithmeticOCRRequest::SetEnableDispMidResult(const bool& _enableDispMidResult)
{
    m_enableDispMidResult = _enableDispMidResult;
    m_enableDispMidResultHasBeenSet = true;
}

bool ArithmeticOCRRequest::EnableDispMidResultHasBeenSet() const
{
    return m_enableDispMidResultHasBeenSet;
}

bool ArithmeticOCRRequest::GetEnablePdfRecognize() const
{
    return m_enablePdfRecognize;
}

void ArithmeticOCRRequest::SetEnablePdfRecognize(const bool& _enablePdfRecognize)
{
    m_enablePdfRecognize = _enablePdfRecognize;
    m_enablePdfRecognizeHasBeenSet = true;
}

bool ArithmeticOCRRequest::EnablePdfRecognizeHasBeenSet() const
{
    return m_enablePdfRecognizeHasBeenSet;
}

int64_t ArithmeticOCRRequest::GetPdfPageIndex() const
{
    return m_pdfPageIndex;
}

void ArithmeticOCRRequest::SetPdfPageIndex(const int64_t& _pdfPageIndex)
{
    m_pdfPageIndex = _pdfPageIndex;
    m_pdfPageIndexHasBeenSet = true;
}

bool ArithmeticOCRRequest::PdfPageIndexHasBeenSet() const
{
    return m_pdfPageIndexHasBeenSet;
}



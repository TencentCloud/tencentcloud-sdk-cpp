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

#include <tencentcloud/ocr/v20181119/model/CropEnhanceImageOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

CropEnhanceImageOCRRequest::CropEnhanceImageOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_pdfPageNumberHasBeenSet(false),
    m_cropHasBeenSet(false),
    m_deskewHasBeenSet(false),
    m_onlyPositionHasBeenSet(false),
    m_enhanceTypeHasBeenSet(false),
    m_adjustOrientationHasBeenSet(false)
{
}

string CropEnhanceImageOCRRequest::ToJsonString() const
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

    if (m_onlyPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyPosition, allocator);
    }

    if (m_enhanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enhanceType, allocator);
    }

    if (m_adjustOrientationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustOrientation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adjustOrientation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CropEnhanceImageOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void CropEnhanceImageOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string CropEnhanceImageOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CropEnhanceImageOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetPdfPageNumber() const
{
    return m_pdfPageNumber;
}

void CropEnhanceImageOCRRequest::SetPdfPageNumber(const int64_t& _pdfPageNumber)
{
    m_pdfPageNumber = _pdfPageNumber;
    m_pdfPageNumberHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::PdfPageNumberHasBeenSet() const
{
    return m_pdfPageNumberHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetCrop() const
{
    return m_crop;
}

void CropEnhanceImageOCRRequest::SetCrop(const int64_t& _crop)
{
    m_crop = _crop;
    m_cropHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::CropHasBeenSet() const
{
    return m_cropHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetDeskew() const
{
    return m_deskew;
}

void CropEnhanceImageOCRRequest::SetDeskew(const int64_t& _deskew)
{
    m_deskew = _deskew;
    m_deskewHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::DeskewHasBeenSet() const
{
    return m_deskewHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetOnlyPosition() const
{
    return m_onlyPosition;
}

void CropEnhanceImageOCRRequest::SetOnlyPosition(const int64_t& _onlyPosition)
{
    m_onlyPosition = _onlyPosition;
    m_onlyPositionHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::OnlyPositionHasBeenSet() const
{
    return m_onlyPositionHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetEnhanceType() const
{
    return m_enhanceType;
}

void CropEnhanceImageOCRRequest::SetEnhanceType(const int64_t& _enhanceType)
{
    m_enhanceType = _enhanceType;
    m_enhanceTypeHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::EnhanceTypeHasBeenSet() const
{
    return m_enhanceTypeHasBeenSet;
}

int64_t CropEnhanceImageOCRRequest::GetAdjustOrientation() const
{
    return m_adjustOrientation;
}

void CropEnhanceImageOCRRequest::SetAdjustOrientation(const int64_t& _adjustOrientation)
{
    m_adjustOrientation = _adjustOrientation;
    m_adjustOrientationHasBeenSet = true;
}

bool CropEnhanceImageOCRRequest::AdjustOrientationHasBeenSet() const
{
    return m_adjustOrientationHasBeenSet;
}



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

#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VehicleLicenseOCRRequest::VehicleLicenseOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cardSideHasBeenSet(false),
    m_tractorCardSideHasBeenSet(false)
{
}

string VehicleLicenseOCRRequest::ToJsonString() const
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

    if (m_cardSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardSide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardSide.c_str(), allocator).Move(), allocator);
    }

    if (m_tractorCardSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TractorCardSide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tractorCardSide.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VehicleLicenseOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void VehicleLicenseOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool VehicleLicenseOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string VehicleLicenseOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void VehicleLicenseOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool VehicleLicenseOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string VehicleLicenseOCRRequest::GetCardSide() const
{
    return m_cardSide;
}

void VehicleLicenseOCRRequest::SetCardSide(const string& _cardSide)
{
    m_cardSide = _cardSide;
    m_cardSideHasBeenSet = true;
}

bool VehicleLicenseOCRRequest::CardSideHasBeenSet() const
{
    return m_cardSideHasBeenSet;
}

string VehicleLicenseOCRRequest::GetTractorCardSide() const
{
    return m_tractorCardSide;
}

void VehicleLicenseOCRRequest::SetTractorCardSide(const string& _tractorCardSide)
{
    m_tractorCardSide = _tractorCardSide;
    m_tractorCardSideHasBeenSet = true;
}

bool VehicleLicenseOCRRequest::TractorCardSideHasBeenSet() const
{
    return m_tractorCardSideHasBeenSet;
}



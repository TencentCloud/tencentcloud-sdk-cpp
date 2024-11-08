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

#include <tencentcloud/ocr/v20181119/model/RecognizeValidIDCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeValidIDCardOCRRequest::RecognizeValidIDCardOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_enablePortraitHasBeenSet(false),
    m_enableCropImageHasBeenSet(false),
    m_enableBorderCheckHasBeenSet(false),
    m_enableOcclusionCheckHasBeenSet(false),
    m_enableCopyCheckHasBeenSet(false),
    m_enableReshootCheckHasBeenSet(false),
    m_enablePSCheckHasBeenSet(false),
    m_enableWordCheckHasBeenSet(false)
{
}

string RecognizeValidIDCardOCRRequest::ToJsonString() const
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

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cardType, allocator);
    }

    if (m_enablePortraitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePortrait";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePortrait, allocator);
    }

    if (m_enableCropImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCropImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCropImage, allocator);
    }

    if (m_enableBorderCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBorderCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBorderCheck, allocator);
    }

    if (m_enableOcclusionCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableOcclusionCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableOcclusionCheck, allocator);
    }

    if (m_enableCopyCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCopyCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCopyCheck, allocator);
    }

    if (m_enableReshootCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableReshootCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableReshootCheck, allocator);
    }

    if (m_enablePSCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePSCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePSCheck, allocator);
    }

    if (m_enableWordCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWordCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWordCheck, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeValidIDCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeValidIDCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeValidIDCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeValidIDCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t RecognizeValidIDCardOCRRequest::GetCardType() const
{
    return m_cardType;
}

void RecognizeValidIDCardOCRRequest::SetCardType(const int64_t& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnablePortrait() const
{
    return m_enablePortrait;
}

void RecognizeValidIDCardOCRRequest::SetEnablePortrait(const bool& _enablePortrait)
{
    m_enablePortrait = _enablePortrait;
    m_enablePortraitHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnablePortraitHasBeenSet() const
{
    return m_enablePortraitHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableCropImage() const
{
    return m_enableCropImage;
}

void RecognizeValidIDCardOCRRequest::SetEnableCropImage(const bool& _enableCropImage)
{
    m_enableCropImage = _enableCropImage;
    m_enableCropImageHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableCropImageHasBeenSet() const
{
    return m_enableCropImageHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableBorderCheck() const
{
    return m_enableBorderCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnableBorderCheck(const bool& _enableBorderCheck)
{
    m_enableBorderCheck = _enableBorderCheck;
    m_enableBorderCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableBorderCheckHasBeenSet() const
{
    return m_enableBorderCheckHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableOcclusionCheck() const
{
    return m_enableOcclusionCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnableOcclusionCheck(const bool& _enableOcclusionCheck)
{
    m_enableOcclusionCheck = _enableOcclusionCheck;
    m_enableOcclusionCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableOcclusionCheckHasBeenSet() const
{
    return m_enableOcclusionCheckHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableCopyCheck() const
{
    return m_enableCopyCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnableCopyCheck(const bool& _enableCopyCheck)
{
    m_enableCopyCheck = _enableCopyCheck;
    m_enableCopyCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableCopyCheckHasBeenSet() const
{
    return m_enableCopyCheckHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableReshootCheck() const
{
    return m_enableReshootCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnableReshootCheck(const bool& _enableReshootCheck)
{
    m_enableReshootCheck = _enableReshootCheck;
    m_enableReshootCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableReshootCheckHasBeenSet() const
{
    return m_enableReshootCheckHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnablePSCheck() const
{
    return m_enablePSCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnablePSCheck(const bool& _enablePSCheck)
{
    m_enablePSCheck = _enablePSCheck;
    m_enablePSCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnablePSCheckHasBeenSet() const
{
    return m_enablePSCheckHasBeenSet;
}

bool RecognizeValidIDCardOCRRequest::GetEnableWordCheck() const
{
    return m_enableWordCheck;
}

void RecognizeValidIDCardOCRRequest::SetEnableWordCheck(const bool& _enableWordCheck)
{
    m_enableWordCheck = _enableWordCheck;
    m_enableWordCheckHasBeenSet = true;
}

bool RecognizeValidIDCardOCRRequest::EnableWordCheckHasBeenSet() const
{
    return m_enableWordCheckHasBeenSet;
}



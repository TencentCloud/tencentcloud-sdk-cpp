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

#include <tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

BankCardOCRRequest::BankCardOCRRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_retBorderCutImageHasBeenSet(false),
    m_retCardNoImageHasBeenSet(false),
    m_enableCopyCheckHasBeenSet(false),
    m_enableReshootCheckHasBeenSet(false),
    m_enableBorderCheckHasBeenSet(false),
    m_enableQualityValueHasBeenSet(false)
{
}

string BankCardOCRRequest::ToJsonString() const
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

    if (m_retBorderCutImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetBorderCutImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retBorderCutImage, allocator);
    }

    if (m_retCardNoImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCardNoImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retCardNoImage, allocator);
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

    if (m_enableBorderCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBorderCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBorderCheck, allocator);
    }

    if (m_enableQualityValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableQualityValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableQualityValue, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BankCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void BankCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool BankCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string BankCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void BankCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool BankCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

bool BankCardOCRRequest::GetRetBorderCutImage() const
{
    return m_retBorderCutImage;
}

void BankCardOCRRequest::SetRetBorderCutImage(const bool& _retBorderCutImage)
{
    m_retBorderCutImage = _retBorderCutImage;
    m_retBorderCutImageHasBeenSet = true;
}

bool BankCardOCRRequest::RetBorderCutImageHasBeenSet() const
{
    return m_retBorderCutImageHasBeenSet;
}

bool BankCardOCRRequest::GetRetCardNoImage() const
{
    return m_retCardNoImage;
}

void BankCardOCRRequest::SetRetCardNoImage(const bool& _retCardNoImage)
{
    m_retCardNoImage = _retCardNoImage;
    m_retCardNoImageHasBeenSet = true;
}

bool BankCardOCRRequest::RetCardNoImageHasBeenSet() const
{
    return m_retCardNoImageHasBeenSet;
}

bool BankCardOCRRequest::GetEnableCopyCheck() const
{
    return m_enableCopyCheck;
}

void BankCardOCRRequest::SetEnableCopyCheck(const bool& _enableCopyCheck)
{
    m_enableCopyCheck = _enableCopyCheck;
    m_enableCopyCheckHasBeenSet = true;
}

bool BankCardOCRRequest::EnableCopyCheckHasBeenSet() const
{
    return m_enableCopyCheckHasBeenSet;
}

bool BankCardOCRRequest::GetEnableReshootCheck() const
{
    return m_enableReshootCheck;
}

void BankCardOCRRequest::SetEnableReshootCheck(const bool& _enableReshootCheck)
{
    m_enableReshootCheck = _enableReshootCheck;
    m_enableReshootCheckHasBeenSet = true;
}

bool BankCardOCRRequest::EnableReshootCheckHasBeenSet() const
{
    return m_enableReshootCheckHasBeenSet;
}

bool BankCardOCRRequest::GetEnableBorderCheck() const
{
    return m_enableBorderCheck;
}

void BankCardOCRRequest::SetEnableBorderCheck(const bool& _enableBorderCheck)
{
    m_enableBorderCheck = _enableBorderCheck;
    m_enableBorderCheckHasBeenSet = true;
}

bool BankCardOCRRequest::EnableBorderCheckHasBeenSet() const
{
    return m_enableBorderCheckHasBeenSet;
}

bool BankCardOCRRequest::GetEnableQualityValue() const
{
    return m_enableQualityValue;
}

void BankCardOCRRequest::SetEnableQualityValue(const bool& _enableQualityValue)
{
    m_enableQualityValue = _enableQualityValue;
    m_enableQualityValueHasBeenSet = true;
}

bool BankCardOCRRequest::EnableQualityValueHasBeenSet() const
{
    return m_enableQualityValueHasBeenSet;
}



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

#include <tencentcloud/ocr/v20181119/model/RecognizeEncryptedIDCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeEncryptedIDCardOCRRequest::RecognizeEncryptedIDCardOCRRequest() :
    m_encryptedBodyHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cardSideHasBeenSet(false),
    m_configHasBeenSet(false),
    m_enableRecognitionRectifyHasBeenSet(false),
    m_enableReflectDetailHasBeenSet(false)
{
}

string RecognizeEncryptedIDCardOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_encryptedBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedBody.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRecognitionRectifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRecognitionRectify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRecognitionRectify, allocator);
    }

    if (m_enableReflectDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableReflectDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableReflectDetail, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeEncryptedIDCardOCRRequest::GetEncryptedBody() const
{
    return m_encryptedBody;
}

void RecognizeEncryptedIDCardOCRRequest::SetEncryptedBody(const string& _encryptedBody)
{
    m_encryptedBody = _encryptedBody;
    m_encryptedBodyHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::EncryptedBodyHasBeenSet() const
{
    return m_encryptedBodyHasBeenSet;
}

Encryption RecognizeEncryptedIDCardOCRRequest::GetEncryption() const
{
    return m_encryption;
}

void RecognizeEncryptedIDCardOCRRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string RecognizeEncryptedIDCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeEncryptedIDCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeEncryptedIDCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeEncryptedIDCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeEncryptedIDCardOCRRequest::GetCardSide() const
{
    return m_cardSide;
}

void RecognizeEncryptedIDCardOCRRequest::SetCardSide(const string& _cardSide)
{
    m_cardSide = _cardSide;
    m_cardSideHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::CardSideHasBeenSet() const
{
    return m_cardSideHasBeenSet;
}

string RecognizeEncryptedIDCardOCRRequest::GetConfig() const
{
    return m_config;
}

void RecognizeEncryptedIDCardOCRRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool RecognizeEncryptedIDCardOCRRequest::GetEnableRecognitionRectify() const
{
    return m_enableRecognitionRectify;
}

void RecognizeEncryptedIDCardOCRRequest::SetEnableRecognitionRectify(const bool& _enableRecognitionRectify)
{
    m_enableRecognitionRectify = _enableRecognitionRectify;
    m_enableRecognitionRectifyHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::EnableRecognitionRectifyHasBeenSet() const
{
    return m_enableRecognitionRectifyHasBeenSet;
}

bool RecognizeEncryptedIDCardOCRRequest::GetEnableReflectDetail() const
{
    return m_enableReflectDetail;
}

void RecognizeEncryptedIDCardOCRRequest::SetEnableReflectDetail(const bool& _enableReflectDetail)
{
    m_enableReflectDetail = _enableReflectDetail;
    m_enableReflectDetailHasBeenSet = true;
}

bool RecognizeEncryptedIDCardOCRRequest::EnableReflectDetailHasBeenSet() const
{
    return m_enableReflectDetailHasBeenSet;
}



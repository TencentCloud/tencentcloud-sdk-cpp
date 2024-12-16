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

#include <tencentcloud/faceid/v20180301/model/ImageRecognitionV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ImageRecognitionV2Request::ImageRecognitionV2Request() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_optionalHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

string ImageRecognitionV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_optionalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Optional";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optional.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImageRecognitionV2Request::GetIdCard() const
{
    return m_idCard;
}

void ImageRecognitionV2Request::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool ImageRecognitionV2Request::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string ImageRecognitionV2Request::GetName() const
{
    return m_name;
}

void ImageRecognitionV2Request::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageRecognitionV2Request::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageRecognitionV2Request::GetImageBase64() const
{
    return m_imageBase64;
}

void ImageRecognitionV2Request::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool ImageRecognitionV2Request::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string ImageRecognitionV2Request::GetOptional() const
{
    return m_optional;
}

void ImageRecognitionV2Request::SetOptional(const string& _optional)
{
    m_optional = _optional;
    m_optionalHasBeenSet = true;
}

bool ImageRecognitionV2Request::OptionalHasBeenSet() const
{
    return m_optionalHasBeenSet;
}

Encryption ImageRecognitionV2Request::GetEncryption() const
{
    return m_encryption;
}

void ImageRecognitionV2Request::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool ImageRecognitionV2Request::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string ImageRecognitionV2Request::GetExtra() const
{
    return m_extra;
}

void ImageRecognitionV2Request::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ImageRecognitionV2Request::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}



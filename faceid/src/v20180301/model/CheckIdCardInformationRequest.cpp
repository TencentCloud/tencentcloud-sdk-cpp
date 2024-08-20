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

#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CheckIdCardInformationRequest::CheckIdCardInformationRequest() :
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_configHasBeenSet(false),
    m_isEncryptHasBeenSet(false),
    m_isEncryptResponseHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

string CheckIdCardInformationRequest::ToJsonString() const
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

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncrypt, allocator);
    }

    if (m_isEncryptResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncryptResponse, allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckIdCardInformationRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void CheckIdCardInformationRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool CheckIdCardInformationRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string CheckIdCardInformationRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CheckIdCardInformationRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CheckIdCardInformationRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CheckIdCardInformationRequest::GetConfig() const
{
    return m_config;
}

void CheckIdCardInformationRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CheckIdCardInformationRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool CheckIdCardInformationRequest::GetIsEncrypt() const
{
    return m_isEncrypt;
}

void CheckIdCardInformationRequest::SetIsEncrypt(const bool& _isEncrypt)
{
    m_isEncrypt = _isEncrypt;
    m_isEncryptHasBeenSet = true;
}

bool CheckIdCardInformationRequest::IsEncryptHasBeenSet() const
{
    return m_isEncryptHasBeenSet;
}

bool CheckIdCardInformationRequest::GetIsEncryptResponse() const
{
    return m_isEncryptResponse;
}

void CheckIdCardInformationRequest::SetIsEncryptResponse(const bool& _isEncryptResponse)
{
    m_isEncryptResponse = _isEncryptResponse;
    m_isEncryptResponseHasBeenSet = true;
}

bool CheckIdCardInformationRequest::IsEncryptResponseHasBeenSet() const
{
    return m_isEncryptResponseHasBeenSet;
}

Encryption CheckIdCardInformationRequest::GetEncryption() const
{
    return m_encryption;
}

void CheckIdCardInformationRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool CheckIdCardInformationRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}



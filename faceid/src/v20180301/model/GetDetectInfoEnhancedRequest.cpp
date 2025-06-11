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

#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetDetectInfoEnhancedRequest::GetDetectInfoEnhancedRequest() :
    m_bizTokenHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_infoTypeHasBeenSet(false),
    m_bestFramesCountHasBeenSet(false),
    m_isCutIdCardImageHasBeenSet(false),
    m_isNeedIdCardAvatarHasBeenSet(false),
    m_isEncryptHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_isEncryptResponseHasBeenSet(false),
    m_isReturnAllVideoHasBeenSet(false)
{
}

string GetDetectInfoEnhancedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizToken.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_infoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_infoType.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFramesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFramesCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bestFramesCount, allocator);
    }

    if (m_isCutIdCardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCutIdCardImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCutIdCardImage, allocator);
    }

    if (m_isNeedIdCardAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedIdCardAvatar";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedIdCardAvatar, allocator);
    }

    if (m_isEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncrypt, allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isEncryptResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEncryptResponse, allocator);
    }

    if (m_isReturnAllVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReturnAllVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isReturnAllVideo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetDetectInfoEnhancedRequest::GetBizToken() const
{
    return m_bizToken;
}

void GetDetectInfoEnhancedRequest::SetBizToken(const string& _bizToken)
{
    m_bizToken = _bizToken;
    m_bizTokenHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::BizTokenHasBeenSet() const
{
    return m_bizTokenHasBeenSet;
}

string GetDetectInfoEnhancedRequest::GetRuleId() const
{
    return m_ruleId;
}

void GetDetectInfoEnhancedRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string GetDetectInfoEnhancedRequest::GetInfoType() const
{
    return m_infoType;
}

void GetDetectInfoEnhancedRequest::SetInfoType(const string& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

uint64_t GetDetectInfoEnhancedRequest::GetBestFramesCount() const
{
    return m_bestFramesCount;
}

void GetDetectInfoEnhancedRequest::SetBestFramesCount(const uint64_t& _bestFramesCount)
{
    m_bestFramesCount = _bestFramesCount;
    m_bestFramesCountHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::BestFramesCountHasBeenSet() const
{
    return m_bestFramesCountHasBeenSet;
}

bool GetDetectInfoEnhancedRequest::GetIsCutIdCardImage() const
{
    return m_isCutIdCardImage;
}

void GetDetectInfoEnhancedRequest::SetIsCutIdCardImage(const bool& _isCutIdCardImage)
{
    m_isCutIdCardImage = _isCutIdCardImage;
    m_isCutIdCardImageHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::IsCutIdCardImageHasBeenSet() const
{
    return m_isCutIdCardImageHasBeenSet;
}

bool GetDetectInfoEnhancedRequest::GetIsNeedIdCardAvatar() const
{
    return m_isNeedIdCardAvatar;
}

void GetDetectInfoEnhancedRequest::SetIsNeedIdCardAvatar(const bool& _isNeedIdCardAvatar)
{
    m_isNeedIdCardAvatar = _isNeedIdCardAvatar;
    m_isNeedIdCardAvatarHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::IsNeedIdCardAvatarHasBeenSet() const
{
    return m_isNeedIdCardAvatarHasBeenSet;
}

bool GetDetectInfoEnhancedRequest::GetIsEncrypt() const
{
    return m_isEncrypt;
}

void GetDetectInfoEnhancedRequest::SetIsEncrypt(const bool& _isEncrypt)
{
    m_isEncrypt = _isEncrypt;
    m_isEncryptHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::IsEncryptHasBeenSet() const
{
    return m_isEncryptHasBeenSet;
}

Encryption GetDetectInfoEnhancedRequest::GetEncryption() const
{
    return m_encryption;
}

void GetDetectInfoEnhancedRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

bool GetDetectInfoEnhancedRequest::GetIsEncryptResponse() const
{
    return m_isEncryptResponse;
}

void GetDetectInfoEnhancedRequest::SetIsEncryptResponse(const bool& _isEncryptResponse)
{
    m_isEncryptResponse = _isEncryptResponse;
    m_isEncryptResponseHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::IsEncryptResponseHasBeenSet() const
{
    return m_isEncryptResponseHasBeenSet;
}

bool GetDetectInfoEnhancedRequest::GetIsReturnAllVideo() const
{
    return m_isReturnAllVideo;
}

void GetDetectInfoEnhancedRequest::SetIsReturnAllVideo(const bool& _isReturnAllVideo)
{
    m_isReturnAllVideo = _isReturnAllVideo;
    m_isReturnAllVideoHasBeenSet = true;
}

bool GetDetectInfoEnhancedRequest::IsReturnAllVideoHasBeenSet() const
{
    return m_isReturnAllVideoHasBeenSet;
}



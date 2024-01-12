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

#include <tencentcloud/faceid/v20180301/model/GetEidResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetEidResultRequest::GetEidResultRequest() :
    m_eidTokenHasBeenSet(false),
    m_infoTypeHasBeenSet(false),
    m_bestFramesCountHasBeenSet(false),
    m_isCutIdCardImageHasBeenSet(false),
    m_isNeedIdCardAvatarHasBeenSet(false)
{
}

string GetEidResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eidTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EidToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eidToken.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetEidResultRequest::GetEidToken() const
{
    return m_eidToken;
}

void GetEidResultRequest::SetEidToken(const string& _eidToken)
{
    m_eidToken = _eidToken;
    m_eidTokenHasBeenSet = true;
}

bool GetEidResultRequest::EidTokenHasBeenSet() const
{
    return m_eidTokenHasBeenSet;
}

string GetEidResultRequest::GetInfoType() const
{
    return m_infoType;
}

void GetEidResultRequest::SetInfoType(const string& _infoType)
{
    m_infoType = _infoType;
    m_infoTypeHasBeenSet = true;
}

bool GetEidResultRequest::InfoTypeHasBeenSet() const
{
    return m_infoTypeHasBeenSet;
}

uint64_t GetEidResultRequest::GetBestFramesCount() const
{
    return m_bestFramesCount;
}

void GetEidResultRequest::SetBestFramesCount(const uint64_t& _bestFramesCount)
{
    m_bestFramesCount = _bestFramesCount;
    m_bestFramesCountHasBeenSet = true;
}

bool GetEidResultRequest::BestFramesCountHasBeenSet() const
{
    return m_bestFramesCountHasBeenSet;
}

bool GetEidResultRequest::GetIsCutIdCardImage() const
{
    return m_isCutIdCardImage;
}

void GetEidResultRequest::SetIsCutIdCardImage(const bool& _isCutIdCardImage)
{
    m_isCutIdCardImage = _isCutIdCardImage;
    m_isCutIdCardImageHasBeenSet = true;
}

bool GetEidResultRequest::IsCutIdCardImageHasBeenSet() const
{
    return m_isCutIdCardImageHasBeenSet;
}

bool GetEidResultRequest::GetIsNeedIdCardAvatar() const
{
    return m_isNeedIdCardAvatar;
}

void GetEidResultRequest::SetIsNeedIdCardAvatar(const bool& _isNeedIdCardAvatar)
{
    m_isNeedIdCardAvatar = _isNeedIdCardAvatar;
    m_isNeedIdCardAvatarHasBeenSet = true;
}

bool GetEidResultRequest::IsNeedIdCardAvatarHasBeenSet() const
{
    return m_isNeedIdCardAvatarHasBeenSet;
}



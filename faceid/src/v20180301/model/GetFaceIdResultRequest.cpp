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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdResultRequest::GetFaceIdResultRequest() :
    m_faceIdTokenHasBeenSet(false),
    m_isNeedVideoHasBeenSet(false),
    m_isNeedBestFrameHasBeenSet(false),
    m_isEncryptResponseHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

string GetFaceIdResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_faceIdTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceIdToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceIdToken.c_str(), allocator).Move(), allocator);
    }

    if (m_isNeedVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedVideo, allocator);
    }

    if (m_isNeedBestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNeedBestFrame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedBestFrame, allocator);
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


string GetFaceIdResultRequest::GetFaceIdToken() const
{
    return m_faceIdToken;
}

void GetFaceIdResultRequest::SetFaceIdToken(const string& _faceIdToken)
{
    m_faceIdToken = _faceIdToken;
    m_faceIdTokenHasBeenSet = true;
}

bool GetFaceIdResultRequest::FaceIdTokenHasBeenSet() const
{
    return m_faceIdTokenHasBeenSet;
}

bool GetFaceIdResultRequest::GetIsNeedVideo() const
{
    return m_isNeedVideo;
}

void GetFaceIdResultRequest::SetIsNeedVideo(const bool& _isNeedVideo)
{
    m_isNeedVideo = _isNeedVideo;
    m_isNeedVideoHasBeenSet = true;
}

bool GetFaceIdResultRequest::IsNeedVideoHasBeenSet() const
{
    return m_isNeedVideoHasBeenSet;
}

bool GetFaceIdResultRequest::GetIsNeedBestFrame() const
{
    return m_isNeedBestFrame;
}

void GetFaceIdResultRequest::SetIsNeedBestFrame(const bool& _isNeedBestFrame)
{
    m_isNeedBestFrame = _isNeedBestFrame;
    m_isNeedBestFrameHasBeenSet = true;
}

bool GetFaceIdResultRequest::IsNeedBestFrameHasBeenSet() const
{
    return m_isNeedBestFrameHasBeenSet;
}

bool GetFaceIdResultRequest::GetIsEncryptResponse() const
{
    return m_isEncryptResponse;
}

void GetFaceIdResultRequest::SetIsEncryptResponse(const bool& _isEncryptResponse)
{
    m_isEncryptResponse = _isEncryptResponse;
    m_isEncryptResponseHasBeenSet = true;
}

bool GetFaceIdResultRequest::IsEncryptResponseHasBeenSet() const
{
    return m_isEncryptResponseHasBeenSet;
}

Encryption GetFaceIdResultRequest::GetEncryption() const
{
    return m_encryption;
}

void GetFaceIdResultRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool GetFaceIdResultRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}



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

#include <tencentcloud/vclm/v20240523/model/CheckAnimateImageJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

CheckAnimateImageJobRequest::CheckAnimateImageJobRequest() :
    m_templateIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_enableBodyJoinsHasBeenSet(false),
    m_enableFaceHasBeenSet(false)
{
}

string CheckAnimateImageJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_enableBodyJoinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBodyJoins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBodyJoins, allocator);
    }

    if (m_enableFaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableFace, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAnimateImageJobRequest::GetTemplateId() const
{
    return m_templateId;
}

void CheckAnimateImageJobRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CheckAnimateImageJobRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CheckAnimateImageJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CheckAnimateImageJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CheckAnimateImageJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CheckAnimateImageJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void CheckAnimateImageJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool CheckAnimateImageJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

bool CheckAnimateImageJobRequest::GetEnableBodyJoins() const
{
    return m_enableBodyJoins;
}

void CheckAnimateImageJobRequest::SetEnableBodyJoins(const bool& _enableBodyJoins)
{
    m_enableBodyJoins = _enableBodyJoins;
    m_enableBodyJoinsHasBeenSet = true;
}

bool CheckAnimateImageJobRequest::EnableBodyJoinsHasBeenSet() const
{
    return m_enableBodyJoinsHasBeenSet;
}

bool CheckAnimateImageJobRequest::GetEnableFace() const
{
    return m_enableFace;
}

void CheckAnimateImageJobRequest::SetEnableFace(const bool& _enableFace)
{
    m_enableFace = _enableFace;
    m_enableFaceHasBeenSet = true;
}

bool CheckAnimateImageJobRequest::EnableFaceHasBeenSet() const
{
    return m_enableFaceHasBeenSet;
}



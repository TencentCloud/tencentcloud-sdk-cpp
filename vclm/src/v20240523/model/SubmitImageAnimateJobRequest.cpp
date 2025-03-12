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

#include <tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitImageAnimateJobRequest::SubmitImageAnimateJobRequest() :
    m_imageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_enableAudioHasBeenSet(false),
    m_enableBodyJoinsHasBeenSet(false),
    m_enableSegmentHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_enableFaceHasBeenSet(false)
{
}

string SubmitImageAnimateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableAudio, allocator);
    }

    if (m_enableBodyJoinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBodyJoins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableBodyJoins, allocator);
    }

    if (m_enableSegmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSegment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSegment, allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
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


string SubmitImageAnimateJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitImageAnimateJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string SubmitImageAnimateJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitImageAnimateJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitImageAnimateJobRequest::GetTemplateId() const
{
    return m_templateId;
}

void SubmitImageAnimateJobRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

bool SubmitImageAnimateJobRequest::GetEnableAudio() const
{
    return m_enableAudio;
}

void SubmitImageAnimateJobRequest::SetEnableAudio(const bool& _enableAudio)
{
    m_enableAudio = _enableAudio;
    m_enableAudioHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::EnableAudioHasBeenSet() const
{
    return m_enableAudioHasBeenSet;
}

bool SubmitImageAnimateJobRequest::GetEnableBodyJoins() const
{
    return m_enableBodyJoins;
}

void SubmitImageAnimateJobRequest::SetEnableBodyJoins(const bool& _enableBodyJoins)
{
    m_enableBodyJoins = _enableBodyJoins;
    m_enableBodyJoinsHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::EnableBodyJoinsHasBeenSet() const
{
    return m_enableBodyJoinsHasBeenSet;
}

bool SubmitImageAnimateJobRequest::GetEnableSegment() const
{
    return m_enableSegment;
}

void SubmitImageAnimateJobRequest::SetEnableSegment(const bool& _enableSegment)
{
    m_enableSegment = _enableSegment;
    m_enableSegmentHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::EnableSegmentHasBeenSet() const
{
    return m_enableSegmentHasBeenSet;
}

int64_t SubmitImageAnimateJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitImageAnimateJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitImageAnimateJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitImageAnimateJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

bool SubmitImageAnimateJobRequest::GetEnableFace() const
{
    return m_enableFace;
}

void SubmitImageAnimateJobRequest::SetEnableFace(const bool& _enableFace)
{
    m_enableFace = _enableFace;
    m_enableFaceHasBeenSet = true;
}

bool SubmitImageAnimateJobRequest::EnableFaceHasBeenSet() const
{
    return m_enableFaceHasBeenSet;
}



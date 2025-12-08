/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ai3d/v20250513/model/SubmitHunyuanTo3DRapidJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitHunyuanTo3DRapidJobRequest::SubmitHunyuanTo3DRapidJobRequest() :
    m_promptHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_resultFormatHasBeenSet(false),
    m_enablePBRHasBeenSet(false),
    m_enableGeometryHasBeenSet(false)
{
}

string SubmitHunyuanTo3DRapidJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
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

    if (m_resultFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePBRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePBR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePBR, allocator);
    }

    if (m_enableGeometryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGeometry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableGeometry, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitHunyuanTo3DRapidJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanTo3DRapidJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuanTo3DRapidJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitHunyuanTo3DRapidJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitHunyuanTo3DRapidJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitHunyuanTo3DRapidJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string SubmitHunyuanTo3DRapidJobRequest::GetResultFormat() const
{
    return m_resultFormat;
}

void SubmitHunyuanTo3DRapidJobRequest::SetResultFormat(const string& _resultFormat)
{
    m_resultFormat = _resultFormat;
    m_resultFormatHasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::ResultFormatHasBeenSet() const
{
    return m_resultFormatHasBeenSet;
}

bool SubmitHunyuanTo3DRapidJobRequest::GetEnablePBR() const
{
    return m_enablePBR;
}

void SubmitHunyuanTo3DRapidJobRequest::SetEnablePBR(const bool& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}

bool SubmitHunyuanTo3DRapidJobRequest::GetEnableGeometry() const
{
    return m_enableGeometry;
}

void SubmitHunyuanTo3DRapidJobRequest::SetEnableGeometry(const bool& _enableGeometry)
{
    m_enableGeometry = _enableGeometry;
    m_enableGeometryHasBeenSet = true;
}

bool SubmitHunyuanTo3DRapidJobRequest::EnableGeometryHasBeenSet() const
{
    return m_enableGeometryHasBeenSet;
}



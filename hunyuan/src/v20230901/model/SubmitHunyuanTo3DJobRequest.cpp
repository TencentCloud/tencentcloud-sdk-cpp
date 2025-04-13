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

#include <tencentcloud/hunyuan/v20230901/model/SubmitHunyuanTo3DJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SubmitHunyuanTo3DJobRequest::SubmitHunyuanTo3DJobRequest() :
    m_promptHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_numHasBeenSet(false)
{
}

string SubmitHunyuanTo3DJobRequest::ToJsonString() const
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

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_num, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitHunyuanTo3DJobRequest::GetPrompt() const
{
    return m_prompt;
}

void SubmitHunyuanTo3DJobRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool SubmitHunyuanTo3DJobRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string SubmitHunyuanTo3DJobRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void SubmitHunyuanTo3DJobRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool SubmitHunyuanTo3DJobRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string SubmitHunyuanTo3DJobRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void SubmitHunyuanTo3DJobRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SubmitHunyuanTo3DJobRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

int64_t SubmitHunyuanTo3DJobRequest::GetNum() const
{
    return m_num;
}

void SubmitHunyuanTo3DJobRequest::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool SubmitHunyuanTo3DJobRequest::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}



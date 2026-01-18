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

#include <tencentcloud/live/v20180801/model/CreateLiveCloudEffectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveCloudEffectRequest::CreateLiveCloudEffectRequest() :
    m_promptHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateLiveCloudEffectRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveCloudEffectRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateLiveCloudEffectRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateLiveCloudEffectRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateLiveCloudEffectRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateLiveCloudEffectRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateLiveCloudEffectRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateLiveCloudEffectRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CreateLiveCloudEffectRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CreateLiveCloudEffectRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CreateLiveCloudEffectRequest::GetType() const
{
    return m_type;
}

void CreateLiveCloudEffectRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLiveCloudEffectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateLiveCloudEffectRequest::GetOperator() const
{
    return m_operator;
}

void CreateLiveCloudEffectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLiveCloudEffectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}



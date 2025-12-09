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

#include <tencentcloud/tms/v20201229/model/CreateFinancialLLMTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

CreateFinancialLLMTaskRequest::CreateFinancialLLMTaskRequest() :
    m_bizTypeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string CreateFinancialLLMTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_contentType, allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFinancialLLMTaskRequest::GetBizType() const
{
    return m_bizType;
}

void CreateFinancialLLMTaskRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateFinancialLLMTaskRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

int64_t CreateFinancialLLMTaskRequest::GetContentType() const
{
    return m_contentType;
}

void CreateFinancialLLMTaskRequest::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateFinancialLLMTaskRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CreateFinancialLLMTaskRequest::GetFileType() const
{
    return m_fileType;
}

void CreateFinancialLLMTaskRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CreateFinancialLLMTaskRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string CreateFinancialLLMTaskRequest::GetContent() const
{
    return m_content;
}

void CreateFinancialLLMTaskRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateFinancialLLMTaskRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}



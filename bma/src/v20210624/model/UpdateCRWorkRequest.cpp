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

#include <tencentcloud/bma/v20210624/model/UpdateCRWorkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

UpdateCRWorkRequest::UpdateCRWorkRequest() :
    m_workIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_certTypeHasBeenSet(false)
{
}

string UpdateCRWorkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workId, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t UpdateCRWorkRequest::GetWorkId() const
{
    return m_workId;
}

void UpdateCRWorkRequest::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool UpdateCRWorkRequest::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string UpdateCRWorkRequest::GetContentType() const
{
    return m_contentType;
}

void UpdateCRWorkRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool UpdateCRWorkRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string UpdateCRWorkRequest::GetContent() const
{
    return m_content;
}

void UpdateCRWorkRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UpdateCRWorkRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string UpdateCRWorkRequest::GetCertType() const
{
    return m_certType;
}

void UpdateCRWorkRequest::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool UpdateCRWorkRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}



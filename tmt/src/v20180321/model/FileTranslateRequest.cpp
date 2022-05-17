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

#include <tencentcloud/tmt/v20180321/model/FileTranslateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

FileTranslateRequest::FileTranslateRequest() :
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_documentTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_basicDocumentTypeHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

string FileTranslateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_documentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_documentType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_basicDocumentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicDocumentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_basicDocumentType.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FileTranslateRequest::GetSource() const
{
    return m_source;
}

void FileTranslateRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool FileTranslateRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string FileTranslateRequest::GetTarget() const
{
    return m_target;
}

void FileTranslateRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool FileTranslateRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string FileTranslateRequest::GetDocumentType() const
{
    return m_documentType;
}

void FileTranslateRequest::SetDocumentType(const string& _documentType)
{
    m_documentType = _documentType;
    m_documentTypeHasBeenSet = true;
}

bool FileTranslateRequest::DocumentTypeHasBeenSet() const
{
    return m_documentTypeHasBeenSet;
}

int64_t FileTranslateRequest::GetSourceType() const
{
    return m_sourceType;
}

void FileTranslateRequest::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool FileTranslateRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string FileTranslateRequest::GetUrl() const
{
    return m_url;
}

void FileTranslateRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool FileTranslateRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string FileTranslateRequest::GetBasicDocumentType() const
{
    return m_basicDocumentType;
}

void FileTranslateRequest::SetBasicDocumentType(const string& _basicDocumentType)
{
    m_basicDocumentType = _basicDocumentType;
    m_basicDocumentTypeHasBeenSet = true;
}

bool FileTranslateRequest::BasicDocumentTypeHasBeenSet() const
{
    return m_basicDocumentTypeHasBeenSet;
}

string FileTranslateRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FileTranslateRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FileTranslateRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string FileTranslateRequest::GetData() const
{
    return m_data;
}

void FileTranslateRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool FileTranslateRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}



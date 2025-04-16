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

#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateDLPFileDetectionTaskRequest::CreateDLPFileDetectionTaskRequest() :
    m_urlHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_domainInstanceIdHasBeenSet(false),
    m_callBackUrlHasBeenSet(false)
{
}

string CreateDLPFileDetectionTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_domainInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callBackUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDLPFileDetectionTaskRequest::GetUrl() const
{
    return m_url;
}

void CreateDLPFileDetectionTaskRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateDLPFileDetectionTaskRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CreateDLPFileDetectionTaskRequest::GetFileName() const
{
    return m_fileName;
}

void CreateDLPFileDetectionTaskRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateDLPFileDetectionTaskRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateDLPFileDetectionTaskRequest::GetFileMd5() const
{
    return m_fileMd5;
}

void CreateDLPFileDetectionTaskRequest::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool CreateDLPFileDetectionTaskRequest::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string CreateDLPFileDetectionTaskRequest::GetDomainInstanceId() const
{
    return m_domainInstanceId;
}

void CreateDLPFileDetectionTaskRequest::SetDomainInstanceId(const string& _domainInstanceId)
{
    m_domainInstanceId = _domainInstanceId;
    m_domainInstanceIdHasBeenSet = true;
}

bool CreateDLPFileDetectionTaskRequest::DomainInstanceIdHasBeenSet() const
{
    return m_domainInstanceIdHasBeenSet;
}

string CreateDLPFileDetectionTaskRequest::GetCallBackUrl() const
{
    return m_callBackUrl;
}

void CreateDLPFileDetectionTaskRequest::SetCallBackUrl(const string& _callBackUrl)
{
    m_callBackUrl = _callBackUrl;
    m_callBackUrlHasBeenSet = true;
}

bool CreateDLPFileDetectionTaskRequest::CallBackUrlHasBeenSet() const
{
    return m_callBackUrlHasBeenSet;
}



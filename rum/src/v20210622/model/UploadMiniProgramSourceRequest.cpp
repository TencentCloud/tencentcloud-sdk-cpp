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

#include <tencentcloud/rum/v20210622/model/UploadMiniProgramSourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

UploadMiniProgramSourceRequest::UploadMiniProgramSourceRequest() :
    m_appIdHasBeenSet(false),
    m_fileBase64HasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

string UploadMiniProgramSourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Release";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_release.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadMiniProgramSourceRequest::GetAppId() const
{
    return m_appId;
}

void UploadMiniProgramSourceRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UploadMiniProgramSourceRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UploadMiniProgramSourceRequest::GetFileBase64() const
{
    return m_fileBase64;
}

void UploadMiniProgramSourceRequest::SetFileBase64(const string& _fileBase64)
{
    m_fileBase64 = _fileBase64;
    m_fileBase64HasBeenSet = true;
}

bool UploadMiniProgramSourceRequest::FileBase64HasBeenSet() const
{
    return m_fileBase64HasBeenSet;
}

string UploadMiniProgramSourceRequest::GetRelease() const
{
    return m_release;
}

void UploadMiniProgramSourceRequest::SetRelease(const string& _release)
{
    m_release = _release;
    m_releaseHasBeenSet = true;
}

bool UploadMiniProgramSourceRequest::ReleaseHasBeenSet() const
{
    return m_releaseHasBeenSet;
}

string UploadMiniProgramSourceRequest::GetFileName() const
{
    return m_fileName;
}

void UploadMiniProgramSourceRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadMiniProgramSourceRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}



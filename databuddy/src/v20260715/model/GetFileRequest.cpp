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

#include <tencentcloud/databuddy/v20260715/model/GetFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetFileRequest::GetFileRequest() :
    m_workspaceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_includeContentHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_filePathHasBeenSet(false)
{
}

string GetFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_includeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeContent, allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFileRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void GetFileRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool GetFileRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string GetFileRequest::GetFileId() const
{
    return m_fileId;
}

void GetFileRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool GetFileRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string GetFileRequest::GetFileType() const
{
    return m_fileType;
}

void GetFileRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool GetFileRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

bool GetFileRequest::GetIncludeContent() const
{
    return m_includeContent;
}

void GetFileRequest::SetIncludeContent(const bool& _includeContent)
{
    m_includeContent = _includeContent;
    m_includeContentHasBeenSet = true;
}

bool GetFileRequest::IncludeContentHasBeenSet() const
{
    return m_includeContentHasBeenSet;
}

string GetFileRequest::GetVersionId() const
{
    return m_versionId;
}

void GetFileRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool GetFileRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string GetFileRequest::GetFilePath() const
{
    return m_filePath;
}

void GetFileRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool GetFileRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}



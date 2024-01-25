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

#include <tencentcloud/wedata/v20210820/model/RenameResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenameResourceRequest::RenameResourceRequest() :
    m_projectIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

string RenameResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenameResourceRequest::GetProjectId() const
{
    return m_projectId;
}

void RenameResourceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RenameResourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RenameResourceRequest::GetFilePath() const
{
    return m_filePath;
}

void RenameResourceRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RenameResourceRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string RenameResourceRequest::GetFileName() const
{
    return m_fileName;
}

void RenameResourceRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool RenameResourceRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t RenameResourceRequest::GetFileSize() const
{
    return m_fileSize;
}

void RenameResourceRequest::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool RenameResourceRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}



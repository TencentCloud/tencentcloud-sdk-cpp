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

#include <tencentcloud/wedata/v20210820/model/GetResourcePathTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetResourcePathTreeRequest::GetResourcePathTreeRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_directoryTypeHasBeenSet(false)
{
}

string GetResourcePathTreeRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directoryType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetResourcePathTreeRequest::GetProjectId() const
{
    return m_projectId;
}

void GetResourcePathTreeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetResourcePathTreeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string GetResourcePathTreeRequest::GetName() const
{
    return m_name;
}

void GetResourcePathTreeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetResourcePathTreeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetResourcePathTreeRequest::GetFileType() const
{
    return m_fileType;
}

void GetResourcePathTreeRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool GetResourcePathTreeRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string GetResourcePathTreeRequest::GetFilePath() const
{
    return m_filePath;
}

void GetResourcePathTreeRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool GetResourcePathTreeRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string GetResourcePathTreeRequest::GetDirectoryType() const
{
    return m_directoryType;
}

void GetResourcePathTreeRequest::SetDirectoryType(const string& _directoryType)
{
    m_directoryType = _directoryType;
    m_directoryTypeHasBeenSet = true;
}

bool GetResourcePathTreeRequest::DirectoryTypeHasBeenSet() const
{
    return m_directoryTypeHasBeenSet;
}



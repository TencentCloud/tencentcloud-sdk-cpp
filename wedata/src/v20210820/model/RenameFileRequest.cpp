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

#include <tencentcloud/wedata/v20210820/model/RenameFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenameFileRequest::RenameFileRequest() :
    m_projectIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileHasBeenSet(false),
    m_fromTaskHasBeenSet(false),
    m_toTaskHasBeenSet(false)
{
}

string RenameFileRequest::ToJsonString() const
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

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_file.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTask.c_str(), allocator).Move(), allocator);
    }

    if (m_toTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toTask.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenameFileRequest::GetProjectId() const
{
    return m_projectId;
}

void RenameFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RenameFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RenameFileRequest::GetFilePath() const
{
    return m_filePath;
}

void RenameFileRequest::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RenameFileRequest::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string RenameFileRequest::GetFile() const
{
    return m_file;
}

void RenameFileRequest::SetFile(const string& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool RenameFileRequest::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

string RenameFileRequest::GetFromTask() const
{
    return m_fromTask;
}

void RenameFileRequest::SetFromTask(const string& _fromTask)
{
    m_fromTask = _fromTask;
    m_fromTaskHasBeenSet = true;
}

bool RenameFileRequest::FromTaskHasBeenSet() const
{
    return m_fromTaskHasBeenSet;
}

string RenameFileRequest::GetToTask() const
{
    return m_toTask;
}

void RenameFileRequest::SetToTask(const string& _toTask)
{
    m_toTask = _toTask;
    m_toTaskHasBeenSet = true;
}

bool RenameFileRequest::ToTaskHasBeenSet() const
{
    return m_toTaskHasBeenSet;
}



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

#include <tencentcloud/goosefs/v20220519/model/CreateDataRepositoryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

CreateDataRepositoryTaskRequest::CreateDataRepositoryTaskRequest() :
    m_taskTypeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_taskPathHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_textLocationHasBeenSet(false)
{
}

string CreateDataRepositoryTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskPath.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_textLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textLocation.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataRepositoryTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateDataRepositoryTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetBucket() const
{
    return m_bucket;
}

void CreateDataRepositoryTaskRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateDataRepositoryTaskRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetTaskPath() const
{
    return m_taskPath;
}

void CreateDataRepositoryTaskRequest::SetTaskPath(const string& _taskPath)
{
    m_taskPath = _taskPath;
    m_taskPathHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::TaskPathHasBeenSet() const
{
    return m_taskPathHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateDataRepositoryTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetRepositoryType() const
{
    return m_repositoryType;
}

void CreateDataRepositoryTaskRequest::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

string CreateDataRepositoryTaskRequest::GetTextLocation() const
{
    return m_textLocation;
}

void CreateDataRepositoryTaskRequest::SetTextLocation(const string& _textLocation)
{
    m_textLocation = _textLocation;
    m_textLocationHasBeenSet = true;
}

bool CreateDataRepositoryTaskRequest::TextLocationHasBeenSet() const
{
    return m_textLocationHasBeenSet;
}



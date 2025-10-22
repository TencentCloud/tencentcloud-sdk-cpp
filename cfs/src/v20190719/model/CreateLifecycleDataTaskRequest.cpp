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

#include <tencentcloud/cfs/v20190719/model/CreateLifecycleDataTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateLifecycleDataTaskRequest::CreateLifecycleDataTaskRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_taskPathHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_dataFlowIdHasBeenSet(false)
{
}

string CreateLifecycleDataTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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

    if (m_dataFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFlowId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLifecycleDataTaskRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateLifecycleDataTaskRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateLifecycleDataTaskRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateLifecycleDataTaskRequest::GetType() const
{
    return m_type;
}

void CreateLifecycleDataTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateLifecycleDataTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateLifecycleDataTaskRequest::GetTaskPath() const
{
    return m_taskPath;
}

void CreateLifecycleDataTaskRequest::SetTaskPath(const string& _taskPath)
{
    m_taskPath = _taskPath;
    m_taskPathHasBeenSet = true;
}

bool CreateLifecycleDataTaskRequest::TaskPathHasBeenSet() const
{
    return m_taskPathHasBeenSet;
}

string CreateLifecycleDataTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateLifecycleDataTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateLifecycleDataTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateLifecycleDataTaskRequest::GetDataFlowId() const
{
    return m_dataFlowId;
}

void CreateLifecycleDataTaskRequest::SetDataFlowId(const string& _dataFlowId)
{
    m_dataFlowId = _dataFlowId;
    m_dataFlowIdHasBeenSet = true;
}

bool CreateLifecycleDataTaskRequest::DataFlowIdHasBeenSet() const
{
    return m_dataFlowIdHasBeenSet;
}



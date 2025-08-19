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

#include <tencentcloud/cfs/v20190719/model/DoDirectoryOperationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DoDirectoryOperationRequest::DoDirectoryOperationRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_opetationTypeHasBeenSet(false),
    m_directoryPathHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_destPathHasBeenSet(false)
{
}

string DoDirectoryOperationRequest::ToJsonString() const
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

    if (m_opetationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpetationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opetationType.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directoryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_destPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destPath.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DoDirectoryOperationRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DoDirectoryOperationRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DoDirectoryOperationRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DoDirectoryOperationRequest::GetOpetationType() const
{
    return m_opetationType;
}

void DoDirectoryOperationRequest::SetOpetationType(const string& _opetationType)
{
    m_opetationType = _opetationType;
    m_opetationTypeHasBeenSet = true;
}

bool DoDirectoryOperationRequest::OpetationTypeHasBeenSet() const
{
    return m_opetationTypeHasBeenSet;
}

string DoDirectoryOperationRequest::GetDirectoryPath() const
{
    return m_directoryPath;
}

void DoDirectoryOperationRequest::SetDirectoryPath(const string& _directoryPath)
{
    m_directoryPath = _directoryPath;
    m_directoryPathHasBeenSet = true;
}

bool DoDirectoryOperationRequest::DirectoryPathHasBeenSet() const
{
    return m_directoryPathHasBeenSet;
}

string DoDirectoryOperationRequest::GetMode() const
{
    return m_mode;
}

void DoDirectoryOperationRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DoDirectoryOperationRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DoDirectoryOperationRequest::GetDestPath() const
{
    return m_destPath;
}

void DoDirectoryOperationRequest::SetDestPath(const string& _destPath)
{
    m_destPath = _destPath;
    m_destPathHasBeenSet = true;
}

bool DoDirectoryOperationRequest::DestPathHasBeenSet() const
{
    return m_destPathHasBeenSet;
}



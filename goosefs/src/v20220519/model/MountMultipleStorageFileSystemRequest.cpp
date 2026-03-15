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

#include <tencentcloud/goosefs/v20220519/model/MountMultipleStorageFileSystemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

MountMultipleStorageFileSystemRequest::MountMultipleStorageFileSystemRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_customerClusterIdHasBeenSet(false),
    m_storageFileSystemIdHasBeenSet(false)
{
}

string MountMultipleStorageFileSystemRequest::ToJsonString() const
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

    if (m_customerClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageFileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageFileSystemId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MountMultipleStorageFileSystemRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void MountMultipleStorageFileSystemRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool MountMultipleStorageFileSystemRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string MountMultipleStorageFileSystemRequest::GetCustomerClusterId() const
{
    return m_customerClusterId;
}

void MountMultipleStorageFileSystemRequest::SetCustomerClusterId(const string& _customerClusterId)
{
    m_customerClusterId = _customerClusterId;
    m_customerClusterIdHasBeenSet = true;
}

bool MountMultipleStorageFileSystemRequest::CustomerClusterIdHasBeenSet() const
{
    return m_customerClusterIdHasBeenSet;
}

string MountMultipleStorageFileSystemRequest::GetStorageFileSystemId() const
{
    return m_storageFileSystemId;
}

void MountMultipleStorageFileSystemRequest::SetStorageFileSystemId(const string& _storageFileSystemId)
{
    m_storageFileSystemId = _storageFileSystemId;
    m_storageFileSystemIdHasBeenSet = true;
}

bool MountMultipleStorageFileSystemRequest::StorageFileSystemIdHasBeenSet() const
{
    return m_storageFileSystemIdHasBeenSet;
}



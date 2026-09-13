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

#include <tencentcloud/databuddy/v20260715/model/CreateFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateFileRequest::CreateFileRequest() :
    m_workspaceIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileConfigHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_extractArchiveHasBeenSet(false)
{
}

string CreateFileRequest::ToJsonString() const
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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extractArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractArchive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_extractArchive, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFileRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateFileRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateFileRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateFileRequest::GetFileName() const
{
    return m_fileName;
}

void CreateFileRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateFileRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateFileRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateFileRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateFileRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string CreateFileRequest::GetFileType() const
{
    return m_fileType;
}

void CreateFileRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool CreateFileRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

FileConfig CreateFileRequest::GetFileConfig() const
{
    return m_fileConfig;
}

void CreateFileRequest::SetFileConfig(const FileConfig& _fileConfig)
{
    m_fileConfig = _fileConfig;
    m_fileConfigHasBeenSet = true;
}

bool CreateFileRequest::FileConfigHasBeenSet() const
{
    return m_fileConfigHasBeenSet;
}

string CreateFileRequest::GetBundleId() const
{
    return m_bundleId;
}

void CreateFileRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool CreateFileRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string CreateFileRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void CreateFileRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool CreateFileRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

FileStorage CreateFileRequest::GetStorage() const
{
    return m_storage;
}

void CreateFileRequest::SetStorage(const FileStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateFileRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

bool CreateFileRequest::GetExtractArchive() const
{
    return m_extractArchive;
}

void CreateFileRequest::SetExtractArchive(const bool& _extractArchive)
{
    m_extractArchive = _extractArchive;
    m_extractArchiveHasBeenSet = true;
}

bool CreateFileRequest::ExtractArchiveHasBeenSet() const
{
    return m_extractArchiveHasBeenSet;
}



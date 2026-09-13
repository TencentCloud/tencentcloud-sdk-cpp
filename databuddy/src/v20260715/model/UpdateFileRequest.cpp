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

#include <tencentcloud/databuddy/v20260715/model/UpdateFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateFileRequest::UpdateFileRequest() :
    m_workspaceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileConfigHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_targetFileTypeHasBeenSet(false),
    m_updateActionHasBeenSet(false)
{
}

string UpdateFileRequest::ToJsonString() const
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

    if (m_fileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
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

    if (m_targetFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateAction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFileRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void UpdateFileRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool UpdateFileRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string UpdateFileRequest::GetFileId() const
{
    return m_fileId;
}

void UpdateFileRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool UpdateFileRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

FileConfig UpdateFileRequest::GetFileConfig() const
{
    return m_fileConfig;
}

void UpdateFileRequest::SetFileConfig(const FileConfig& _fileConfig)
{
    m_fileConfig = _fileConfig;
    m_fileConfigHasBeenSet = true;
}

bool UpdateFileRequest::FileConfigHasBeenSet() const
{
    return m_fileConfigHasBeenSet;
}

string UpdateFileRequest::GetFileType() const
{
    return m_fileType;
}

void UpdateFileRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UpdateFileRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UpdateFileRequest::GetBundleId() const
{
    return m_bundleId;
}

void UpdateFileRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool UpdateFileRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string UpdateFileRequest::GetBundleInfo() const
{
    return m_bundleInfo;
}

void UpdateFileRequest::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool UpdateFileRequest::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

FileStorage UpdateFileRequest::GetStorage() const
{
    return m_storage;
}

void UpdateFileRequest::SetStorage(const FileStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool UpdateFileRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string UpdateFileRequest::GetFileName() const
{
    return m_fileName;
}

void UpdateFileRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UpdateFileRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UpdateFileRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void UpdateFileRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool UpdateFileRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string UpdateFileRequest::GetTargetFileType() const
{
    return m_targetFileType;
}

void UpdateFileRequest::SetTargetFileType(const string& _targetFileType)
{
    m_targetFileType = _targetFileType;
    m_targetFileTypeHasBeenSet = true;
}

bool UpdateFileRequest::TargetFileTypeHasBeenSet() const
{
    return m_targetFileTypeHasBeenSet;
}

int64_t UpdateFileRequest::GetUpdateAction() const
{
    return m_updateAction;
}

void UpdateFileRequest::SetUpdateAction(const int64_t& _updateAction)
{
    m_updateAction = _updateAction;
    m_updateActionHasBeenSet = true;
}

bool UpdateFileRequest::UpdateActionHasBeenSet() const
{
    return m_updateActionHasBeenSet;
}



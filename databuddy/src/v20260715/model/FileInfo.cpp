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

#include <tencentcloud/databuddy/v20260715/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileInfo::FileInfo() :
    m_appIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_fileConfigHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUserNameHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_resourceModeHasBeenSet(false),
    m_asyncOperationHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("FileConfig") && !value["FileConfig"].IsNull())
    {
        if (!value["FileConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileConfig.Deserialize(value["FileConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileConfigHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OwnerUserName") && !value["OwnerUserName"].IsNull())
    {
        if (!value["OwnerUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.OwnerUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUserName = string(value["OwnerUserName"].GetString());
        m_ownerUserNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.Permissions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permissions = string(value["Permissions"].GetString());
        m_permissionsHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ReleaseStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_releaseStatus = value["ReleaseStatus"].GetBool();
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceMode") && !value["ResourceMode"].IsNull())
    {
        if (!value["ResourceMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.ResourceMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMode = value["ResourceMode"].GetInt64();
        m_resourceModeHasBeenSet = true;
    }

    if (value.HasMember("AsyncOperation") && !value["AsyncOperation"].IsNull())
    {
        if (!value["AsyncOperation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.AsyncOperation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asyncOperation.Deserialize(value["AsyncOperation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asyncOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_fileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permissions.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseStatus, allocator);
    }

    if (m_resourceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceMode, allocator);
    }

    if (m_asyncOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asyncOperation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FileInfo::GetAppId() const
{
    return m_appId;
}

void FileInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool FileInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string FileInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void FileInfo::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool FileInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string FileInfo::GetFileId() const
{
    return m_fileId;
}

void FileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FileInfo::GetFileName() const
{
    return m_fileName;
}

void FileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileInfo::GetFileType() const
{
    return m_fileType;
}

void FileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string FileInfo::GetPath() const
{
    return m_path;
}

void FileInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool FileInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

FileConfig FileInfo::GetFileConfig() const
{
    return m_fileConfig;
}

void FileInfo::SetFileConfig(const FileConfig& _fileConfig)
{
    m_fileConfig = _fileConfig;
    m_fileConfigHasBeenSet = true;
}

bool FileInfo::FileConfigHasBeenSet() const
{
    return m_fileConfigHasBeenSet;
}

string FileInfo::GetBundleId() const
{
    return m_bundleId;
}

void FileInfo::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool FileInfo::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string FileInfo::GetBundleInfo() const
{
    return m_bundleInfo;
}

void FileInfo::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool FileInfo::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}

string FileInfo::GetStatus() const
{
    return m_status;
}

void FileInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string FileInfo::GetOwnerUserName() const
{
    return m_ownerUserName;
}

void FileInfo::SetOwnerUserName(const string& _ownerUserName)
{
    m_ownerUserName = _ownerUserName;
    m_ownerUserNameHasBeenSet = true;
}

bool FileInfo::OwnerUserNameHasBeenSet() const
{
    return m_ownerUserNameHasBeenSet;
}

string FileInfo::GetCreateUserUin() const
{
    return m_createUserUin;
}

void FileInfo::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool FileInfo::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string FileInfo::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void FileInfo::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool FileInfo::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string FileInfo::GetCreateTime() const
{
    return m_createTime;
}

void FileInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FileInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void FileInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool FileInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

FileStorage FileInfo::GetStorage() const
{
    return m_storage;
}

void FileInfo::SetStorage(const FileStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool FileInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string FileInfo::GetPermissions() const
{
    return m_permissions;
}

void FileInfo::SetPermissions(const string& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool FileInfo::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

bool FileInfo::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void FileInfo::SetReleaseStatus(const bool& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool FileInfo::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

int64_t FileInfo::GetResourceMode() const
{
    return m_resourceMode;
}

void FileInfo::SetResourceMode(const int64_t& _resourceMode)
{
    m_resourceMode = _resourceMode;
    m_resourceModeHasBeenSet = true;
}

bool FileInfo::ResourceModeHasBeenSet() const
{
    return m_resourceModeHasBeenSet;
}

AsyncOperation FileInfo::GetAsyncOperation() const
{
    return m_asyncOperation;
}

void FileInfo::SetAsyncOperation(const AsyncOperation& _asyncOperation)
{
    m_asyncOperation = _asyncOperation;
    m_asyncOperationHasBeenSet = true;
}

bool FileInfo::AsyncOperationHasBeenSet() const
{
    return m_asyncOperationHasBeenSet;
}


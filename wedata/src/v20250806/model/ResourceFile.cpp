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

#include <tencentcloud/wedata/v20250806/model/ResourceFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ResourceFile::ResourceFile() :
    m_projectIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_fileExtensionTypeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_creatorUserUinHasBeenSet(false),
    m_creatorUserNameHasBeenSet(false),
    m_updateUserNameHasBeenSet(false),
    m_updateUserUinHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_resourceSourceModeHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_bundleInfoHasBeenSet(false)
{
}

CoreInternalOutcome ResourceFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CreatorUserUin") && !value["CreatorUserUin"].IsNull())
    {
        if (!value["CreatorUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.CreatorUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUserUin = string(value["CreatorUserUin"].GetString());
        m_creatorUserUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUserName") && !value["CreatorUserName"].IsNull())
    {
        if (!value["CreatorUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.CreatorUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUserName = string(value["CreatorUserName"].GetString());
        m_creatorUserNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserName") && !value["UpdateUserName"].IsNull())
    {
        if (!value["UpdateUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.UpdateUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserName = string(value["UpdateUserName"].GetString());
        m_updateUserNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserUin") && !value["UpdateUserUin"].IsNull())
    {
        if (!value["UpdateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.UpdateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserUin = string(value["UpdateUserUin"].GetString());
        m_updateUserUinHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("ResourceSourceMode") && !value["ResourceSourceMode"].IsNull())
    {
        if (!value["ResourceSourceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.ResourceSourceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceSourceMode = string(value["ResourceSourceMode"].GetString());
        m_resourceSourceModeHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BundleInfo") && !value["BundleInfo"].IsNull())
    {
        if (!value["BundleInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceFile.BundleInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleInfo = string(value["BundleInfo"].GetString());
        m_bundleInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtensionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtensionType.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceSourceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSourceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceSourceMode.c_str(), allocator).Move(), allocator);
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

}


string ResourceFile::GetProjectId() const
{
    return m_projectId;
}

void ResourceFile::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ResourceFile::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ResourceFile::GetResourceId() const
{
    return m_resourceId;
}

void ResourceFile::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceFile::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceFile::GetResourceName() const
{
    return m_resourceName;
}

void ResourceFile::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceFile::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ResourceFile::GetLocalPath() const
{
    return m_localPath;
}

void ResourceFile::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool ResourceFile::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string ResourceFile::GetRemotePath() const
{
    return m_remotePath;
}

void ResourceFile::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool ResourceFile::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string ResourceFile::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void ResourceFile::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool ResourceFile::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

string ResourceFile::GetSize() const
{
    return m_size;
}

void ResourceFile::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ResourceFile::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ResourceFile::GetCreatorUserUin() const
{
    return m_creatorUserUin;
}

void ResourceFile::SetCreatorUserUin(const string& _creatorUserUin)
{
    m_creatorUserUin = _creatorUserUin;
    m_creatorUserUinHasBeenSet = true;
}

bool ResourceFile::CreatorUserUinHasBeenSet() const
{
    return m_creatorUserUinHasBeenSet;
}

string ResourceFile::GetCreatorUserName() const
{
    return m_creatorUserName;
}

void ResourceFile::SetCreatorUserName(const string& _creatorUserName)
{
    m_creatorUserName = _creatorUserName;
    m_creatorUserNameHasBeenSet = true;
}

bool ResourceFile::CreatorUserNameHasBeenSet() const
{
    return m_creatorUserNameHasBeenSet;
}

string ResourceFile::GetUpdateUserName() const
{
    return m_updateUserName;
}

void ResourceFile::SetUpdateUserName(const string& _updateUserName)
{
    m_updateUserName = _updateUserName;
    m_updateUserNameHasBeenSet = true;
}

bool ResourceFile::UpdateUserNameHasBeenSet() const
{
    return m_updateUserNameHasBeenSet;
}

string ResourceFile::GetUpdateUserUin() const
{
    return m_updateUserUin;
}

void ResourceFile::SetUpdateUserUin(const string& _updateUserUin)
{
    m_updateUserUin = _updateUserUin;
    m_updateUserUinHasBeenSet = true;
}

bool ResourceFile::UpdateUserUinHasBeenSet() const
{
    return m_updateUserUinHasBeenSet;
}

string ResourceFile::GetBucketName() const
{
    return m_bucketName;
}

void ResourceFile::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool ResourceFile::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string ResourceFile::GetCosRegion() const
{
    return m_cosRegion;
}

void ResourceFile::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool ResourceFile::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string ResourceFile::GetResourceSourceMode() const
{
    return m_resourceSourceMode;
}

void ResourceFile::SetResourceSourceMode(const string& _resourceSourceMode)
{
    m_resourceSourceMode = _resourceSourceMode;
    m_resourceSourceModeHasBeenSet = true;
}

bool ResourceFile::ResourceSourceModeHasBeenSet() const
{
    return m_resourceSourceModeHasBeenSet;
}

string ResourceFile::GetBundleId() const
{
    return m_bundleId;
}

void ResourceFile::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ResourceFile::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string ResourceFile::GetBundleInfo() const
{
    return m_bundleInfo;
}

void ResourceFile::SetBundleInfo(const string& _bundleInfo)
{
    m_bundleInfo = _bundleInfo;
    m_bundleInfoHasBeenSet = true;
}

bool ResourceFile::BundleInfoHasBeenSet() const
{
    return m_bundleInfoHasBeenSet;
}


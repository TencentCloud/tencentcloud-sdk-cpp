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

#include <tencentcloud/goosefs/v20220519/model/ClusterMountAttr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ClusterMountAttr::ClusterMountAttr() :
    m_storageFileSystemIdHasBeenSet(false),
    m_mountPointHasBeenSet(false)
{
}

CoreInternalOutcome ClusterMountAttr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageFileSystemId") && !value["StorageFileSystemId"].IsNull())
    {
        if (!value["StorageFileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterMountAttr.StorageFileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageFileSystemId = string(value["StorageFileSystemId"].GetString());
        m_storageFileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("MountPoint") && !value["MountPoint"].IsNull())
    {
        if (!value["MountPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterMountAttr.MountPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPoint = string(value["MountPoint"].GetString());
        m_mountPointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterMountAttr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageFileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageFileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPoint.c_str(), allocator).Move(), allocator);
    }

}


string ClusterMountAttr::GetStorageFileSystemId() const
{
    return m_storageFileSystemId;
}

void ClusterMountAttr::SetStorageFileSystemId(const string& _storageFileSystemId)
{
    m_storageFileSystemId = _storageFileSystemId;
    m_storageFileSystemIdHasBeenSet = true;
}

bool ClusterMountAttr::StorageFileSystemIdHasBeenSet() const
{
    return m_storageFileSystemIdHasBeenSet;
}

string ClusterMountAttr::GetMountPoint() const
{
    return m_mountPoint;
}

void ClusterMountAttr::SetMountPoint(const string& _mountPoint)
{
    m_mountPoint = _mountPoint;
    m_mountPointHasBeenSet = true;
}

bool ClusterMountAttr::MountPointHasBeenSet() const
{
    return m_mountPointHasBeenSet;
}


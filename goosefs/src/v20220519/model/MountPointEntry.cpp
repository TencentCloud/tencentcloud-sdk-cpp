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

#include <tencentcloud/goosefs/v20220519/model/MountPointEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

MountPointEntry::MountPointEntry() :
    m_storageFileSystemIdHasBeenSet(false),
    m_mountDirHasBeenSet(false)
{
}

CoreInternalOutcome MountPointEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageFileSystemId") && !value["StorageFileSystemId"].IsNull())
    {
        if (!value["StorageFileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointEntry.StorageFileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageFileSystemId = string(value["StorageFileSystemId"].GetString());
        m_storageFileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("MountDir") && !value["MountDir"].IsNull())
    {
        if (!value["MountDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointEntry.MountDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountDir = string(value["MountDir"].GetString());
        m_mountDirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountPointEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageFileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageFileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountDir.c_str(), allocator).Move(), allocator);
    }

}


string MountPointEntry::GetStorageFileSystemId() const
{
    return m_storageFileSystemId;
}

void MountPointEntry::SetStorageFileSystemId(const string& _storageFileSystemId)
{
    m_storageFileSystemId = _storageFileSystemId;
    m_storageFileSystemIdHasBeenSet = true;
}

bool MountPointEntry::StorageFileSystemIdHasBeenSet() const
{
    return m_storageFileSystemIdHasBeenSet;
}

string MountPointEntry::GetMountDir() const
{
    return m_mountDir;
}

void MountPointEntry::SetMountDir(const string& _mountDir)
{
    m_mountDir = _mountDir;
    m_mountDirHasBeenSet = true;
}

bool MountPointEntry::MountDirHasBeenSet() const
{
    return m_mountDirHasBeenSet;
}


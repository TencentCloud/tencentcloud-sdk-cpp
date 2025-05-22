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

#include <tencentcloud/tke/v20220501/model/Disk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

Disk::Disk() :
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_autoFormatAndMountHasBeenSet(false),
    m_fileSystemHasBeenSet(false),
    m_mountTargetHasBeenSet(false),
    m_diskIdHasBeenSet(false)
{
}

CoreInternalOutcome Disk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("AutoFormatAndMount") && !value["AutoFormatAndMount"].IsNull())
    {
        if (!value["AutoFormatAndMount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.AutoFormatAndMount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoFormatAndMount = value["AutoFormatAndMount"].GetBool();
        m_autoFormatAndMountHasBeenSet = true;
    }

    if (value.HasMember("FileSystem") && !value["FileSystem"].IsNull())
    {
        if (!value["FileSystem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.FileSystem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystem = string(value["FileSystem"].GetString());
        m_fileSystemHasBeenSet = true;
    }

    if (value.HasMember("MountTarget") && !value["MountTarget"].IsNull())
    {
        if (!value["MountTarget"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.MountTarget` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountTarget = string(value["MountTarget"].GetString());
        m_mountTargetHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Disk.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Disk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_autoFormatAndMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoFormatAndMount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoFormatAndMount, allocator);
    }

    if (m_fileSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_mountTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountTarget.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

}


string Disk::GetDiskType() const
{
    return m_diskType;
}

void Disk::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool Disk::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t Disk::GetDiskSize() const
{
    return m_diskSize;
}

void Disk::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Disk::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

bool Disk::GetAutoFormatAndMount() const
{
    return m_autoFormatAndMount;
}

void Disk::SetAutoFormatAndMount(const bool& _autoFormatAndMount)
{
    m_autoFormatAndMount = _autoFormatAndMount;
    m_autoFormatAndMountHasBeenSet = true;
}

bool Disk::AutoFormatAndMountHasBeenSet() const
{
    return m_autoFormatAndMountHasBeenSet;
}

string Disk::GetFileSystem() const
{
    return m_fileSystem;
}

void Disk::SetFileSystem(const string& _fileSystem)
{
    m_fileSystem = _fileSystem;
    m_fileSystemHasBeenSet = true;
}

bool Disk::FileSystemHasBeenSet() const
{
    return m_fileSystemHasBeenSet;
}

string Disk::GetMountTarget() const
{
    return m_mountTarget;
}

void Disk::SetMountTarget(const string& _mountTarget)
{
    m_mountTarget = _mountTarget;
    m_mountTargetHasBeenSet = true;
}

bool Disk::MountTargetHasBeenSet() const
{
    return m_mountTargetHasBeenSet;
}

string Disk::GetDiskId() const
{
    return m_diskId;
}

void Disk::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool Disk::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}


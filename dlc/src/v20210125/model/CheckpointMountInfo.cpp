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

#include <tencentcloud/dlc/v20210125/model/CheckpointMountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckpointMountInfo::CheckpointMountInfo() :
    m_storageTypeHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_volumeSubPathHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_platformManagedHasBeenSet(false),
    m_snapshotKeyHasBeenSet(false)
{
}

CoreInternalOutcome CheckpointMountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("VolumeSubPath") && !value["VolumeSubPath"].IsNull())
    {
        if (!value["VolumeSubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.VolumeSubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSubPath = string(value["VolumeSubPath"].GetString());
        m_volumeSubPathHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PlatformManaged") && !value["PlatformManaged"].IsNull())
    {
        if (!value["PlatformManaged"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.PlatformManaged` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_platformManaged = value["PlatformManaged"].GetBool();
        m_platformManagedHasBeenSet = true;
    }

    if (value.HasMember("SnapshotKey") && !value["SnapshotKey"].IsNull())
    {
        if (!value["SnapshotKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckpointMountInfo.SnapshotKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotKey = string(value["SnapshotKey"].GetString());
        m_snapshotKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckpointMountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeSubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_platformManagedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformManaged";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformManaged, allocator);
    }

    if (m_snapshotKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotKey.c_str(), allocator).Move(), allocator);
    }

}


string CheckpointMountInfo::GetStorageType() const
{
    return m_storageType;
}

void CheckpointMountInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CheckpointMountInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string CheckpointMountInfo::GetMountPath() const
{
    return m_mountPath;
}

void CheckpointMountInfo::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool CheckpointMountInfo::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

string CheckpointMountInfo::GetVolumeSubPath() const
{
    return m_volumeSubPath;
}

void CheckpointMountInfo::SetVolumeSubPath(const string& _volumeSubPath)
{
    m_volumeSubPath = _volumeSubPath;
    m_volumeSubPathHasBeenSet = true;
}

bool CheckpointMountInfo::VolumeSubPathHasBeenSet() const
{
    return m_volumeSubPathHasBeenSet;
}

string CheckpointMountInfo::GetBucket() const
{
    return m_bucket;
}

void CheckpointMountInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CheckpointMountInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CheckpointMountInfo::GetRegion() const
{
    return m_region;
}

void CheckpointMountInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CheckpointMountInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool CheckpointMountInfo::GetPlatformManaged() const
{
    return m_platformManaged;
}

void CheckpointMountInfo::SetPlatformManaged(const bool& _platformManaged)
{
    m_platformManaged = _platformManaged;
    m_platformManagedHasBeenSet = true;
}

bool CheckpointMountInfo::PlatformManagedHasBeenSet() const
{
    return m_platformManagedHasBeenSet;
}

string CheckpointMountInfo::GetSnapshotKey() const
{
    return m_snapshotKey;
}

void CheckpointMountInfo::SetSnapshotKey(const string& _snapshotKey)
{
    m_snapshotKey = _snapshotKey;
    m_snapshotKeyHasBeenSet = true;
}

bool CheckpointMountInfo::SnapshotKeyHasBeenSet() const
{
    return m_snapshotKeyHasBeenSet;
}


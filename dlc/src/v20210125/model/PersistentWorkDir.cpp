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

#include <tencentcloud/dlc/v20210125/model/PersistentWorkDir.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PersistentWorkDir::PersistentWorkDir() :
    m_enabledHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_volumeSubPathHasBeenSet(false)
{
}

CoreInternalOutcome PersistentWorkDir::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("VolumeSubPath") && !value["VolumeSubPath"].IsNull())
    {
        if (!value["VolumeSubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersistentWorkDir.VolumeSubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSubPath = string(value["VolumeSubPath"].GetString());
        m_volumeSubPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersistentWorkDir::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeSubPath.c_str(), allocator).Move(), allocator);
    }

}


bool PersistentWorkDir::GetEnabled() const
{
    return m_enabled;
}

void PersistentWorkDir::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool PersistentWorkDir::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string PersistentWorkDir::GetType() const
{
    return m_type;
}

void PersistentWorkDir::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PersistentWorkDir::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PersistentWorkDir::GetBucket() const
{
    return m_bucket;
}

void PersistentWorkDir::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool PersistentWorkDir::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string PersistentWorkDir::GetFileSystemId() const
{
    return m_fileSystemId;
}

void PersistentWorkDir::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool PersistentWorkDir::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string PersistentWorkDir::GetVolumeSubPath() const
{
    return m_volumeSubPath;
}

void PersistentWorkDir::SetVolumeSubPath(const string& _volumeSubPath)
{
    m_volumeSubPath = _volumeSubPath;
    m_volumeSubPathHasBeenSet = true;
}

bool PersistentWorkDir::VolumeSubPathHasBeenSet() const
{
    return m_volumeSubPathHasBeenSet;
}


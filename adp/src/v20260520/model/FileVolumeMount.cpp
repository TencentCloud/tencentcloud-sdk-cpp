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

#include <tencentcloud/adp/v20260520/model/FileVolumeMount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

FileVolumeMount::FileVolumeMount() :
    m_accessModeHasBeenSet(false),
    m_mountPathHasBeenSet(false),
    m_volumeIdHasBeenSet(false),
    m_mountIdHasBeenSet(false),
    m_relativePathHasBeenSet(false),
    m_volumeNameHasBeenSet(false)
{
}

CoreInternalOutcome FileVolumeMount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("MountPath") && !value["MountPath"].IsNull())
    {
        if (!value["MountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.MountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountPath = string(value["MountPath"].GetString());
        m_mountPathHasBeenSet = true;
    }

    if (value.HasMember("VolumeId") && !value["VolumeId"].IsNull())
    {
        if (!value["VolumeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.VolumeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeId = string(value["VolumeId"].GetString());
        m_volumeIdHasBeenSet = true;
    }

    if (value.HasMember("MountId") && !value["MountId"].IsNull())
    {
        if (!value["MountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.MountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountId = string(value["MountId"].GetString());
        m_mountIdHasBeenSet = true;
    }

    if (value.HasMember("RelativePath") && !value["RelativePath"].IsNull())
    {
        if (!value["RelativePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.RelativePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativePath = string(value["RelativePath"].GetString());
        m_relativePathHasBeenSet = true;
    }

    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileVolumeMount.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileVolumeMount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeId.c_str(), allocator).Move(), allocator);
    }

    if (m_mountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountId.c_str(), allocator).Move(), allocator);
    }

    if (m_relativePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativePath.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

}


string FileVolumeMount::GetAccessMode() const
{
    return m_accessMode;
}

void FileVolumeMount::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool FileVolumeMount::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string FileVolumeMount::GetMountPath() const
{
    return m_mountPath;
}

void FileVolumeMount::SetMountPath(const string& _mountPath)
{
    m_mountPath = _mountPath;
    m_mountPathHasBeenSet = true;
}

bool FileVolumeMount::MountPathHasBeenSet() const
{
    return m_mountPathHasBeenSet;
}

string FileVolumeMount::GetVolumeId() const
{
    return m_volumeId;
}

void FileVolumeMount::SetVolumeId(const string& _volumeId)
{
    m_volumeId = _volumeId;
    m_volumeIdHasBeenSet = true;
}

bool FileVolumeMount::VolumeIdHasBeenSet() const
{
    return m_volumeIdHasBeenSet;
}

string FileVolumeMount::GetMountId() const
{
    return m_mountId;
}

void FileVolumeMount::SetMountId(const string& _mountId)
{
    m_mountId = _mountId;
    m_mountIdHasBeenSet = true;
}

bool FileVolumeMount::MountIdHasBeenSet() const
{
    return m_mountIdHasBeenSet;
}

string FileVolumeMount::GetRelativePath() const
{
    return m_relativePath;
}

void FileVolumeMount::SetRelativePath(const string& _relativePath)
{
    m_relativePath = _relativePath;
    m_relativePathHasBeenSet = true;
}

bool FileVolumeMount::RelativePathHasBeenSet() const
{
    return m_relativePathHasBeenSet;
}

string FileVolumeMount::GetVolumeName() const
{
    return m_volumeName;
}

void FileVolumeMount::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool FileVolumeMount::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}


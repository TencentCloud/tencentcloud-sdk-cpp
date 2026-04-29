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

#include <tencentcloud/emr/v20190103/model/CFSVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CFSVolume::CFSVolume() :
    m_volumeNameHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_fSIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_subPathHasBeenSet(false)
{
}

CoreInternalOutcome CFSVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSVolume.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSVolume.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("FSId") && !value["FSId"].IsNull())
    {
        if (!value["FSId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSVolume.FSId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fSId = string(value["FSId"].GetString());
        m_fSIdHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSVolume.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFSVolume.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CFSVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_fSIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FSId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fSId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

}


string CFSVolume::GetVolumeName() const
{
    return m_volumeName;
}

void CFSVolume::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool CFSVolume::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string CFSVolume::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CFSVolume::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CFSVolume::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CFSVolume::GetFSId() const
{
    return m_fSId;
}

void CFSVolume::SetFSId(const string& _fSId)
{
    m_fSId = _fSId;
    m_fSIdHasBeenSet = true;
}

bool CFSVolume::FSIdHasBeenSet() const
{
    return m_fSIdHasBeenSet;
}

string CFSVolume::GetHost() const
{
    return m_host;
}

void CFSVolume::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CFSVolume::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CFSVolume::GetSubPath() const
{
    return m_subPath;
}

void CFSVolume::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool CFSVolume::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}


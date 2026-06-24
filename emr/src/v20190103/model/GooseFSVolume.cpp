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

#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

GooseFSVolume::GooseFSVolume() :
    m_volumeNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_subPathHasBeenSet(false),
    m_fuseVersionHasBeenSet(false),
    m_clientVersionHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_jvmOptionsHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSVolume::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeName") && !value["VolumeName"].IsNull())
    {
        if (!value["VolumeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.VolumeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeName = string(value["VolumeName"].GetString());
        m_volumeNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("SubPath") && !value["SubPath"].IsNull())
    {
        if (!value["SubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.SubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPath = string(value["SubPath"].GetString());
        m_subPathHasBeenSet = true;
    }

    if (value.HasMember("FuseVersion") && !value["FuseVersion"].IsNull())
    {
        if (!value["FuseVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.FuseVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuseVersion = string(value["FuseVersion"].GetString());
        m_fuseVersionHasBeenSet = true;
    }

    if (value.HasMember("ClientVersion") && !value["ClientVersion"].IsNull())
    {
        if (!value["ClientVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.ClientVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientVersion = string(value["ClientVersion"].GetString());
        m_clientVersionHasBeenSet = true;
    }

    if (value.HasMember("MountOptions") && !value["MountOptions"].IsNull())
    {
        if (!value["MountOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.MountOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountOptions = string(value["MountOptions"].GetString());
        m_mountOptionsHasBeenSet = true;
    }

    if (value.HasMember("JvmOptions") && !value["JvmOptions"].IsNull())
    {
        if (!value["JvmOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSVolume.JvmOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmOptions = string(value["JvmOptions"].GetString());
        m_jvmOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSVolume::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_subPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPath.c_str(), allocator).Move(), allocator);
    }

    if (m_fuseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuseVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fuseVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mountOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmOptions.c_str(), allocator).Move(), allocator);
    }

}


string GooseFSVolume::GetVolumeName() const
{
    return m_volumeName;
}

void GooseFSVolume::SetVolumeName(const string& _volumeName)
{
    m_volumeName = _volumeName;
    m_volumeNameHasBeenSet = true;
}

bool GooseFSVolume::VolumeNameHasBeenSet() const
{
    return m_volumeNameHasBeenSet;
}

string GooseFSVolume::GetClusterId() const
{
    return m_clusterId;
}

void GooseFSVolume::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GooseFSVolume::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GooseFSVolume::GetNamespace() const
{
    return m_namespace;
}

void GooseFSVolume::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GooseFSVolume::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GooseFSVolume::GetSubPath() const
{
    return m_subPath;
}

void GooseFSVolume::SetSubPath(const string& _subPath)
{
    m_subPath = _subPath;
    m_subPathHasBeenSet = true;
}

bool GooseFSVolume::SubPathHasBeenSet() const
{
    return m_subPathHasBeenSet;
}

string GooseFSVolume::GetFuseVersion() const
{
    return m_fuseVersion;
}

void GooseFSVolume::SetFuseVersion(const string& _fuseVersion)
{
    m_fuseVersion = _fuseVersion;
    m_fuseVersionHasBeenSet = true;
}

bool GooseFSVolume::FuseVersionHasBeenSet() const
{
    return m_fuseVersionHasBeenSet;
}

string GooseFSVolume::GetClientVersion() const
{
    return m_clientVersion;
}

void GooseFSVolume::SetClientVersion(const string& _clientVersion)
{
    m_clientVersion = _clientVersion;
    m_clientVersionHasBeenSet = true;
}

bool GooseFSVolume::ClientVersionHasBeenSet() const
{
    return m_clientVersionHasBeenSet;
}

string GooseFSVolume::GetMountOptions() const
{
    return m_mountOptions;
}

void GooseFSVolume::SetMountOptions(const string& _mountOptions)
{
    m_mountOptions = _mountOptions;
    m_mountOptionsHasBeenSet = true;
}

bool GooseFSVolume::MountOptionsHasBeenSet() const
{
    return m_mountOptionsHasBeenSet;
}

string GooseFSVolume::GetJvmOptions() const
{
    return m_jvmOptions;
}

void GooseFSVolume::SetJvmOptions(const string& _jvmOptions)
{
    m_jvmOptions = _jvmOptions;
    m_jvmOptionsHasBeenSet = true;
}

bool GooseFSVolume::JvmOptionsHasBeenSet() const
{
    return m_jvmOptionsHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/ContainerEnvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ContainerEnvInfo::ContainerEnvInfo() :
    m_nodeTypeHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_containerdVersionHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerEnvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEnvInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEnvInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("ContainerdVersion") && !value["ContainerdVersion"].IsNull())
    {
        if (!value["ContainerdVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEnvInfo.ContainerdVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerdVersion = string(value["ContainerdVersion"].GetString());
        m_containerdVersionHasBeenSet = true;
    }

    if (value.HasMember("FileSystemType") && !value["FileSystemType"].IsNull())
    {
        if (!value["FileSystemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEnvInfo.FileSystemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemType = string(value["FileSystemType"].GetString());
        m_fileSystemTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerEnvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_containerdVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerdVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerdVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemType.c_str(), allocator).Move(), allocator);
    }

}


string ContainerEnvInfo::GetNodeType() const
{
    return m_nodeType;
}

void ContainerEnvInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ContainerEnvInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ContainerEnvInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void ContainerEnvInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool ContainerEnvInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string ContainerEnvInfo::GetContainerdVersion() const
{
    return m_containerdVersion;
}

void ContainerEnvInfo::SetContainerdVersion(const string& _containerdVersion)
{
    m_containerdVersion = _containerdVersion;
    m_containerdVersionHasBeenSet = true;
}

bool ContainerEnvInfo::ContainerdVersionHasBeenSet() const
{
    return m_containerdVersionHasBeenSet;
}

string ContainerEnvInfo::GetFileSystemType() const
{
    return m_fileSystemType;
}

void ContainerEnvInfo::SetFileSystemType(const string& _fileSystemType)
{
    m_fileSystemType = _fileSystemType;
    m_fileSystemTypeHasBeenSet = true;
}

bool ContainerEnvInfo::FileSystemTypeHasBeenSet() const
{
    return m_fileSystemTypeHasBeenSet;
}


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

#include <tencentcloud/csip/v20221121/model/ImageAssociatedContainer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageAssociatedContainer::ImageAssociatedContainer() :
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIpHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_podIdHasBeenSet(false),
    m_clusterCaMd5HasBeenSet(false)
{
}

CoreInternalOutcome ImageAssociatedContainer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ClusterStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = string(value["ClusterStatus"].GetString());
        m_clusterStatusHasBeenSet = true;
    }

    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterCaMd5") && !value["ClusterCaMd5"].IsNull())
    {
        if (!value["ClusterCaMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedContainer.ClusterCaMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCaMd5 = string(value["ClusterCaMd5"].GetString());
        m_clusterCaMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAssociatedContainer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_podIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCaMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCaMd5.c_str(), allocator).Move(), allocator);
    }

}


string ImageAssociatedContainer::GetContainerId() const
{
    return m_containerId;
}

void ImageAssociatedContainer::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ImageAssociatedContainer::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string ImageAssociatedContainer::GetContainerName() const
{
    return m_containerName;
}

void ImageAssociatedContainer::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ImageAssociatedContainer::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string ImageAssociatedContainer::GetPodName() const
{
    return m_podName;
}

void ImageAssociatedContainer::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ImageAssociatedContainer::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ImageAssociatedContainer::GetPodIp() const
{
    return m_podIp;
}

void ImageAssociatedContainer::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool ImageAssociatedContainer::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string ImageAssociatedContainer::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageAssociatedContainer::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageAssociatedContainer::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageAssociatedContainer::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageAssociatedContainer::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageAssociatedContainer::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageAssociatedContainer::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageAssociatedContainer::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageAssociatedContainer::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ImageAssociatedContainer::GetClusterId() const
{
    return m_clusterId;
}

void ImageAssociatedContainer::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ImageAssociatedContainer::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ImageAssociatedContainer::GetClusterName() const
{
    return m_clusterName;
}

void ImageAssociatedContainer::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ImageAssociatedContainer::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ImageAssociatedContainer::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ImageAssociatedContainer::SetClusterStatus(const string& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ImageAssociatedContainer::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

string ImageAssociatedContainer::GetCmd() const
{
    return m_cmd;
}

void ImageAssociatedContainer::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool ImageAssociatedContainer::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

string ImageAssociatedContainer::GetPodId() const
{
    return m_podId;
}

void ImageAssociatedContainer::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool ImageAssociatedContainer::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

string ImageAssociatedContainer::GetClusterCaMd5() const
{
    return m_clusterCaMd5;
}

void ImageAssociatedContainer::SetClusterCaMd5(const string& _clusterCaMd5)
{
    m_clusterCaMd5 = _clusterCaMd5;
    m_clusterCaMd5HasBeenSet = true;
}

bool ImageAssociatedContainer::ClusterCaMd5HasBeenSet() const
{
    return m_clusterCaMd5HasBeenSet;
}


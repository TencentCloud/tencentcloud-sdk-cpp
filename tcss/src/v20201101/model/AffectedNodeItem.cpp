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

#include <tencentcloud/tcss/v20201101/model/AffectedNodeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AffectedNodeItem::AffectedNodeItem() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_containerRuntimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_verifyInfoHasBeenSet(false),
    m_nodeNameHasBeenSet(false)
{
}

CoreInternalOutcome AffectedNodeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.PrivateIpAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddresses = string(value["PrivateIpAddresses"].GetString());
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("ClusterVersion") && !value["ClusterVersion"].IsNull())
    {
        if (!value["ClusterVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.ClusterVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVersion = string(value["ClusterVersion"].GetString());
        m_clusterVersionHasBeenSet = true;
    }

    if (value.HasMember("ContainerRuntime") && !value["ContainerRuntime"].IsNull())
    {
        if (!value["ContainerRuntime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.ContainerRuntime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerRuntime = string(value["ContainerRuntime"].GetString());
        m_containerRuntimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("VerifyInfo") && !value["VerifyInfo"].IsNull())
    {
        if (!value["VerifyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.VerifyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyInfo = string(value["VerifyInfo"].GetString());
        m_verifyInfoHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedNodeItem.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AffectedNodeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_containerRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerRuntime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerRuntime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

}


string AffectedNodeItem::GetClusterId() const
{
    return m_clusterId;
}

void AffectedNodeItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool AffectedNodeItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string AffectedNodeItem::GetClusterName() const
{
    return m_clusterName;
}

void AffectedNodeItem::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AffectedNodeItem::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string AffectedNodeItem::GetInstanceId() const
{
    return m_instanceId;
}

void AffectedNodeItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AffectedNodeItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AffectedNodeItem::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void AffectedNodeItem::SetPrivateIpAddresses(const string& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool AffectedNodeItem::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string AffectedNodeItem::GetInstanceRole() const
{
    return m_instanceRole;
}

void AffectedNodeItem::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool AffectedNodeItem::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string AffectedNodeItem::GetClusterVersion() const
{
    return m_clusterVersion;
}

void AffectedNodeItem::SetClusterVersion(const string& _clusterVersion)
{
    m_clusterVersion = _clusterVersion;
    m_clusterVersionHasBeenSet = true;
}

bool AffectedNodeItem::ClusterVersionHasBeenSet() const
{
    return m_clusterVersionHasBeenSet;
}

string AffectedNodeItem::GetContainerRuntime() const
{
    return m_containerRuntime;
}

void AffectedNodeItem::SetContainerRuntime(const string& _containerRuntime)
{
    m_containerRuntime = _containerRuntime;
    m_containerRuntimeHasBeenSet = true;
}

bool AffectedNodeItem::ContainerRuntimeHasBeenSet() const
{
    return m_containerRuntimeHasBeenSet;
}

string AffectedNodeItem::GetRegion() const
{
    return m_region;
}

void AffectedNodeItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AffectedNodeItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AffectedNodeItem::GetVerifyInfo() const
{
    return m_verifyInfo;
}

void AffectedNodeItem::SetVerifyInfo(const string& _verifyInfo)
{
    m_verifyInfo = _verifyInfo;
    m_verifyInfoHasBeenSet = true;
}

bool AffectedNodeItem::VerifyInfoHasBeenSet() const
{
    return m_verifyInfoHasBeenSet;
}

string AffectedNodeItem::GetNodeName() const
{
    return m_nodeName;
}

void AffectedNodeItem::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool AffectedNodeItem::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}


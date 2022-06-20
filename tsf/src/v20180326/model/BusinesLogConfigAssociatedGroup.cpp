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

#include <tencentcloud/tsf/v20180326/model/BusinesLogConfigAssociatedGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

BusinesLogConfigAssociatedGroup::BusinesLogConfigAssociatedGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_associatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome BusinesLogConfigAssociatedGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("AssociatedTime") && !value["AssociatedTime"].IsNull())
    {
        if (!value["AssociatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinesLogConfigAssociatedGroup.AssociatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associatedTime = string(value["AssociatedTime"].GetString());
        m_associatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinesLogConfigAssociatedGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_associatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associatedTime.c_str(), allocator).Move(), allocator);
    }

}


string BusinesLogConfigAssociatedGroup::GetGroupId() const
{
    return m_groupId;
}

void BusinesLogConfigAssociatedGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetGroupName() const
{
    return m_groupName;
}

void BusinesLogConfigAssociatedGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetApplicationId() const
{
    return m_applicationId;
}

void BusinesLogConfigAssociatedGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetApplicationName() const
{
    return m_applicationName;
}

void BusinesLogConfigAssociatedGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetApplicationType() const
{
    return m_applicationType;
}

void BusinesLogConfigAssociatedGroup::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void BusinesLogConfigAssociatedGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void BusinesLogConfigAssociatedGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetClusterId() const
{
    return m_clusterId;
}

void BusinesLogConfigAssociatedGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetClusterName() const
{
    return m_clusterName;
}

void BusinesLogConfigAssociatedGroup::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetClusterType() const
{
    return m_clusterType;
}

void BusinesLogConfigAssociatedGroup::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string BusinesLogConfigAssociatedGroup::GetAssociatedTime() const
{
    return m_associatedTime;
}

void BusinesLogConfigAssociatedGroup::SetAssociatedTime(const string& _associatedTime)
{
    m_associatedTime = _associatedTime;
    m_associatedTimeHasBeenSet = true;
}

bool BusinesLogConfigAssociatedGroup::AssociatedTimeHasBeenSet() const
{
    return m_associatedTimeHasBeenSet;
}


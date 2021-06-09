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

#include <tencentcloud/tsf/v20180326/model/ServerlessGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ServerlessGroup::ServerlessGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_pkgVersionHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceRequestHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgName") && !value["PkgName"].IsNull())
    {
        if (!value["PkgName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.PkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgName = string(value["PkgName"].GetString());
        m_pkgNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PkgVersion") && !value["PkgVersion"].IsNull())
    {
        if (!value["PkgVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.PkgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgVersion = string(value["PkgVersion"].GetString());
        m_pkgVersionHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceRequest") && !value["InstanceRequest"].IsNull())
    {
        if (!value["InstanceRequest"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.InstanceRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRequest = value["InstanceRequest"].GetUint64();
        m_instanceRequestHasBeenSet = true;
    }

    if (value.HasMember("StartupParameters") && !value["StartupParameters"].IsNull())
    {
        if (!value["StartupParameters"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.StartupParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupParameters = string(value["StartupParameters"].GetString());
        m_startupParametersHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServerlessGroup.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsArray())
            return CoreInternalOutcome(Error("response `ServerlessGroup.ApplicationName` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationName.push_back((*itr).GetString());
        }
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceRequest, allocator);
    }

    if (m_startupParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationName.begin(); itr != m_applicationName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ServerlessGroup::GetGroupId() const
{
    return m_groupId;
}

void ServerlessGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ServerlessGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ServerlessGroup::GetGroupName() const
{
    return m_groupName;
}

void ServerlessGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ServerlessGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ServerlessGroup::GetCreateTime() const
{
    return m_createTime;
}

void ServerlessGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerlessGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServerlessGroup::GetStatus() const
{
    return m_status;
}

void ServerlessGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerlessGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServerlessGroup::GetPkgId() const
{
    return m_pkgId;
}

void ServerlessGroup::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool ServerlessGroup::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string ServerlessGroup::GetPkgName() const
{
    return m_pkgName;
}

void ServerlessGroup::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool ServerlessGroup::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string ServerlessGroup::GetClusterId() const
{
    return m_clusterId;
}

void ServerlessGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ServerlessGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ServerlessGroup::GetClusterName() const
{
    return m_clusterName;
}

void ServerlessGroup::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ServerlessGroup::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ServerlessGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void ServerlessGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ServerlessGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ServerlessGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void ServerlessGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ServerlessGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ServerlessGroup::GetVpcId() const
{
    return m_vpcId;
}

void ServerlessGroup::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ServerlessGroup::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ServerlessGroup::GetSubnetId() const
{
    return m_subnetId;
}

void ServerlessGroup::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServerlessGroup::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ServerlessGroup::GetPkgVersion() const
{
    return m_pkgVersion;
}

void ServerlessGroup::SetPkgVersion(const string& _pkgVersion)
{
    m_pkgVersion = _pkgVersion;
    m_pkgVersionHasBeenSet = true;
}

bool ServerlessGroup::PkgVersionHasBeenSet() const
{
    return m_pkgVersionHasBeenSet;
}

string ServerlessGroup::GetMemory() const
{
    return m_memory;
}

void ServerlessGroup::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ServerlessGroup::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ServerlessGroup::GetInstanceRequest() const
{
    return m_instanceRequest;
}

void ServerlessGroup::SetInstanceRequest(const uint64_t& _instanceRequest)
{
    m_instanceRequest = _instanceRequest;
    m_instanceRequestHasBeenSet = true;
}

bool ServerlessGroup::InstanceRequestHasBeenSet() const
{
    return m_instanceRequestHasBeenSet;
}

string ServerlessGroup::GetStartupParameters() const
{
    return m_startupParameters;
}

void ServerlessGroup::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool ServerlessGroup::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}

string ServerlessGroup::GetApplicationId() const
{
    return m_applicationId;
}

void ServerlessGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ServerlessGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

uint64_t ServerlessGroup::GetInstanceCount() const
{
    return m_instanceCount;
}

void ServerlessGroup::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ServerlessGroup::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

vector<string> ServerlessGroup::GetApplicationName() const
{
    return m_applicationName;
}

void ServerlessGroup::SetApplicationName(const vector<string>& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ServerlessGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}


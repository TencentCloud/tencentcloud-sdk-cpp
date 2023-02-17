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

#include <tencentcloud/tsf/v20180326/model/ContainGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainGroup::ContainGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_kubeInjectEnableHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome ContainGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.MemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = string(value["MemRequest"].GetString());
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.MemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = string(value["MemLimit"].GetString());
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("KubeInjectEnable") && !value["KubeInjectEnable"].IsNull())
    {
        if (!value["KubeInjectEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.KubeInjectEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kubeInjectEnable = value["KubeInjectEnable"].GetBool();
        m_kubeInjectEnableHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainGroup.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
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

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_kubeInjectEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeInjectEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kubeInjectEnable, allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

}


string ContainGroup::GetGroupId() const
{
    return m_groupId;
}

void ContainGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ContainGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ContainGroup::GetGroupName() const
{
    return m_groupName;
}

void ContainGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ContainGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ContainGroup::GetCreateTime() const
{
    return m_createTime;
}

void ContainGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ContainGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ContainGroup::GetServer() const
{
    return m_server;
}

void ContainGroup::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool ContainGroup::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string ContainGroup::GetRepoName() const
{
    return m_repoName;
}

void ContainGroup::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ContainGroup::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ContainGroup::GetTagName() const
{
    return m_tagName;
}

void ContainGroup::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool ContainGroup::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string ContainGroup::GetClusterId() const
{
    return m_clusterId;
}

void ContainGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ContainGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ContainGroup::GetClusterName() const
{
    return m_clusterName;
}

void ContainGroup::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ContainGroup::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ContainGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void ContainGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ContainGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ContainGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void ContainGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ContainGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ContainGroup::GetCpuRequest() const
{
    return m_cpuRequest;
}

void ContainGroup::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool ContainGroup::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string ContainGroup::GetCpuLimit() const
{
    return m_cpuLimit;
}

void ContainGroup::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool ContainGroup::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string ContainGroup::GetMemRequest() const
{
    return m_memRequest;
}

void ContainGroup::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool ContainGroup::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string ContainGroup::GetMemLimit() const
{
    return m_memLimit;
}

void ContainGroup::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool ContainGroup::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string ContainGroup::GetAlias() const
{
    return m_alias;
}

void ContainGroup::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ContainGroup::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

bool ContainGroup::GetKubeInjectEnable() const
{
    return m_kubeInjectEnable;
}

void ContainGroup::SetKubeInjectEnable(const bool& _kubeInjectEnable)
{
    m_kubeInjectEnable = _kubeInjectEnable;
    m_kubeInjectEnableHasBeenSet = true;
}

bool ContainGroup::KubeInjectEnableHasBeenSet() const
{
    return m_kubeInjectEnableHasBeenSet;
}

string ContainGroup::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ContainGroup::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ContainGroup::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}


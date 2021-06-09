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

#include <tencentcloud/tsf/v20180326/model/CreateContainGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

CreateContainGroupRequest::CreateContainGroupRequest() :
    m_applicationIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_groupCommentHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_groupResourceTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_agentCpuRequestHasBeenSet(false),
    m_agentCpuLimitHasBeenSet(false),
    m_agentMemRequestHasBeenSet(false),
    m_agentMemLimitHasBeenSet(false),
    m_istioCpuRequestHasBeenSet(false),
    m_istioCpuLimitHasBeenSet(false),
    m_istioMemRequestHasBeenSet(false),
    m_istioMemLimitHasBeenSet(false)
{
}

string CreateContainGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_groupCommentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupComment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupComment.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateIvl, allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_groupResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioMemLimit.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateContainGroupRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateContainGroupRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateContainGroupRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateContainGroupRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void CreateContainGroupRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool CreateContainGroupRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string CreateContainGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateContainGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateContainGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t CreateContainGroupRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void CreateContainGroupRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool CreateContainGroupRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t CreateContainGroupRequest::GetAccessType() const
{
    return m_accessType;
}

void CreateContainGroupRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CreateContainGroupRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<ProtocolPort> CreateContainGroupRequest::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void CreateContainGroupRequest::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool CreateContainGroupRequest::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

string CreateContainGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateContainGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateContainGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateContainGroupRequest::GetCpuLimit() const
{
    return m_cpuLimit;
}

void CreateContainGroupRequest::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string CreateContainGroupRequest::GetMemLimit() const
{
    return m_memLimit;
}

void CreateContainGroupRequest::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string CreateContainGroupRequest::GetGroupComment() const
{
    return m_groupComment;
}

void CreateContainGroupRequest::SetGroupComment(const string& _groupComment)
{
    m_groupComment = _groupComment;
    m_groupCommentHasBeenSet = true;
}

bool CreateContainGroupRequest::GroupCommentHasBeenSet() const
{
    return m_groupCommentHasBeenSet;
}

int64_t CreateContainGroupRequest::GetUpdateType() const
{
    return m_updateType;
}

void CreateContainGroupRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool CreateContainGroupRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t CreateContainGroupRequest::GetUpdateIvl() const
{
    return m_updateIvl;
}

void CreateContainGroupRequest::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool CreateContainGroupRequest::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

string CreateContainGroupRequest::GetCpuRequest() const
{
    return m_cpuRequest;
}

void CreateContainGroupRequest::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string CreateContainGroupRequest::GetMemRequest() const
{
    return m_memRequest;
}

void CreateContainGroupRequest::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string CreateContainGroupRequest::GetGroupResourceType() const
{
    return m_groupResourceType;
}

void CreateContainGroupRequest::SetGroupResourceType(const string& _groupResourceType)
{
    m_groupResourceType = _groupResourceType;
    m_groupResourceTypeHasBeenSet = true;
}

bool CreateContainGroupRequest::GroupResourceTypeHasBeenSet() const
{
    return m_groupResourceTypeHasBeenSet;
}

string CreateContainGroupRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateContainGroupRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateContainGroupRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateContainGroupRequest::GetAgentCpuRequest() const
{
    return m_agentCpuRequest;
}

void CreateContainGroupRequest::SetAgentCpuRequest(const string& _agentCpuRequest)
{
    m_agentCpuRequest = _agentCpuRequest;
    m_agentCpuRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::AgentCpuRequestHasBeenSet() const
{
    return m_agentCpuRequestHasBeenSet;
}

string CreateContainGroupRequest::GetAgentCpuLimit() const
{
    return m_agentCpuLimit;
}

void CreateContainGroupRequest::SetAgentCpuLimit(const string& _agentCpuLimit)
{
    m_agentCpuLimit = _agentCpuLimit;
    m_agentCpuLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::AgentCpuLimitHasBeenSet() const
{
    return m_agentCpuLimitHasBeenSet;
}

string CreateContainGroupRequest::GetAgentMemRequest() const
{
    return m_agentMemRequest;
}

void CreateContainGroupRequest::SetAgentMemRequest(const string& _agentMemRequest)
{
    m_agentMemRequest = _agentMemRequest;
    m_agentMemRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::AgentMemRequestHasBeenSet() const
{
    return m_agentMemRequestHasBeenSet;
}

string CreateContainGroupRequest::GetAgentMemLimit() const
{
    return m_agentMemLimit;
}

void CreateContainGroupRequest::SetAgentMemLimit(const string& _agentMemLimit)
{
    m_agentMemLimit = _agentMemLimit;
    m_agentMemLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::AgentMemLimitHasBeenSet() const
{
    return m_agentMemLimitHasBeenSet;
}

string CreateContainGroupRequest::GetIstioCpuRequest() const
{
    return m_istioCpuRequest;
}

void CreateContainGroupRequest::SetIstioCpuRequest(const string& _istioCpuRequest)
{
    m_istioCpuRequest = _istioCpuRequest;
    m_istioCpuRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::IstioCpuRequestHasBeenSet() const
{
    return m_istioCpuRequestHasBeenSet;
}

string CreateContainGroupRequest::GetIstioCpuLimit() const
{
    return m_istioCpuLimit;
}

void CreateContainGroupRequest::SetIstioCpuLimit(const string& _istioCpuLimit)
{
    m_istioCpuLimit = _istioCpuLimit;
    m_istioCpuLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::IstioCpuLimitHasBeenSet() const
{
    return m_istioCpuLimitHasBeenSet;
}

string CreateContainGroupRequest::GetIstioMemRequest() const
{
    return m_istioMemRequest;
}

void CreateContainGroupRequest::SetIstioMemRequest(const string& _istioMemRequest)
{
    m_istioMemRequest = _istioMemRequest;
    m_istioMemRequestHasBeenSet = true;
}

bool CreateContainGroupRequest::IstioMemRequestHasBeenSet() const
{
    return m_istioMemRequestHasBeenSet;
}

string CreateContainGroupRequest::GetIstioMemLimit() const
{
    return m_istioMemLimit;
}

void CreateContainGroupRequest::SetIstioMemLimit(const string& _istioMemLimit)
{
    m_istioMemLimit = _istioMemLimit;
    m_istioMemLimitHasBeenSet = true;
}

bool CreateContainGroupRequest::IstioMemLimitHasBeenSet() const
{
    return m_istioMemLimitHasBeenSet;
}



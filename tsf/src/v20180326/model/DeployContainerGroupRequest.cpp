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

#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DeployContainerGroupRequest::DeployContainerGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_reponameHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_doNotStartHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_agentCpuRequestHasBeenSet(false),
    m_agentCpuLimitHasBeenSet(false),
    m_agentMemRequestHasBeenSet(false),
    m_agentMemLimitHasBeenSet(false),
    m_istioCpuRequestHasBeenSet(false),
    m_istioCpuLimitHasBeenSet(false),
    m_istioMemRequestHasBeenSet(false),
    m_istioMemLimitHasBeenSet(false),
    m_maxSurgeHasBeenSet(false),
    m_maxUnavailableHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_serviceSettingHasBeenSet(false)
{
}

string DeployContainerGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_reponameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reponame.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_doNotStartHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DoNotStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_doNotStart, allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateIvl, allocator);
    }

    if (m_agentCpuRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgentCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_agentCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgentCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_agentCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgentMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_agentMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AgentMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_agentMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IstioCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_istioCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IstioCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_istioCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IstioMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_istioMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IstioMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_istioMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSurgeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxSurge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_maxSurge.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUnavailableHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxUnavailable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_maxUnavailable.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceSettingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_serviceSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployContainerGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployContainerGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployContainerGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployContainerGroupRequest::GetServer() const
{
    return m_server;
}

void DeployContainerGroupRequest::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool DeployContainerGroupRequest::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string DeployContainerGroupRequest::GetTagName() const
{
    return m_tagName;
}

void DeployContainerGroupRequest::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool DeployContainerGroupRequest::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void DeployContainerGroupRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool DeployContainerGroupRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string DeployContainerGroupRequest::GetReponame() const
{
    return m_reponame;
}

void DeployContainerGroupRequest::SetReponame(const string& _reponame)
{
    m_reponame = _reponame;
    m_reponameHasBeenSet = true;
}

bool DeployContainerGroupRequest::ReponameHasBeenSet() const
{
    return m_reponameHasBeenSet;
}

string DeployContainerGroupRequest::GetCpuLimit() const
{
    return m_cpuLimit;
}

void DeployContainerGroupRequest::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetMemLimit() const
{
    return m_memLimit;
}

void DeployContainerGroupRequest::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetJvmOpts() const
{
    return m_jvmOpts;
}

void DeployContainerGroupRequest::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool DeployContainerGroupRequest::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

string DeployContainerGroupRequest::GetCpuRequest() const
{
    return m_cpuRequest;
}

void DeployContainerGroupRequest::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetMemRequest() const
{
    return m_memRequest;
}

void DeployContainerGroupRequest::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

bool DeployContainerGroupRequest::GetDoNotStart() const
{
    return m_doNotStart;
}

void DeployContainerGroupRequest::SetDoNotStart(const bool& _doNotStart)
{
    m_doNotStart = _doNotStart;
    m_doNotStartHasBeenSet = true;
}

bool DeployContainerGroupRequest::DoNotStartHasBeenSet() const
{
    return m_doNotStartHasBeenSet;
}

string DeployContainerGroupRequest::GetRepoName() const
{
    return m_repoName;
}

void DeployContainerGroupRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool DeployContainerGroupRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetUpdateType() const
{
    return m_updateType;
}

void DeployContainerGroupRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool DeployContainerGroupRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetUpdateIvl() const
{
    return m_updateIvl;
}

void DeployContainerGroupRequest::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool DeployContainerGroupRequest::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

string DeployContainerGroupRequest::GetAgentCpuRequest() const
{
    return m_agentCpuRequest;
}

void DeployContainerGroupRequest::SetAgentCpuRequest(const string& _agentCpuRequest)
{
    m_agentCpuRequest = _agentCpuRequest;
    m_agentCpuRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::AgentCpuRequestHasBeenSet() const
{
    return m_agentCpuRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetAgentCpuLimit() const
{
    return m_agentCpuLimit;
}

void DeployContainerGroupRequest::SetAgentCpuLimit(const string& _agentCpuLimit)
{
    m_agentCpuLimit = _agentCpuLimit;
    m_agentCpuLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::AgentCpuLimitHasBeenSet() const
{
    return m_agentCpuLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetAgentMemRequest() const
{
    return m_agentMemRequest;
}

void DeployContainerGroupRequest::SetAgentMemRequest(const string& _agentMemRequest)
{
    m_agentMemRequest = _agentMemRequest;
    m_agentMemRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::AgentMemRequestHasBeenSet() const
{
    return m_agentMemRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetAgentMemLimit() const
{
    return m_agentMemLimit;
}

void DeployContainerGroupRequest::SetAgentMemLimit(const string& _agentMemLimit)
{
    m_agentMemLimit = _agentMemLimit;
    m_agentMemLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::AgentMemLimitHasBeenSet() const
{
    return m_agentMemLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetIstioCpuRequest() const
{
    return m_istioCpuRequest;
}

void DeployContainerGroupRequest::SetIstioCpuRequest(const string& _istioCpuRequest)
{
    m_istioCpuRequest = _istioCpuRequest;
    m_istioCpuRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::IstioCpuRequestHasBeenSet() const
{
    return m_istioCpuRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetIstioCpuLimit() const
{
    return m_istioCpuLimit;
}

void DeployContainerGroupRequest::SetIstioCpuLimit(const string& _istioCpuLimit)
{
    m_istioCpuLimit = _istioCpuLimit;
    m_istioCpuLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::IstioCpuLimitHasBeenSet() const
{
    return m_istioCpuLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetIstioMemRequest() const
{
    return m_istioMemRequest;
}

void DeployContainerGroupRequest::SetIstioMemRequest(const string& _istioMemRequest)
{
    m_istioMemRequest = _istioMemRequest;
    m_istioMemRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::IstioMemRequestHasBeenSet() const
{
    return m_istioMemRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetIstioMemLimit() const
{
    return m_istioMemLimit;
}

void DeployContainerGroupRequest::SetIstioMemLimit(const string& _istioMemLimit)
{
    m_istioMemLimit = _istioMemLimit;
    m_istioMemLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::IstioMemLimitHasBeenSet() const
{
    return m_istioMemLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetMaxSurge() const
{
    return m_maxSurge;
}

void DeployContainerGroupRequest::SetMaxSurge(const string& _maxSurge)
{
    m_maxSurge = _maxSurge;
    m_maxSurgeHasBeenSet = true;
}

bool DeployContainerGroupRequest::MaxSurgeHasBeenSet() const
{
    return m_maxSurgeHasBeenSet;
}

string DeployContainerGroupRequest::GetMaxUnavailable() const
{
    return m_maxUnavailable;
}

void DeployContainerGroupRequest::SetMaxUnavailable(const string& _maxUnavailable)
{
    m_maxUnavailable = _maxUnavailable;
    m_maxUnavailableHasBeenSet = true;
}

bool DeployContainerGroupRequest::MaxUnavailableHasBeenSet() const
{
    return m_maxUnavailableHasBeenSet;
}

HealthCheckSettings DeployContainerGroupRequest::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void DeployContainerGroupRequest::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool DeployContainerGroupRequest::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

vector<Env> DeployContainerGroupRequest::GetEnvs() const
{
    return m_envs;
}

void DeployContainerGroupRequest::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool DeployContainerGroupRequest::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

ServiceSetting DeployContainerGroupRequest::GetServiceSetting() const
{
    return m_serviceSetting;
}

void DeployContainerGroupRequest::SetServiceSetting(const ServiceSetting& _serviceSetting)
{
    m_serviceSetting = _serviceSetting;
    m_serviceSettingHasBeenSet = true;
}

bool DeployContainerGroupRequest::ServiceSettingHasBeenSet() const
{
    return m_serviceSettingHasBeenSet;
}



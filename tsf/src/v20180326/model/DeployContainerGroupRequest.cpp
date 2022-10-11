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
using namespace std;

DeployContainerGroupRequest::DeployContainerGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_serverHasBeenSet(false),
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
    m_serviceSettingHasBeenSet(false),
    m_deployAgentHasBeenSet(false),
    m_schedulingStrategyHasBeenSet(false),
    m_incrementalDeploymentHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_volumeInfosHasBeenSet(false),
    m_volumeMountInfosHasBeenSet(false),
    m_volumeInfoListHasBeenSet(false),
    m_volumeMountInfoListHasBeenSet(false),
    m_volumeCleanHasBeenSet(false),
    m_agentProfileListHasBeenSet(false),
    m_warmupSettingHasBeenSet(false)
{
}

string DeployContainerGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_reponameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reponame.c_str(), allocator).Move(), allocator);
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

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
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

    if (m_doNotStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoNotStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_doNotStart, allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
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

    if (m_maxSurgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSurge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxSurge.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUnavailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUnavailable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxUnavailable.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deployAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployAgent, allocator);
    }

    if (m_schedulingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedulingStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_incrementalDeploymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncrementalDeployment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_incrementalDeployment, allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeInfos.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumeMountInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeMountInfos.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeInfoList.begin(); itr != m_volumeInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_volumeMountInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMountInfoList.begin(); itr != m_volumeMountInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_volumeCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeClean, allocator);
    }

    if (m_agentProfileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentProfileList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agentProfileList.begin(); itr != m_agentProfileList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_warmupSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warmupSetting.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

bool DeployContainerGroupRequest::GetDeployAgent() const
{
    return m_deployAgent;
}

void DeployContainerGroupRequest::SetDeployAgent(const bool& _deployAgent)
{
    m_deployAgent = _deployAgent;
    m_deployAgentHasBeenSet = true;
}

bool DeployContainerGroupRequest::DeployAgentHasBeenSet() const
{
    return m_deployAgentHasBeenSet;
}

SchedulingStrategy DeployContainerGroupRequest::GetSchedulingStrategy() const
{
    return m_schedulingStrategy;
}

void DeployContainerGroupRequest::SetSchedulingStrategy(const SchedulingStrategy& _schedulingStrategy)
{
    m_schedulingStrategy = _schedulingStrategy;
    m_schedulingStrategyHasBeenSet = true;
}

bool DeployContainerGroupRequest::SchedulingStrategyHasBeenSet() const
{
    return m_schedulingStrategyHasBeenSet;
}

bool DeployContainerGroupRequest::GetIncrementalDeployment() const
{
    return m_incrementalDeployment;
}

void DeployContainerGroupRequest::SetIncrementalDeployment(const bool& _incrementalDeployment)
{
    m_incrementalDeployment = _incrementalDeployment;
    m_incrementalDeploymentHasBeenSet = true;
}

bool DeployContainerGroupRequest::IncrementalDeploymentHasBeenSet() const
{
    return m_incrementalDeploymentHasBeenSet;
}

string DeployContainerGroupRequest::GetRepoType() const
{
    return m_repoType;
}

void DeployContainerGroupRequest::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool DeployContainerGroupRequest::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

VolumeInfo DeployContainerGroupRequest::GetVolumeInfos() const
{
    return m_volumeInfos;
}

void DeployContainerGroupRequest::SetVolumeInfos(const VolumeInfo& _volumeInfos)
{
    m_volumeInfos = _volumeInfos;
    m_volumeInfosHasBeenSet = true;
}

bool DeployContainerGroupRequest::VolumeInfosHasBeenSet() const
{
    return m_volumeInfosHasBeenSet;
}

VolumeMountInfo DeployContainerGroupRequest::GetVolumeMountInfos() const
{
    return m_volumeMountInfos;
}

void DeployContainerGroupRequest::SetVolumeMountInfos(const VolumeMountInfo& _volumeMountInfos)
{
    m_volumeMountInfos = _volumeMountInfos;
    m_volumeMountInfosHasBeenSet = true;
}

bool DeployContainerGroupRequest::VolumeMountInfosHasBeenSet() const
{
    return m_volumeMountInfosHasBeenSet;
}

vector<VolumeInfo> DeployContainerGroupRequest::GetVolumeInfoList() const
{
    return m_volumeInfoList;
}

void DeployContainerGroupRequest::SetVolumeInfoList(const vector<VolumeInfo>& _volumeInfoList)
{
    m_volumeInfoList = _volumeInfoList;
    m_volumeInfoListHasBeenSet = true;
}

bool DeployContainerGroupRequest::VolumeInfoListHasBeenSet() const
{
    return m_volumeInfoListHasBeenSet;
}

vector<VolumeMountInfo> DeployContainerGroupRequest::GetVolumeMountInfoList() const
{
    return m_volumeMountInfoList;
}

void DeployContainerGroupRequest::SetVolumeMountInfoList(const vector<VolumeMountInfo>& _volumeMountInfoList)
{
    m_volumeMountInfoList = _volumeMountInfoList;
    m_volumeMountInfoListHasBeenSet = true;
}

bool DeployContainerGroupRequest::VolumeMountInfoListHasBeenSet() const
{
    return m_volumeMountInfoListHasBeenSet;
}

bool DeployContainerGroupRequest::GetVolumeClean() const
{
    return m_volumeClean;
}

void DeployContainerGroupRequest::SetVolumeClean(const bool& _volumeClean)
{
    m_volumeClean = _volumeClean;
    m_volumeCleanHasBeenSet = true;
}

bool DeployContainerGroupRequest::VolumeCleanHasBeenSet() const
{
    return m_volumeCleanHasBeenSet;
}

vector<AgentProfile> DeployContainerGroupRequest::GetAgentProfileList() const
{
    return m_agentProfileList;
}

void DeployContainerGroupRequest::SetAgentProfileList(const vector<AgentProfile>& _agentProfileList)
{
    m_agentProfileList = _agentProfileList;
    m_agentProfileListHasBeenSet = true;
}

bool DeployContainerGroupRequest::AgentProfileListHasBeenSet() const
{
    return m_agentProfileListHasBeenSet;
}

WarmupSetting DeployContainerGroupRequest::GetWarmupSetting() const
{
    return m_warmupSetting;
}

void DeployContainerGroupRequest::SetWarmupSetting(const WarmupSetting& _warmupSetting)
{
    m_warmupSetting = _warmupSetting;
    m_warmupSettingHasBeenSet = true;
}

bool DeployContainerGroupRequest::WarmupSettingHasBeenSet() const
{
    return m_warmupSettingHasBeenSet;
}



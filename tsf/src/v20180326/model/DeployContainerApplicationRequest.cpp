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

#include <tencentcloud/tsf/v20180326/model/DeployContainerApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeployContainerApplicationRequest::DeployContainerApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_observabilityConfigHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_volumeMountInfoListHasBeenSet(false),
    m_lifeCycleHookListHasBeenSet(false),
    m_additionalContainerListHasBeenSet(false),
    m_volumeInfoListHasBeenSet(false),
    m_serviceSettingListHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_containerKindHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_initContainerEnableHasBeenSet(false),
    m_privilegeContainerEnableHasBeenSet(false),
    m_runCommandHasBeenSet(false),
    m_runArgHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_schedulingStrategyHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_serviceSpecEncodeHasBeenSet(false),
    m_istioMemRequestHasBeenSet(false),
    m_istioCpuRequestHasBeenSet(false),
    m_istioMemLimitHasBeenSet(false),
    m_istioCpuLimitHasBeenSet(false),
    m_serviceGovernanceConfigHasBeenSet(false),
    m_agentMemRequestHasBeenSet(false),
    m_agentCpuRequestHasBeenSet(false),
    m_agentMemLimitHasBeenSet(false),
    m_agentCpuLimitHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_maxSurgeHasBeenSet(false),
    m_maxUnavailableHasBeenSet(false),
    m_warmupSettingHasBeenSet(false),
    m_configTemplateIdHasBeenSet(false),
    m_configTemplateVersionHasBeenSet(false),
    m_volumeCleanHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_deployAgentHasBeenSet(false),
    m_agentProfileListHasBeenSet(false),
    m_serviceCleanHasBeenSet(false),
    m_envCleanHasBeenSet(false),
    m_deployDescHasBeenSet(false)
{
}

string DeployContainerApplicationRequest::ToJsonString() const
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

    if (m_observabilityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObservabilityConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_observabilityConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
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

    if (m_lifeCycleHookListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleHookList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifeCycleHookList.begin(); itr != m_lifeCycleHookList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_additionalContainerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalContainerList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_additionalContainerList.begin(); itr != m_additionalContainerList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_serviceSettingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSettingList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceSettingList.begin(); itr != m_serviceSettingList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_containerKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerKind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerKind.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_tcrRepoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepoInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepoInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memRequest.c_str(), allocator).Move(), allocator);
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

    if (m_initContainerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainerEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initContainerEnable, allocator);
    }

    if (m_privilegeContainerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeContainerEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilegeContainerEnable, allocator);
    }

    if (m_runCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_runArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runArg.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_schedulingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulingStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_schedulingStrategy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSpecEncodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSpecEncode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSpecEncode.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_istioCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGovernanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGovernanceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceGovernanceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentCpuLimit.c_str(), allocator).Move(), allocator);
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

    if (m_warmupSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warmupSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_configTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_configTemplateVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTemplateVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_configTemplateVersion, allocator);
    }

    if (m_volumeCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volumeClean, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployAgent, allocator);
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

    if (m_serviceCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceClean, allocator);
    }

    if (m_envCleanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvClean";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_envClean, allocator);
    }

    if (m_deployDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployContainerApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DeployContainerApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

ContainerGroupObservabilityConfig DeployContainerApplicationRequest::GetObservabilityConfig() const
{
    return m_observabilityConfig;
}

void DeployContainerApplicationRequest::SetObservabilityConfig(const ContainerGroupObservabilityConfig& _observabilityConfig)
{
    m_observabilityConfig = _observabilityConfig;
    m_observabilityConfigHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ObservabilityConfigHasBeenSet() const
{
    return m_observabilityConfigHasBeenSet;
}

string DeployContainerApplicationRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeployContainerApplicationRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DeployContainerApplicationRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployContainerApplicationRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployContainerApplicationRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<Env> DeployContainerApplicationRequest::GetEnvs() const
{
    return m_envs;
}

void DeployContainerApplicationRequest::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool DeployContainerApplicationRequest::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<VolumeMountInfo> DeployContainerApplicationRequest::GetVolumeMountInfoList() const
{
    return m_volumeMountInfoList;
}

void DeployContainerApplicationRequest::SetVolumeMountInfoList(const vector<VolumeMountInfo>& _volumeMountInfoList)
{
    m_volumeMountInfoList = _volumeMountInfoList;
    m_volumeMountInfoListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::VolumeMountInfoListHasBeenSet() const
{
    return m_volumeMountInfoListHasBeenSet;
}

vector<LifeCycleHook> DeployContainerApplicationRequest::GetLifeCycleHookList() const
{
    return m_lifeCycleHookList;
}

void DeployContainerApplicationRequest::SetLifeCycleHookList(const vector<LifeCycleHook>& _lifeCycleHookList)
{
    m_lifeCycleHookList = _lifeCycleHookList;
    m_lifeCycleHookListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::LifeCycleHookListHasBeenSet() const
{
    return m_lifeCycleHookListHasBeenSet;
}

vector<ContainerInfo> DeployContainerApplicationRequest::GetAdditionalContainerList() const
{
    return m_additionalContainerList;
}

void DeployContainerApplicationRequest::SetAdditionalContainerList(const vector<ContainerInfo>& _additionalContainerList)
{
    m_additionalContainerList = _additionalContainerList;
    m_additionalContainerListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AdditionalContainerListHasBeenSet() const
{
    return m_additionalContainerListHasBeenSet;
}

vector<VolumeInfo> DeployContainerApplicationRequest::GetVolumeInfoList() const
{
    return m_volumeInfoList;
}

void DeployContainerApplicationRequest::SetVolumeInfoList(const vector<VolumeInfo>& _volumeInfoList)
{
    m_volumeInfoList = _volumeInfoList;
    m_volumeInfoListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::VolumeInfoListHasBeenSet() const
{
    return m_volumeInfoListHasBeenSet;
}

vector<ServiceSetting> DeployContainerApplicationRequest::GetServiceSettingList() const
{
    return m_serviceSettingList;
}

void DeployContainerApplicationRequest::SetServiceSettingList(const vector<ServiceSetting>& _serviceSettingList)
{
    m_serviceSettingList = _serviceSettingList;
    m_serviceSettingListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ServiceSettingListHasBeenSet() const
{
    return m_serviceSettingListHasBeenSet;
}

string DeployContainerApplicationRequest::GetAlias() const
{
    return m_alias;
}

void DeployContainerApplicationRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string DeployContainerApplicationRequest::GetGroupName() const
{
    return m_groupName;
}

void DeployContainerApplicationRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DeployContainerApplicationRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<Tag> DeployContainerApplicationRequest::GetTags() const
{
    return m_tags;
}

void DeployContainerApplicationRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DeployContainerApplicationRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DeployContainerApplicationRequest::GetContainerKind() const
{
    return m_containerKind;
}

void DeployContainerApplicationRequest::SetContainerKind(const string& _containerKind)
{
    m_containerKind = _containerKind;
    m_containerKindHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ContainerKindHasBeenSet() const
{
    return m_containerKindHasBeenSet;
}

string DeployContainerApplicationRequest::GetServer() const
{
    return m_server;
}

void DeployContainerApplicationRequest::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string DeployContainerApplicationRequest::GetRepoName() const
{
    return m_repoName;
}

void DeployContainerApplicationRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool DeployContainerApplicationRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string DeployContainerApplicationRequest::GetRepoType() const
{
    return m_repoType;
}

void DeployContainerApplicationRequest::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool DeployContainerApplicationRequest::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

TcrRepoInfo DeployContainerApplicationRequest::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void DeployContainerApplicationRequest::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool DeployContainerApplicationRequest::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

string DeployContainerApplicationRequest::GetSecretName() const
{
    return m_secretName;
}

void DeployContainerApplicationRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool DeployContainerApplicationRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string DeployContainerApplicationRequest::GetTagName() const
{
    return m_tagName;
}

void DeployContainerApplicationRequest::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool DeployContainerApplicationRequest::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

HealthCheckSettings DeployContainerApplicationRequest::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void DeployContainerApplicationRequest::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool DeployContainerApplicationRequest::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

string DeployContainerApplicationRequest::GetCpuRequest() const
{
    return m_cpuRequest;
}

void DeployContainerApplicationRequest::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetCpuLimit() const
{
    return m_cpuLimit;
}

void DeployContainerApplicationRequest::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string DeployContainerApplicationRequest::GetMemRequest() const
{
    return m_memRequest;
}

void DeployContainerApplicationRequest::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetMemLimit() const
{
    return m_memLimit;
}

void DeployContainerApplicationRequest::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string DeployContainerApplicationRequest::GetJvmOpts() const
{
    return m_jvmOpts;
}

void DeployContainerApplicationRequest::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool DeployContainerApplicationRequest::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

bool DeployContainerApplicationRequest::GetInitContainerEnable() const
{
    return m_initContainerEnable;
}

void DeployContainerApplicationRequest::SetInitContainerEnable(const bool& _initContainerEnable)
{
    m_initContainerEnable = _initContainerEnable;
    m_initContainerEnableHasBeenSet = true;
}

bool DeployContainerApplicationRequest::InitContainerEnableHasBeenSet() const
{
    return m_initContainerEnableHasBeenSet;
}

bool DeployContainerApplicationRequest::GetPrivilegeContainerEnable() const
{
    return m_privilegeContainerEnable;
}

void DeployContainerApplicationRequest::SetPrivilegeContainerEnable(const bool& _privilegeContainerEnable)
{
    m_privilegeContainerEnable = _privilegeContainerEnable;
    m_privilegeContainerEnableHasBeenSet = true;
}

bool DeployContainerApplicationRequest::PrivilegeContainerEnableHasBeenSet() const
{
    return m_privilegeContainerEnableHasBeenSet;
}

string DeployContainerApplicationRequest::GetRunCommand() const
{
    return m_runCommand;
}

void DeployContainerApplicationRequest::SetRunCommand(const string& _runCommand)
{
    m_runCommand = _runCommand;
    m_runCommandHasBeenSet = true;
}

bool DeployContainerApplicationRequest::RunCommandHasBeenSet() const
{
    return m_runCommandHasBeenSet;
}

string DeployContainerApplicationRequest::GetRunArg() const
{
    return m_runArg;
}

void DeployContainerApplicationRequest::SetRunArg(const string& _runArg)
{
    m_runArg = _runArg;
    m_runArgHasBeenSet = true;
}

bool DeployContainerApplicationRequest::RunArgHasBeenSet() const
{
    return m_runArgHasBeenSet;
}

int64_t DeployContainerApplicationRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void DeployContainerApplicationRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool DeployContainerApplicationRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

SchedulingStrategy DeployContainerApplicationRequest::GetSchedulingStrategy() const
{
    return m_schedulingStrategy;
}

void DeployContainerApplicationRequest::SetSchedulingStrategy(const SchedulingStrategy& _schedulingStrategy)
{
    m_schedulingStrategy = _schedulingStrategy;
    m_schedulingStrategyHasBeenSet = true;
}

bool DeployContainerApplicationRequest::SchedulingStrategyHasBeenSet() const
{
    return m_schedulingStrategyHasBeenSet;
}

string DeployContainerApplicationRequest::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void DeployContainerApplicationRequest::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool DeployContainerApplicationRequest::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

string DeployContainerApplicationRequest::GetServiceSpecEncode() const
{
    return m_serviceSpecEncode;
}

void DeployContainerApplicationRequest::SetServiceSpecEncode(const string& _serviceSpecEncode)
{
    m_serviceSpecEncode = _serviceSpecEncode;
    m_serviceSpecEncodeHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ServiceSpecEncodeHasBeenSet() const
{
    return m_serviceSpecEncodeHasBeenSet;
}

string DeployContainerApplicationRequest::GetIstioMemRequest() const
{
    return m_istioMemRequest;
}

void DeployContainerApplicationRequest::SetIstioMemRequest(const string& _istioMemRequest)
{
    m_istioMemRequest = _istioMemRequest;
    m_istioMemRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::IstioMemRequestHasBeenSet() const
{
    return m_istioMemRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetIstioCpuRequest() const
{
    return m_istioCpuRequest;
}

void DeployContainerApplicationRequest::SetIstioCpuRequest(const string& _istioCpuRequest)
{
    m_istioCpuRequest = _istioCpuRequest;
    m_istioCpuRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::IstioCpuRequestHasBeenSet() const
{
    return m_istioCpuRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetIstioMemLimit() const
{
    return m_istioMemLimit;
}

void DeployContainerApplicationRequest::SetIstioMemLimit(const string& _istioMemLimit)
{
    m_istioMemLimit = _istioMemLimit;
    m_istioMemLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::IstioMemLimitHasBeenSet() const
{
    return m_istioMemLimitHasBeenSet;
}

string DeployContainerApplicationRequest::GetIstioCpuLimit() const
{
    return m_istioCpuLimit;
}

void DeployContainerApplicationRequest::SetIstioCpuLimit(const string& _istioCpuLimit)
{
    m_istioCpuLimit = _istioCpuLimit;
    m_istioCpuLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::IstioCpuLimitHasBeenSet() const
{
    return m_istioCpuLimitHasBeenSet;
}

ContainerGroupServiceGovernanceConfig DeployContainerApplicationRequest::GetServiceGovernanceConfig() const
{
    return m_serviceGovernanceConfig;
}

void DeployContainerApplicationRequest::SetServiceGovernanceConfig(const ContainerGroupServiceGovernanceConfig& _serviceGovernanceConfig)
{
    m_serviceGovernanceConfig = _serviceGovernanceConfig;
    m_serviceGovernanceConfigHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ServiceGovernanceConfigHasBeenSet() const
{
    return m_serviceGovernanceConfigHasBeenSet;
}

string DeployContainerApplicationRequest::GetAgentMemRequest() const
{
    return m_agentMemRequest;
}

void DeployContainerApplicationRequest::SetAgentMemRequest(const string& _agentMemRequest)
{
    m_agentMemRequest = _agentMemRequest;
    m_agentMemRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AgentMemRequestHasBeenSet() const
{
    return m_agentMemRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetAgentCpuRequest() const
{
    return m_agentCpuRequest;
}

void DeployContainerApplicationRequest::SetAgentCpuRequest(const string& _agentCpuRequest)
{
    m_agentCpuRequest = _agentCpuRequest;
    m_agentCpuRequestHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AgentCpuRequestHasBeenSet() const
{
    return m_agentCpuRequestHasBeenSet;
}

string DeployContainerApplicationRequest::GetAgentMemLimit() const
{
    return m_agentMemLimit;
}

void DeployContainerApplicationRequest::SetAgentMemLimit(const string& _agentMemLimit)
{
    m_agentMemLimit = _agentMemLimit;
    m_agentMemLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AgentMemLimitHasBeenSet() const
{
    return m_agentMemLimitHasBeenSet;
}

string DeployContainerApplicationRequest::GetAgentCpuLimit() const
{
    return m_agentCpuLimit;
}

void DeployContainerApplicationRequest::SetAgentCpuLimit(const string& _agentCpuLimit)
{
    m_agentCpuLimit = _agentCpuLimit;
    m_agentCpuLimitHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AgentCpuLimitHasBeenSet() const
{
    return m_agentCpuLimitHasBeenSet;
}

int64_t DeployContainerApplicationRequest::GetUpdateType() const
{
    return m_updateType;
}

void DeployContainerApplicationRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool DeployContainerApplicationRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t DeployContainerApplicationRequest::GetUpdateIvl() const
{
    return m_updateIvl;
}

void DeployContainerApplicationRequest::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool DeployContainerApplicationRequest::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

string DeployContainerApplicationRequest::GetMaxSurge() const
{
    return m_maxSurge;
}

void DeployContainerApplicationRequest::SetMaxSurge(const string& _maxSurge)
{
    m_maxSurge = _maxSurge;
    m_maxSurgeHasBeenSet = true;
}

bool DeployContainerApplicationRequest::MaxSurgeHasBeenSet() const
{
    return m_maxSurgeHasBeenSet;
}

string DeployContainerApplicationRequest::GetMaxUnavailable() const
{
    return m_maxUnavailable;
}

void DeployContainerApplicationRequest::SetMaxUnavailable(const string& _maxUnavailable)
{
    m_maxUnavailable = _maxUnavailable;
    m_maxUnavailableHasBeenSet = true;
}

bool DeployContainerApplicationRequest::MaxUnavailableHasBeenSet() const
{
    return m_maxUnavailableHasBeenSet;
}

WarmupSetting DeployContainerApplicationRequest::GetWarmupSetting() const
{
    return m_warmupSetting;
}

void DeployContainerApplicationRequest::SetWarmupSetting(const WarmupSetting& _warmupSetting)
{
    m_warmupSetting = _warmupSetting;
    m_warmupSettingHasBeenSet = true;
}

bool DeployContainerApplicationRequest::WarmupSettingHasBeenSet() const
{
    return m_warmupSettingHasBeenSet;
}

string DeployContainerApplicationRequest::GetConfigTemplateId() const
{
    return m_configTemplateId;
}

void DeployContainerApplicationRequest::SetConfigTemplateId(const string& _configTemplateId)
{
    m_configTemplateId = _configTemplateId;
    m_configTemplateIdHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ConfigTemplateIdHasBeenSet() const
{
    return m_configTemplateIdHasBeenSet;
}

int64_t DeployContainerApplicationRequest::GetConfigTemplateVersion() const
{
    return m_configTemplateVersion;
}

void DeployContainerApplicationRequest::SetConfigTemplateVersion(const int64_t& _configTemplateVersion)
{
    m_configTemplateVersion = _configTemplateVersion;
    m_configTemplateVersionHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ConfigTemplateVersionHasBeenSet() const
{
    return m_configTemplateVersionHasBeenSet;
}

bool DeployContainerApplicationRequest::GetVolumeClean() const
{
    return m_volumeClean;
}

void DeployContainerApplicationRequest::SetVolumeClean(const bool& _volumeClean)
{
    m_volumeClean = _volumeClean;
    m_volumeCleanHasBeenSet = true;
}

bool DeployContainerApplicationRequest::VolumeCleanHasBeenSet() const
{
    return m_volumeCleanHasBeenSet;
}

string DeployContainerApplicationRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DeployContainerApplicationRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DeployContainerApplicationRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

bool DeployContainerApplicationRequest::GetDeployAgent() const
{
    return m_deployAgent;
}

void DeployContainerApplicationRequest::SetDeployAgent(const bool& _deployAgent)
{
    m_deployAgent = _deployAgent;
    m_deployAgentHasBeenSet = true;
}

bool DeployContainerApplicationRequest::DeployAgentHasBeenSet() const
{
    return m_deployAgentHasBeenSet;
}

vector<AgentProfile> DeployContainerApplicationRequest::GetAgentProfileList() const
{
    return m_agentProfileList;
}

void DeployContainerApplicationRequest::SetAgentProfileList(const vector<AgentProfile>& _agentProfileList)
{
    m_agentProfileList = _agentProfileList;
    m_agentProfileListHasBeenSet = true;
}

bool DeployContainerApplicationRequest::AgentProfileListHasBeenSet() const
{
    return m_agentProfileListHasBeenSet;
}

bool DeployContainerApplicationRequest::GetServiceClean() const
{
    return m_serviceClean;
}

void DeployContainerApplicationRequest::SetServiceClean(const bool& _serviceClean)
{
    m_serviceClean = _serviceClean;
    m_serviceCleanHasBeenSet = true;
}

bool DeployContainerApplicationRequest::ServiceCleanHasBeenSet() const
{
    return m_serviceCleanHasBeenSet;
}

bool DeployContainerApplicationRequest::GetEnvClean() const
{
    return m_envClean;
}

void DeployContainerApplicationRequest::SetEnvClean(const bool& _envClean)
{
    m_envClean = _envClean;
    m_envCleanHasBeenSet = true;
}

bool DeployContainerApplicationRequest::EnvCleanHasBeenSet() const
{
    return m_envCleanHasBeenSet;
}

string DeployContainerApplicationRequest::GetDeployDesc() const
{
    return m_deployDesc;
}

void DeployContainerApplicationRequest::SetDeployDesc(const string& _deployDesc)
{
    m_deployDesc = _deployDesc;
    m_deployDescHasBeenSet = true;
}

bool DeployContainerApplicationRequest::DeployDescHasBeenSet() const
{
    return m_deployDescHasBeenSet;
}



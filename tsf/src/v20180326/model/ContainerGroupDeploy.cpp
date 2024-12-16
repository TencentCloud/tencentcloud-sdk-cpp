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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupDeploy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerGroupDeploy::ContainerGroupDeploy() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_reponameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_agentCpuRequestHasBeenSet(false),
    m_agentCpuLimitHasBeenSet(false),
    m_agentMemRequestHasBeenSet(false),
    m_agentMemLimitHasBeenSet(false),
    m_istioCpuRequestHasBeenSet(false),
    m_istioCpuLimitHasBeenSet(false),
    m_istioMemRequestHasBeenSet(false),
    m_istioMemLimitHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_deployAgentHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_disableServiceHasBeenSet(false),
    m_headlessServiceHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false),
    m_volumeInfosHasBeenSet(false),
    m_volumeMountInfosHasBeenSet(false),
    m_kubeInjectEnableHasBeenSet(false),
    m_repoTypeHasBeenSet(false),
    m_warmupSettingHasBeenSet(false),
    m_gatewayConfigHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_additionalContainerListHasBeenSet(false),
    m_internalContainerListHasBeenSet(false),
    m_serviceSettingListHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupDeploy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("Reponame") && !value["Reponame"].IsNull())
    {
        if (!value["Reponame"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.Reponame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reponame = string(value["Reponame"].GetString());
        m_reponameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("CpuRequest") && !value["CpuRequest"].IsNull())
    {
        if (!value["CpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.CpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRequest = string(value["CpuRequest"].GetString());
        m_cpuRequestHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.CpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = string(value["CpuLimit"].GetString());
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemRequest") && !value["MemRequest"].IsNull())
    {
        if (!value["MemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.MemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memRequest = string(value["MemRequest"].GetString());
        m_memRequestHasBeenSet = true;
    }

    if (value.HasMember("MemLimit") && !value["MemLimit"].IsNull())
    {
        if (!value["MemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.MemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLimit = string(value["MemLimit"].GetString());
        m_memLimitHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPorts") && !value["ProtocolPorts"].IsNull())
    {
        if (!value["ProtocolPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.ProtocolPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtocolPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocolPorts.push_back(item);
        }
        m_protocolPortsHasBeenSet = true;
    }

    if (value.HasMember("UpdateType") && !value["UpdateType"].IsNull())
    {
        if (!value["UpdateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.UpdateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateType = value["UpdateType"].GetInt64();
        m_updateTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateIvl") && !value["UpdateIvl"].IsNull())
    {
        if (!value["UpdateIvl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.UpdateIvl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateIvl = value["UpdateIvl"].GetInt64();
        m_updateIvlHasBeenSet = true;
    }

    if (value.HasMember("JvmOpts") && !value["JvmOpts"].IsNull())
    {
        if (!value["JvmOpts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.JvmOpts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jvmOpts = string(value["JvmOpts"].GetString());
        m_jvmOptsHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AgentCpuRequest") && !value["AgentCpuRequest"].IsNull())
    {
        if (!value["AgentCpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AgentCpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCpuRequest = string(value["AgentCpuRequest"].GetString());
        m_agentCpuRequestHasBeenSet = true;
    }

    if (value.HasMember("AgentCpuLimit") && !value["AgentCpuLimit"].IsNull())
    {
        if (!value["AgentCpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AgentCpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentCpuLimit = string(value["AgentCpuLimit"].GetString());
        m_agentCpuLimitHasBeenSet = true;
    }

    if (value.HasMember("AgentMemRequest") && !value["AgentMemRequest"].IsNull())
    {
        if (!value["AgentMemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AgentMemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentMemRequest = string(value["AgentMemRequest"].GetString());
        m_agentMemRequestHasBeenSet = true;
    }

    if (value.HasMember("AgentMemLimit") && !value["AgentMemLimit"].IsNull())
    {
        if (!value["AgentMemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AgentMemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentMemLimit = string(value["AgentMemLimit"].GetString());
        m_agentMemLimitHasBeenSet = true;
    }

    if (value.HasMember("IstioCpuRequest") && !value["IstioCpuRequest"].IsNull())
    {
        if (!value["IstioCpuRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.IstioCpuRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_istioCpuRequest = string(value["IstioCpuRequest"].GetString());
        m_istioCpuRequestHasBeenSet = true;
    }

    if (value.HasMember("IstioCpuLimit") && !value["IstioCpuLimit"].IsNull())
    {
        if (!value["IstioCpuLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.IstioCpuLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_istioCpuLimit = string(value["IstioCpuLimit"].GetString());
        m_istioCpuLimitHasBeenSet = true;
    }

    if (value.HasMember("IstioMemRequest") && !value["IstioMemRequest"].IsNull())
    {
        if (!value["IstioMemRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.IstioMemRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_istioMemRequest = string(value["IstioMemRequest"].GetString());
        m_istioMemRequestHasBeenSet = true;
    }

    if (value.HasMember("IstioMemLimit") && !value["IstioMemLimit"].IsNull())
    {
        if (!value["IstioMemLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.IstioMemLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_istioMemLimit = string(value["IstioMemLimit"].GetString());
        m_istioMemLimitHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }

    if (value.HasMember("DeployAgent") && !value["DeployAgent"].IsNull())
    {
        if (!value["DeployAgent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.DeployAgent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployAgent = value["DeployAgent"].GetBool();
        m_deployAgentHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("DisableService") && !value["DisableService"].IsNull())
    {
        if (!value["DisableService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.DisableService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableService = value["DisableService"].GetBool();
        m_disableServiceHasBeenSet = true;
    }

    if (value.HasMember("HeadlessService") && !value["HeadlessService"].IsNull())
    {
        if (!value["HeadlessService"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.HeadlessService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headlessService = value["HeadlessService"].GetBool();
        m_headlessServiceHasBeenSet = true;
    }

    if (value.HasMember("TcrRepoInfo") && !value["TcrRepoInfo"].IsNull())
    {
        if (!value["TcrRepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.TcrRepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepoInfo.Deserialize(value["TcrRepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepoInfoHasBeenSet = true;
    }

    if (value.HasMember("VolumeInfos") && !value["VolumeInfos"].IsNull())
    {
        if (!value["VolumeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.VolumeInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeInfos.push_back(item);
        }
        m_volumeInfosHasBeenSet = true;
    }

    if (value.HasMember("VolumeMountInfos") && !value["VolumeMountInfos"].IsNull())
    {
        if (!value["VolumeMountInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.VolumeMountInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeMountInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeMountInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeMountInfos.push_back(item);
        }
        m_volumeMountInfosHasBeenSet = true;
    }

    if (value.HasMember("KubeInjectEnable") && !value["KubeInjectEnable"].IsNull())
    {
        if (!value["KubeInjectEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.KubeInjectEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kubeInjectEnable = value["KubeInjectEnable"].GetBool();
        m_kubeInjectEnableHasBeenSet = true;
    }

    if (value.HasMember("RepoType") && !value["RepoType"].IsNull())
    {
        if (!value["RepoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.RepoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoType = string(value["RepoType"].GetString());
        m_repoTypeHasBeenSet = true;
    }

    if (value.HasMember("WarmupSetting") && !value["WarmupSetting"].IsNull())
    {
        if (!value["WarmupSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.WarmupSetting` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_warmupSetting.Deserialize(value["WarmupSetting"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_warmupSettingHasBeenSet = true;
    }

    if (value.HasMember("GatewayConfig") && !value["GatewayConfig"].IsNull())
    {
        if (!value["GatewayConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.GatewayConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gatewayConfig.Deserialize(value["GatewayConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gatewayConfigHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("AdditionalContainerList") && !value["AdditionalContainerList"].IsNull())
    {
        if (!value["AdditionalContainerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.AdditionalContainerList` is not array type"));

        const rapidjson::Value &tmpValue = value["AdditionalContainerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupContainerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_additionalContainerList.push_back(item);
        }
        m_additionalContainerListHasBeenSet = true;
    }

    if (value.HasMember("InternalContainerList") && !value["InternalContainerList"].IsNull())
    {
        if (!value["InternalContainerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.InternalContainerList` is not array type"));

        const rapidjson::Value &tmpValue = value["InternalContainerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupContainerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_internalContainerList.push_back(item);
        }
        m_internalContainerListHasBeenSet = true;
    }

    if (value.HasMember("ServiceSettingList") && !value["ServiceSettingList"].IsNull())
    {
        if (!value["ServiceSettingList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupDeploy.ServiceSettingList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceSettingList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceSettingList.push_back(item);
        }
        m_serviceSettingListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupDeploy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_reponameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reponame.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
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

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateIvl, allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_agentMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_istioCpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioCpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioCpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_istioCpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_istioMemRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_istioMemLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IstioMemLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_istioMemLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deployAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployAgent, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_disableServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableService, allocator);
    }

    if (m_headlessServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadlessService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headlessService, allocator);
    }

    if (m_tcrRepoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeInfos.begin(); itr != m_volumeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_volumeMountInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeMountInfos.begin(); itr != m_volumeMountInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kubeInjectEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeInjectEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kubeInjectEnable, allocator);
    }

    if (m_repoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoType.c_str(), allocator).Move(), allocator);
    }

    if (m_warmupSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarmupSetting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warmupSetting.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gatewayConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gatewayConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalContainerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalContainerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_additionalContainerList.begin(); itr != m_additionalContainerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_internalContainerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalContainerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_internalContainerList.begin(); itr != m_internalContainerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceSettingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSettingList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceSettingList.begin(); itr != m_serviceSettingList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ContainerGroupDeploy::GetGroupId() const
{
    return m_groupId;
}

void ContainerGroupDeploy::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ContainerGroupDeploy::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ContainerGroupDeploy::GetGroupName() const
{
    return m_groupName;
}

void ContainerGroupDeploy::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ContainerGroupDeploy::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ContainerGroupDeploy::GetInstanceNum() const
{
    return m_instanceNum;
}

void ContainerGroupDeploy::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool ContainerGroupDeploy::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

int64_t ContainerGroupDeploy::GetCurrentNum() const
{
    return m_currentNum;
}

void ContainerGroupDeploy::SetCurrentNum(const int64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool ContainerGroupDeploy::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string ContainerGroupDeploy::GetServer() const
{
    return m_server;
}

void ContainerGroupDeploy::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool ContainerGroupDeploy::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string ContainerGroupDeploy::GetReponame() const
{
    return m_reponame;
}

void ContainerGroupDeploy::SetReponame(const string& _reponame)
{
    m_reponame = _reponame;
    m_reponameHasBeenSet = true;
}

bool ContainerGroupDeploy::ReponameHasBeenSet() const
{
    return m_reponameHasBeenSet;
}

string ContainerGroupDeploy::GetTagName() const
{
    return m_tagName;
}

void ContainerGroupDeploy::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool ContainerGroupDeploy::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string ContainerGroupDeploy::GetCpuRequest() const
{
    return m_cpuRequest;
}

void ContainerGroupDeploy::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string ContainerGroupDeploy::GetCpuLimit() const
{
    return m_cpuLimit;
}

void ContainerGroupDeploy::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string ContainerGroupDeploy::GetMemRequest() const
{
    return m_memRequest;
}

void ContainerGroupDeploy::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

string ContainerGroupDeploy::GetMemLimit() const
{
    return m_memLimit;
}

void ContainerGroupDeploy::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

int64_t ContainerGroupDeploy::GetAccessType() const
{
    return m_accessType;
}

void ContainerGroupDeploy::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ContainerGroupDeploy::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<ProtocolPort> ContainerGroupDeploy::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void ContainerGroupDeploy::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool ContainerGroupDeploy::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

int64_t ContainerGroupDeploy::GetUpdateType() const
{
    return m_updateType;
}

void ContainerGroupDeploy::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool ContainerGroupDeploy::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t ContainerGroupDeploy::GetUpdateIvl() const
{
    return m_updateIvl;
}

void ContainerGroupDeploy::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool ContainerGroupDeploy::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}

string ContainerGroupDeploy::GetJvmOpts() const
{
    return m_jvmOpts;
}

void ContainerGroupDeploy::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool ContainerGroupDeploy::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

string ContainerGroupDeploy::GetSubnetId() const
{
    return m_subnetId;
}

void ContainerGroupDeploy::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ContainerGroupDeploy::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ContainerGroupDeploy::GetAgentCpuRequest() const
{
    return m_agentCpuRequest;
}

void ContainerGroupDeploy::SetAgentCpuRequest(const string& _agentCpuRequest)
{
    m_agentCpuRequest = _agentCpuRequest;
    m_agentCpuRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::AgentCpuRequestHasBeenSet() const
{
    return m_agentCpuRequestHasBeenSet;
}

string ContainerGroupDeploy::GetAgentCpuLimit() const
{
    return m_agentCpuLimit;
}

void ContainerGroupDeploy::SetAgentCpuLimit(const string& _agentCpuLimit)
{
    m_agentCpuLimit = _agentCpuLimit;
    m_agentCpuLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::AgentCpuLimitHasBeenSet() const
{
    return m_agentCpuLimitHasBeenSet;
}

string ContainerGroupDeploy::GetAgentMemRequest() const
{
    return m_agentMemRequest;
}

void ContainerGroupDeploy::SetAgentMemRequest(const string& _agentMemRequest)
{
    m_agentMemRequest = _agentMemRequest;
    m_agentMemRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::AgentMemRequestHasBeenSet() const
{
    return m_agentMemRequestHasBeenSet;
}

string ContainerGroupDeploy::GetAgentMemLimit() const
{
    return m_agentMemLimit;
}

void ContainerGroupDeploy::SetAgentMemLimit(const string& _agentMemLimit)
{
    m_agentMemLimit = _agentMemLimit;
    m_agentMemLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::AgentMemLimitHasBeenSet() const
{
    return m_agentMemLimitHasBeenSet;
}

string ContainerGroupDeploy::GetIstioCpuRequest() const
{
    return m_istioCpuRequest;
}

void ContainerGroupDeploy::SetIstioCpuRequest(const string& _istioCpuRequest)
{
    m_istioCpuRequest = _istioCpuRequest;
    m_istioCpuRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::IstioCpuRequestHasBeenSet() const
{
    return m_istioCpuRequestHasBeenSet;
}

string ContainerGroupDeploy::GetIstioCpuLimit() const
{
    return m_istioCpuLimit;
}

void ContainerGroupDeploy::SetIstioCpuLimit(const string& _istioCpuLimit)
{
    m_istioCpuLimit = _istioCpuLimit;
    m_istioCpuLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::IstioCpuLimitHasBeenSet() const
{
    return m_istioCpuLimitHasBeenSet;
}

string ContainerGroupDeploy::GetIstioMemRequest() const
{
    return m_istioMemRequest;
}

void ContainerGroupDeploy::SetIstioMemRequest(const string& _istioMemRequest)
{
    m_istioMemRequest = _istioMemRequest;
    m_istioMemRequestHasBeenSet = true;
}

bool ContainerGroupDeploy::IstioMemRequestHasBeenSet() const
{
    return m_istioMemRequestHasBeenSet;
}

string ContainerGroupDeploy::GetIstioMemLimit() const
{
    return m_istioMemLimit;
}

void ContainerGroupDeploy::SetIstioMemLimit(const string& _istioMemLimit)
{
    m_istioMemLimit = _istioMemLimit;
    m_istioMemLimitHasBeenSet = true;
}

bool ContainerGroupDeploy::IstioMemLimitHasBeenSet() const
{
    return m_istioMemLimitHasBeenSet;
}

vector<Env> ContainerGroupDeploy::GetEnvs() const
{
    return m_envs;
}

void ContainerGroupDeploy::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ContainerGroupDeploy::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

HealthCheckSettings ContainerGroupDeploy::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void ContainerGroupDeploy::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool ContainerGroupDeploy::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

bool ContainerGroupDeploy::GetDeployAgent() const
{
    return m_deployAgent;
}

void ContainerGroupDeploy::SetDeployAgent(const bool& _deployAgent)
{
    m_deployAgent = _deployAgent;
    m_deployAgentHasBeenSet = true;
}

bool ContainerGroupDeploy::DeployAgentHasBeenSet() const
{
    return m_deployAgentHasBeenSet;
}

string ContainerGroupDeploy::GetAlias() const
{
    return m_alias;
}

void ContainerGroupDeploy::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ContainerGroupDeploy::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

bool ContainerGroupDeploy::GetDisableService() const
{
    return m_disableService;
}

void ContainerGroupDeploy::SetDisableService(const bool& _disableService)
{
    m_disableService = _disableService;
    m_disableServiceHasBeenSet = true;
}

bool ContainerGroupDeploy::DisableServiceHasBeenSet() const
{
    return m_disableServiceHasBeenSet;
}

bool ContainerGroupDeploy::GetHeadlessService() const
{
    return m_headlessService;
}

void ContainerGroupDeploy::SetHeadlessService(const bool& _headlessService)
{
    m_headlessService = _headlessService;
    m_headlessServiceHasBeenSet = true;
}

bool ContainerGroupDeploy::HeadlessServiceHasBeenSet() const
{
    return m_headlessServiceHasBeenSet;
}

TcrRepoInfo ContainerGroupDeploy::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void ContainerGroupDeploy::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool ContainerGroupDeploy::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

vector<VolumeInfo> ContainerGroupDeploy::GetVolumeInfos() const
{
    return m_volumeInfos;
}

void ContainerGroupDeploy::SetVolumeInfos(const vector<VolumeInfo>& _volumeInfos)
{
    m_volumeInfos = _volumeInfos;
    m_volumeInfosHasBeenSet = true;
}

bool ContainerGroupDeploy::VolumeInfosHasBeenSet() const
{
    return m_volumeInfosHasBeenSet;
}

vector<VolumeMountInfo> ContainerGroupDeploy::GetVolumeMountInfos() const
{
    return m_volumeMountInfos;
}

void ContainerGroupDeploy::SetVolumeMountInfos(const vector<VolumeMountInfo>& _volumeMountInfos)
{
    m_volumeMountInfos = _volumeMountInfos;
    m_volumeMountInfosHasBeenSet = true;
}

bool ContainerGroupDeploy::VolumeMountInfosHasBeenSet() const
{
    return m_volumeMountInfosHasBeenSet;
}

bool ContainerGroupDeploy::GetKubeInjectEnable() const
{
    return m_kubeInjectEnable;
}

void ContainerGroupDeploy::SetKubeInjectEnable(const bool& _kubeInjectEnable)
{
    m_kubeInjectEnable = _kubeInjectEnable;
    m_kubeInjectEnableHasBeenSet = true;
}

bool ContainerGroupDeploy::KubeInjectEnableHasBeenSet() const
{
    return m_kubeInjectEnableHasBeenSet;
}

string ContainerGroupDeploy::GetRepoType() const
{
    return m_repoType;
}

void ContainerGroupDeploy::SetRepoType(const string& _repoType)
{
    m_repoType = _repoType;
    m_repoTypeHasBeenSet = true;
}

bool ContainerGroupDeploy::RepoTypeHasBeenSet() const
{
    return m_repoTypeHasBeenSet;
}

WarmupSetting ContainerGroupDeploy::GetWarmupSetting() const
{
    return m_warmupSetting;
}

void ContainerGroupDeploy::SetWarmupSetting(const WarmupSetting& _warmupSetting)
{
    m_warmupSetting = _warmupSetting;
    m_warmupSettingHasBeenSet = true;
}

bool ContainerGroupDeploy::WarmupSettingHasBeenSet() const
{
    return m_warmupSettingHasBeenSet;
}

GatewayConfig ContainerGroupDeploy::GetGatewayConfig() const
{
    return m_gatewayConfig;
}

void ContainerGroupDeploy::SetGatewayConfig(const GatewayConfig& _gatewayConfig)
{
    m_gatewayConfig = _gatewayConfig;
    m_gatewayConfigHasBeenSet = true;
}

bool ContainerGroupDeploy::GatewayConfigHasBeenSet() const
{
    return m_gatewayConfigHasBeenSet;
}

string ContainerGroupDeploy::GetContainerName() const
{
    return m_containerName;
}

void ContainerGroupDeploy::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ContainerGroupDeploy::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

vector<GroupContainerInfo> ContainerGroupDeploy::GetAdditionalContainerList() const
{
    return m_additionalContainerList;
}

void ContainerGroupDeploy::SetAdditionalContainerList(const vector<GroupContainerInfo>& _additionalContainerList)
{
    m_additionalContainerList = _additionalContainerList;
    m_additionalContainerListHasBeenSet = true;
}

bool ContainerGroupDeploy::AdditionalContainerListHasBeenSet() const
{
    return m_additionalContainerListHasBeenSet;
}

vector<GroupContainerInfo> ContainerGroupDeploy::GetInternalContainerList() const
{
    return m_internalContainerList;
}

void ContainerGroupDeploy::SetInternalContainerList(const vector<GroupContainerInfo>& _internalContainerList)
{
    m_internalContainerList = _internalContainerList;
    m_internalContainerListHasBeenSet = true;
}

bool ContainerGroupDeploy::InternalContainerListHasBeenSet() const
{
    return m_internalContainerListHasBeenSet;
}

vector<ServiceSetting> ContainerGroupDeploy::GetServiceSettingList() const
{
    return m_serviceSettingList;
}

void ContainerGroupDeploy::SetServiceSettingList(const vector<ServiceSetting>& _serviceSettingList)
{
    m_serviceSettingList = _serviceSettingList;
    m_serviceSettingListHasBeenSet = true;
}

bool ContainerGroupDeploy::ServiceSettingListHasBeenSet() const
{
    return m_serviceSettingListHasBeenSet;
}


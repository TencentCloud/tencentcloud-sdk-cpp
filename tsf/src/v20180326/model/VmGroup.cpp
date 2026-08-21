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

#include <tencentcloud/tsf/v20180326/model/VmGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VmGroup::VmGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupStatusHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_runInstanceCountHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_offInstanceCountHasBeenSet(false),
    m_groupDescHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_groupResourceTypeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_deployDescHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_deployBetaEnableHasBeenSet(false),
    m_deployBatchHasBeenSet(false),
    m_deployExeModeHasBeenSet(false),
    m_deployWaitTimeHasBeenSet(false),
    m_enableHealthCheckHasBeenSet(false),
    m_healthCheckSettingsHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_startScriptHasBeenSet(false),
    m_stopScriptHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_agentProfileListHasBeenSet(false),
    m_warmupSettingHasBeenSet(false),
    m_gatewayConfigHasBeenSet(false),
    m_enableBatchHealthCheckHasBeenSet(false),
    m_filebeatCgroupEnableHasBeenSet(false),
    m_filebeatMaxCpuHasBeenSet(false),
    m_filebeatMaxMemHasBeenSet(false),
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryTypeHasBeenSet(false),
    m_livenessAutoRestartHasBeenSet(false),
    m_meshSidecarVersionHasBeenSet(false),
    m_businessLogConfigIdListHasBeenSet(false),
    m_businessLogDeliveryConfigIdListHasBeenSet(false),
    m_businessSystemIdHasBeenSet(false),
    m_businessSystemNameHasBeenSet(false),
    m_clsMachineGroupIdHasBeenSet(false),
    m_enableGovernanceHasBeenSet(false),
    m_enableTelemetryHasBeenSet(false),
    m_enableTelemetryAgentHasBeenSet(false),
    m_enabledUnitHasBeenSet(false),
    m_exclusiveInstancesHasBeenSet(false),
    m_frameworkTypeHasBeenSet(false),
    m_governanceTypeHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_isStopHasBeenSet(false),
    m_k8sNamespaceNameHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_microserviceSubTypeHasBeenSet(false),
    m_nonInvasiveTypeHasBeenSet(false),
    m_preStopScriptHasBeenSet(false),
    m_realNamespaceNameHasBeenSet(false),
    m_serviceConfigListHasBeenSet(false),
    m_serviceGovernanceConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tapmOtAgentVersionHasBeenSet(false),
    m_unitEnvTypeHasBeenSet(false),
    m_unitIdHasBeenSet(false),
    m_unitNameHasBeenSet(false),
    m_unitTypeHasBeenSet(false)
{
}

CoreInternalOutcome VmGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupStatus") && !value["GroupStatus"].IsNull())
    {
        if (!value["GroupStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GroupStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupStatus = string(value["GroupStatus"].GetString());
        m_groupStatusHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageVersion") && !value["PackageVersion"].IsNull())
    {
        if (!value["PackageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.PackageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageVersion = string(value["PackageVersion"].GetString());
        m_packageVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("RunInstanceCount") && !value["RunInstanceCount"].IsNull())
    {
        if (!value["RunInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.RunInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runInstanceCount = value["RunInstanceCount"].GetInt64();
        m_runInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("StartupParameters") && !value["StartupParameters"].IsNull())
    {
        if (!value["StartupParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.StartupParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startupParameters = string(value["StartupParameters"].GetString());
        m_startupParametersHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OffInstanceCount") && !value["OffInstanceCount"].IsNull())
    {
        if (!value["OffInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.OffInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offInstanceCount = value["OffInstanceCount"].GetInt64();
        m_offInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("GroupDesc") && !value["GroupDesc"].IsNull())
    {
        if (!value["GroupDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GroupDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupDesc = string(value["GroupDesc"].GetString());
        m_groupDescHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupResourceType") && !value["GroupResourceType"].IsNull())
    {
        if (!value["GroupResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GroupResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupResourceType = string(value["GroupResourceType"].GetString());
        m_groupResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UpdatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = value["UpdatedTime"].GetInt64();
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployDesc") && !value["DeployDesc"].IsNull())
    {
        if (!value["DeployDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.DeployDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployDesc = string(value["DeployDesc"].GetString());
        m_deployDescHasBeenSet = true;
    }

    if (value.HasMember("UpdateType") && !value["UpdateType"].IsNull())
    {
        if (!value["UpdateType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UpdateType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateType = value["UpdateType"].GetUint64();
        m_updateTypeHasBeenSet = true;
    }

    if (value.HasMember("DeployBetaEnable") && !value["DeployBetaEnable"].IsNull())
    {
        if (!value["DeployBetaEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.DeployBetaEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_deployBetaEnable = value["DeployBetaEnable"].GetBool();
        m_deployBetaEnableHasBeenSet = true;
    }

    if (value.HasMember("DeployBatch") && !value["DeployBatch"].IsNull())
    {
        if (!value["DeployBatch"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.DeployBatch` is not array type"));

        const rapidjson::Value &tmpValue = value["DeployBatch"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deployBatch.push_back((*itr).GetDouble());
        }
        m_deployBatchHasBeenSet = true;
    }

    if (value.HasMember("DeployExeMode") && !value["DeployExeMode"].IsNull())
    {
        if (!value["DeployExeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.DeployExeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployExeMode = string(value["DeployExeMode"].GetString());
        m_deployExeModeHasBeenSet = true;
    }

    if (value.HasMember("DeployWaitTime") && !value["DeployWaitTime"].IsNull())
    {
        if (!value["DeployWaitTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.DeployWaitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployWaitTime = value["DeployWaitTime"].GetUint64();
        m_deployWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("EnableHealthCheck") && !value["EnableHealthCheck"].IsNull())
    {
        if (!value["EnableHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnableHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableHealthCheck = value["EnableHealthCheck"].GetBool();
        m_enableHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckSettings") && !value["HealthCheckSettings"].IsNull())
    {
        if (!value["HealthCheckSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.HealthCheckSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckSettings.Deserialize(value["HealthCheckSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckSettingsHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("StartScript") && !value["StartScript"].IsNull())
    {
        if (!value["StartScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.StartScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startScript = string(value["StartScript"].GetString());
        m_startScriptHasBeenSet = true;
    }

    if (value.HasMember("StopScript") && !value["StopScript"].IsNull())
    {
        if (!value["StopScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.StopScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopScript = string(value["StopScript"].GetString());
        m_stopScriptHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("AgentProfileList") && !value["AgentProfileList"].IsNull())
    {
        if (!value["AgentProfileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.AgentProfileList` is not array type"));

        const rapidjson::Value &tmpValue = value["AgentProfileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentProfile item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_agentProfileList.push_back(item);
        }
        m_agentProfileListHasBeenSet = true;
    }

    if (value.HasMember("WarmupSetting") && !value["WarmupSetting"].IsNull())
    {
        if (!value["WarmupSetting"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.WarmupSetting` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `VmGroup.GatewayConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gatewayConfig.Deserialize(value["GatewayConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gatewayConfigHasBeenSet = true;
    }

    if (value.HasMember("EnableBatchHealthCheck") && !value["EnableBatchHealthCheck"].IsNull())
    {
        if (!value["EnableBatchHealthCheck"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnableBatchHealthCheck` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableBatchHealthCheck = value["EnableBatchHealthCheck"].GetBool();
        m_enableBatchHealthCheckHasBeenSet = true;
    }

    if (value.HasMember("FilebeatCgroupEnable") && !value["FilebeatCgroupEnable"].IsNull())
    {
        if (!value["FilebeatCgroupEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.FilebeatCgroupEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_filebeatCgroupEnable = value["FilebeatCgroupEnable"].GetBool();
        m_filebeatCgroupEnableHasBeenSet = true;
    }

    if (value.HasMember("FilebeatMaxCpu") && !value["FilebeatMaxCpu"].IsNull())
    {
        if (!value["FilebeatMaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.FilebeatMaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_filebeatMaxCpu = value["FilebeatMaxCpu"].GetDouble();
        m_filebeatMaxCpuHasBeenSet = true;
    }

    if (value.HasMember("FilebeatMaxMem") && !value["FilebeatMaxMem"].IsNull())
    {
        if (!value["FilebeatMaxMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.FilebeatMaxMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filebeatMaxMem = value["FilebeatMaxMem"].GetInt64();
        m_filebeatMaxMemHasBeenSet = true;
    }

    if (value.HasMember("RepositoryId") && !value["RepositoryId"].IsNull())
    {
        if (!value["RepositoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.RepositoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryId = string(value["RepositoryId"].GetString());
        m_repositoryIdHasBeenSet = true;
    }

    if (value.HasMember("RepositoryName") && !value["RepositoryName"].IsNull())
    {
        if (!value["RepositoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.RepositoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryName = string(value["RepositoryName"].GetString());
        m_repositoryNameHasBeenSet = true;
    }

    if (value.HasMember("RepositoryType") && !value["RepositoryType"].IsNull())
    {
        if (!value["RepositoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.RepositoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryType = string(value["RepositoryType"].GetString());
        m_repositoryTypeHasBeenSet = true;
    }

    if (value.HasMember("LivenessAutoRestart") && !value["LivenessAutoRestart"].IsNull())
    {
        if (!value["LivenessAutoRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.LivenessAutoRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_livenessAutoRestart = value["LivenessAutoRestart"].GetBool();
        m_livenessAutoRestartHasBeenSet = true;
    }

    if (value.HasMember("MeshSidecarVersion") && !value["MeshSidecarVersion"].IsNull())
    {
        if (!value["MeshSidecarVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.MeshSidecarVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_meshSidecarVersion = string(value["MeshSidecarVersion"].GetString());
        m_meshSidecarVersionHasBeenSet = true;
    }

    if (value.HasMember("BusinessLogConfigIdList") && !value["BusinessLogConfigIdList"].IsNull())
    {
        if (!value["BusinessLogConfigIdList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.BusinessLogConfigIdList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLogConfigIdList = string(value["BusinessLogConfigIdList"].GetString());
        m_businessLogConfigIdListHasBeenSet = true;
    }

    if (value.HasMember("BusinessLogDeliveryConfigIdList") && !value["BusinessLogDeliveryConfigIdList"].IsNull())
    {
        if (!value["BusinessLogDeliveryConfigIdList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.BusinessLogDeliveryConfigIdList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLogDeliveryConfigIdList = string(value["BusinessLogDeliveryConfigIdList"].GetString());
        m_businessLogDeliveryConfigIdListHasBeenSet = true;
    }

    if (value.HasMember("BusinessSystemId") && !value["BusinessSystemId"].IsNull())
    {
        if (!value["BusinessSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.BusinessSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessSystemId = string(value["BusinessSystemId"].GetString());
        m_businessSystemIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessSystemName") && !value["BusinessSystemName"].IsNull())
    {
        if (!value["BusinessSystemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.BusinessSystemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessSystemName = string(value["BusinessSystemName"].GetString());
        m_businessSystemNameHasBeenSet = true;
    }

    if (value.HasMember("ClsMachineGroupId") && !value["ClsMachineGroupId"].IsNull())
    {
        if (!value["ClsMachineGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ClsMachineGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsMachineGroupId = string(value["ClsMachineGroupId"].GetString());
        m_clsMachineGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EnableGovernance") && !value["EnableGovernance"].IsNull())
    {
        if (!value["EnableGovernance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnableGovernance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGovernance = value["EnableGovernance"].GetBool();
        m_enableGovernanceHasBeenSet = true;
    }

    if (value.HasMember("EnableTelemetry") && !value["EnableTelemetry"].IsNull())
    {
        if (!value["EnableTelemetry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnableTelemetry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTelemetry = value["EnableTelemetry"].GetBool();
        m_enableTelemetryHasBeenSet = true;
    }

    if (value.HasMember("EnableTelemetryAgent") && !value["EnableTelemetryAgent"].IsNull())
    {
        if (!value["EnableTelemetryAgent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnableTelemetryAgent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTelemetryAgent = value["EnableTelemetryAgent"].GetBool();
        m_enableTelemetryAgentHasBeenSet = true;
    }

    if (value.HasMember("EnabledUnit") && !value["EnabledUnit"].IsNull())
    {
        if (!value["EnabledUnit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.EnabledUnit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabledUnit = value["EnabledUnit"].GetBool();
        m_enabledUnitHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveInstances") && !value["ExclusiveInstances"].IsNull())
    {
        if (!value["ExclusiveInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.ExclusiveInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ExclusiveInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExclusiveInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exclusiveInstances.push_back(item);
        }
        m_exclusiveInstancesHasBeenSet = true;
    }

    if (value.HasMember("FrameworkType") && !value["FrameworkType"].IsNull())
    {
        if (!value["FrameworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.FrameworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkType = string(value["FrameworkType"].GetString());
        m_frameworkTypeHasBeenSet = true;
    }

    if (value.HasMember("GovernanceType") && !value["GovernanceType"].IsNull())
    {
        if (!value["GovernanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.GovernanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_governanceType = string(value["GovernanceType"].GetString());
        m_governanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdList") && !value["InstanceIdList"].IsNull())
    {
        if (!value["InstanceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.InstanceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdList.push_back((*itr).GetString());
        }
        m_instanceIdListHasBeenSet = true;
    }

    if (value.HasMember("IsStop") && !value["IsStop"].IsNull())
    {
        if (!value["IsStop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.IsStop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isStop = string(value["IsStop"].GetString());
        m_isStopHasBeenSet = true;
    }

    if (value.HasMember("K8sNamespaceName") && !value["K8sNamespaceName"].IsNull())
    {
        if (!value["K8sNamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.K8sNamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sNamespaceName = string(value["K8sNamespaceName"].GetString());
        m_k8sNamespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceSubType") && !value["MicroserviceSubType"].IsNull())
    {
        if (!value["MicroserviceSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.MicroserviceSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceSubType = string(value["MicroserviceSubType"].GetString());
        m_microserviceSubTypeHasBeenSet = true;
    }

    if (value.HasMember("NonInvasiveType") && !value["NonInvasiveType"].IsNull())
    {
        if (!value["NonInvasiveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.NonInvasiveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nonInvasiveType = string(value["NonInvasiveType"].GetString());
        m_nonInvasiveTypeHasBeenSet = true;
    }

    if (value.HasMember("PreStopScript") && !value["PreStopScript"].IsNull())
    {
        if (!value["PreStopScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.PreStopScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStopScript = string(value["PreStopScript"].GetString());
        m_preStopScriptHasBeenSet = true;
    }

    if (value.HasMember("RealNamespaceName") && !value["RealNamespaceName"].IsNull())
    {
        if (!value["RealNamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.RealNamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realNamespaceName = string(value["RealNamespaceName"].GetString());
        m_realNamespaceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigList") && !value["ServiceConfigList"].IsNull())
    {
        if (!value["ServiceConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.ServiceConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceConfigList.push_back(item);
        }
        m_serviceConfigListHasBeenSet = true;
    }

    if (value.HasMember("ServiceGovernanceConfig") && !value["ServiceGovernanceConfig"].IsNull())
    {
        if (!value["ServiceGovernanceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.ServiceGovernanceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceGovernanceConfig.Deserialize(value["ServiceGovernanceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceGovernanceConfigHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VmGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TapmOtAgentVersion") && !value["TapmOtAgentVersion"].IsNull())
    {
        if (!value["TapmOtAgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.TapmOtAgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tapmOtAgentVersion = string(value["TapmOtAgentVersion"].GetString());
        m_tapmOtAgentVersionHasBeenSet = true;
    }

    if (value.HasMember("UnitEnvType") && !value["UnitEnvType"].IsNull())
    {
        if (!value["UnitEnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UnitEnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitEnvType = string(value["UnitEnvType"].GetString());
        m_unitEnvTypeHasBeenSet = true;
    }

    if (value.HasMember("UnitId") && !value["UnitId"].IsNull())
    {
        if (!value["UnitId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UnitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitId = string(value["UnitId"].GetString());
        m_unitIdHasBeenSet = true;
    }

    if (value.HasMember("UnitName") && !value["UnitName"].IsNull())
    {
        if (!value["UnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitName = string(value["UnitName"].GetString());
        m_unitNameHasBeenSet = true;
    }

    if (value.HasMember("UnitType") && !value["UnitType"].IsNull())
    {
        if (!value["UnitType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VmGroup.UnitType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitType = string(value["UnitType"].GetString());
        m_unitTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VmGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_groupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageVersion.c_str(), allocator).Move(), allocator);
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

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_runInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runInstanceCount, allocator);
    }

    if (m_startupParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offInstanceCount, allocator);
    }

    if (m_groupDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedTime, allocator);
    }

    if (m_deployDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateType, allocator);
    }

    if (m_deployBetaEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployBetaEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployBetaEnable, allocator);
    }

    if (m_deployBatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployBatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deployBatch.begin(); itr != m_deployBatch.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_deployExeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployExeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployExeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_deployWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployWaitTime, allocator);
    }

    if (m_enableHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableHealthCheck, allocator);
    }

    if (m_healthCheckSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_startScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startScript.c_str(), allocator).Move(), allocator);
    }

    if (m_stopScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopScript.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_agentProfileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentProfileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agentProfileList.begin(); itr != m_agentProfileList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_enableBatchHealthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableBatchHealthCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableBatchHealthCheck, allocator);
    }

    if (m_filebeatCgroupEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilebeatCgroupEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filebeatCgroupEnable, allocator);
    }

    if (m_filebeatMaxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilebeatMaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filebeatMaxCpu, allocator);
    }

    if (m_filebeatMaxMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilebeatMaxMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filebeatMaxMem, allocator);
    }

    if (m_repositoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_livenessAutoRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivenessAutoRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livenessAutoRestart, allocator);
    }

    if (m_meshSidecarVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshSidecarVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_meshSidecarVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLogConfigIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLogConfigIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLogConfigIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLogDeliveryConfigIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLogDeliveryConfigIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLogDeliveryConfigIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_businessSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessSystemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessSystemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessSystemName.c_str(), allocator).Move(), allocator);
    }

    if (m_clsMachineGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsMachineGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsMachineGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableGovernanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGovernance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGovernance, allocator);
    }

    if (m_enableTelemetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTelemetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTelemetry, allocator);
    }

    if (m_enableTelemetryAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTelemetryAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTelemetryAgent, allocator);
    }

    if (m_enabledUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabledUnit, allocator);
    }

    if (m_exclusiveInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exclusiveInstances.begin(); itr != m_exclusiveInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_frameworkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkType.c_str(), allocator).Move(), allocator);
    }

    if (m_governanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_governanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isStopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isStop.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sNamespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sNamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sNamespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_nonInvasiveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonInvasiveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nonInvasiveType.c_str(), allocator).Move(), allocator);
    }

    if (m_preStopScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStopScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStopScript.c_str(), allocator).Move(), allocator);
    }

    if (m_realNamespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealNamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realNamespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceConfigList.begin(); itr != m_serviceConfigList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceGovernanceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGovernanceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceGovernanceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tapmOtAgentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TapmOtAgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tapmOtAgentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_unitEnvTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitEnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitEnvType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_unitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitName.c_str(), allocator).Move(), allocator);
    }

    if (m_unitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitType.c_str(), allocator).Move(), allocator);
    }

}


string VmGroup::GetGroupId() const
{
    return m_groupId;
}

void VmGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VmGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string VmGroup::GetGroupName() const
{
    return m_groupName;
}

void VmGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool VmGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string VmGroup::GetGroupStatus() const
{
    return m_groupStatus;
}

void VmGroup::SetGroupStatus(const string& _groupStatus)
{
    m_groupStatus = _groupStatus;
    m_groupStatusHasBeenSet = true;
}

bool VmGroup::GroupStatusHasBeenSet() const
{
    return m_groupStatusHasBeenSet;
}

string VmGroup::GetPackageId() const
{
    return m_packageId;
}

void VmGroup::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool VmGroup::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string VmGroup::GetPackageName() const
{
    return m_packageName;
}

void VmGroup::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool VmGroup::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string VmGroup::GetPackageVersion() const
{
    return m_packageVersion;
}

void VmGroup::SetPackageVersion(const string& _packageVersion)
{
    m_packageVersion = _packageVersion;
    m_packageVersionHasBeenSet = true;
}

bool VmGroup::PackageVersionHasBeenSet() const
{
    return m_packageVersionHasBeenSet;
}

string VmGroup::GetClusterId() const
{
    return m_clusterId;
}

void VmGroup::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool VmGroup::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string VmGroup::GetClusterName() const
{
    return m_clusterName;
}

void VmGroup::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool VmGroup::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string VmGroup::GetNamespaceId() const
{
    return m_namespaceId;
}

void VmGroup::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool VmGroup::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string VmGroup::GetNamespaceName() const
{
    return m_namespaceName;
}

void VmGroup::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool VmGroup::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string VmGroup::GetApplicationId() const
{
    return m_applicationId;
}

void VmGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool VmGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string VmGroup::GetApplicationName() const
{
    return m_applicationName;
}

void VmGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool VmGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

int64_t VmGroup::GetInstanceCount() const
{
    return m_instanceCount;
}

void VmGroup::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool VmGroup::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t VmGroup::GetRunInstanceCount() const
{
    return m_runInstanceCount;
}

void VmGroup::SetRunInstanceCount(const int64_t& _runInstanceCount)
{
    m_runInstanceCount = _runInstanceCount;
    m_runInstanceCountHasBeenSet = true;
}

bool VmGroup::RunInstanceCountHasBeenSet() const
{
    return m_runInstanceCountHasBeenSet;
}

string VmGroup::GetStartupParameters() const
{
    return m_startupParameters;
}

void VmGroup::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool VmGroup::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}

string VmGroup::GetCreateTime() const
{
    return m_createTime;
}

void VmGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VmGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VmGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void VmGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VmGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t VmGroup::GetOffInstanceCount() const
{
    return m_offInstanceCount;
}

void VmGroup::SetOffInstanceCount(const int64_t& _offInstanceCount)
{
    m_offInstanceCount = _offInstanceCount;
    m_offInstanceCountHasBeenSet = true;
}

bool VmGroup::OffInstanceCountHasBeenSet() const
{
    return m_offInstanceCountHasBeenSet;
}

string VmGroup::GetGroupDesc() const
{
    return m_groupDesc;
}

void VmGroup::SetGroupDesc(const string& _groupDesc)
{
    m_groupDesc = _groupDesc;
    m_groupDescHasBeenSet = true;
}

bool VmGroup::GroupDescHasBeenSet() const
{
    return m_groupDescHasBeenSet;
}

string VmGroup::GetMicroserviceType() const
{
    return m_microserviceType;
}

void VmGroup::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool VmGroup::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string VmGroup::GetApplicationType() const
{
    return m_applicationType;
}

void VmGroup::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool VmGroup::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string VmGroup::GetGroupResourceType() const
{
    return m_groupResourceType;
}

void VmGroup::SetGroupResourceType(const string& _groupResourceType)
{
    m_groupResourceType = _groupResourceType;
    m_groupResourceTypeHasBeenSet = true;
}

bool VmGroup::GroupResourceTypeHasBeenSet() const
{
    return m_groupResourceTypeHasBeenSet;
}

int64_t VmGroup::GetUpdatedTime() const
{
    return m_updatedTime;
}

void VmGroup::SetUpdatedTime(const int64_t& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool VmGroup::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string VmGroup::GetDeployDesc() const
{
    return m_deployDesc;
}

void VmGroup::SetDeployDesc(const string& _deployDesc)
{
    m_deployDesc = _deployDesc;
    m_deployDescHasBeenSet = true;
}

bool VmGroup::DeployDescHasBeenSet() const
{
    return m_deployDescHasBeenSet;
}

uint64_t VmGroup::GetUpdateType() const
{
    return m_updateType;
}

void VmGroup::SetUpdateType(const uint64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool VmGroup::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

bool VmGroup::GetDeployBetaEnable() const
{
    return m_deployBetaEnable;
}

void VmGroup::SetDeployBetaEnable(const bool& _deployBetaEnable)
{
    m_deployBetaEnable = _deployBetaEnable;
    m_deployBetaEnableHasBeenSet = true;
}

bool VmGroup::DeployBetaEnableHasBeenSet() const
{
    return m_deployBetaEnableHasBeenSet;
}

vector<double> VmGroup::GetDeployBatch() const
{
    return m_deployBatch;
}

void VmGroup::SetDeployBatch(const vector<double>& _deployBatch)
{
    m_deployBatch = _deployBatch;
    m_deployBatchHasBeenSet = true;
}

bool VmGroup::DeployBatchHasBeenSet() const
{
    return m_deployBatchHasBeenSet;
}

string VmGroup::GetDeployExeMode() const
{
    return m_deployExeMode;
}

void VmGroup::SetDeployExeMode(const string& _deployExeMode)
{
    m_deployExeMode = _deployExeMode;
    m_deployExeModeHasBeenSet = true;
}

bool VmGroup::DeployExeModeHasBeenSet() const
{
    return m_deployExeModeHasBeenSet;
}

uint64_t VmGroup::GetDeployWaitTime() const
{
    return m_deployWaitTime;
}

void VmGroup::SetDeployWaitTime(const uint64_t& _deployWaitTime)
{
    m_deployWaitTime = _deployWaitTime;
    m_deployWaitTimeHasBeenSet = true;
}

bool VmGroup::DeployWaitTimeHasBeenSet() const
{
    return m_deployWaitTimeHasBeenSet;
}

bool VmGroup::GetEnableHealthCheck() const
{
    return m_enableHealthCheck;
}

void VmGroup::SetEnableHealthCheck(const bool& _enableHealthCheck)
{
    m_enableHealthCheck = _enableHealthCheck;
    m_enableHealthCheckHasBeenSet = true;
}

bool VmGroup::EnableHealthCheckHasBeenSet() const
{
    return m_enableHealthCheckHasBeenSet;
}

HealthCheckSettings VmGroup::GetHealthCheckSettings() const
{
    return m_healthCheckSettings;
}

void VmGroup::SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings)
{
    m_healthCheckSettings = _healthCheckSettings;
    m_healthCheckSettingsHasBeenSet = true;
}

bool VmGroup::HealthCheckSettingsHasBeenSet() const
{
    return m_healthCheckSettingsHasBeenSet;
}

string VmGroup::GetPackageType() const
{
    return m_packageType;
}

void VmGroup::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool VmGroup::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string VmGroup::GetStartScript() const
{
    return m_startScript;
}

void VmGroup::SetStartScript(const string& _startScript)
{
    m_startScript = _startScript;
    m_startScriptHasBeenSet = true;
}

bool VmGroup::StartScriptHasBeenSet() const
{
    return m_startScriptHasBeenSet;
}

string VmGroup::GetStopScript() const
{
    return m_stopScript;
}

void VmGroup::SetStopScript(const string& _stopScript)
{
    m_stopScript = _stopScript;
    m_stopScriptHasBeenSet = true;
}

bool VmGroup::StopScriptHasBeenSet() const
{
    return m_stopScriptHasBeenSet;
}

string VmGroup::GetAlias() const
{
    return m_alias;
}

void VmGroup::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool VmGroup::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

vector<AgentProfile> VmGroup::GetAgentProfileList() const
{
    return m_agentProfileList;
}

void VmGroup::SetAgentProfileList(const vector<AgentProfile>& _agentProfileList)
{
    m_agentProfileList = _agentProfileList;
    m_agentProfileListHasBeenSet = true;
}

bool VmGroup::AgentProfileListHasBeenSet() const
{
    return m_agentProfileListHasBeenSet;
}

WarmupSetting VmGroup::GetWarmupSetting() const
{
    return m_warmupSetting;
}

void VmGroup::SetWarmupSetting(const WarmupSetting& _warmupSetting)
{
    m_warmupSetting = _warmupSetting;
    m_warmupSettingHasBeenSet = true;
}

bool VmGroup::WarmupSettingHasBeenSet() const
{
    return m_warmupSettingHasBeenSet;
}

GatewayConfig VmGroup::GetGatewayConfig() const
{
    return m_gatewayConfig;
}

void VmGroup::SetGatewayConfig(const GatewayConfig& _gatewayConfig)
{
    m_gatewayConfig = _gatewayConfig;
    m_gatewayConfigHasBeenSet = true;
}

bool VmGroup::GatewayConfigHasBeenSet() const
{
    return m_gatewayConfigHasBeenSet;
}

bool VmGroup::GetEnableBatchHealthCheck() const
{
    return m_enableBatchHealthCheck;
}

void VmGroup::SetEnableBatchHealthCheck(const bool& _enableBatchHealthCheck)
{
    m_enableBatchHealthCheck = _enableBatchHealthCheck;
    m_enableBatchHealthCheckHasBeenSet = true;
}

bool VmGroup::EnableBatchHealthCheckHasBeenSet() const
{
    return m_enableBatchHealthCheckHasBeenSet;
}

bool VmGroup::GetFilebeatCgroupEnable() const
{
    return m_filebeatCgroupEnable;
}

void VmGroup::SetFilebeatCgroupEnable(const bool& _filebeatCgroupEnable)
{
    m_filebeatCgroupEnable = _filebeatCgroupEnable;
    m_filebeatCgroupEnableHasBeenSet = true;
}

bool VmGroup::FilebeatCgroupEnableHasBeenSet() const
{
    return m_filebeatCgroupEnableHasBeenSet;
}

double VmGroup::GetFilebeatMaxCpu() const
{
    return m_filebeatMaxCpu;
}

void VmGroup::SetFilebeatMaxCpu(const double& _filebeatMaxCpu)
{
    m_filebeatMaxCpu = _filebeatMaxCpu;
    m_filebeatMaxCpuHasBeenSet = true;
}

bool VmGroup::FilebeatMaxCpuHasBeenSet() const
{
    return m_filebeatMaxCpuHasBeenSet;
}

int64_t VmGroup::GetFilebeatMaxMem() const
{
    return m_filebeatMaxMem;
}

void VmGroup::SetFilebeatMaxMem(const int64_t& _filebeatMaxMem)
{
    m_filebeatMaxMem = _filebeatMaxMem;
    m_filebeatMaxMemHasBeenSet = true;
}

bool VmGroup::FilebeatMaxMemHasBeenSet() const
{
    return m_filebeatMaxMemHasBeenSet;
}

string VmGroup::GetRepositoryId() const
{
    return m_repositoryId;
}

void VmGroup::SetRepositoryId(const string& _repositoryId)
{
    m_repositoryId = _repositoryId;
    m_repositoryIdHasBeenSet = true;
}

bool VmGroup::RepositoryIdHasBeenSet() const
{
    return m_repositoryIdHasBeenSet;
}

string VmGroup::GetRepositoryName() const
{
    return m_repositoryName;
}

void VmGroup::SetRepositoryName(const string& _repositoryName)
{
    m_repositoryName = _repositoryName;
    m_repositoryNameHasBeenSet = true;
}

bool VmGroup::RepositoryNameHasBeenSet() const
{
    return m_repositoryNameHasBeenSet;
}

string VmGroup::GetRepositoryType() const
{
    return m_repositoryType;
}

void VmGroup::SetRepositoryType(const string& _repositoryType)
{
    m_repositoryType = _repositoryType;
    m_repositoryTypeHasBeenSet = true;
}

bool VmGroup::RepositoryTypeHasBeenSet() const
{
    return m_repositoryTypeHasBeenSet;
}

bool VmGroup::GetLivenessAutoRestart() const
{
    return m_livenessAutoRestart;
}

void VmGroup::SetLivenessAutoRestart(const bool& _livenessAutoRestart)
{
    m_livenessAutoRestart = _livenessAutoRestart;
    m_livenessAutoRestartHasBeenSet = true;
}

bool VmGroup::LivenessAutoRestartHasBeenSet() const
{
    return m_livenessAutoRestartHasBeenSet;
}

string VmGroup::GetMeshSidecarVersion() const
{
    return m_meshSidecarVersion;
}

void VmGroup::SetMeshSidecarVersion(const string& _meshSidecarVersion)
{
    m_meshSidecarVersion = _meshSidecarVersion;
    m_meshSidecarVersionHasBeenSet = true;
}

bool VmGroup::MeshSidecarVersionHasBeenSet() const
{
    return m_meshSidecarVersionHasBeenSet;
}

string VmGroup::GetBusinessLogConfigIdList() const
{
    return m_businessLogConfigIdList;
}

void VmGroup::SetBusinessLogConfigIdList(const string& _businessLogConfigIdList)
{
    m_businessLogConfigIdList = _businessLogConfigIdList;
    m_businessLogConfigIdListHasBeenSet = true;
}

bool VmGroup::BusinessLogConfigIdListHasBeenSet() const
{
    return m_businessLogConfigIdListHasBeenSet;
}

string VmGroup::GetBusinessLogDeliveryConfigIdList() const
{
    return m_businessLogDeliveryConfigIdList;
}

void VmGroup::SetBusinessLogDeliveryConfigIdList(const string& _businessLogDeliveryConfigIdList)
{
    m_businessLogDeliveryConfigIdList = _businessLogDeliveryConfigIdList;
    m_businessLogDeliveryConfigIdListHasBeenSet = true;
}

bool VmGroup::BusinessLogDeliveryConfigIdListHasBeenSet() const
{
    return m_businessLogDeliveryConfigIdListHasBeenSet;
}

string VmGroup::GetBusinessSystemId() const
{
    return m_businessSystemId;
}

void VmGroup::SetBusinessSystemId(const string& _businessSystemId)
{
    m_businessSystemId = _businessSystemId;
    m_businessSystemIdHasBeenSet = true;
}

bool VmGroup::BusinessSystemIdHasBeenSet() const
{
    return m_businessSystemIdHasBeenSet;
}

string VmGroup::GetBusinessSystemName() const
{
    return m_businessSystemName;
}

void VmGroup::SetBusinessSystemName(const string& _businessSystemName)
{
    m_businessSystemName = _businessSystemName;
    m_businessSystemNameHasBeenSet = true;
}

bool VmGroup::BusinessSystemNameHasBeenSet() const
{
    return m_businessSystemNameHasBeenSet;
}

string VmGroup::GetClsMachineGroupId() const
{
    return m_clsMachineGroupId;
}

void VmGroup::SetClsMachineGroupId(const string& _clsMachineGroupId)
{
    m_clsMachineGroupId = _clsMachineGroupId;
    m_clsMachineGroupIdHasBeenSet = true;
}

bool VmGroup::ClsMachineGroupIdHasBeenSet() const
{
    return m_clsMachineGroupIdHasBeenSet;
}

bool VmGroup::GetEnableGovernance() const
{
    return m_enableGovernance;
}

void VmGroup::SetEnableGovernance(const bool& _enableGovernance)
{
    m_enableGovernance = _enableGovernance;
    m_enableGovernanceHasBeenSet = true;
}

bool VmGroup::EnableGovernanceHasBeenSet() const
{
    return m_enableGovernanceHasBeenSet;
}

bool VmGroup::GetEnableTelemetry() const
{
    return m_enableTelemetry;
}

void VmGroup::SetEnableTelemetry(const bool& _enableTelemetry)
{
    m_enableTelemetry = _enableTelemetry;
    m_enableTelemetryHasBeenSet = true;
}

bool VmGroup::EnableTelemetryHasBeenSet() const
{
    return m_enableTelemetryHasBeenSet;
}

bool VmGroup::GetEnableTelemetryAgent() const
{
    return m_enableTelemetryAgent;
}

void VmGroup::SetEnableTelemetryAgent(const bool& _enableTelemetryAgent)
{
    m_enableTelemetryAgent = _enableTelemetryAgent;
    m_enableTelemetryAgentHasBeenSet = true;
}

bool VmGroup::EnableTelemetryAgentHasBeenSet() const
{
    return m_enableTelemetryAgentHasBeenSet;
}

bool VmGroup::GetEnabledUnit() const
{
    return m_enabledUnit;
}

void VmGroup::SetEnabledUnit(const bool& _enabledUnit)
{
    m_enabledUnit = _enabledUnit;
    m_enabledUnitHasBeenSet = true;
}

bool VmGroup::EnabledUnitHasBeenSet() const
{
    return m_enabledUnitHasBeenSet;
}

vector<ExclusiveInstance> VmGroup::GetExclusiveInstances() const
{
    return m_exclusiveInstances;
}

void VmGroup::SetExclusiveInstances(const vector<ExclusiveInstance>& _exclusiveInstances)
{
    m_exclusiveInstances = _exclusiveInstances;
    m_exclusiveInstancesHasBeenSet = true;
}

bool VmGroup::ExclusiveInstancesHasBeenSet() const
{
    return m_exclusiveInstancesHasBeenSet;
}

string VmGroup::GetFrameworkType() const
{
    return m_frameworkType;
}

void VmGroup::SetFrameworkType(const string& _frameworkType)
{
    m_frameworkType = _frameworkType;
    m_frameworkTypeHasBeenSet = true;
}

bool VmGroup::FrameworkTypeHasBeenSet() const
{
    return m_frameworkTypeHasBeenSet;
}

string VmGroup::GetGovernanceType() const
{
    return m_governanceType;
}

void VmGroup::SetGovernanceType(const string& _governanceType)
{
    m_governanceType = _governanceType;
    m_governanceTypeHasBeenSet = true;
}

bool VmGroup::GovernanceTypeHasBeenSet() const
{
    return m_governanceTypeHasBeenSet;
}

vector<string> VmGroup::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void VmGroup::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool VmGroup::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

string VmGroup::GetIsStop() const
{
    return m_isStop;
}

void VmGroup::SetIsStop(const string& _isStop)
{
    m_isStop = _isStop;
    m_isStopHasBeenSet = true;
}

bool VmGroup::IsStopHasBeenSet() const
{
    return m_isStopHasBeenSet;
}

string VmGroup::GetK8sNamespaceName() const
{
    return m_k8sNamespaceName;
}

void VmGroup::SetK8sNamespaceName(const string& _k8sNamespaceName)
{
    m_k8sNamespaceName = _k8sNamespaceName;
    m_k8sNamespaceNameHasBeenSet = true;
}

bool VmGroup::K8sNamespaceNameHasBeenSet() const
{
    return m_k8sNamespaceNameHasBeenSet;
}

string VmGroup::GetLanguage() const
{
    return m_language;
}

void VmGroup::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool VmGroup::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string VmGroup::GetMicroserviceSubType() const
{
    return m_microserviceSubType;
}

void VmGroup::SetMicroserviceSubType(const string& _microserviceSubType)
{
    m_microserviceSubType = _microserviceSubType;
    m_microserviceSubTypeHasBeenSet = true;
}

bool VmGroup::MicroserviceSubTypeHasBeenSet() const
{
    return m_microserviceSubTypeHasBeenSet;
}

string VmGroup::GetNonInvasiveType() const
{
    return m_nonInvasiveType;
}

void VmGroup::SetNonInvasiveType(const string& _nonInvasiveType)
{
    m_nonInvasiveType = _nonInvasiveType;
    m_nonInvasiveTypeHasBeenSet = true;
}

bool VmGroup::NonInvasiveTypeHasBeenSet() const
{
    return m_nonInvasiveTypeHasBeenSet;
}

string VmGroup::GetPreStopScript() const
{
    return m_preStopScript;
}

void VmGroup::SetPreStopScript(const string& _preStopScript)
{
    m_preStopScript = _preStopScript;
    m_preStopScriptHasBeenSet = true;
}

bool VmGroup::PreStopScriptHasBeenSet() const
{
    return m_preStopScriptHasBeenSet;
}

string VmGroup::GetRealNamespaceName() const
{
    return m_realNamespaceName;
}

void VmGroup::SetRealNamespaceName(const string& _realNamespaceName)
{
    m_realNamespaceName = _realNamespaceName;
    m_realNamespaceNameHasBeenSet = true;
}

bool VmGroup::RealNamespaceNameHasBeenSet() const
{
    return m_realNamespaceNameHasBeenSet;
}

vector<ServiceConfig> VmGroup::GetServiceConfigList() const
{
    return m_serviceConfigList;
}

void VmGroup::SetServiceConfigList(const vector<ServiceConfig>& _serviceConfigList)
{
    m_serviceConfigList = _serviceConfigList;
    m_serviceConfigListHasBeenSet = true;
}

bool VmGroup::ServiceConfigListHasBeenSet() const
{
    return m_serviceConfigListHasBeenSet;
}

ServiceGovernanceConfig VmGroup::GetServiceGovernanceConfig() const
{
    return m_serviceGovernanceConfig;
}

void VmGroup::SetServiceGovernanceConfig(const ServiceGovernanceConfig& _serviceGovernanceConfig)
{
    m_serviceGovernanceConfig = _serviceGovernanceConfig;
    m_serviceGovernanceConfigHasBeenSet = true;
}

bool VmGroup::ServiceGovernanceConfigHasBeenSet() const
{
    return m_serviceGovernanceConfigHasBeenSet;
}

vector<Tag> VmGroup::GetTags() const
{
    return m_tags;
}

void VmGroup::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool VmGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string VmGroup::GetTapmOtAgentVersion() const
{
    return m_tapmOtAgentVersion;
}

void VmGroup::SetTapmOtAgentVersion(const string& _tapmOtAgentVersion)
{
    m_tapmOtAgentVersion = _tapmOtAgentVersion;
    m_tapmOtAgentVersionHasBeenSet = true;
}

bool VmGroup::TapmOtAgentVersionHasBeenSet() const
{
    return m_tapmOtAgentVersionHasBeenSet;
}

string VmGroup::GetUnitEnvType() const
{
    return m_unitEnvType;
}

void VmGroup::SetUnitEnvType(const string& _unitEnvType)
{
    m_unitEnvType = _unitEnvType;
    m_unitEnvTypeHasBeenSet = true;
}

bool VmGroup::UnitEnvTypeHasBeenSet() const
{
    return m_unitEnvTypeHasBeenSet;
}

string VmGroup::GetUnitId() const
{
    return m_unitId;
}

void VmGroup::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool VmGroup::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string VmGroup::GetUnitName() const
{
    return m_unitName;
}

void VmGroup::SetUnitName(const string& _unitName)
{
    m_unitName = _unitName;
    m_unitNameHasBeenSet = true;
}

bool VmGroup::UnitNameHasBeenSet() const
{
    return m_unitNameHasBeenSet;
}

string VmGroup::GetUnitType() const
{
    return m_unitType;
}

void VmGroup::SetUnitType(const string& _unitType)
{
    m_unitType = _unitType;
    m_unitTypeHasBeenSet = true;
}

bool VmGroup::UnitTypeHasBeenSet() const
{
    return m_unitTypeHasBeenSet;
}


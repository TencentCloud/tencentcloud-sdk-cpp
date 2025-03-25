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
    m_repositoryTypeHasBeenSet(false)
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


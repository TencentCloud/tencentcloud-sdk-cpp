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

#include <tencentcloud/makers/v20261113/model/Project.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

Project::Project() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_presetDomainHasBeenSet(false),
    m_presetDomainStatusHasBeenSet(false),
    m_rootDirHasBeenSet(false),
    m_outputDirHasBeenSet(false),
    m_buildCmdHasBeenSet(false),
    m_installCmdHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_nodejsVersionHasBeenSet(false),
    m_repoUrlHasBeenSet(false),
    m_repoOwnerHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_repoBranchHasBeenSet(false),
    m_repoPreBranchesHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_envVarsHasBeenSet(false),
    m_customDomainsHasBeenSet(false),
    m_deploymentHasBeenSet(false),
    m_isAgentHasBeenSet(false),
    m_agentFrameworkHasBeenSet(false),
    m_isTldHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false)
{
}

CoreInternalOutcome Project::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("PresetDomain") && !value["PresetDomain"].IsNull())
    {
        if (!value["PresetDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.PresetDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presetDomain = string(value["PresetDomain"].GetString());
        m_presetDomainHasBeenSet = true;
    }

    if (value.HasMember("PresetDomainStatus") && !value["PresetDomainStatus"].IsNull())
    {
        if (!value["PresetDomainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.PresetDomainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presetDomainStatus = string(value["PresetDomainStatus"].GetString());
        m_presetDomainStatusHasBeenSet = true;
    }

    if (value.HasMember("RootDir") && !value["RootDir"].IsNull())
    {
        if (!value["RootDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.RootDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootDir = string(value["RootDir"].GetString());
        m_rootDirHasBeenSet = true;
    }

    if (value.HasMember("OutputDir") && !value["OutputDir"].IsNull())
    {
        if (!value["OutputDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.OutputDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDir = string(value["OutputDir"].GetString());
        m_outputDirHasBeenSet = true;
    }

    if (value.HasMember("BuildCmd") && !value["BuildCmd"].IsNull())
    {
        if (!value["BuildCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.BuildCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildCmd = string(value["BuildCmd"].GetString());
        m_buildCmdHasBeenSet = true;
    }

    if (value.HasMember("InstallCmd") && !value["InstallCmd"].IsNull())
    {
        if (!value["InstallCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.InstallCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installCmd = string(value["InstallCmd"].GetString());
        m_installCmdHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("NodejsVersion") && !value["NodejsVersion"].IsNull())
    {
        if (!value["NodejsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.NodejsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodejsVersion = string(value["NodejsVersion"].GetString());
        m_nodejsVersionHasBeenSet = true;
    }

    if (value.HasMember("RepoUrl") && !value["RepoUrl"].IsNull())
    {
        if (!value["RepoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.RepoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoUrl = string(value["RepoUrl"].GetString());
        m_repoUrlHasBeenSet = true;
    }

    if (value.HasMember("RepoOwner") && !value["RepoOwner"].IsNull())
    {
        if (!value["RepoOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.RepoOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoOwner = string(value["RepoOwner"].GetString());
        m_repoOwnerHasBeenSet = true;
    }

    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("RepoBranch") && !value["RepoBranch"].IsNull())
    {
        if (!value["RepoBranch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.RepoBranch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoBranch = string(value["RepoBranch"].GetString());
        m_repoBranchHasBeenSet = true;
    }

    if (value.HasMember("RepoPreBranches") && !value["RepoPreBranches"].IsNull())
    {
        if (!value["RepoPreBranches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.RepoPreBranches` is not array type"));

        const rapidjson::Value &tmpValue = value["RepoPreBranches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_repoPreBranches.push_back((*itr).GetString());
        }
        m_repoPreBranchesHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Regions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regions.Deserialize(value["Regions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProjectEnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }

    if (value.HasMember("CustomDomains") && !value["CustomDomains"].IsNull())
    {
        if (!value["CustomDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.CustomDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomDomainItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customDomains.push_back(item);
        }
        m_customDomainsHasBeenSet = true;
    }

    if (value.HasMember("Deployment") && !value["Deployment"].IsNull())
    {
        if (!value["Deployment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Deployment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deployment.Deserialize(value["Deployment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deploymentHasBeenSet = true;
    }

    if (value.HasMember("IsAgent") && !value["IsAgent"].IsNull())
    {
        if (!value["IsAgent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.IsAgent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAgent = value["IsAgent"].GetInt64();
        m_isAgentHasBeenSet = true;
    }

    if (value.HasMember("AgentFramework") && !value["AgentFramework"].IsNull())
    {
        if (!value["AgentFramework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.AgentFramework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentFramework = string(value["AgentFramework"].GetString());
        m_agentFrameworkHasBeenSet = true;
    }

    if (value.HasMember("IsTld") && !value["IsTld"].IsNull())
    {
        if (!value["IsTld"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.IsTld` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTld = value["IsTld"].GetInt64();
        m_isTldHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Project::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_presetDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presetDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_presetDomainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetDomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presetDomainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_rootDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootDir.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDir.c_str(), allocator).Move(), allocator);
    }

    if (m_buildCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_installCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_nodejsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodejsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodejsVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_repoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_repoOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_repoBranchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoBranch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoBranch.c_str(), allocator).Move(), allocator);
    }

    if (m_repoPreBranchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoPreBranches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_repoPreBranches.begin(); itr != m_repoPreBranches.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customDomains.begin(); itr != m_customDomains.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deploymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deployment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deployment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAgent, allocator);
    }

    if (m_agentFrameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentFramework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentFramework.c_str(), allocator).Move(), allocator);
    }

    if (m_isTldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTld";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTld, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

}


string Project::GetProjectId() const
{
    return m_projectId;
}

void Project::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Project::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Project::GetName() const
{
    return m_name;
}

void Project::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Project::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Project::GetStatus() const
{
    return m_status;
}

void Project::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Project::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Project::GetZoneId() const
{
    return m_zoneId;
}

void Project::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool Project::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string Project::GetArea() const
{
    return m_area;
}

void Project::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool Project::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string Project::GetProvider() const
{
    return m_provider;
}

void Project::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool Project::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string Project::GetChannel() const
{
    return m_channel;
}

void Project::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool Project::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string Project::GetPresetDomain() const
{
    return m_presetDomain;
}

void Project::SetPresetDomain(const string& _presetDomain)
{
    m_presetDomain = _presetDomain;
    m_presetDomainHasBeenSet = true;
}

bool Project::PresetDomainHasBeenSet() const
{
    return m_presetDomainHasBeenSet;
}

string Project::GetPresetDomainStatus() const
{
    return m_presetDomainStatus;
}

void Project::SetPresetDomainStatus(const string& _presetDomainStatus)
{
    m_presetDomainStatus = _presetDomainStatus;
    m_presetDomainStatusHasBeenSet = true;
}

bool Project::PresetDomainStatusHasBeenSet() const
{
    return m_presetDomainStatusHasBeenSet;
}

string Project::GetRootDir() const
{
    return m_rootDir;
}

void Project::SetRootDir(const string& _rootDir)
{
    m_rootDir = _rootDir;
    m_rootDirHasBeenSet = true;
}

bool Project::RootDirHasBeenSet() const
{
    return m_rootDirHasBeenSet;
}

string Project::GetOutputDir() const
{
    return m_outputDir;
}

void Project::SetOutputDir(const string& _outputDir)
{
    m_outputDir = _outputDir;
    m_outputDirHasBeenSet = true;
}

bool Project::OutputDirHasBeenSet() const
{
    return m_outputDirHasBeenSet;
}

string Project::GetBuildCmd() const
{
    return m_buildCmd;
}

void Project::SetBuildCmd(const string& _buildCmd)
{
    m_buildCmd = _buildCmd;
    m_buildCmdHasBeenSet = true;
}

bool Project::BuildCmdHasBeenSet() const
{
    return m_buildCmdHasBeenSet;
}

string Project::GetInstallCmd() const
{
    return m_installCmd;
}

void Project::SetInstallCmd(const string& _installCmd)
{
    m_installCmd = _installCmd;
    m_installCmdHasBeenSet = true;
}

bool Project::InstallCmdHasBeenSet() const
{
    return m_installCmdHasBeenSet;
}

string Project::GetFramework() const
{
    return m_framework;
}

void Project::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool Project::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string Project::GetNodejsVersion() const
{
    return m_nodejsVersion;
}

void Project::SetNodejsVersion(const string& _nodejsVersion)
{
    m_nodejsVersion = _nodejsVersion;
    m_nodejsVersionHasBeenSet = true;
}

bool Project::NodejsVersionHasBeenSet() const
{
    return m_nodejsVersionHasBeenSet;
}

string Project::GetRepoUrl() const
{
    return m_repoUrl;
}

void Project::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool Project::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}

string Project::GetRepoOwner() const
{
    return m_repoOwner;
}

void Project::SetRepoOwner(const string& _repoOwner)
{
    m_repoOwner = _repoOwner;
    m_repoOwnerHasBeenSet = true;
}

bool Project::RepoOwnerHasBeenSet() const
{
    return m_repoOwnerHasBeenSet;
}

string Project::GetRepoName() const
{
    return m_repoName;
}

void Project::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool Project::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string Project::GetRepoBranch() const
{
    return m_repoBranch;
}

void Project::SetRepoBranch(const string& _repoBranch)
{
    m_repoBranch = _repoBranch;
    m_repoBranchHasBeenSet = true;
}

bool Project::RepoBranchHasBeenSet() const
{
    return m_repoBranchHasBeenSet;
}

vector<string> Project::GetRepoPreBranches() const
{
    return m_repoPreBranches;
}

void Project::SetRepoPreBranches(const vector<string>& _repoPreBranches)
{
    m_repoPreBranches = _repoPreBranches;
    m_repoPreBranchesHasBeenSet = true;
}

bool Project::RepoPreBranchesHasBeenSet() const
{
    return m_repoPreBranchesHasBeenSet;
}

Regions Project::GetRegions() const
{
    return m_regions;
}

void Project::SetRegions(const Regions& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool Project::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

vector<ProjectEnvVar> Project::GetEnvVars() const
{
    return m_envVars;
}

void Project::SetEnvVars(const vector<ProjectEnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool Project::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

vector<CustomDomainItem> Project::GetCustomDomains() const
{
    return m_customDomains;
}

void Project::SetCustomDomains(const vector<CustomDomainItem>& _customDomains)
{
    m_customDomains = _customDomains;
    m_customDomainsHasBeenSet = true;
}

bool Project::CustomDomainsHasBeenSet() const
{
    return m_customDomainsHasBeenSet;
}

ProjectDeployment Project::GetDeployment() const
{
    return m_deployment;
}

void Project::SetDeployment(const ProjectDeployment& _deployment)
{
    m_deployment = _deployment;
    m_deploymentHasBeenSet = true;
}

bool Project::DeploymentHasBeenSet() const
{
    return m_deploymentHasBeenSet;
}

int64_t Project::GetIsAgent() const
{
    return m_isAgent;
}

void Project::SetIsAgent(const int64_t& _isAgent)
{
    m_isAgent = _isAgent;
    m_isAgentHasBeenSet = true;
}

bool Project::IsAgentHasBeenSet() const
{
    return m_isAgentHasBeenSet;
}

string Project::GetAgentFramework() const
{
    return m_agentFramework;
}

void Project::SetAgentFramework(const string& _agentFramework)
{
    m_agentFramework = _agentFramework;
    m_agentFrameworkHasBeenSet = true;
}

bool Project::AgentFrameworkHasBeenSet() const
{
    return m_agentFrameworkHasBeenSet;
}

int64_t Project::GetIsTld() const
{
    return m_isTld;
}

void Project::SetIsTld(const int64_t& _isTld)
{
    m_isTld = _isTld;
    m_isTldHasBeenSet = true;
}

bool Project::IsTldHasBeenSet() const
{
    return m_isTldHasBeenSet;
}

string Project::GetCreatedOn() const
{
    return m_createdOn;
}

void Project::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Project::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Project::GetModifiedOn() const
{
    return m_modifiedOn;
}

void Project::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool Project::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

